import java.io.IOException;
import java.util.*;

public class Main{
    
    private static double pesoA = 2.0;
    private static double pesoB = 3.0;
    private static double pesoC = 5.0;
    
    private static double media( double notaA, double notaB, double notaC )
    {
        double numMedia;
        numMedia = ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);
        return numMedia;
    }
    
    public static void main(String[] args) throws IOException {     
        Locale.setDefault(Locale.US);
        Scanner inpoot = new Scanner(System.in);
        double a, b, c, nmedia;
        a = inpoot.nextDouble();
        b = inpoot.nextDouble();
        c = inpoot.nextDouble();
        nmedia = media(a, b, c);
        System.out.printf("MEDIA = %.1f\n", nmedia);
    }    
}
