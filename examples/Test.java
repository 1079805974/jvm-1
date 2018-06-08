import java.io.IOException;

class Test
{
	public static int fib (int n) throws IOException
	{	
		int prev = 0, curr = 1;
		for (int i = 1; i < n; i++) {
			int tmp = curr;
			curr = prev + curr;
			prev = tmp;
		}
		return curr;
	}
	
	public static void main(String[] args)
	{
		try {
			System.out.println(fib(42));
		} catch (Exception e) {
			System.out.println(e.toString());
		}
	}
}