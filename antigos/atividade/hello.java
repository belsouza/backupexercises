import java.util.*;

public class hello {

    public static int fib(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return (fib(n - 1) + fib(n - 2));
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Entre com um numero: ");
        a = input.nextInt();
        b = fib(a);
        System.out.printf("Fib de %d eh %d", a, b);
        input.close();
    }
}
