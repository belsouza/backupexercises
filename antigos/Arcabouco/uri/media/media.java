import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    private static double pesoA = 3.5;
    private static double pesoB = 7.5;
    
    private static double media( double notaA, double notaB )
    {
        double numMedia;
        numMedia = ((notaA * pesoA) + (notaB * pesoB)) / (pesoA + pesoB);
        return numMedia;
    }
    
    public static void main(String[] args) throws IOException {  
        Scanner input = new Scanner(System.in);
        double a, b, nmedia;
        a = input.nextDouble();
        b = input.nextDouble();
        nmedia = media(a, b);
        System.out.printf("MEDIA = %.5f\n", nmedia);
    }
    
}
