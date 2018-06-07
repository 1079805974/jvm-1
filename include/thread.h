#ifndef thread_h
#define thread_h

#include "vmstack.h"
#include "frame.h"

class Thread {
public:
    static const int NEW = 0;
	static const int RUNNABLE = 1;
	static const int WAITING = 2;
	static const int TIMEDWAITING = 3;
	static const int BLOCKED = 4;
	static const int TERMINATED = 5;
	static Thread* mainThread;
	Thread(int pid);
	Thread();
	int PC();
	volatile long state;
	long nice;
	Thread *nextThread, *prevThread;
	int pid;
	VMStack& getVMStack();
	void setPC(int pc);
	void addFrame(Frame* frame);
	bool destroyTopFrame();
	Frame* getTopFrame();
	int size();
private:
	int pc;
	VMStack vmstack;
};

#endif