from tkinter import *
from tkinter.messagebox import *
from tkinter import messagebox
import webbrowser

def button_clicked2():
    canvas.create_text(200,20,text="Текст\n",
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")

def button_clicked3():
    if askyesno("Очистить", "Вы действительно хотите всё очистить?"):
        canvas.delete("all")

def button_clicked4():
    webbrowser.open('''https://www.google.ru/maps/place/
%D0%9A%D0%BE%D0%BC%D0%BF%D1%8C%D1%8E%D1%82%D0%B5%D1%80%D0%BD%D0%B0%D1%8F+
%D0%90%D0%BA%D0%B0%D0%B4%D0%B5%D0%BC%D0%B8%D1%8F+%D0%A8%D0%90%D0%93+
%D0%9C%D0%B8%D0%BD%D1%81%D0%BA/@53.8887548,27.5435026,21z/data=
!4m5!3m4!1s0x46dbcfa656606d61:0x85e0ec8ffda77e14!8m2!3d53.8888113!4d27.5434774''')
        

def button_clicked1():
    close_win()

def close_win():
     if askyesno("Exit", "Как уже уходите?"):
          root.destroy()
          
def close():
    root.destroy()
    root.quit()          

root = Tk()

root.title("Детский сад")
root.geometry("1768x900")

canvas = Canvas(root, bg="cyan2", width = 9000, height = 6000,)
canvas.place(x=100,y=0)

button1 = Button(root, width=12, height=2, bg="red", text=u"  Выход ", command=button_clicked1)
button1.place(x=0,y=0)

button2 = Button(root, width=12, height=2, bg="spring green", text=u"  Текст ", command=button_clicked2)
button2.place(x=0,y=45)

button3 = Button(root, width=12, height=2, bg="spring green", text=u"  Очистить ", command=button_clicked3)
button3.place(x=0,y=90)

button4 = Button(root, width=12, height=2, bg="spring green", text=u"  Посмотреть\n со спутника", command=button_clicked4)
button4.place(x=0,y=135)


root.mainloop()

