import java.util.Scanner
import kotlin.text.*

fun main(args: Array<String>){

    var input = Scanner(System.`in`) 

    var num : Int = input.nextInt()
    var horas : Int = input.nextInt()
    var valorhora : Double = input.nextDouble()

    var result : Double = (horas.toDouble()) * valorhora

    println ("NUMBER = $num")
    println ("SALARY = U$ %.2f".format(result))
}