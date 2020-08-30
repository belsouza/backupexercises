import java.util.Scanner
import kotlin.text.*

fun media( notaA : Double, notaB : Double ) : Double {

    return ( ((notaA * 3.5) + (notaB * 7.5) ) / 11.0 )
}

fun main(args: Array<String>){
    var input = Scanner(System.`in`)
    var notaA : Double;
    notaA = (input.nextLine()).toDouble();

    var notaB : Double;
    notaB = (input.nextLine()).toDouble();

    var resposta : Double    
    resposta = media(notaA, notaB)
    println("MEDIA = %.5f".format(resposta))
}
