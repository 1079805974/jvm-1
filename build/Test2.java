import vm.lang.Thread;

class Test2 extends Thread
{
	public void run(){
        System.out.println(fib(20));
    }
	
	public static void main(String[] args)
	{
		new Test2().start();
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