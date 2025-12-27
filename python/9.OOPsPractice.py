# AREA AND PERIMETER OF A CIRCLE
# class Circle:
#     def __init__(self,rad):
#         self.radius = rad
#     def area(self):
#         return 3.14 * self.radius * self.radius
#     def per(self):
#         return 2*3.14*self.radius
    
# c1 = Circle(12)
# print(c1.area())
# print(c1.per())


# class Employe:
#     def __init__(self,name,dep,salary):
#         self.name = name
#         self.depar = dep
#         self.salary = salary

#     def show_details(self):
#         print(self.name)
#         print(self.depar)
#         print(self.salary)

# class Eng(Employe):
#     def __init__(self,name1,age):
#         self.name1 = name1
#         self.age = age
#         super().__init__("satyam pandey","software","40lakh")

# E1 = Eng("shivam pandey",25)
# E1.show_details()
# print(E1.name1)
# print(E1.age)


# GREATER AND LESS THAN OPERATOR USING DUNDAR FUNCTION 
# class A:
#     def __init__(self,a):
#         self.a = a


#     def __gt__(self,num2):
#         print(num2.a)
#         return (self.a>num2.a)
    
# c1 =  A(4)
# c2 = A(5)
# print(c1>c2)