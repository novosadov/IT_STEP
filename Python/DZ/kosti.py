# Кости
# Демонстрируем рандомную генерацию чисел

import random
import time
# генерируем числа рандомно 1 - 6
sopernik = int(input("Выберите игру:\n\t1 - игра с компьютером\n"
                     "\t2 - игра с вторым пользователем\n"))

total = 0
total = int(total)
totalComp = 0
totalComp = int(totalComp)
totalSopernik = 0
totalSopernik = int(totalSopernik)
summPolsovatelya = 0
summaComputera = 0
sredstva1 = 1000
sredstva2 = 1000
stavka = 0

if sopernik == 1:    
    while total==totalComp:
        
        print("Ваши средства = ", sredstva1)
        stavka = int(input("Сделайте вашу ставку\n"))
        print("Для того чтобы выбрать кто будет ходить первым",
             " - сделайте ход\n") 
        input("Для броска нажмите Enter\n")
        a = random.randint(1, 6)
        b = random.randrange(6) + 1
        total = a + b
        print("У Вас выпало:")
        print("\n\tПервая кость:", a, "\n\tВторая кость:", b, "\n\tВ сумме:", total,
           "\n")
        time.sleep(3)    
        print("Ход компьютера:\n")
        time.sleep(1)
        c = random.randint(1, 6)
        d = random.randrange(6) + 1
        totalComp = c + d
        print("У компьютера выпало:")
        print("\n\tПервая кость:", c, "\n\tВторая кость:", d,
            "\n\tВ сумме:", totalComp,"\n")
        if total > totalComp:
            print("Вы ходите первым:\n")
            for i in range(3):
                input("Для броска нажмите Enter\n")
                a = random.randint(1, 6)
                b = random.randrange(6) + 1
                total = a + b
                print("У Вас выпало:")
                print("\n\tПервая кость:", a, "\n\tВторая кость:", b, "\n\tВ сумме:", total,
                     "\n")
                time.sleep(1)    
                print("Ход компьютера:\n")
                time.sleep(1)
                c = random.randint(1, 6)
                d = random.randrange(6) + 1
                totalComp = c + d
                print("У компьютера выпало:")
                print("\n\tПервая кость:", c, "\n\tВторая кость:", d,
                  "\n\tВ сумме:", totalComp,"\n")
                summPolsovatelya = summPolsovatelya + total
                summaComputera = summaComputera + totalComp
            print("Сумма всех очков пользователя = ", summPolsovatelya, "\n")
            print("Сумма всех очков компьютера = ", summaComputera, "\n")
            if summPolsovatelya > summaComputera:
                print("Ура!!! Вы просто мега удачник))\n")
                print("Ваш счёт составил:\n", sredstva1 + stavka, "\n")
                break
            elif summPolsovatelya < summaComputera:
                print("Победил компьютер. Вам повезёт в другой раз\n")
                print("Ваш счёт составил:\n", sredstva1 - stavka, "\n")
                break
            else:                
                print("Ничья.\n")
                break

            
        if totalComp > total:
            print("Первым ходит компьютер:\n")
            for i in range(3):
                time.sleep(3)
                print("Ход компьютера:\n")
                time.sleep(1)
                c = random.randint(1, 6)
                d = random.randrange(6) + 1
                totalComp = c + d
                print("У компьютера выпало:")
                print("\n\tПервая кость:", c, "\n\tВторая кость:", d,
                     "\n\tВ сумме:", totalComp,"\n")
                input("Для броска нажмите Enter\n")
                a = random.randint(1, 6)
                b = random.randrange(6) + 1
                total = a + b
                print("У Вас выпало:")
                print("\n\tПервая кость:", a, "\n\tВторая кость:", b, "\n\tВ сумме:", total,
                     "\n")
                summPolsovatelya = summPolsovatelya + total
                summaComputera = summaComputera + totalComp
            print("Сумма всех очков пользователя = ", summPolsovatelya, "\n")
            print("Сумма всех очков компьютера = ", summaComputera, "\n")
            if summPolsovatelya > summaComputera:
                print("Ура!!! Вы просто мега удачник))\n")
                print("Ваш счёт составил:\n", sredstva1 + stavka, "\n")
                break
            elif summPolsovatelya < summaComputera:
                print("Победил компьютер. Вам повезёт в другой раз\n")
                print("Ваш счёт составил:\n", sredstva1 - stavka, "\n")
                break
            else:
                print("Ничья.\n")
                break
       
