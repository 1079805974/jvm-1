import java.lang.Thread;

class Test2 extends Thread
{
	public void run(){
        System.out.println("NEW THREAD!!!");
    }
	
	public static void main(String[] args)
	{
		new Test2().start();
	}
}