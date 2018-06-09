import java.lang.Thread;

class Test2 
{
	
	public static void main(String[] args)
	{
		Thread thread = new Thread(new Runnable(){
			@Override
			public void run(){
				System.out.println(fib(10));
			}
		});
		thread.start();
		System.out.println("main");
	}
	public static int fib (int n){

		int prev = 0, curr = 1;
		for (int i = 1; i < n; i++) {
			int tmp = curr;
			curr = prev + curr;
			prev = tmp;
		}
		return curr;
	}
}