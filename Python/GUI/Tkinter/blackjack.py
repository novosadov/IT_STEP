from tkinter import *
from tkinter.messagebox import *
from tkinter import messagebox
from datetime import datetime
import random
import time



#Раздача карт
def button_clicked1():    
    #karta1 = random.choice(range(0, 53))
    #karta2 = random.choice(range(0, 53))
    
    karta1 = karta_1()
    karta2 = karta_2()
    if karta2 == karta1:
        karta2 = random.choice(range(-1, 53))
    
    if karta1==0:
        dvoika_buba()    
    if karta1==1:       
        troika_buba()
    if karta1==2:
        chetverka_buba()    
    if karta1==3:       
        peterka_buba()
    if karta1==4:
        shesterka_buba()    
    if karta1==5:       
        semerka_buba()
    if karta1==6:
        vosmerka_buba()    
    if karta1==7:       
        devyatka_buba()
    if karta1==8:
        desyatka_buba()    
    if karta1==9:       
        valet_buba()
    if karta1==10:
        dama_buba()    
    if karta1==11:       
        korol_buba()
    if karta1==12:       
        tuz_buba()

    if karta1==14:
        dvoika_krest()    
    if karta1==15:       
        troika_krest()
    if karta1==16:
        chetverka_krest()    
    if karta1==17:       
        peterka_krest()
    if karta1==18:
        shesterka_krest()    
    if karta1==19:       
        semerka_krest()
    if karta1==20:
        vosmerka_krest()    
    if karta1==21:       
        devyatka_krest()
    if karta1==22:
        desyatka_krest()    
    if karta1==23:       
        valet_krest()
    if karta1==24:
        dama_krest()    
    if karta1==25:       
        korol_krest()
    if karta1==26:       
        tuz_krest()


    if karta2==0:
        dvoika_buba2()    
    if karta2==1:       
        troika_buba2()
    if karta2==2:
        chetverka_buba2()    
    if karta2==3:       
        peterka_buba2()
    if karta2==4:
        shesterka_buba2()    
    if karta2==5:       
        semerka_buba2()
    if karta2==6:
        vosmerka_buba2()    
    if karta2==7:       
        devyatka_buba2()
    if karta2==8:
        desyatka_buba2()    
    if karta2==9:       
        valet_buba2()
    if karta2==10:
        dama_buba2()    
    if karta2==11:       
        korol_buba2()
    if karta2==12:       
        tuz_buba2()

    if karta2==14:
        dvoika_krest2()    
    if karta2==15:       
        troika_krest2()
    if karta2==16:
        chetverka_krest2()    
    if karta2==17:       
        peterka_krest2()
    if karta2==18:
        shesterka_krest2()    
    if karta2==19:       
        semerka_krest2()
    if karta2==20:
        vosmerka_krest2()    
    if karta2==21:       
        devyatka_krest2()
    if karta2==22:
        desyatka_krest2()    
    if karta2==23:       
        valet_krest2()
    if karta2==24:
        dama_krest2()    
    if karta2==25:       
        korol_krest2()
    if karta2==26:       
        tuz_krest2()



    if karta1==27:
        dvoika_pika()    
    if karta1==28:       
        troika_pika()
    if karta1==29:
        chetverka_pika()    
    if karta1==30:       
        peterka_pika()
    if karta1==31:
        shesterka_pika()    
    if karta1==32:       
        semerka_pika()
    if karta1==33:
        vosmerka_buba()    
    if karta1==34:       
        devyatka_pika()
    if karta1==35:
        desyatka_pika()    
    if karta1==36:       
        valet_pika()
    if karta1==37:
        dama_pika()    
    if karta1==38:       
        korol_pika()
    if karta1==39:       
        tuz_pika()

    if karta1==40:
        dvoika_chirva()    
    if karta1==41:       
        troika_chirva()
    if karta1==42:
        chetverka_chirva()    
    if karta1==43:       
        peterka_chirva()
    if karta1==44:
        shesterka_chirva()    
    if karta1==45:       
        semerka_chirva()
    if karta1==46:
        vosmerka_chirva()    
    if karta1==47:       
        devyatka_chirva()
    if karta1==48:
        desyatka_chirva()    
    if karta1==49:       
        valet_chirva()
    if karta1==50:
        dama_chirva()    
    if karta1==51:       
        korol_chirva()
    if karta1==52:       
        tuz_chirva()


    if karta2==27:
        dvoika_pika2()    
    if karta2==28:       
        troika_pika2()
    if karta2==29:
        chetverka_pika2()    
    if karta2==30:       
        peterka_pika2()
    if karta2==31:
        shesterka_pika2()    
    if karta2==32:       
        semerka_pika2()
    if karta2==33:
        vosmerka_pika2()    
    if karta2==34:       
        devyatka_pika2()
    if karta2==35:
        desyatka_pika2()    
    if karta2==36:       
        valet_pika2()
    if karta2==37:
        dama_pika2()    
    if karta2==38:       
        korol_pika2()
    if karta2==39:       
        tuz_pika2()

    if karta2==40:
        dvoika_chirva2()    
    if karta2==41:       
        troika_chirva2()
    if karta2==42:
        chetverka_chirva2()    
    if karta2==43:       
        peterka_chirva2()
    if karta2==44:
        shesterka_chirva2()    
    if karta2==45:       
        semerka_chirva2()
    if karta2==46:
        vosmerka_chirva2()    
    if karta2==47:       
        devyatka_chirva2()
    if karta2==48:
        desyatka_chirva2()    
    if karta2==49:       
        valet_chirva2()
    if karta2==50:
        dama_chirva2()    
    if karta2==51:       
        korol_chirva2()
    if karta2==52:       
        tuz_chirva2()
    return karta1, karta2
        
