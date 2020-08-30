import java.util.Scanner

fun timming( n : Int ) : Int {
    return if (n > 60){
        timming( n % 60 )
    }else
    {
        (n % 60)
    }
}


fun main( args: Array<String> ){

    val input = Scanner(System.`in`)
    var n : Int = input.nextInt()
    var h : Int = timming (n)
    var m : Int = timming (n/60)
    var s : Int = timming (n/3600)

    println ("${s}:${m}:${h}")    
}