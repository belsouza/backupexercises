import java.util.*
import kotlin.text.*

fun main( args: Array<String> ){
    var (codeA, npecasA, valorA) = readLine()!!.split(' ') 
    var (codeB, npecasB, valorB) = readLine()!!.split(' ')
    var foo = (  npecasA.toInt() * valorA.toDouble() ) + (npecasB.toInt()  * valorB.toDouble() )
    println("VALOR A PAGAR: R$ %.2f".format(foo))
}