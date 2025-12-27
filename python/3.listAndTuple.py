# marks = [65,66,87,98,67,45]
# print(marks)
# print(marks[0])
# print(marks[5])
# print(type(marks))
# print(len(marks))

# # lists are mutable but string are not mutable
# student = ["satyam Pandey",90,"Kanpur Nagar"]
# print(student)
# print(student[0])
# student[0] =  "Pandeyji"
# print(student)

# # slicing in list same as in string
# student = ["pandeyJi",98,'A']
# print(student[0:2])

# methods of list
# list = [1,24,3,4]
# print(list.append(5))# nothing to be print only add item at the end of the list
# list.sort()
# print(list)
# list.sort(reverse=True)
# print(list)
# list.insert(2,34)
# print(list)
# list.reverse()
# print(list)
# list.remove(4)
# print(list)
# list.pop(2)
# print(list)

# tuple
# tup = (1)
# tup = ("hellomoto")
# when a single value in any close bracket then include a comma for tuple representation
# tup = ("hellomoto",)
# tup = (1,)
# print(type(tup))
# print(tup)
# tup = (1,2,3,4,5,2)
# print(tup[1:3])
# print(tup.index(4))
# print(tup.count(2))

# list = []
# x1 = (input("Enter a number :- "))
# x2 = (input("Enter a number :- "))
# x3 = (input("Enter a number :- "))
# list.insert(0,x1)
# list.insert(1,x2)
# list.insert(2,x3)
# print(list)
# for i in range(0,3):
#     x = input("Enter your movie:-")
#     list.insert(i,x)
# print(list)

# check for palindrom
# x = False
# list = [1,"abc",1]
# y = len(list)
# # print(int(y/2))
# for i in range(0,int(y/2)):
#     if(list[i]!=list[y-1-i]):
#         x=True
#         break
# if(x==True):
#     print("not a palindrom")
# else:
#     print("palindrom") 
# Other mathod for palindrom   
# list = [1,2,1]
# copy = list.copy()
# list.reverse()
# if(copy==list):
#     print("This is a palindrom.")
# else:
#     print("This is not a palindrom.")  

tup = ["A","B","C","A","A"]
length = len(tup)
print(tup.count("A"))
list=[]
for i in range(0,length):
    list.insert(i,tup[i])
print(list)
list.sort()
print(list)
