# class Student:  # This is the class Which is called bluePrint
#     Name = "satyam"
#     Rollno = 24262
#     CGPA = 9.5
#     City = "Kanpur"

# s1 = Student()  # This is an object
# print(s1.Name)
# print(s1.CGPA)
# print(s1.City)
# print(s1.Rollno)

# class Car:
#     def __init__(self):  # instructor which is a function , Execute always when a object is being initiated
#         print("Hello world!")
#         print(self)
# s1 = Car()
# print(s1)

# class City:

#     name1 = "satyam Pandey"
#     def __init__(): # Default instructor
#         pass
#     def __init__(self,Name,famouse,River,Block): # this is parameterized instructor
#         self.name = Name
#         self.Famouse = famouse
#         self.river = River
#         self.block = Block
#         print("Let us know About the famouse City in our State.")


# c1 = City("kanpur","Lather","Ganga","Kalyanpur")
# print(c1.Famouse)

# c2 = City("Delhi","","","")
# print(c2.name)
# print(c2.name1,c2.name)

# class student:
#     college = "KNIT" # class attributes is common for all objects
#     CityOf_college = "sultanpur"
#     def __init__(self,name,Rollno):
#         self.name  = name  # object attributes Which is defined for perticular objects
#         self.Rollno = Rollno


# s1 = student("Satyam Pandey", 24262)
# s2 = student("Yash Shakya", 24282)
# print(s1.name,s1.Rollno,s1.college,s1.CityOf_college)
# print(s2.name,s2.Rollno,s2.college,s2.CityOf_college)


# class Student:
#     College  =  "KNIT"

#     def __init__(self,name,rollno):
#         self.name = name
#         self.rollno = rollno
    
#     def Wellcome(self): # All about Methods
#         print("Hello",self.name)

#     def Rollno(self):
#         return self.rollno
    

# s1 = Student("Satyam Pandey",24262)
# s1.Wellcome()
# print(s1.Rollno())


# class Student:
#     def __init__(self,name,marks):
#         self.name = name
#         self.marks = marks

#     def get_avg(self):
        
#         sum = 0
#         for value in self.marks:
#             sum +=value
#         print("Hi",self.name," Your average Score is :-", sum/3)


# s1 = Student("Satyam Pandey",[93,94,95])
# s1.get_avg()
# s1.name = "Sundaram Pandey" # update Your data
# s1.get_avg()


# class Account:

#     def __init__(self,acc,balance):
#         self.acc = acc
#         self.balance = balance

#     def credit(self,amount):
#         self.balance += amount
#         print(amount,"amount is Credited")
#         self.bal()

#     def debit(self,amount):
#         self.balance -= amount
#         print(amount,"amount is debited")
#         self.bal()

#     def bal(self):
#         print("Your Balance is :-",self.balance)

# acc1 = Account(23432,4000)
# acc1.credit(1000)
# acc1.debit(2000)



# class Static:
#     @staticmethod #decorator which is used to use for executing a normal function without using self 
#     def hello():
#         print("HI My Name is Satyam Pandey")

# s1 = Static()
# s1.hello()