
"""
Запросить у пользователя 3 числа
	
	Вывести все числа
	Найти и вывести максимальное и минимальное число.
	Вывести числа по возрастаю и убыванию.
"""

pervoechislo = int(input("Введите 1 число\n"))
vtoroechislo = int(input("Введите 2 число\n"))
tretiechislo = int(input("Введите 2 число\n"))
max = 0
max = int(max)
min = 0
min = int(min)
var = 0
var = int(var)
print("1 число", pervoechislo, "\n",
      "2 число", vtoroechislo, "\n",
      "3 число", tretiechislo, "\n")
if pervoechislo > vtoroechislo > tretiechislo:
    max = pervoechislo
elif vtoroechislo > pervoechislo > tretiechislo:
    max = vtoroechislo
else:
    max = tretiechislo

if pervoechislo < vtoroechislo < tretiechislo:
    min = pervoechislo
elif vtoroechislo < pervoechislo < tretiechislo:
    min = vtoroechislo
else:
    min = tretiechislo

if max == pervoechislo and min == vtoroechislo:
    var = tretiechislo
elif max == vtoroechislo and min == pervoechislo:
    var = tretiechislo
elif max == pervoechislo and min == tretiechislo:
    var = vtoroechislo
elif max == tretiechislo and min == pervoechislo:
    var = vtoroechislo
else:
    var = pervoechislo
print("Максимальное число = ", max)
print("Минимальное число = ", min)
print("Числа по возрастанию: ", min," ", var," ", max)
print("Числа по убыванию: ", max," ", var," ", min)

input("Для продолжения нажмите ENTER\n")
