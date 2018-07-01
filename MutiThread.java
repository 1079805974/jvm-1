import java.lang.Thread;
public class MutiThread{
    public static void main(String[] args) {
        for(int i=0;i<100;i++)
        new Thread(){
            @Override
            public void run(){
                System.out.println();
            }
        };
    }
}