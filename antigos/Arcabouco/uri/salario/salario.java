import java.util.*;
import java.io.IOException;

public class Main{

    public static double calcularsalario( int horas, double valor ){
        double foo;
        foo = (double)horas * valor;
        return (foo);
    }

    public static void main(String[] args) throws IOException {
        Locale.setDefault( Locale.US );
        Scanner input = new Scanner(System.in);
        int num, horas;
        double valor;

        num = input.nextInt();
        horas = input.nextInt();
        valor = input.nextDouble();
        System.out.printf("NUMBER = %d\n", num);
        System.out.printf("SALARY = U$ %.2f\n", calcularsalario(horas, valor));
        input.close();
    }
}
