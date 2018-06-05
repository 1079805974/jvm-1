#ifndef thread_h
#define thread_h

#include "vmstack.h"
#include "frame.h"

class Thread {
public:
	Thread(int stackSize);
	Thread();
	int PC();
	void setPC(int pc);
	void pushFrame(Frame* frame);
	Frame* popFrame();
	Frame* currentFrame();
	uint32_t size();
private:
	int pc;
	VMStack* stack;
};

#endif