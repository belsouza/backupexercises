import java.io.IOException;
import java.util.*;

public class Main
{
    public static double meubonus( double salario, double montante )
    {
        return ( salario + ((montante * 15)/100));
    }

    public static void main( String[] args ) throws IOException
    {
        Scanner input = new Scanner(System.in);
        String nome;
        Double salario, montante;
        nome = input.nextLine();
        salario = input.nextDouble();
        montante = input.nextDouble();
        System.out.printf("TOTAL = R$ %.2f\n", meubonus(salario, montante));
        input.close();
    }
}