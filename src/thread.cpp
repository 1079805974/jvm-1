#include "thread.h"

Thread::Thread(int pid)
{
	this->pc = 0;
	this->pid = pid;
}

Thread::Thread()
{
	this->pc = 0;
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
//language
//lib
//base
