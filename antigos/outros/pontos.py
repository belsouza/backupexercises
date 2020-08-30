import math

print("Ponto A: \n")
x1 = int(input("x1"))
y1 = int(input("y1"))

print("Ponto B: \n")
x2 = int(input("x2"))
y2 = int(input("y2"))

dist = math.sqrt( ((x1 - x2) ** 2) + ((y1 - y2) ** 2 ))

if dist >= 10:
    print("longe")
else:
    print("perto")