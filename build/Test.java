
import java.util.ArrayList;
import java.lang.Integer;
import java.lang.Thread;
import java.util.concurrent.*;
import java.util.concurrent.locks.*;
public class Test {
    private ArrayList<Integer> arrayList = new ArrayList<Integer>();
    public static void main(String[] args)  {
        synchronized(Test.class){
             
        }        
        final Test test = new Test();
        new Thread(){
            public void run() {
                synchronized(this){
                test.insert(Thread.currentThread());
            }
            };
         
        }.start();
         
        new Thread(){
            public void run() {
                test.insert(Thread.currentThread());
            };
        }.start();
    }  
     
    public void insert(Thread thread) {
        Lock lock = new ReentrantLock();    
        lock.lock();
        try {
            System.out.println(thread.getName()+"得到了锁");
            for(int i=0;i<5;i++) {
                arrayList.add(i);
            }
        } catch (Exception e) {
            // TODO: handle exception
        }finally {
            System.out.println(thread.getName()+"释放了锁");
            lock.unlock();
        }
    }
}