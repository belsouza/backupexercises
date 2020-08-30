import java.util.Scanner
import kotlin.text.*

fun soma( a: Int, b: Int ) : Int {
    return a + b
}

fun main( args: Array<String>)
{
    var input = Scanner(System.`in`)
    var a : Int;  var b : Int; var resultado : Int
    a = input.nextInt()
    b = input.nextInt()
    resultado = soma(a, b)
    println("SOMA = $resultado")
}