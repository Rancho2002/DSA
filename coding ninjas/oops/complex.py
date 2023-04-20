class Complex:
    def __init__(self,real,img):
        self.real=real
        self.img=img    

    def plus(self,c2):
        # c1.real+c2.real
        #c1.img+c2.img
        self.real=self.real+c2.real
        self.img=self.img+c2.img

    def multiply(self,c2:"Complex"):
        # self.real=self.real*c2.real-self.img*c2.img
        # self.img=self.real*c2.img+self.img*c2.real #! this produce wrong output as self.real changed in 1st line
        newReal=self.real*c2.real-self.img*c2.img
        newImg=self.real*c2.img+self.img*c2.real
        self.real=newReal
        self.img=newImg

    def print(self):
        if self.img<0:
            print(self.real," - ",-self.img,"i",sep="")
        else:
            print(self.real," + ",self.img,"i",sep="")


c1=Complex(4,-3)
c2=Complex(1,9)
c1.print()
c2.print()
# c1.plus(c2)
# c1.print()
c1.multiply(c2)
c1.print()