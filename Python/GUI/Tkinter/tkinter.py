from tkinter import messagebox
import random
import time

a = 0
b = 10



def hello():
   c=1
   h = 20
   w = 100
   for a in range(-1, b, 1):
       
       canvas.create_text(h,w,text="a = ",
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")
       
       canvas.create_text(h+35,w,text=a + 1,
       font="Verdana 12",anchor="w",justify=CENTER,fill="red")
       c = a + c
       w=w+20
       
       
   canvas.create_text(h,w,text="c = ",
   font="Verdana 12",anchor="w",justify=CENTER,fill="red") 
   canvas.create_text(h+35,w,text=c,
   font="Verdana 12",anchor="w",justify=CENTER,fill="red")

def hello2():
   h = 100
   w = 100  
   canvas.create_text(h,w,text="a = ",
   font="Verdana 12",anchor="w",justify=CENTER,fill="red") 
   canvas.create_text(h+35,w,text=a,
   font="Verdana 12",anchor="w",justify=CENTER,fill="red")
   
   canvas.create_text(h,w+20,text="b = ",
   font="Verdana 12",anchor="w",justify=CENTER,fill="red") 
   canvas.create_text(h+35,w+20,text=b,
   font="Verdana 12",anchor="w",justify=CENTER,fill="red")
    

    
root=Tk()
root.title("Циклы")
root.geometry('600x600')



# Игровое поле (можно изменить цвет, размер и т.д.
canvas = Canvas(root, bg="Medium Spring Green", width = 600, height = 600,)
canvas.place(x=0,y=0)


# Вообще не знаю нафига эта кнопка )))))
B1 = Button(canvas, text = "Вывести цикл", bg="Moccasin", command = hello,width = 10, height = 1)
B1.place(x = 20,y = 20)

B2 = Button(canvas, text = "Вывести числа", bg="Moccasin", command = hello2,width = 10, height = 1)
B2.place(x = 20,y = 50)


    
root.mainloop()