#Раздача третьей карты

def button_clicked4():    
     
    if shufle() == 1:
        razdacha_karti3()
    
    
# Раздача четвёртой карты  
        
    if shufle() == 2:        
        razdacha_karti4()

    a= a+1
        
    
    

# Кнопка очищает полностью игровое поле (фиг знает зачем, но вдруг пригодиться)
def button_clicked2():
    if askyesno("Очистить", "Вы действительно хотите всё очистить?"):
        canvas.delete("all")
    
# Выход из приложения
def button_clicked3():
    close_win()
    

# Выход из приложения
def close_win():
     if askyesno("Exit", "Как уже уходите?"):
          root.destroy()
         

# Закрытие окна
def close():
    root.destroy()
    root.quit()        

    
root=Tk()
root.title("Игра black jack")
root.geometry('1000x600')


#Кнопка раздачи карт
button1 = Button(root, width=12, height=2, bg="red", text=u"  Начать\n игру ", command=button_clicked1)
button1.place(x=0,y=0)

button4 = Button(root, width=12, height=2, bg="red", text=u"  Ещё ", command=button_clicked4)
button4.place(x=0,y=40)

# Кнопка выход из приложения
button3 = Button(root, width=12, height=2, bg="red", text=u"  Выход ", command=button_clicked3)
button3.place(x=0,y=560)

# Игровое поле (можно изменить цвет, размер и т.д.
canvas = Canvas(root, bg="Medium Spring Green", width = 9000, height = 6000,)
canvas.place(x=100,y=0)

"""
# Создаёт надпись на игровом поле, может и не надо будет (фиг знает)
canvas.create_text(200,20,text="Для начала игры выберите противника\n",
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")
"""

number = random.choice(range(0, 50))
#print("rand = ",number)

"""
canvas.create_text(200,60,text=number,
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")
"""

photo = PhotoImage(file="image/Рубашка.png")
photo1 = PhotoImage(file="image/2буба.png")
photo2 = PhotoImage(file="image/3буба.png")
photo3 = PhotoImage(file="image/4буба.png")
photo4 = PhotoImage(file="image/5буба.png")
photo5 = PhotoImage(file="image/6буба.png")
photo6 = PhotoImage(file="image/7буба.png")
photo7 = PhotoImage(file="image/8буба.png")
photo8 = PhotoImage(file="image/9буба.png")
photo9 = PhotoImage(file="image/10буба.png")
photo10 = PhotoImage(file="image/Валетбуба.png")
photo11 = PhotoImage(file="image/Дамабуба.png")
photo12 = PhotoImage(file="image/Корольбуба.png")
photo13 = PhotoImage(file="image/Тузбуба.png")

