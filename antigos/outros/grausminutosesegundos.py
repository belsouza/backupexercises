# coding: utf-8

segundos= int(input("Entre com o numero de segundos: "))

horas = segundos // 3600
rest = segundos % 3600
minutos = rest // 60
rest = rest % 60

# o restante corresponde aos segundos

print(horas, "graus", minutos, "minutos", rest, "segundos")

