//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by Fernflower decompiler)
//
package java.lang;

public class Thread implements Runnable {
    private Runnable target;
    Thread(){}

    Thread(Runnable var1){
        this.target = var1;
    }

    public void run(){
        if(target!=null){
            target.run();
        }
    }
    public void start(){
        start0();
    }
    public native void start0();
}
