import jdk.internal.misc.Signal;

//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by Fernflower decompiler)
//

class HelloWorld {

    public static void main(String[] var0) {
      
    }
    
}

class Semaphore{
    private int lock = 1;
    public synchronized void signal(){
        lock++;
    }

    public synchronized void wait0(){
        while(lock<=0);
        lock--;
    }
}