photo14 = PhotoImage(file="image/2крест.png")
photo15 = PhotoImage(file="image/3крест.png")
photo16 = PhotoImage(file="image/4крест.png")
photo17 = PhotoImage(file="image/5крест.png")
photo18 = PhotoImage(file="image/6крест.png")
photo19 = PhotoImage(file="image/7крест.png")
photo20 = PhotoImage(file="image/8крест.png")
photo21 = PhotoImage(file="image/9крест.png")
photo22 = PhotoImage(file="image/10крест.png")
photo23 = PhotoImage(file="image/Валеткрест.png")
photo24 = PhotoImage(file="image/Дамакрест.png")
photo25 = PhotoImage(file="image/Королькрест.png")
photo26 = PhotoImage(file="image/Тузкрест.png")

photo27 = PhotoImage(file="image/2пика.png")
photo28 = PhotoImage(file="image/3пика.png")
photo29 = PhotoImage(file="image/4пика.png")
photo30 = PhotoImage(file="image/5пика.png")
photo31 = PhotoImage(file="image/6пика.png")
photo32 = PhotoImage(file="image/7пика.png")
photo33 = PhotoImage(file="image/8пика.png")
photo34 = PhotoImage(file="image/9пика.png")
photo35 = PhotoImage(file="image/10пика.png")
photo36 = PhotoImage(file="image/Валетпика.png")
photo37 = PhotoImage(file="image/Дамапика.png")
photo38 = PhotoImage(file="image/Корольпика.png")
photo39 = PhotoImage(file="image/Тузпика.png")

photo40 = PhotoImage(file="image/2чирва.png")
photo41 = PhotoImage(file="image/3чирва.png")
photo42 = PhotoImage(file="image/4чирва.png")
photo43 = PhotoImage(file="image/5чирва.png")
photo44 = PhotoImage(file="image/6чирва.png")
photo45 = PhotoImage(file="image/7чирва.png")
photo46 = PhotoImage(file="image/8чирва.png")
photo47 = PhotoImage(file="image/9чирва.png")
photo48 = PhotoImage(file="image/10чирва.png")
photo49 = PhotoImage(file="image/Валетчирва.png")
photo50 = PhotoImage(file="image/Дамачирва.png")
photo51 = PhotoImage(file="image/Корольчирва.png")
photo52 = PhotoImage(file="image/Тузчирва.png")


canvas.create_image(100, 100,image = photo)
'''
label = Label(image=photo)
label.image = photo # keep a reference!
label.pack()
'''




def dvoika_buba():    
    canvas.create_image(100, 300,image = photo1)

def dvoika_buba2():    
    canvas.create_image(240, 300,image = photo1)

def dvoika_buba3():    
    canvas.create_image(380, 300,image = photo1)

def dvoika_buba4():    
    canvas.create_image(520, 300,image = photo1)


def dvoika_krest():    
    canvas.create_image(100, 300,image = photo14)

def dvoika_krest2():    
    canvas.create_image(240, 300,image = photo14)

def dvoika_krest3():    
    canvas.create_image(380, 300,image = photo14)

def dvoika_krest4():    
    canvas.create_image(520, 300,image = photo14)


def dvoika_pika():    
    canvas.create_image(100, 300,image = photo27)

def dvoika_pika2():    
    canvas.create_image(240, 300,image = photo27)

def dvoika_pika3():    
    canvas.create_image(380, 300,image = photo27)

def dvoika_pika4():    
    canvas.create_image(520, 300,image = photo27)


def dvoika_chirva():    
    canvas.create_image(100, 300,image = photo40)

def dvoika_chirva2():    
    canvas.create_image(240, 300,image = photo40)

def dvoika_chirva3():    
    canvas.create_image(380, 300,image = photo40)

def dvoika_chirva4():    
    canvas.create_image(520, 300,image = photo40)
    


def troika_buba():    
    canvas.create_image(100, 300,image = photo2)

def troika_buba2():    
    canvas.create_image(240, 300,image = photo2)

def troika_buba3():    
    canvas.create_image(380, 300,image = photo2)

def troika_buba4():    
    canvas.create_image(520, 300,image = photo2)


def troika_krest():    
    canvas.create_image(100, 300,image = photo15)

def troika_krest2():    
    canvas.create_image(240, 300,image = photo15)

