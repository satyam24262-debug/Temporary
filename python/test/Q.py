# Strings operations are used for basic manipulation of the string by using operator.

# name = 'Satyam Pandey'
# print(name)
# print(name[0])
# print(name.replace("a","A"))
# print("Satyam Pandey"+" Sundaram Pandey")
# print(name[1:4])
# print(name*5)
# print("Satyam" in name)
# print("Satyam"=="satyam")

#String Methods are the built in function for advance handling

# print(name.capitalize())
# print(name.lower())
# print(name.upper())
# print(name.count("a"))
# print(type(name))
# print(name.find('y'))
# print(len(name))
# print(name.replace("a","A"))
# print(name.split(" "))

# Q1. Check input no is prime or not
# a = int(input("Enter a :-"))
# def greatest(a):
#     flag = 0
#     for i in range(2,a):
#         if(a%i==0):
#             flag=1
#     if(flag==1 and a>1):
#         print("Number is not a prime")
#     else:
#         print("Number is prime.")

# greatest(a)

# Q2. Program to genrate Fibonacci Series
# def Fib(n):
#     a,b = 0,1
#     for i in range(1,n+1):
#         c = a+b
#         print(a,end=" ")
#         a=b
#         b=c

# Fib(int(input("Enter number = ")))

# Q3. Factorial using While loop
# n = int(input("Enter number = "))
# def fact(n):
#     fact = 1
#     while(n>0):
#         fact *=n
#         n -=1
#     return fact

# fact = fact(n)
# print(fact)

# Q4. Reverse a string
# st = input("Enter a string = ")
# rev_str = st[::-1]
# print(rev_str)

# Q5. Count Vowel of the String
# st = input("Enter a String = ")
# def vow_count(s):
#     count = 0
#     for i in s:
#         if i in "aeiouAEIOU":
#             count +=1
#     return count

# print("Number of vowel = ",vow_count(st))

# Q6. Largest Element in list
# lst = [1,2,3,6,4]
# def large(l):
#     largest = l[0]
#     for i in l:
#         if(i>largest):
#             largest = i
#     return largest
# print("Largest in list = ",large(lst))

# Q7. Remove dublicate elements from the list
# lst = [1,2,3,2,1,1]
# new_lst = []
# for i in lst:
#     if i not in new_lst:
#         new_lst.append(i)
# print(new_lst)

# Q8. CHECK PALIDROME
# def palin(s):
#     return s == s[::-1]

# text = input("Enter a string = ")
# if palin(text):
#     print("it is a palindrome")
# else:
#     print("it is not a palindrome")

# Q9. To copy one file in another file
# f1 = open("sat.txt","r")
# f2 = open("data.txt","w")
# f2.write(f1.read())
# f1.close()
# f2.close()

# Q9. Program to count line in a file
# f1 = open("data.txt","r")
# count = 0
# for i in f1:
#     count +=1

# print("No of line = ", count)

# Q10. NUMPY
# import numpy as np
# arr = np.array([1,2,3,4,5])
# arr1 = np.array([[1,2,3],[4,5,6],[7,8,9]])
# print("Array:-",arr)
# print("Sum =",np.sum(arr))
# print("max =",np.max(arr))
# print("min =",np.min(arr))
# print(np.mean(arr1))

# Q11. PANDAS - SERISE AND DATA FRAME
import pandas as pd
# seri = pd.Series([10,20,30,40],name="marks")
# print(seri)

# df = pd.DataFrame({
#     "name":["Satyam Pandey"],
#     "rollno":[24262],
# })
# print(df)
# print("Student Rollno = ",df.loc[0,"rollno"])

# df = pd.read_csv("data.csv")
# df.to_csv("data1.csv", index=False)
# df.to_csv("data1.csv", index=False,mode='a',header=False)
# print(df)

# Q12. Matplotlib=line,scatter,bar,pie,area
# import matplotlib.pyplot as plt
# x = [1,2,3,4,5]
# y = [10,20,30,50,60]

# plt.plot(x,y,marker="o",color="yellow")
# plt.xlabel("X-AXIS")
# plt.ylabel("Y-AXIS")
# plt.title("Simple Line Graph")
# plt.show()

# Name = ["Satyam","Shivam","Sundaram"]
# salary = [20,30,50]
# plt.pie(salary,labels=Name)
# plt.title("Your Salary In Lakhs")
# plt.show()

# plt.fill_between(x,y,color="orange")
# plt.show()

# plt.scatter(x,y,color="orange",marker="o")
# plt.show()

# plt.bar(Name,salary,color="yellow")
# plt.grid(axis="y",linestyle="--",alpha=0.2)
# plt.title("Growth in Salary")
# plt.xlabel("Name Of Employe")
# plt.ylabel("Salary in Lakhs/month")
# plt.show()

# Q12. TKINTER GUI->WINDOW,BUTTONS,LABELS
import tkinter as tk

root = tk.Tk()
root.title("Welcome to my Window!")
root.geometry("500x500")

# label = tk.Label(root , text = "WELCOME TO PYTHON GUI!")
# label.pack(pady=50)
# root.mainloop()

def click():
    result.set(int(e1.get())+int(e2.get()))
    print("Somebody is clicked the Button!") 

Button = tk.Button(root,text="Click Me",command=click)
Button.pack(pady=5)

e1 = tk.Entry(root)
e1.pack(pady=5)
e2 = tk.Entry(root)
e2.pack(pady=5)


result = tk.StringVar()
tk.Label(root, text="HII , It only for Sum of two variables").pack()
tk.Label(root,textvariable=result).pack()

root.mainloop()

# Q13. calculate dublicate element in a list
# lst = [1,2,1,2,1,2,2]
# print(lst.count(2))