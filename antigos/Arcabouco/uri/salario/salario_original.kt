import java.util.Scanner
import kotlin.text.*

fun calculasalario( a : Int, b : Double ) : Double{
    var x = a.toDouble()
    return ( x * b );
}

fun main(args: Array<String>){

    var input = Scanner(System.`in`) 
    var num : Int
    num = input.nextInt()

    var horas : Int
    horas = input.nextInt()

    var valorhora : Double = readLine()!!.toDouble()

    var result : Double
    result = calculasalario(horas, valorhora) 

    println ("NUMBER = $num")
    println ("SALARY = U$ %.2f".format(result))
}