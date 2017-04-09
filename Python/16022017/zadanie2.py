"""
Напишите программу-игру. Компьютер загадывает случайное число, пользователь
пытается его угадать. Пользователь вводит число до тех пор, пока не угадает или не
введет слово «Выход». Компьютер сравнивает число с введенным и сообщает
пользователю больше оно или меньше загаданного.
"""

secretnumber = 35
secretnumber = int(secretnumber)
number = int(input("Введите число от 0 до 100\n"))
while number != secretnumber:
    if number < secretnumber:
        print("Больше \n")
        number = int(input("Введите число от 0 до 100\n"))
       
    elif number > secretnumber:
        print("Меньше \n")
        number = int(input("Введите число от 0 до 100\n"))        
    
    elif number < 0 or number > 100:
        print("Введите коректное значение\n")
    
    else:
        print("Угадал \n")
        input("Press Enter")
        break
