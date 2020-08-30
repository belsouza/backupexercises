a = [11, 15, 22, 23, 75]
x, y, z = "Morango", 5, 7.58


for i in a:
    if i % 3 == 0:
        print (i, "/3 = ", i/3)

for j in a:
    if j < 20:
        print(j," eh menor que 20")
    elif j%2 == 0:
        print( j," eh numero par")
    else:
        print("Boa")


x = "awesome"
print("Python is " + x)