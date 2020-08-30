import java.util.Scanner

fun main( args: Array<String> ){
    val input = Scanner(System.`in`)
    var v : Double  = input.nextDouble()
    var th : Double  = input.nextDouble()
    val ql = (v * th) / 12.0
    println("%.3f".format(ql))
}