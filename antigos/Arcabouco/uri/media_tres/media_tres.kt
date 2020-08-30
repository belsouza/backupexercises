import java.util.Scanner
import kotlin.text.*

val pesoA : Double = 2.0
val pesoB : Double = 3.0
val pesoC : Double = 5.0

fun media( notaA : Double, notaB : Double, notaC : Double ) : Double {

    return ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);
}

fun main(args: Array<String>){
    var input = Scanner(System.`in`)
    var notaA : Double
    notaA = (input.nextLine()).toDouble()

    var notaB : Double
    notaB = (input.nextLine()).toDouble()

    var notaC : Double
    notaC = (input.nextLine()).toDouble()

    var resposta : Double    
    resposta = media(notaA, notaB, notaC)
    println("MEDIA = %.1f".format(resposta))
}
