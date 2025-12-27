# Q1
# a = int(input("Enter your first number: "))
# b = int(input("Enter your second number: "))
# sum = a+b
# print("The sum is :",sum)
#Q2
# side = int(input("Enter the side of square: "))
# area = side*side
# print("Area of Square is : ", area)

# #Q3
# a = int(input("Enter the first number: "))
# b = int(input("Enter the second number: "))
# # if(a>=b):
# #     print("True")
# # else:
# #     print("False")    
# print(a>=b)

# swap of two number
# a,b=3,2
# print("a = ",a,"b = ",b)
# a,b=b,a
# print("a = ",a,"b = ",b)



# for i in range(1,5):
#     # if i==3:
#     #     break
#     # if i==2:
#     #     continue
#     if(i==4):
#         pass
#     print(i)



# # TO PRINT FIBONACCI SERISE
# n = int(input("Enter Any Natural Number:-"))
# i=1
# a=0
# b=1
# while(i<=n):
#     print(a , end=" ")
#     a,b=b,a+b # not to as a = b then b = a+b 
#     i = i+1


# USE OF CONTINUE
# n = int(input("Enter a Natural Number "))
# while(n<=10):
#     if(n==9):
#         n = n+1# IMPORTANT USE
#         continue
#     print(n)
#     n = n+1


#USE OF PASS
# def hello1(n):
#     pass

# def hello(n):
#     print(n)
# hello(4)    


# # NUMBER OF VOWELS IN A STRING
# name = "Sundaram Pandey"
# n = len(name)
# count = 0
# for i in range(n):
#     # count = 0
#     if(name[i]=="a"or name[i]=="e"or name[i]=="i"or name[i]=="o"or name[i]=="u"):
#         count = count+1
# print(count)

#OR

# def Count_vowels(string):
#     count = 0
#     vowels = "aeiouAEIOU"
#     for i in string:
#         if(i in vowels):
#             count +=1
#     return count
# n = Count_vowels("Satyam Pandey")
# print(n)

# ALL OPERATOR IN PYTHON
# 1.ARITHMETIC-use in mathematics operations
# print(9//2)#floor division
# print(9**2)#power
# print(9%3)#modulus
# 2.RELATIONAL OPERATOR-use to compare two values
# print(8==9)
# 3.LOGICAL OPERATOR - use in a condition statement
# print(2>3 and 3!=2)
# 4.ASIGNMENT OPERATOR
# a,b=15,3
# # a +=b
# # a -=b
# # a **=b
# # a //=b
# print(a,end=" ")
# 5.BITWISE OPERATOR
# print(3&1)
# print(3^2)
# print(5>>2)
# print(2<<1)
# 6.MEMBERSHIP OPERATOR
# print(3 in [1,2,3])
# print(2 not in (1,2,3,4,5))
# print('satyam' in 'satyam pandey')
# 7.IDENTITY OPERATOR
# print(3 is 2)
# print(3 is 3)
# a,b = 4,5
# print(a is not b)


# FACTORIAL CALCULATION
# def fact(n):
#     if n==0:
#         return 1
#     return n*fact(n-1)
# print(fact(5))
