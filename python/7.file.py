# f = open("satyam.txt","r")
# data = f.read(2)
# data1 = f.read()
# print(data)
# print(type(data))
# f.close()


# FOR LINE BY LINE READING
# f = open("sat.txt","r")
# data = f.readline()
# print(data)

#FOR WRITING
# f = open("sat.txt","w")
# f.write("Radhe Krishan Radhe Krishna\n OH my God!")
# f = open("sat.txt","a")
# f.write("\n Not You Know that I am the best Student of the college.")



# FOR RANDOM FILE ACCESS- AUTOMATIC A FILE IS CREATED IN YOUR FOLDER
# f1 = open("satyam2.txt","w")
# f3 = open("satyamp1.txt","w+")
# f5 = open("satyampand1.txt","a")
# f6 =  open("satyampand1e.txt","a+")
# f1.close()
# f3.close()
# f5.close()
# f6.close()


# WRITING AT THE STARTING OF THE FILE
# f = open("satyam.txt","r+")
# f.write("Hi My Name is Satyam Pandey")
# print(f.read())


# f = open("sat.txt","w+")
# f.write("NOT")
# f.seek(0)
# data = f.read()
# print(data)


# # ANOTHER FILE SYNTAX USING FOR FILE IN WHICH I DO'T NEED TO APPLY CLOSE FUNCTION FOR CLOSING A FILE
# with open("satyam.txt","r") as f:
#     print(f.read())
# with open("sat.txt","w") as f:
# f.write("no mamma I will come.")
# with open("satyam.txt","w+") as f1:
#     f1.write("Hi Yash Shakya You are best for your Self")
#     f1.seek(1)
#     print(f1.read())

# USE FOR DELETE A FILE FROM FOLDER
# import os
# os.remove("sat.txt")


# open("Hello.txt","w")
# file = open("Hello.txt","w")
# file.write("Hello Python")
# file.seek(0)
# file1 = open("Hello.txt","r")
# print(file1.read())

# open("Hello1.txt","w+")
# file = open("Hello1.txt","w+")
# file.write("Hello Python")
# file.seek(0)
# # file1 = open("Hello1.txt","r")
# file1 = open("Hello1.txt","r+")
# print(file1.read())

# open("Hello2.txt","a+")
# file = open("Hello2.txt","a+")
# file.write("Hello Python")
# file.seek(0)
# # file1 = open("Hello1.txt","r")
# file1 = open("Hello2.txt","r+")
# print(file1.read())

# open("Hello3.txt","a")
# file = open("Hello3.txt","a")
# file.write("Hello Python")
# file.seek(0)
# # file1 = open("Hello1.txt","r")
# file1 = open("Hello3.txt","r+")
# print(file1.read())

# open("Hello4.txt","a+")
# file = open("Hello4.txt","r+")
# file.write("Hello Python")
# file.seek(0)
# # file1 = open("Hello1.txt","r")
# file1 = open("Hello4.txt","r+")
# print(file1.read())

file = open("Hello4.txt","a")
file.write("Hello Python")
file.seek(0)
# file1 = open("Hello1.txt","r")
file1 = open("Hello4.txt","r+")
print(file1.read())