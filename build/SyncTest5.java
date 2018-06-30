class SyncThread5 implements Runnable {
    private static int count;

    public SyncThread5() {
       count = 0;
    }

    public void run() {
        test();
    }

    public static synchronized void test() {
        for (int i = 0; i < 5; i++) {
            System.out.println(count++);
            //Thread.yield();
        }
    }


    public int getCount() {
        return count;
    }
}

public class SyncTest5 {
    public static void main(String args[]) {
        // test02
        SyncThread5 s = new SyncThread5();
        Thread t1 = new Thread(s);
        Thread t2 = new Thread(s);

        t1.start();
        t2.start();
    }
}