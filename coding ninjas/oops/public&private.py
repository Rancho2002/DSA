class Student:
    # __percentage=40/100

    def __init__(self,name,roll,marks) -> None: ##! name and roll are public and percentage and marks are private which can be accessed inside class only
        self.__percentage=40
        self.name=name
        self.roll=roll
        self.__marks=marks
    
    def isPassed(self):
        if(self.__marks>self.__percentage):
            return True
        return False

s1=Student("Arijit",17,99)
# print(s1.__marks) #! return error because marks is private
print(s1._Student__marks) #? Hack to access private variable
s1._Student__marks=4 #* Manipulated the data and changed the marks...WTF
print(s1._Student__marks) #? Hack to access private variable


s2=Student("Mogembo",72,10)
print(s1.isPassed())
print(s2.isPassed())