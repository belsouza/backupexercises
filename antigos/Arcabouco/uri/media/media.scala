object Main {

    def media ( notaA: Double, notaB : Double) : Double =
        ((notaA * 3.5) + (notaB * 7.5)) / 11.0

    def main( args: Array[String] ){
        var notaA = scala.io.StdIn.readDouble() : Double
        var notaB = scala.io.StdIn.readDouble() : Double
        var med = media(notaA, notaB )
        printf("MEDIA = %.5f\n", med)
    }
}