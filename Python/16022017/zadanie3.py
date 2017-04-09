"""
Дано семизначное число. Найдите сумму квадратов четных и нечетных цифр.
"""

number = int(input("Введите семизначное число \n"))
num1 = number % 10
num2 = number % 100//10
num3 = number % 1000//100
num4 = number % 10000//1000
num5 = number % 100000//10000
num6 = number % 1000000//100000
num7 = number % 10000000//1000000
sum1 = 0
sum2 = 0

if num1%2 == 0:
    sum1 = sum1 + num1
else:
    sum2 = sum2 + num1
if num2%2 == 0:
    sum1 = sum1 + num2
else:
    sum2 = sum2 + num2
if num3%2 == 0:
    sum1 = sum1 + num3
else:
    sum2 = sum2 + num3
if num4%2 == 0:
    sum1 = sum1 + num4
else:
    sum2 = sum2 + num4
if num5%2 == 0:
    sum1 = sum1 + num5
else:
    sum2 = sum2 + num5
if num6%2 == 0:
    sum1 = sum1 + num6
else:
    sum2 = sum2 + num6
if num7%2 == 0:
    sum1 = sum1 + num7
else:
    sum2 = sum2 + num7

print("Сумма квадратов чётных и нечётных чисел = ", (sum1*2) + (sum2*2))
