from tkinter import *
from tkinter.messagebox import *
from tkinter import messagebox
import webbrowser
from math import *


def evaluate(event):
    res.configure(str(eval(entry.get())))

def button_clicked1():
    ent.delete(0, END)    

def button_clicked2():
    ent.insert(35, "0")

def button_clicked3():
    ent.insert(35, "00")

def button_clicked4():    
    ent.insert(35, ".")   

def button_clicked5():
    ent.delete(0, END)   

def button_clicked6():
    ent.insert(35, "1")

def button_clicked7():
    ent.insert(35, "2")

def button_clicked8():
    ent.insert(35, "3")

def button_clicked9():
    ent.delete(0, END)

def button_clicked10():
    ent.insert(35, "4")

def button_clicked11():
    ent.insert(35, "5")

def button_clicked12():
    ent.insert(35, "6")

def button_clicked13():
    close_win()    

def button_clicked14():
    ent.insert(35, "7")

def button_clicked15():
    ent.insert(35, "8")

def button_clicked16():
    ent.insert(35, "9")

def button_clicked17():
    webbrowser.open('''http://www.calculator888.ru/''')      
    
def button_clicked18():
   webbrowser.open('''http://www.calculator888.ru/''') 

def button_clicked19():
   webbrowser.open('''http://www.calculator888.ru/''') 

def button_clicked20():
    webbrowser.open('''http://www.calculator888.ru/''')

def button_clicked21():
    ent.insert(35, "%")

def button_clicked22():
    ent.insert(35, "**")

def button_clicked23():
    ent.insert(35, "*")
    
def button_clicked24():
    ent.insert(35, "/")

def button_clicked25():
    ent.insert(35, "-")

def button_clicked26():
    res = eval(ent.get())
    ent.delete(0, END)
    ent.insert(35, res)    
    
def button_clicked27():
    ent.insert(35, "+")

def button_clicked28():
     webbrowser.open('''http://www.calculator888.ru/''')

def button_clicked29():
     webbrowser.open('''http://orakul.com/''')

def button_clicked30():
     webbrowser.open('''http://www.pogoda.by/''')

def button_clicked31():
     webbrowser.open('''https://vk.com/atemik84''')


def close_win():
     if askyesno("Exit", "Как уже уходите?"):
          root.destroy()
          
def close():
    root.destroy()
    root.quit()          

root = Tk()

root.title("Калькулятор")
root.geometry("375x400")

canvas = Canvas(root, bg="bisque2",bd=30, width = 9000, height = 6000)
canvas.place(x=0,y=0)

ent = Entry(canvas, width=52, bd=10, justify=RIGHT )
ent.place(x=20,y=20)


button1 = Button(canvas, width=5, height=2, bg="red",bd=4, text=u" ON/C ", command=button_clicked1)
button1.place(x=20,y=340)

button2 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 0 ", command=button_clicked2)
button2.place(x=90,y=340)

button3 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 00 ", command=button_clicked3)
button3.place(x=140,y=340)

button4 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" . ", command=button_clicked4)
button4.place(x=190,y=340)

button5 = Button(canvas, width=5, height=2, bg="red",bd=4, text=u" CE ", command=button_clicked5)
button5.place(x=20,y=295)

button6 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 1 ", command=button_clicked6)
button6.place(x=90,y=295)

button7 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 2 ", command=button_clicked7)
button7.place(x=140,y=295)

button8 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 3 ", command=button_clicked8)
button8.place(x=190,y=295)

button9 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" -> ", command=button_clicked9)
button9.place(x=20,y=250)

button10 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 4 ", command=button_clicked10)
button10.place(x=90,y=250)

button11 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 5 ", command=button_clicked11)
button11.place(x=140,y=250)

button12 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 6 ", command=button_clicked12)
button12.place(x=190,y=250)

button13 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" OFF ", command=button_clicked13)
button13.place(x=20,y=205)

button14 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 7 ", command=button_clicked14)
button14.place(x=90,y=205)

button15 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 8 ", command=button_clicked15)
button15.place(x=140,y=205)

button16 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" 9 ", command=button_clicked16)
button16.place(x=190,y=205)

button17 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" +/- ", command=button_clicked17)
button17.place(x=140,y=145)

button18 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" MRC ", command=button_clicked18)
button18.place(x=190,y=145)

button19 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" M- ", command=button_clicked19)
button19.place(x=260,y=145)

button20 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" M+ ", command=button_clicked20)
button20.place(x=310,y=145)

button21 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" % ", command=button_clicked21)
button21.place(x=260,y=205)

button22 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" √ ", command=button_clicked22)
button22.place(x=310,y=205)

button23 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" X ", command=button_clicked23)
button23.place(x=260,y=250)

button24 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" ÷ ", command=button_clicked24)
button24.place(x=310,y=250)

button25 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" - ", command=button_clicked25)
button25.place(x=310,y=295)

button26 = Button(canvas, width=5, height=2, bg="cyan",bd=4, text=u" = ", command=button_clicked26)
button26.place(x=310,y=340)

button27 = Button(canvas, width=5, height=5, bg="cyan",bd=4, text=u" + ", command=button_clicked27)
button27.place(x=260,y=295)

button28 = Button(canvas, width=15, height=2, bg="cyan",bd=4, text=u" Калькулятор\n онлайн ", command=button_clicked28)
button28.place(x=20,y=145)

button29 = Button(canvas, width=15, height=2, bg="cyan",bd=4,text=u" Ежедневный\n гороскоп ", command=button_clicked29)
button29.place(x=20,y=85)

button30 = Button(canvas, width=12, height=2, bg="cyan",bd=4, text=u" Прогноз\n погоды ", command=button_clicked30)
button30.place(x=140,y=85)

button31 = Button(canvas, width=15, height=2, bg="cyan",bd=4, text=u" Помощь ", command=button_clicked31)
button31.place(x=240,y=85)

root.mainloop()
