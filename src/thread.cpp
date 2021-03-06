#include <iostream>
#include <cassert>

#include "thread.h"
#include "frame.h"
#include "classinstance.h"

using namespace std;
Thread::Thread(int pid)
{
	this->pc = 0;
	this->pid = threadCount++;
}

Thread::Thread()
{
	this->pc = 0;
	this->pid = threadCount++;
}

void Thread::appendNewThread(Thread* thread) {
	threadQueue.push(thread);
}

bool Thread::switchThread() {
	if(_currentThread->size()>0)
		threadQueue.push(_currentThread);
	else
		threadCount--;
	if (!threadQueue.empty()){
		Thread* t = threadQueue.front();
		threadQueue.pop();
		if (t->size() > 0) {
			setCurrentThread(t);
		}else{
			threadCount--;
		}
		//cout << "switch thread: "<<t->pid<<endl;
		return true;
	}
	return false;
}


int Thread::PC()
{
	return this->pc;
}

void Thread::setPC(int pc)
{
	this->pc = pc;
}

void Thread::addFrame(Frame* frame)
{
	vmstack.addFrame(frame);
}

Thread* Thread::currentThread()
{
	return _currentThread;
}

void Thread::setCurrentThread(Thread * t)
{
	_currentThread = t;
}

VMStack& Thread::getVMStack(){
	return this->vmstack;
} 

bool Thread::destroyTopFrame()
{
	Frame* topFrame = getTopFrame();
	if(topFrame->isSync)
		releaseLock();
	return vmstack.destroyTopFrame();
}

void Thread::releaseLock()
{
	Frame* topFrame = getTopFrame();
	ClassInstance* instance = topFrame->getObject();
	assert(instance->lockOwner == this || instance->lockOwner == nullptr);
	if (instance->lockOwner == this) {
		assert(instance->lockCounter > 0);
		instance->lockCounter--;
		if (instance->lockCounter == 0) {
			instance->lockOwner = nullptr;
			instance->activeBlocking();
		}
	}
}

Frame * Thread::getTopFrame()
{
	return vmstack.getTopFrame();
}

void Thread::addCurrentThreadToBlockingQueue(ClassInstance* obj)
{
	obj->blockingThreads.push(_currentThread);
	threadQueue.pop();
	setCurrentThread(threadQueue.front());
}

int Thread::size()
{
	return vmstack.size();
}

Thread* Thread::mainThread;
Thread* Thread::_currentThread;
queue<Thread*> Thread::threadQueue;
int Thread::threadCount = 0;
//language
//lib
//base
