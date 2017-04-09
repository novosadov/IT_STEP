class Second:
    color = "no color"       #Параметры
    form = "no form "
    kolichestvo = 0
    def changecolor(self, newcolor):      #Методы
        self.color = newcolor
    def changeform(self, newform):      #Методы
        self.form = newform
    def changekolichestvo(self, newkolichestvo):
        self.kolichestvo = newkolichestvo
        

obj1 = Second()
obj2 = Second()
obj3 = Second()

print("Первый объект - ", obj1.color + ", " + obj1.form+",", obj1.kolichestvo)
print("Второй объект - ", obj2.color + ", " + obj2.form+",", obj2.kolichestvo)
print("Третий объект - ", obj3.color + ", " + obj3.form+",", obj3.kolichestvo)


print("\nNew Line\n")


obj1.changecolor("blue")
obj1.changeform("oval")
obj1.changekolichestvo(4)

obj2.changecolor("black")
obj2.changeform("cube")
obj2.changekolichestvo(6)

obj3.changecolor("orange")
obj3.changeform("circle")
obj3.changekolichestvo(8)

print("Первый объект - ", obj1.color + ", " + obj1.form+",", obj1.kolichestvo)
print("Второй объект - ", obj2.color + ", " + obj2.form+",", obj2.kolichestvo)
print("Третий объект - ", obj3.color + ", " + obj3.form+",", obj3.kolichestvo)




obj1.changecolor("blue")
obj1.changeform("oval")
obj1.changekolichestvo(4)
