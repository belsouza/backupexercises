import java.io.IOException;
import java.util.Scanner;


public class Main {
    
    private static int food( int n ){
        if(n > 60){
            return(food(n % 60));
        }else{
            return(n%60);
        }
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        int n, s, m, h;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        s = food(n);
        m = food(n/60);
        h = food(n/3600);
        System.out.printf("%d:%d:%d\n", h,m,s);
        input.close();       
    }
}