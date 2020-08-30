codeA, npecasA, valorA = io.read("*n","*n","*n")
codeB, npecasB, valorB = io.read("*n","*n","*n")
foo = string.format('%.2f', (npecasA * valorA) + (npecasB * valorB ))
io.write('VALOR A PAGAR: R$ ', foo ,'\n' )