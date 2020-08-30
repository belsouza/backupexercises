import java.io.IOException;
import java.util.Scanner;


public class Main {
    
    static public double distancia( double xp1, double yp1, double xp2, double yp2 )
    {
        double res = Math.pow((xp2 - xp1), 2) + Math.pow((yp2 - yp1), 2);
        return Math.sqrt(res);
    }
    
    public static void main(String[] args) throws IOException 
    {
        double xp1, xp2, yp1, yp2, res;
        Scanner input = new Scanner(System.in);
        String[] str1, str2;
        String linha1, linha2;
        linha1 = input.nextLine();
        linha2 = input.nextLine();
        str1 = linha1.split(" ");
        str2 = linha2.split(" ");
        xp1 = Double.parseDouble( str1[0] );
        xp2 = Double.parseDouble( str2[0] );
        yp1 = Double.parseDouble( str1[1] );
        yp2 = Double.parseDouble( str2[1] );
        
        res = distancia( xp1, yp1, xp2, yp2 );
        System.out.printf("%.4f\n", res);
    }
}
