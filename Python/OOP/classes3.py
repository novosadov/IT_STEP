class Second1:
    color = "red"       #Параметры
    form = "cube "
    kolichestvo = 1
    def changecolor(self, newcolor):      #Методы
        self.color = newcolor
    def changeform(self, newform):      #Методы
        self.form = newform
    def changekolichestvo(self, newkolichestvo):
        self.kolichestvo = newkolichestvo

class Second2:
    color = "black"       #Параметры
    form = "circle"
    kolichestvo = 2
    def changecolor(self, newcolor):      #Методы
        self.color = newcolor
    def changeform(self, newform):      #Методы
        self.form = newform
    def changekolichestvo(self, newkolichestvo):
        self.kolichestvo = newkolichestvo
        

obj1 = Second1()
obj2 = Second2()

print("Первый объект - ", obj1.color + ", " + obj1.form+",", obj1.kolichestvo)
print("Второй объект - ", obj2.color + ", " + obj2.form+",", obj2.kolichestvo)


obj1.changecolor("Оранжевый")
obj1.changeform("oval")
obj1.changekolichestvo(4)

obj2.changecolor(obj1.color)
obj2.changeform(obj1.form)
obj2.changekolichestvo(obj1.kolichestvo)

print("Первый объект - ", obj1.color + ", " + obj1.form+",", obj1.kolichestvo)
print("Второй объект - ", obj2.color + ", " + obj2.form+",", obj2.kolichestvo)
