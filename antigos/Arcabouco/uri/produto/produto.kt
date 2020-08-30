import java.util.Scanner
import kotlin.text.*

fun produto( a : Int, b : Int) : Int {
    return a * b
}

fun main( args: Array< String >){
    var input = Scanner(System.`in`)
    var a : Int = input.nextInt()
    var b : Int = input.nextInt()
    var prod  = produto(a , b)
    println ("PROD = $prod")
}

 