import java.io.IOException;
import java.util.Scanner;


public class Main {
    
    public static void main(String[] args) throws IOException {
        double v, th, ql;
        Scanner input = new Scanner(System.in);
        th = input.nextDouble();
        v = input.nextDouble();                
        ql = (th * v) / 12.0;
        System.out.printf("%.3f\n", ql);
        input.close();   
    }    
}