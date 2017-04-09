"""
Запросить у пользователя зарплату
	Если зарплата от меньше 100 , налог - 3 %
	Если зарплата  от 100 до 600 , налог - 10%
	Если зарплата от 600 до 2000, налог - 18%
	Если запрата более 2000 , налог - 22%
		
	Вывести  'чистую зарплату', налог, и 'глязную зарплату'
	"""
zarplata = float(input("Введите зарплату \n"))
if zarplata < 100:
    nalog = (zarplata*0.03)/100
    nalog = float(nalog)
    print("Чистая зарплата = ", zarplata-nalog)
    print("Налог = ", nalog)
    print("Грязная зарплата = ", zarplata)

elif 100 <= zarplata <= 600:
    nalog = (zarplata*0.1)/100
    nalog = float(nalog)
    print("Чистая зарплата = ", zarplata-nalog)
    print("Налог = ", nalog)
    print("Грязная зарплата = ", zarplata)

elif 600 <= zarplata <= 2000:
    nalog = (zarplata*0.18)/100
    nalog = float(nalog)
    print("Чистая зарплата = ", zarplata-nalog)
    print("Налог = ", nalog)
    print("Грязная зарплата = ", zarplata)

else:
    nalog = (zarplata*0.22)/100
    nalog = float(nalog)
