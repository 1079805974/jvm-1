#ifndef thread_h
#define thread_h

#include <queue>
#include <vector>

#include "vmstack.h"
#include "frame.h"

class ClassInstance;
class Thread {
public:
    static const int NEW = 0;
	static const int RUNNABLE = 1;
	static const int WAITING = 2;
	static const int TIMEDWAITING = 3;
	static const int BLOCKED = 4;
	static const int TERMINATED = 5;
	static int threadCount;
	static queue<Thread*> threadQueue;
	static Thread* currentThread();
	static void setCurrentThread(Thread*);
	static Thread* mainThread;
	Thread(int pid);
	Thread();
	static void appendNewThread(Thread * thread);
	int PC();
	volatile long state;
	long nice;
	int pid;
	VMStack& getVMStack();
	void setPC(int pc);
	void addFrame(Frame* frame);
	bool destroyTopFrame();
	void releaseLock();
	Frame* getTopFrame();
	static void addCurrentThreadToBlockingQueue(ClassInstance*);
	int size();
	static bool switchThread();
private:
	static Thread * _currentThread;
	int pc;
	VMStack vmstack;
};

#endif