import java.util.Scanner


fun main( args: Array<String> ){

    val input = Scanner(System.`in`)
    var g : Int = input.nextInt()

    println ("${g / 100} nota(s) de R$ 100,00")
    g = g % 100
    println ("${g / 50} nota(s) de R$ 50,00")
    g = g % 50
    println ("${g / 20} nota(s) de R$ 20,00")
    g = g % 20
    println ("${g / 10} nota(s) de R$ 10,00")
    g = g % 10
    println ("${g / 5} nota(s) de R$ 5,00")
    g = g % 5
    println ("${g / 2} nota(s) de R$ 2,00")
    g = g % 2
    println ("${g} nota(s) de R$ 1,00")
}