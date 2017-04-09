"""
Написать программу "Автодиллер", в которой будут:
	Определятся три класса моделей авто:
	- Бюджет (стоимость до 1000$, налог 3%),
	- Семейный (стоимость до 5000$, налог 7%),
	- Премиум (стоимость до 10000$, налог 12%)
	Пользователь выбирает класс, указывает желаемую стоимость.
	Программа расчитывает чистую стоимость, налог и стоимость с налогом
	Программа отображает класс авто, его стоимость (чистая, налог, полная)
"""
klass = int(input("Выберите класс:\n1 - Бюджет\n2 - Семейный\n3 - Премиум\n"))
if klass == 1:
    print("Вы выбрали 'Бюджет'\n")
    stoimost = float(input("Выберите стоимость до 1000$\n"))
    if stoimost > 1000:
        print("Вы превысили лимит")
    else:
        print("У Вас бюджетный автомобиль\n")
        print("Чистая стоимость = ", stoimost, "\n")
        nalog = (stoimost * 0.3) / 100
        nalog = float(nalog)
        print("Налог = ",nalog , "\n")
        print("Полная стоимость = ", stoimost + nalog, "\n")

elif klass == 2:
    print("Вы выбрали 'Семейный'\n")
    stoimost = float(input("Выберите стоимость от 1000$ до 5000$\n"))
    if stoimost > 5000:
        print("Вы превысили лимит")
    elif stoimost < 1000:
        print("Вы указали низкую стоимость")
    else:
        print("У Вас семейный автомобиль\n")
        print("Чистая стоимость = ", stoimost, "\n")
        nalog = (stoimost * 0.7) / 100
        nalog = float(nalog)
        print("Налог = ",nalog , "\n")
        print("Полная стоимость = ", stoimost + nalog, "\n")

elif klass == 3:
    print("Вы выбрали 'Премиум'\n")
    stoimost = float(input("Выберите стоимость от 5000$ до 10000$\n"))
    if stoimost > 10000:
        print("Вы превысили лимит")
    elif stoimost < 5000:
        print("Вы указали низкую стоимость")
    else:
        print("У Вас семейный автомобиль\n")
        print("Чистая стоимость = ", stoimost, "\n")
        nalog = (stoimost * 1.2) / 100
        nalog = float(nalog)
        print("Налог = ",nalog , "\n")
        print("Полная стоимость = ", stoimost + nalog, "\n")

else:
    print("Введены не верные данные")

input("Press ENTER to continue")
