object Main {

    def media ( notaA: Double, notaB : Double, notaC : Double) : Double =
        ((notaA * 2.0) + (notaB * 3.0) + (notaC * 5.0)) / 10.0

    def main( args: Array[String] ){
        var notaA = scala.io.StdIn.readDouble() : Double
        var notaB = scala.io.StdIn.readDouble() : Double
        var notaC = scala.io.StdIn.readDouble() : Double
        var med = media(notaA, notaB, notaC )
        printf("MEDIA = %.1f\n", med)
    }
}