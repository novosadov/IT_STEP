class Colors:
    color = "red"       #Параметры
    color2 = "black"
    def out(self):      #Методы
        print(self.color)
    def out2(self):
        print(self.color2)

obj = Colors()          #Объекты
obj.out()
obj.out2()
print(obj.color)
