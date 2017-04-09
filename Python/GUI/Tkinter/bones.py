from tkinter import *
from tkinter.messagebox import *
from tkinter import messagebox
import random
import time


# Не знаю зачем, но вдруг пригодиться, после нажатия на кнопку выводит надпись "Hello World"
def hello():
   messagebox.showinfo("Say Hello", "Hello World")
   creat_win()
   
def hello2():
   messagebox.showinfo("Say Hello2", "Hello World2")
   creat_win()

def hello3():
    kubik1 = random.randint(1, 6)
    kubik2 = random.randrange(6) + 1
    if kubik1==1:
        kubik_edenica()       

    if kubik1==2:
        kubik_dvoika()        

    if kubik1==3:
        kubik_troika()

    if kubik1==4:
        kubik_chetverka()

    if kubik1==5:
        kubik_peterka()
        
    if kubik1==6:
       kubik_shesterka()
       

    if kubik2==1:
        kubik_edenica2()       

    if kubik2==2:
        kubik_dvoika2()        

    if kubik2==3:
        kubik_troika2()

    if kubik2==4:
        kubik_chetverka2()

    if kubik2==5:
        kubik_peterka2()
        
    if kubik2==6:
       kubik_shesterka2()

    
    

   
def button_clicked1():
    #При нажатии на кнопку бросокгенерируются случайные числа
    #отрисовываются кубики на экране
    kubik1 = random.randint(1, 6)
    kubik2 = random.randrange(6) + 1
    if kubik1==1:
        kubik_edenica()       

    if kubik1==2:
        kubik_dvoika()        

    if kubik1==3:
        kubik_troika()

    if kubik1==4:
        kubik_chetverka()

    if kubik1==5:
        kubik_peterka()
        
    if kubik1==6:
       kubik_shesterka()
       

    if kubik2==1:
        kubik_edenica2()       

    if kubik2==2:
        kubik_dvoika2()        

    if kubik2==3:
        kubik_troika2()

    if kubik2==4:
        kubik_chetverka2()

    if kubik2==5:
        kubik_peterka2()
        
    if kubik2==6:
       kubik_shesterka2()    
        
    total = kubik1 + kubik2 # Общее количество очков с двух кубиков


    #Вы водит на экран количество очков
    canvas.create_text(20,200,text="Очки первого кубика:",
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")
    canvas.create_text(250,200,text=kubik1,
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")
    canvas.create_text(20,220,text="Очки второго кубика:",
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")
    canvas.create_text(250,220,text=kubik2,
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")
    canvas.create_text(20,240,text="Сумма очков:",
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")    
    canvas.create_text(250,240,text=total,
       font="Verdana 12",anchor="w",justify=CENTER,fill="red") 

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
root.title("Игра кости")
root.geometry('1000x600')


# Меню
m = Menu(root)
root.config(menu=m) 
fm = Menu(m)
m.add_cascade(label="Файл",menu=fm)
hm = Menu(m)
fm.add_command(label="Exit",command=close_win)
m.add_cascade(label="Помощь",menu=hm)

txt = Text(root,width=40,height=15,font="12")
txt.pack()


# Кнопка выход из приложения
button3 = Button(root, width=12, height=2, bg="red", text=u"  Выход ", command=button_clicked3)
button3.place(x=0,y=0)

# Игровое поле (можно изменить цвет, размер и т.д.
canvas = Canvas(root, bg="Medium Spring Green", width = 900, height = 600,)
canvas.place(x=100,y=0)




# Создаёт надпись на игровом поле, может и не надо будет (фиг знает)
canvas.create_text(200,20,text="Для начала игры выберите противника\n",
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")


#Выводит дочернее окно пока не вкурсе как его на передний план выкинуть
def creat_win():
    win = Toplevel(canvas,relief=SUNKEN,bd=10,bg="lightblue")
    win.title("Дочернее окно")
    win.minsize(width=1000,height=1000)    
    canvas2 = Canvas(win, bg="Medium Spring Green", width = 900, height = 600,)
    canvas2.place(x=100,y=0)
    button1 = Button(win, width=12, height=2, bg="green", text=u"\nБросок\n", command=button_clicked1)
    button1.place(x=0,y=0)
    button2 = Button(win, width=12, height=2, bg="red", text=u"  Очистить  \n всё ", command=button_clicked2)
    button2.place(x=0,y=40)




# Вообще не знаю нафига эта кнопка )))))
B1 = Button(canvas, text = "Игра с компьютером", command = hello)
B1.place(x = 250,y = 250)

B2 = Button(canvas, text = "Игра с между двумя пользователями", command = hello2)
B2.place(x = 400,y = 250)





# Отрисовка кубиков
def kubik_edenica():
    canvas.create_rectangle(50, 50, 150, 150, fill="Cornflower Blue")     
    canvas.create_oval([90,90],[110,110],fill="black")

def kubik_edenica2():
    canvas.create_rectangle(250, 50, 350, 150, fill="Cornflower Blue")
    canvas.create_oval([290,90],[310,110],fill="black")

def kubik_dvoika():
    canvas.create_rectangle(50, 50, 150, 150, fill="Cornflower Blue") 
    canvas.create_oval([60,60],[80,80],fill="black")
    canvas.create_oval([120,120],[140,140],fill="black")

def kubik_dvoika2():
    canvas.create_rectangle(250, 50, 350, 150, fill="Cornflower Blue")
    canvas.create_oval([260,60],[280,80],fill="black")
    canvas.create_oval([320,120],[340,140],fill="black")
    

def kubik_troika():
    canvas.create_rectangle(50, 50, 150, 150, fill="Cornflower Blue") 
    canvas.create_oval([60,60],[80,80],fill="black")
    canvas.create_oval([120,120],[140,140],fill="black")    
    canvas.create_oval([90,90],[110,110],fill="black")

def kubik_troika2():
    canvas.create_rectangle(250, 50, 350, 150, fill="Cornflower Blue")
    canvas.create_oval([260,60],[280,80],fill="black")
    canvas.create_oval([320,120],[340,140],fill="black")    
    canvas.create_oval([290,90],[310,110],fill="black")    


def kubik_chetverka():
    canvas.create_rectangle(50, 50, 150, 150, fill="Cornflower Blue") 
    canvas.create_oval([60,60],[80,80],fill="black")
    canvas.create_oval([120,120],[140,140],fill="black")
    canvas.create_oval([60,120],[80,140],fill="black")
    canvas.create_oval([120,60],[140,80],fill="black")

def kubik_chetverka2():
    canvas.create_rectangle(250, 50, 350, 150, fill="Cornflower Blue")
    canvas.create_oval([260,60],[280,80],fill="black")
    canvas.create_oval([320,120],[340,140],fill="black")
    canvas.create_oval([260,120],[280,140],fill="black")
    canvas.create_oval([320,60],[340,80],fill="black")
   
   

def kubik_peterka():
    canvas.create_rectangle(50, 50, 150, 150, fill="Cornflower Blue") 
    canvas.create_oval([60,60],[80,80],fill="black")
    canvas.create_oval([120,120],[140,140],fill="black")
    canvas.create_oval([60,120],[80,140],fill="black")
    canvas.create_oval([120,60],[140,80],fill="black")
    canvas.create_oval([90,90],[110,110],fill="black")

def kubik_peterka2():
    canvas.create_rectangle(250, 50, 350, 150, fill="Cornflower Blue")
    canvas.create_oval([260,60],[280,80],fill="black")
    canvas.create_oval([320,120],[340,140],fill="black")
    canvas.create_oval([260,120],[280,140],fill="black")
    canvas.create_oval([320,60],[340,80],fill="black")
    canvas.create_oval([290,90],[310,110],fill="black")


def kubik_shesterka():
    canvas.create_rectangle(50, 50, 150, 150, fill="Cornflower Blue")    
    canvas.create_oval([60,60],[80,80],fill="black")
    canvas.create_oval([120,120],[140,140],fill="black")
    canvas.create_oval([60,120],[80,140],fill="black")
    canvas.create_oval([120,60],[140,80],fill="black")
    canvas.create_oval([60,90],[80,110],fill="black")
    canvas.create_oval([120,90],[140,110],fill="black")
    

def kubik_shesterka2():
    canvas.create_rectangle(250, 50, 350, 150, fill="Cornflower Blue") 
    canvas.create_oval([260,60],[280,80],fill="black")
    canvas.create_oval([320,120],[340,140],fill="black")
    canvas.create_oval([260,120],[280,140],fill="black")
    canvas.create_oval([320,60],[340,80],fill="black")
    canvas.create_oval([260,90],[280,110],fill="black")
    canvas.create_oval([320,90],[340,110],fill="black")
    

    
root.mainloop()
