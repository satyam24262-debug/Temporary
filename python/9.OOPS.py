# class Student:

#     def __init__(self,name):
#         self.name = name

# s1 = Student("Satyam Pandey")
# print(s1)
# del s1
# print(s1)
# print(s1.name)
# del s1.name
# print(s1.name)


# TO MAKE PUBLIC AND PRIVATE THE DATA
# class Account:
#     def __init__(self,Acc_no,Acc_pass):
#         self.Acc_no = Acc_no
#         self.__Acc_pass = Acc_pass # for making the private data which can be accessed to outside the class
    
#     def hello(self):
#         print(self.__Acc_pass) # Private data  can be accessed inside the class

# Ac1 = Account(2342,"abcde")
# print(Ac1.Acc_no)
# Ac1.hello()
# print(Ac1.Acc_pass)


# class Student:

#     def __init__(self,name):
#         self.name = name

#     def __hello(self):
#         print(self.name)

# s1 = Student("Satyam Pandey")
# s1.__hello() # not possible to do call a function



# class Student:
#     def __init__(self,name):
#         self.name = name

#     def __hello(self):
#         print(self.name)

#     def Welcome(self):
#         self.__hello()

# s1 = Student("Satyam Pandey")
# s1.Welcome()


# INHERITANCE - WHEN PROPERTISE OF PARENT CLASS IS INHERITED BY CHILDREN CLASS/

# class Car:
#     @staticmethod
#     def start():
#         print("Car Started..")

#     @staticmethod
#     def stop():
#         print("Car Stopped..")

# class fortuner(Car):  # IT INHERITED THE PROPERTIES OF THE CHILDREN CLASS
#     def __init__(self,name):
#         self.Car_name = name
        

# c1 = fortuner("Fortuner")
# c1.start()

# MULTI-LEVEL INHERITANCE -  but you can not the properties of parent constructor
# class Car:

#     @staticmethod
#     def start():
#         print("Car Started..")

#     @staticmethod
#     def stop():
#         print("Car Stopped..")

# class Toyota(Car):
#     # bran = "fortuner"
#     def __init__(self,brand):
#         self.brand = brand

# class fortuner(Toyota):

#     def __init__(self,type):
#         self.type = type


# c1 = Toyota("fortuner")
# c2 = fortuner("diesel")
# c2.start()
# # print(c2.br) # it is ok beacause of fortuner object only access those properties which is not lie inside the toyota constructor



# MULTIPLE INHERITANCE
# class A:
#     print("Hello A")
# class B:
#     print("Hello B")
# class C(A,B):

#     def c(self):
#         print("Hello C")

# a = C()
# a.c()


# USE OF SUPER() METHOD WHICH IS USED TO ACCESSED THE PROPERTISE OF PARENT CLASS CONSTRUCTOR

# class Car:
#     def __init__(self,type):
#         self.type = type

# class Toyota(Car):
#     def __init__(self,name,type):
#         self.name  = name
#         super().__init__(type) #calling to parent constructor

# c1 = Toyota("Fortuner","Electric")
# print(c1.type)


# CLASS METHOD WHICH IS USED TO MODIFY THE DATA INSIDE THE CLASS

# class Student:
#     name = "Satyam Pandey" #change to Shivam Pandey

#     @classmethod
#     def change_name(cls,name):
#         cls.name = name

# s1 = Student()
# s1.change_name("Shivam Pandey")
# print(s1.name)



#@PROPERTY METHOD

# class Student:
#     def __init__(self,phy,che,math):
#         self.phy = phy
#         self.chem = che
#         self.math = math

#     @property
#     def percentage(self):
#         per =  str((self.chem+self.math+self.phy)/3) +("%")
#         return per
    
# s1 = Student(98,97,99)
# print(s1.percentage)
# s1.phy =  86
# print(s1.percentage)




# DUNDER FUNCTION , WHICH IS USED TO OVERLOADING IN OPERATOR

# class Complex:

#     def __init__(self,real,img):
#         self.real = real
#         self.img = img

#     def Show(self):
#         print(self.real,"i +",self.img,"j")


#     def __add__(self,num2):
#         newReal = self.real + num2.real
#         newImg = self.img + num2.img
#         return Complex(newReal,newImg)

# c1 = Complex(2,3)
# c1.Show()
# c2 = Complex(4,5)
# c2.Show()

# c3 = c1 + c2
# print(c3.Show())