def troika_krest3():    
    canvas.create_image(380, 300,image = photo15)

def troika_krest4():    
    canvas.create_image(520, 300,image = photo15)


def troika_pika():    
    canvas.create_image(100, 300,image = photo28)

def troika_pika2():    
    canvas.create_image(240, 300,image = photo28)

def troika_pika3():    
    canvas.create_image(380, 300,image = photo28)

def troika_pika4():    
    canvas.create_image(520, 300,image = photo28)


def troika_chirva():    
    canvas.create_image(100, 300,image = photo41)

def troika_chirva2():    
    canvas.create_image(240, 300,image = photo41)

def troika_chirva3():    
    canvas.create_image(380, 300,image = photo41)

def troika_chirva4():    
    canvas.create_image(520, 300,image = photo41)


    

def chetverka_buba():    
    canvas.create_image(100, 300,image = photo3)

def chetverka_buba2():    
    canvas.create_image(240, 300,image = photo3)

def chetverka_buba3():    
    canvas.create_image(380, 300,image = photo3)

def chetverka_buba4():    
    canvas.create_image(520, 300,image = photo3)


def chetverka_krest():    
    canvas.create_image(100, 300,image = photo16)

def chetverka_krest2():    
    canvas.create_image(240, 300,image = photo16)

def chetverka_krest3():    
    canvas.create_image(380, 300,image = photo16)

def chetverka_krest4():    
    canvas.create_image(520, 300,image = photo16)


def chetverka_pika():    
    canvas.create_image(100, 300,image = photo29)

def chetverka_pika2():    
    canvas.create_image(240, 300,image = photo29)

def chetverka_pika3():    
    canvas.create_image(380, 300,image = photo29)

def chetverka_pika4():    
    canvas.create_image(520, 300,image = photo29)


def chetverka_chirva():    
    canvas.create_image(100, 300,image = photo42)

def chetverka_chirva2():    
    canvas.create_image(240, 300,image = photo42)

def chetverka_chirva3():    
    canvas.create_image(380, 300,image = photo42)

def chetverka_chirva4():    
    canvas.create_image(520, 300,image = photo42)




def peterka_buba():    
    canvas.create_image(100, 300,image = photo4)

def peterka_buba2():    
    canvas.create_image(240, 300,image = photo4)

def peterka_buba3():    
    canvas.create_image(380, 300,image = photo4)

def peterka_buba4():    
    canvas.create_image(520, 300,image = photo4)


def peterka_krest():    
    canvas.create_image(100, 300,image = photo17)

def peterka_krest2():    
    canvas.create_image(240, 300,image = photo17)

def peterka_krest3():    
    canvas.create_image(380, 300,image = photo17)

def peterka_krest4():    
    canvas.create_image(520, 300,image = photo17)


def peterka_pika():    
    canvas.create_image(100, 300,image = photo30)

def peterka_pika2():    
    canvas.create_image(240, 300,image = photo30)

def peterka_pika3():    
    canvas.create_image(380, 300,image = photo30)

def peterka_pika4():    
    canvas.create_image(520, 300,image = photo30)


def peterka_chirva():    
    canvas.create_image(100, 300,image = photo43)

def peterka_chirva2():    
    canvas.create_image(240, 300,image = photo43)

def peterka_chirva3():    
    canvas.create_image(380, 300,image = photo43)

def peterka_chirva4():    
    canvas.create_image(520, 300,image = photo43)



def shesterka_buba():    
    canvas.create_image(100, 300,image = photo5)

def shesterka_buba2():    
    canvas.create_image(240, 300,image = photo5)

def shesterka_buba3():    
    canvas.create_image(380, 300,image = photo5)

def shesterka_buba4():    
    canvas.create_image(520, 300,image = photo5)


def shesterka_krest():    
    canvas.create_image(100, 300,image = photo18)

def shesterka_krest2():    
    canvas.create_image(240, 300,image = photo18)

def shesterka_krest3():    
    canvas.create_image(380, 300,image = photo18)

def shesterka_krest4():    
    canvas.create_image(520, 300,image = photo18)


def shesterka_pika():    
    canvas.create_image(100, 300,image = photo31)

def shesterka_pika2():    
    canvas.create_image(240, 300,image = photo31)

def shesterka_pika3():    
    canvas.create_image(380, 300,image = photo31)

