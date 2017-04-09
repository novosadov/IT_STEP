class Critter(object):
    def __init__(self, name):
        print("A new critter has been born!")
        self.name = name

    def __str__(self):
        rep = "Critter object with name: "+ self.name + "\n"
        return rep

    def talk(self):
        print("\nHi. I'm instance of class Critter.")

    def out(self):
        print("Be-be-Be...")

class Critter2(object):
    def __init__(self):
        print("A new critter2 has been born!")

    def talk(self):
        print("\nHi. I'm instance of class Critter.")

    def out(self):
        print("Be-be-Be...")

        

crit1 = Critter("Poochie")
crit1.talk()

crit2 = Critter("Randolph")
crit2.talk()

print("Printing crit1:")
print(crit1)

print("Directly accessing crit1.name:")
print(crit1.name)
