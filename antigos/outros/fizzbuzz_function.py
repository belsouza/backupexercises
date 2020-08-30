def fizzbuzz( x ):

    div3 = False
    div5 = False    

    if(x % 3 == 0):
        div3 = True
    
    if(x % 5 == 0):
        div5 = True

    if div3 == True and div5 == False:
        return "Fizz"
    else:
        if div3 == False and div5 == True:
            return "Buzz"
        else:
            if div3 == True and div5 == True:
                return "FizzBuzz"
            else:
                return x


#print( fizzbuzz(3) )

#print( fizzbuzz(4) )

#print( fizzbuzz(5) )

#print( fizzbuzz(15) )

#print( fizzbuzz(225) )

#print( fizzbuzz(12345) )