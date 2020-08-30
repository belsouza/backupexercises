
object Main {

    def areadocirculo(raio: Double): Double = 3.14159 * raio * raio

    def main(args: Array[String]) {
        
        var raio = scala.io.StdIn.readDouble : Double
        var area = areadocirculo( raio ) 

        printf("A=%.4f\n", area) 
    }
}