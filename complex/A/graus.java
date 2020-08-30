package A;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.FileReader;
import java.util.*;
 
public class Main {
    
    public static int converter(int grau, int referencia ){
	return (( grau * referencia ) / 360 );
    }

    public static void coordenar( int horas, int minutos ){
            int a, b;
            a = converter( horas, 12 );
            b = converter( minutos, 60 );
            System.out.printf("%02d:%02d\n", a, b);           
    }


    public static void main(String[] args) throws IOException {
        int h, m;
        Scanner input = new Scanner(System.in);
       try (FileReader reader = new FileReader("C:\\Users\\zsant\\Documents\\NetBeansProjects\\CMain\\src\\cmain\\graus.txt");
             BufferedReader br = new BufferedReader(reader)) {

            // read line by line
            String line;
            String[] parts;
            while ((line = br.readLine()) != null) {
                parts = line.split(" ");
                h = Integer.parseInt(parts[0]);
                m = Integer.parseInt(parts[1]);
                coordenar(h, m);                
            }

        } catch (IOException e) {
            System.err.format("IOException: %s%n", e);
        }        
    }
    
}
