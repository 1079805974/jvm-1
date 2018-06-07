#include "thread.h"

Thread::Thread(int stackSize)
{
	this.pc = 0;
	this.stack = new VMStack(stackSize);
}

Thread::Thread()
{
	this.pc = 0;
	this.stack = new VMStack(1024);
}

int Thread::PC()
{
	return this.pc;
}

void Thread::setPC(int pc)
{
	this.pc = pc;
}

void Thread::pushFrame(Frame* frame)
{
	stack.addFrame(frame);
}

Frame* Thread::popFrame()
{
	return stack.popFrame();
}

Frame * Thread::currentFrame()
{
	return stack.getTopFrame();
}

uint32_t Thread::size()
{
	return stack.size();
}
//language
//lib
//base