def shesterka_pika4():    
    canvas.create_image(520, 300,image = photo31)


def shesterka_chirva():    
    canvas.create_image(100, 300,image = photo44)

def shesterka_chirva2():    
    canvas.create_image(240, 300,image = photo44)

def shesterka_chirva3():    
    canvas.create_image(380, 300,image = photo44)

def shesterka_chirva4():    
    canvas.create_image(520, 300,image = photo44)
    


def semerka_buba():    
    canvas.create_image(100, 300,image = photo6)

def semerka_buba2():    
    canvas.create_image(240, 300,image = photo6)

def semerka_buba3():    
    canvas.create_image(380, 300,image = photo6)

def semerka_buba4():    
    canvas.create_image(520, 300,image = photo6)


def semerka_krest():    
    canvas.create_image(100, 300,image = photo19)

def semerka_krest2():    
    canvas.create_image(240, 300,image = photo19)

def semerka_krest3():    
    canvas.create_image(380, 300,image = photo19)

def semerka_krest4():    
    canvas.create_image(520, 300,image = photo19)


def semerka_pika():    
    canvas.create_image(100, 300,image = photo32)

def semerka_pika2():    
    canvas.create_image(240, 300,image = photo32)

def semerka_pika3():    
    canvas.create_image(380, 300,image = photo32)

def semerka_pika4():    
    canvas.create_image(520, 300,image = photo32)


def semerka_chirva():    
    canvas.create_image(100, 300,image = photo45)

def semerka_chirva2():    
    canvas.create_image(240, 300,image = photo45)

def semerka_chirva3():    
    canvas.create_image(380, 300,image = photo45)

def semerka_chirva4():    
    canvas.create_image(520, 300,image = photo45)
    
    

def vosmerka_buba():    
    canvas.create_image(100, 300,image = photo7)

def vosmerka_buba2():    
    canvas.create_image(240, 300,image = photo7)

def vosmerka_buba3():    
    canvas.create_image(380, 300,image = photo7)

def vosmerka_buba4():    
    canvas.create_image(520, 300,image = photo7)


def vosmerka_krest():    
    canvas.create_image(100, 300,image = photo20)

def vosmerka_krest2():    
    canvas.create_image(240, 300,image = photo20)

def vosmerka_krest3():    
    canvas.create_image(380, 300,image = photo20)

def vosmerka_krest4():    
    canvas.create_image(520, 300,image = photo20)


def vosmerka_pika():    
    canvas.create_image(100, 300,image = photo33)

def vosmerka_pika2():    
    canvas.create_image(240, 300,image = photo33)

def vosmerka_pika3():    
    canvas.create_image(380, 300,image = photo33)

def vosmerka_pika4():    
    canvas.create_image(520, 300,image = photo33)


def vosmerka_chirva():    
    canvas.create_image(100, 300,image = photo46)

def vosmerka_chirva2():    
    canvas.create_image(240, 300,image = photo46)

def vosmerka_chirva3():    
    canvas.create_image(380, 300,image = photo46)

def vosmerka_chirva4():    
    canvas.create_image(520, 300,image = photo46)
    
    

def devyatka_buba():    
    canvas.create_image(100, 300,image = photo8)

def devyatka_buba2():    
    canvas.create_image(240, 300,image = photo8)

def devyatka_buba3():    
    canvas.create_image(380, 300,image = photo8)

def devyatka_buba4():    
    canvas.create_image(520, 300,image = photo8)


def devyatka_krest():    
    canvas.create_image(100, 300,image = photo21)

def devyatka_krest2():    
    canvas.create_image(240, 300,image = photo21)

def devyatka_krest3():    
    canvas.create_image(380, 300,image = photo21)

def devyatka_krest4():    
    canvas.create_image(520, 300,image = photo21)


def devyatka_pika():    
    canvas.create_image(100, 300,image = photo34)

def devyatka_pika2():    
    canvas.create_image(240, 300,image = photo34)

def devyatka_pika3():    
    canvas.create_image(380, 300,image = photo34)

def devyatka_pika4():    
    canvas.create_image(520, 300,image = photo34)


def devyatka_chirva():    
    canvas.create_image(100, 300,image = photo47)

