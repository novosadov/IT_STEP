from tkinter import *
from tkinter.messagebox import *
from tkinter import messagebox
import webbrowser



def button_clicked1():
    close_win()

def button_clicked2():
    close_win()

def button_clicked3():
    close_win()

def button_clicked4():
    close_win()

def button_clicked5():
    close_win()

def button_clicked6():
    close_win()

def button_clicked7():
    close_win()

def button_clicked8():
    close_win()

def button_clicked9():
    close_win()

def button_clicked10():
    close_win()

def button_clicked11():
    close_win()

def button_clicked12():
    close_win()

def button_clicked13():
    close_win()

def button_clicked14():
    close_win()

def button_clicked15():
    close_win()

def button_clicked16():
    close_win()

def button_clicked17():
    close_win()

def button_clicked18():
    close_win()

def button_clicked19():
    close_win()

def button_clicked20():
    close_win()

def button_clicked21():
    close_win()

def button_clicked22():
    close_win()

def button_clicked23():
    close_win()

def button_clicked24():
    close_win()

def button_clicked25():
    close_win()

def button_clicked26():
    close_win()

def button_clicked27():
    close_win()

def button_clicked28():
     webbrowser.open('''http://www.calculator888.ru/''')

def button_clicked29():
     webbrowser.open('''http://orakul.com/''')

def button_clicked30():
     webbrowser.open('''http://www.pogoda.by/''')

def button_clicked31():
     webbrowser.open('''https://www.nbrb.by/statistics/rates/ratesDaily.asp''')


def close_win():
     if askyesno("Exit", "Как уже уходите?"):
          root.destroy()
          
def close():
    root.destroy()
    root.quit()          

root = Tk()

root.title("Калькулятор")
root.geometry("375x480")

canvas = Canvas(root, bg="azure2", width = 9000, height = 6000,)
canvas.place(x=0,y=0)

button1 = Button(canvas, width=5, height=2, bg="red", text=u" ON/C ", command=button_clicked1)
button1.place(x=20,y=420)

button2 = Button(canvas, width=5, height=2, bg="cyan", text=u" 0 ", command=button_clicked2)
button2.place(x=90,y=420)

button3 = Button(canvas, width=5, height=2, bg="cyan", text=u" 00 ", command=button_clicked3)
button3.place(x=140,y=420)

button4 = Button(canvas, width=5, height=2, bg="cyan", text=u" . ", command=button_clicked4)
button4.place(x=190,y=420)

button5 = Button(canvas, width=5, height=2, bg="red", text=u" CE ", command=button_clicked5)
button5.place(x=20,y=375)

button6 = Button(canvas, width=5, height=2, bg="cyan", text=u" 1 ", command=button_clicked6)
button6.place(x=90,y=375)

button7 = Button(canvas, width=5, height=2, bg="cyan", text=u" 2 ", command=button_clicked7)
button7.place(x=140,y=375)

button8 = Button(canvas, width=5, height=2, bg="cyan", text=u" 3 ", command=button_clicked8)
button8.place(x=190,y=375)

button9 = Button(canvas, width=5, height=2, bg="cyan", text=u" -> ", command=button_clicked9)
button9.place(x=20,y=330)

button10 = Button(canvas, width=5, height=2, bg="cyan", text=u" 4 ", command=button_clicked10)
button10.place(x=90,y=330)

button11 = Button(canvas, width=5, height=2, bg="cyan", text=u" 5 ", command=button_clicked11)
button11.place(x=140,y=330)

button12 = Button(canvas, width=5, height=2, bg="cyan", text=u" 6 ", command=button_clicked12)
button12.place(x=190,y=330)

button13 = Button(canvas, width=5, height=2, bg="cyan", text=u" OFF ", command=button_clicked13)
button13.place(x=20,y=285)

button14 = Button(canvas, width=5, height=2, bg="cyan", text=u" 7 ", command=button_clicked14)
button14.place(x=90,y=285)

button15 = Button(canvas, width=5, height=2, bg="cyan", text=u" 8 ", command=button_clicked15)
button15.place(x=140,y=285)

button16 = Button(canvas, width=5, height=2, bg="cyan", text=u" 9 ", command=button_clicked16)
button16.place(x=190,y=285)

button17 = Button(canvas, width=5, height=2, bg="cyan", text=u" +/- ", command=button_clicked17)
button17.place(x=140,y=225)

button18 = Button(canvas, width=5, height=2, bg="cyan", text=u" MRC ", command=button_clicked18)
button18.place(x=190,y=225)

button19 = Button(canvas, width=5, height=2, bg="cyan", text=u" M- ", command=button_clicked19)
button19.place(x=260,y=225)

button20 = Button(canvas, width=5, height=2, bg="cyan", text=u" M+ ", command=button_clicked20)
button20.place(x=310,y=225)

button21 = Button(canvas, width=5, height=2, bg="cyan", text=u" % ", command=button_clicked21)
button21.place(x=260,y=285)

button22 = Button(canvas, width=5, height=2, bg="cyan", text=u" √ ", command=button_clicked22)
button22.place(x=310,y=285)

button23 = Button(canvas, width=5, height=2, bg="cyan", text=u" X ", command=button_clicked23)
button23.place(x=260,y=330)

button24 = Button(canvas, width=5, height=2, bg="cyan", text=u" ÷ ", command=button_clicked24)
button24.place(x=310,y=330)

button25 = Button(canvas, width=5, height=2, bg="cyan", text=u" - ", command=button_clicked25)
button25.place(x=310,y=375)

button26 = Button(canvas, width=5, height=2, bg="cyan", text=u" = ", command=button_clicked26)
button26.place(x=310,y=420)

button27 = Button(canvas, width=5, height=5, bg="cyan", text=u" + ", command=button_clicked27)
button27.place(x=260,y=375)

button28 = Button(canvas, width=15, height=2, bg="cyan", text=u" Калькулятор\n онлайн ", command=button_clicked28)
button28.place(x=20,y=225)

button29 = Button(canvas, width=15, height=2, bg="cyan", text=u" Ежедневный\n гороскоп ", command=button_clicked29)
button29.place(x=20,y=165)

button30 = Button(canvas, width=12, height=2, bg="cyan", text=u" Прогноз\n погоды ", command=button_clicked30)
button30.place(x=140,y=165)

button31 = Button(canvas, width=15, height=2, bg="cyan", text=u" Курсы\n валют ", command=button_clicked31)
button31.place(x=240,y=165)



root.mainloop()
