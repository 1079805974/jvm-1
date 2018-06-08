#include <iostream>

#include "thread.h"

using namespace std;
Thread::Thread(int pid)
{
	this->pc = 0;
	this->pid = pid;
	nextThread = nullptr;
}

Thread::Thread()
{
	this->pc = 0;
}

void Thread::appendNewThread(Thread* thread) {
	thread->nextThread = _currentThread->nextThread;
	_currentThread->nextThread = thread;
}

bool Thread::deleteThread(Thread* thread) {
	if (thread->nextThread != thread) {
		thread->nextThread = thread->nextThread->nextThread;
		return true;
	}else {
		return false;
	}
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
	return vmstack.destroyTopFrame();
}

Frame * Thread::getTopFrame()
{
	return vmstack.getTopFrame();
}

int Thread::size()
{
	return vmstack.size();
}

Thread* Thread::mainThread;
Thread* Thread::_currentThread;

//language
//lib
//base