def devyatka_chirva2():    
    canvas.create_image(240, 300,image = photo47)

def devyatka_chirva3():    
    canvas.create_image(380, 300,image = photo47)

def devyatka_chirva4():    
    canvas.create_image(520, 300,image = photo47)



def desyatka_buba():    
    canvas.create_image(100, 300,image = photo9)

def desyatka_buba2():    
    canvas.create_image(240, 300,image = photo9)

def desyatka_buba3():    
    canvas.create_image(380, 300,image = photo9)

def desyatka_buba4():    
    canvas.create_image(520, 300,image = photo9)

    
def desyatka_krest():    
    canvas.create_image(100, 300,image = photo22)

def desyatka_krest2():    
    canvas.create_image(240, 300,image = photo22)

def desyatka_krest3():    
    canvas.create_image(380, 300,image = photo22)

def desyatka_krest4():    
    canvas.create_image(520, 300,image = photo22)


def desyatka_pika():    
    canvas.create_image(100, 300,image = photo35)

def desyatka_pika2():    
    canvas.create_image(240, 300,image = photo35)

def desyatka_pika3():    
    canvas.create_image(380, 300,image = photo35)

def desyatka_pika4():    
    canvas.create_image(520, 300,image = photo35)


def desyatka_chirva():    
    canvas.create_image(100, 300,image = photo48)

def desyatka_chirva2():    
    canvas.create_image(240, 300,image = photo48)

def desyatka_chirva3():    
    canvas.create_image(380, 300,image = photo48)

def desyatka_chirva4():    
    canvas.create_image(520, 300,image = photo48)



def valet_buba():    
    canvas.create_image(100, 300,image = photo10)

def valet_buba2():    
    canvas.create_image(240, 300,image = photo10)

def valet_buba3():    
    canvas.create_image(380, 300,image = photo10)

def valet_buba4():    
    canvas.create_image(520, 300,image = photo10)


def valet_krest():    
    canvas.create_image(100, 300,image = photo23)

def valet_krest2():    
    canvas.create_image(240, 300,image = photo23)

def valet_krest3():    
    canvas.create_image(380, 300,image = photo23)

def valet_krest4():    
    canvas.create_image(520, 300,image = photo23)


def valet_pika():    
    canvas.create_image(100, 300,image = photo36)

def valet_pika2():    
    canvas.create_image(240, 300,image = photo36)

def valet_pika3():    
    canvas.create_image(380, 300,image = photo36)

def valet_pika4():    
    canvas.create_image(520, 300,image = photo36)


def valet_chirva():    
    canvas.create_image(100, 300,image = photo49)

def valet_chirva2():    
    canvas.create_image(240, 300,image = photo49)

def valet_chirva3():    
    canvas.create_image(380, 300,image = photo49)

def valet_chirva4():    
    canvas.create_image(520, 300,image = photo49)


def dama_buba():    
    canvas.create_image(100, 300,image = photo11)

def dama_buba2():    
    canvas.create_image(240, 300,image = photo11)

def dama_buba3():    
    canvas.create_image(380, 300,image = photo11)

def dama_buba4():    
    canvas.create_image(520, 300,image = photo11)


def dama_krest():    
    canvas.create_image(100, 300,image = photo24)

def dama_krest2():    
    canvas.create_image(240, 300,image = photo24)

def dama_krest3():    
    canvas.create_image(380, 300,image = photo24)

def dama_krest4():    
    canvas.create_image(520, 300,image = photo24)


def dama_pika():    
    canvas.create_image(100, 300,image = photo37)

def dama_pika2():    
    canvas.create_image(240, 300,image = photo37)

def dama_pika3():    
    canvas.create_image(380, 300,image = photo37)

def dama_pika4():    
    canvas.create_image(520, 300,image = photo37)


def dama_chirva():    
    canvas.create_image(100, 300,image = photo50)

def dama_chirva2():    
    canvas.create_image(240, 300,image = photo50)

def dama_chirva3():    
    canvas.create_image(380, 300,image = photo50)

def dama_chirva4():    
    canvas.create_image(520, 300,image = photo50)
    


def korol_buba():    
    canvas.create_image(100, 300,image = photo12)

def korol_buba2():    
    canvas.create_image(240, 300,image = photo12)

def korol_buba3():    
    canvas.create_image(380, 300,image = photo12)

