
import java.lang.Thread;
public class Test {
    public static void main(String[] args)  {
        synchronized(Test.class){
             
        }        
        final Test test = new Test();
        new Thread(){
            public void run() {
                synchronized(this){
				}
            };
        }.start();
     
   }
}