if sopernik == 2:    
    while total==totalSopernik:
        
        print("Средства игрока А = ", sredstva1)
        print("Средства игрока В = ", sredstva2)
        stavka = int(input("Сделайте вашу ставку\n"))
        print("Для того чтобы выбрать кто будет ходить первым",
             " - сделайте ход\n") 
        input("Для броска нажмите Enter\n")
        a = random.randint(1, 6)
        b = random.randrange(6) + 1
        total = a + b
        print("У игрока А выпало:")
        print("\n\tПервая кость:", a, "\n\tВторая кость:", b, "\n\tВ сумме:", total,
            "\n")
        print("Ходит игрок В:\n")
        input("Для броска нажмите Enter\n")
        c = random.randint(1, 6)
        d = random.randrange(6) + 1
        totalSopernik = c + d
        print("У игрока B выпало:")
        print("\n\tПервая кость:", c, "\n\tВторая кость:", d,
               "\n\tВ сумме:", totalSopernik,
            "\n")
        if total > totalSopernik:
            print("Игрок А ходит первым:\n")
            for i in range(3):
                input("Для броска нажмите Enter\n")
                a = random.randint(1, 6)
                b = random.randrange(6) + 1
                total = a + b
                print("У игрока А выпало:")
                print("\n\tПервая кость:", a, "\n\tВторая кость:", b,
                      "\n\tВ сумме:", total, "\n")
                print("Ходит игрок В:\n")
                input("Для броска нажмите Enter\n")
                c = random.randint(1, 6)
                d = random.randrange(6) + 1
                totalSopernik = c + d
                print("У игрока B выпало:")
                print("\n\tПервая кость:", c, "\n\tВторая кость:", d,
                        "\n\tВ сумме:", totalSopernik,"\n")
                summPolsovatelya = summPolsovatelya + total
                summaComputera = summaComputera + totalSopernik
            print("Сумма всех очков игрока А = ", summPolsovatelya, "\n")
            print("Сумма всех очков игрока В = ", summaComputera, "\n")
            if summPolsovatelya > summaComputera:
                print("Победил игрок А\n")
                print("Счёт игрока А составил:\n", sredstva1 + stavka, "\n")
                print("Счёт игрока В составил:\n", sredstva1 - stavka, "\n")
                break
            elif summPolsovatelya < summaComputera:
                print("Победил игрок В\n")
                print("Счёт игрока А составил:\n", sredstva1 - stavka, "\n")
                print("Счёт игрока В составил:\n", sredstva1 + stavka, "\n")
                break
            else:
                print("Ничья.\n")
                break
                
        if totalSopernik > total:
            print("Игрок B ходит первым:\n")
            for i in range(3):
                input("Для броска нажмите Enter\n")
                c = random.randint(1, 6)
                d = random.randrange(6) + 1
                totalSopernik = c + d
                print("У игрока B выпало:")
                print("\n\tПервая кость:", c, "\n\tВторая кость:", d,
                        "\n\tВ сумме:", totalSopernik,"\n")                    
                print("Ходит игрок A:\n")
                input("Для броска нажмите Enter\n")
                a = random.randint(1, 6)
                b = random.randrange(6) + 1
                total = a + b
                print("У игрока А выпало:")
                print("\n\tПервая кость:", a, "\n\tВторая кость:", b,
                        "\n\tВ сумме:", total, "\n")   
                summPolsovatelya = summPolsovatelya + total
                summaComputera = summaComputera + totalSopernik
            print("Сумма всех очков игрока А = ", summPolsovatelya, "\n")
            print("Сумма всех очков игрока В = ", summaComputera, "\n")
            if summPolsovatelya > summaComputera:
                print("Победил игрок А\n")
                print("Счёт игрока А составил:\n", sredstva1 + stavka, "\n")
                print("Счёт игрока В составил:\n", sredstva1 - stavka, "\n")
                break
            elif summPolsovatelya < summaComputera:
                print("Победил игрок В\n")
                print("Счёт игрока А составил:\n", sredstva1 - stavka, "\n")
                print("Счёт игрока В составил:\n", sredstva1 + stavka, "\n")
                break
            else:
                print("Ничья.\n")
                break                    
 
input("\n\nPress the enter key to exit.")