def korol_buba4():    
    canvas.create_image(520, 300,image = photo12)


def korol_krest():    
    canvas.create_image(100, 300,image = photo25)

def korol_krest2():    
    canvas.create_image(240, 300,image = photo25)

def korol_krest3():    
    canvas.create_image(380, 300,image = photo25)

def korol_krest4():    
    canvas.create_image(520, 300,image = photo25)


def korol_pika():    
    canvas.create_image(100, 300,image = photo38)

def korol_pika2():    
    canvas.create_image(240, 300,image = photo38)

def korol_pika3():    
    canvas.create_image(380, 300,image = photo38)

def korol_pika4():    
    canvas.create_image(520, 300,image = photo38)
    

def korol_chirva():    
    canvas.create_image(100, 300,image = photo51)

def korol_chirva2():    
    canvas.create_image(240, 300,image = photo51)

def korol_chirva3():    
    canvas.create_image(380, 300,image = photo51)

def korol_chirva4():    
    canvas.create_image(520, 300,image = photo51)

    

def tuz_buba():    
    canvas.create_image(100, 300,image = photo13)

def tuz_buba2():    
    canvas.create_image(240, 300,image = photo13)

def tuz_buba3():    
    canvas.create_image(380, 300,image = photo13)

def tuz_buba4():    
    canvas.create_image(520, 300,image = photo13)


def tuz_krest():    
    canvas.create_image(100, 300,image = photo26)

def tuz_krest2():    
    canvas.create_image(240, 300,image = photo26)

def tuz_krest3():    
    canvas.create_image(380, 300,image = photo26)

def tuz_krest4():    
    canvas.create_image(520, 300,image = photo26)



def tuz_pika():    
    canvas.create_image(100, 300,image = photo39)

def tuz_pika2():    
    canvas.create_image(240, 300,image = photo39)

def tuz_pika3():    
    canvas.create_image(380, 300,image = photo39)

def tuz_pika4():    
    canvas.create_image(520, 300,image = photo39)    


def tuz_chirva():    
    canvas.create_image(100, 300,image = photo52)

def tuz_chirva2():    
    canvas.create_image(240, 300,image = photo52)

def tuz_chirva3():    
    canvas.create_image(380, 300,image = photo52)

def tuz_chirva4():    
    canvas.create_image(520, 300,image = photo52)




def karta_1():
    karta1 = random.choice(range(-1, 53))
    return karta1

def karta_2():
    karta2 = random.choice(range(-1, 53))
    return karta2

def karta_3():
    karta3 = random.choice(range(-1, 53))
    return karta3

def karta_4():
    karta4 = random.choice(range(-1, 53))
    return karta4


def razdacha_karti3():
    karta3 = karta_3()
    if karta3 == karta_1() & karta3 ==karta_2() :
        karta3 = random.choice(range(-1, 53))
        
    if karta3==0:
        dvoika_buba3()    
    if karta3==1:       
        troika_buba3()
    if karta3==2:
        chetverka_buba3()    
    if karta3==3:       
        peterka_buba3()
    if karta3==4:
        shesterka_buba3()    
    if karta3==5:       
        semerka_buba3()
    if karta3==6:
        vosmerka_buba3()    
    if karta3==7:       
        devyatka_buba3()
    if karta3==8:
        desyatka_buba3()    
    if karta3==9:       
        valet_buba3()
    if karta3==10:
        dama_buba3()    
    if karta3==11:       
        korol_buba3()
    if karta3==12:       
        tuz_buba3()

    if karta3==14:
        dvoika_krest3()    
    if karta3==15:       
        troika_krest3()
    if karta3==16:
        chetverka_krest3()    
    if karta3==17:       
        peterka_krest3()
    if karta3==18:
        shesterka_krest3()    
    if karta3==19:       
        semerka_krest3()
    if karta3==20:
        vosmerka_krest3()    
    if karta3==21:       
        devyatka_krest3()
    if karta3==22:
        desyatka_krest3()    
    if karta3==23:       
        valet_krest3()
    if karta3==24:
        dama_krest3()    
    if karta3==25:       
        korol_krest3()
    if karta3==26:       
        tuz_krest3()




    if karta3==27:
        dvoika_pika3()    
    if karta3==28:       
        troika_pika3()
    if karta3==29:
        chetverka_pika3()    
    if karta3==30:       
        peterka_pika3()
    if karta3==31:
        shesterka_pika3()    
    if karta3==32:       
        semerka_pika3()
    if karta3==33:
        vosmerka_buba3()    
    if karta3==34:       
        devyatka_pika3()
    if karta3==35:
        desyatka_pika3()    
    if karta3==36:       
        valet_pika3()
    if karta3==37:
        dama_pika3()    
    if karta3==38:       
        korol_pika3()
    if karta3==39:       
        tuz_pika3()

    if karta3==40:
        dvoika_chirva3()    
    if karta3==41:       
        troika_chirva3()
    if karta3==42:
        chetverka_chirva3()    
    if karta3==43:       
        peterka_chirva3()
    if karta3==44:
        shesterka_chirva3()    
    if karta3==45:       
        semerka_chirva3()
    if karta3==46:
        vosmerka_chirva3()    
    if karta3==47:       
        devyatka_chirva3()
    if karta3==48:
        desyatka_chirva3()    
    if karta3==49:       
        valet_chirva3()
    if karta3==50:
        dama_chirva3()    
    if karta3==51:       
        korol_chirva3()
    if karta3==52:       
        tuz_chirva3()






