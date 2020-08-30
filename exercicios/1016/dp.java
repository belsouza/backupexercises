import java.io.IOException;
import java.util.Scanner;


public class Main {
    
    public static void main(String[] args) throws IOException {
        int x, y;
        Scanner input = new Scanner(System.in);
        x = input.nextInt();
        y = 2 * x;
        System.out.printf("%d minutos\n", y);       
    }    
}