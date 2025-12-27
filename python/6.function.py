# # built function
# print("satyam pandey",end=" ")
# print("Shivam pandey")

# default parameter
# def my_function(a,b=1):
#     return a*b
# print(my_function(1))

# def myFunction(a=2,b=4):
#     return a/b
# print(myFunction())

#Practice Question
# def length(list):
#     print(list)
#     print(list[0],list[1],list[2],list[3],list[4],list[5])
#     print(list[0],end=" ")
#     return len(list)
# print(length(list=[1,2,3,4,5,6]))

# #Another Way to print the list in single line
# def single(list):
#     for i in list:
#         print(i,end=" ")
# list=single(["Shivam pandey","Sundaram pandey","Satyam pandey","Kshama pandey","Priti Didi","Pooja didi"])

# def fact(n):
#     factorial =1
#     for i in range(1,n+1):
#         factorial *=i
#     return factorial
# print(fact(4))

#2-RECURSION
# def fact(n):
#     fac=1
#     if(n==0 or n==1):
#         return 1
#     fac = n * fact(n-1)
#     # print(fac)
#     return fac
# print(fact(5))

# SUM OF N NUMBERS
# def sum(n):
#     if(n==1):
#         return 1
#     return (n+sum(n-1))
# print(sum(5))

# l = [1,2,3,4,5]
# def prin(n):
#     if(n==5):
#         return 
#     print(l[n])
#     prin(n+1)
# prin(1)


# def pri(a):
#     for i in range(a):
#         # print("*"*i)
#         # print(" "*(a-i)+"*"*i)
#         # print(" "*(a-i)+"*"*(2*i-1))

# pri(6)