def razdacha_karti4():
        karta4 = karta_4()
        if karta4 == karta_1() & karta4 ==karta_2() & karta4 == karta_3():
            karta4 = random.choice(range(-1, 53))
        if karta4==0:
            dvoika_buba4()    
        if karta4==1:       
            troika_buba4()
        if karta4==2:
            chetverka_buba4()    
        if karta4==3:       
            peterka_buba4()
        if karta4==4:
            shesterka_buba4()    
        if karta4==5:       
            semerka_buba4()
        if karta4==6:
            vosmerka_buba4()    
        if karta4==7:       
            devyatka_buba4()
        if karta4==8:
            desyatka_buba4()    
        if karta4==9:       
            valet_buba4()
        if karta4==10:
            dama_buba4()    
        if karta4==11:       
            korol_buba4()
        if karta4==12:       
            tuz_buba4()

        if karta4==14:
            dvoika_krest4()    
        if karta4==15:       
            troika_krest4()
        if karta4==16:
            chetverka_krest4()    
        if karta4==17:       
            peterka_krest4()
        if karta4==18:
            shesterka_krest4()    
        if karta4==19:       
            semerka_krest4()
        if karta4==20:
            vosmerka_krest4()    
        if karta4==21:       
            devyatka_krest4()
        if karta4==22:
            desyatka_krest4()    
        if karta4==23:       
            valet_krest4()
        if karta4==24:
            dama_krest4()    
        if karta4==25:       
            korol_krest4()
        if karta4==26:       
            tuz_krest4()




        if karta4==27:
            dvoika_pika4()    
        if karta4==28:       
            troika_pika4()
        if karta4==29:
            chetverka_pika4()    
        if karta4==30:       
            peterka_pika4()
        if karta4==31:
            shesterka_pika4()    
        if karta4==32:       
            semerka_pika4()
        if karta4==33:
            vosmerka_buba4()    
        if karta4==34:       
            devyatka_pika4()
        if karta4==35:
            desyatka_pika4()    
        if karta4==36:       
            valet_pika4()
        if karta4==37:
            dama_pika4()    
        if karta4==38:       
            korol_pika4()
        if karta4==39:       
            tuz_pika4()

        if karta4==40:
            dvoika_chirva4()    
        if karta4==41:       
            troika_chirva4()
        if karta4==42:
            chetverka_chirva4()    
        if karta4==43:       
            peterka_chirva4()
        if karta4==44:
            shesterka_chirva4()    
        if karta4==45:       
            semerka_chirva4()
        if karta4==46:
            vosmerka_chirva4()    
        if karta4==47:       
            devyatka_chirva4()
        if karta4==48:
            desyatka_chirva4()    
        if karta4==49:       
            valet_chirva4()
        if karta4==50:
            dama_chirva4()    
        if karta4==51:       
            korol_chirva4()
        if karta4==52:       
            tuz_chirva4()




def shufle():
    b = 0
    c = a + b
    return c


    
root.mainloop()
