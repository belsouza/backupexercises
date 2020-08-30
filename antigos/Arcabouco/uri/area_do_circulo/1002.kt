
import java.util.Scanner
import kotlin.text.*

fun areadocirculo( raio: Double ) : Double {
    var pi = 3.14159
    return pi * raio * raio
}

fun main(args: Array<String>)
{
    var inpoot  = Scanner(System.`in`)
    var raio:Double = inpoot.nextDouble()
    var area = String.format("%.4f", areadocirculo(raio))
	println ("A=$area")
}