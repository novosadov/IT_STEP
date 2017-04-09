

class Car:
    zagiganie = 0       
    ezda = 0
    tormoz = 0
    ostanovkaDvig = 0       
    vkluchenieFar = 0
    otkritieZakritieDverei = 0
    def changezagiganie(self, zagiganie):      
        self.zagiganie = zagiganie
    def changeezda(self, ezda):      
        self.ezda = ezda
    def changetormoz(self, tormoz):
        self.tormoz = tormoz
    def changeostanovkaDvig(self, ostanovkaDvig):      
        self.ostanovkaDvig = ostanovkaDvig
    def changevkluchenieFar(self, vkluchenieFar):      
        self.vkluchenieFar = vkluchenieFar
    def changeotkritieZakritieDvere(self, otkritieZakritie):
        self.otkritieZakritieDverei = otkritieZakritie


ans=True
count = 0
while ans:
    
    count = count+1
    print ("""
    1.Зажигание
    2.Езда
    3.Тормоз
    4.Остановка двигателя
    5.Включение фар
    6.Открытие/закрытие дверей
    """)
    ans = input("Для того чтобы поехать выберите  действие? ") 
    if ans=="1": 
      print("\n Зажигание - ", count," действие") 
    elif ans=="2":
      print("\n Езда - ", count," действие") 
    elif ans=="3":
      print("\n Тормоз - ", count," действие") 
    elif ans=="4":
      print("\n Остановка двигателя - ", count," действие")
    elif ans=="5":
      print("\n Включение фар - ", count," действие")
    elif ans=="6":
      print("\n Открытие/закрытие дверей - ", count," действие") 
    elif ans !="":
      print("\n Введите правильное значение - ", count," действие")
   
