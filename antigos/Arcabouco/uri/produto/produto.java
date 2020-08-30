import java.io.IOException;
import java.util.*;


public class Main{
    
    public static int produto(int a, int b)
    {
        return ( a * b );
    }

    public static void main( String[] args ) throws IOException
    {
        Scanner input = new Scanner(System.in);
        int a, b, prod;
        a = input.nextInt();
        b = input.nextInt();
        prod = produto(a, b);
        System.out.printf("PROD = %d\n", prod);
    }
}