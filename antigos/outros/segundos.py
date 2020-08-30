# coding: utf-8

segundos= int(input("Por favor, entre com o número de segundos que deseja converter: "))

dias = segundos // 86400
rest = segundos % 86400
horas = rest // 3600
rest = rest % 3600
minutos = rest // 60
rest = rest % 60



# o restante corresponde aos segundos

print(dias,"dias",horas,"horas",minutos,"minutos",rest,"segundos.")

