import java.util.*;
import java.io.IOException;


public class Main {
    
    public static double calcular( int npecasA, double valorA, int npecasB, double valorB){
    
           return ((npecasA * valorA) + (npecasB * valorB));
    }

    public static double resultado( String[] a, String[] b )
    {
        int npecasA, npecasB;
        double valorA, valorB, resultado;
        
        npecasA = Integer.parseInt(a[1]);
        npecasB = Integer.parseInt(b[1]);
        valorA = Double.parseDouble(a[2]);
        valorB = Double.parseDouble(b[2]);       
                
        resultado = calcular(npecasA, valorA, npecasB, valorB);
        return resultado;
    }
   
    public static void main (String[] args) throws IOException
    {
        Locale.setDefault( Locale.US );
        String f1, f2;
        String[] linhaA, linhaB;
        double foo;
        
        Scanner input = new Scanner(System.in);
        f1 = input.nextLine();
        f2 = input.nextLine();
        linhaA = f1.split("\\s+");
        linhaB = f2.split("\\s+");
        foo = resultado(linhaA, linhaB);
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", foo);
        input.close();        
    }
    
}
