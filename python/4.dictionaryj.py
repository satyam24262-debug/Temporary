# info = {
# "name" : "Satyam Pandey",
# "name1":["satyam Pandey","shivam pandey","Sundaram pandey"], # we can also use list
# "tuple": ("jagvar","Maruti Sujki","balano"),# we can tupes 
# "Rollno ": "24262",
# }
# print(info)
# print(type(info))
# x = info["name"]
# print(x)
# info["name"] = "Shivam Pandey"
# print(info)
 
# EMPTY DICTIONARY
# dic = {}
# print(dic)
# dic["Name"] = "satyam Pandey"
# print(dic)


#NESTED DICTIONARY
# STUDENT = {
#     "NAME":"PANDEY JI",
#     "MARKS": {
#          "CHEMISTRY":98, # PHYTHON IS NOT A CASE SENSITIVE LANGUAGE
#            "PHYSICS":97,
#            "MATHS":100,
#     }
# }   
# print(STUDENT)
# # print(STUDENT["MARKS"])
# print(STUDENT["MARKS"]["MATHS"])

#DICTIONARY METHODS
# dictionary = {
#     "name":"satyam pandey",
#     "roll no":"24262",
# }
# print(dictionary)
# print(dictionary.keys())
# print("Before")
# print(dictionary.get("name1"))# instead of given a wrong key,before and after both are executed
# print("After")
# print(dictionary.values())
# print(dictionary.items())
# dictionary.update({"name":"pandey"})
# print(dictionary)

#SETS
# sets = {1,2,3,4}
# print(sets)
# sets = {1,2,3,1,2,3,4}# in set all value have unique
# print(sets)
# print(len(sets))
# print(type(sets))

# set1 = {1,2,3,4,5}
# set1 = set1.union({1,2,3,8})
# set2 = set1.intersection({9,8,7,3})
# print(set2)
# print(set1)
 
# sets = set()# use for a creating a null set
# print(sets)
# sets = set()
# sets.add(4)
# sets.add("satyam pandey")
# sets.add((1,2,3,4))
# print(sets)
# print(len(sets))
# sets.remove(4)
# print(sets)
# # sets.clear()
# print(sets)
# sets.pop()# for random delete the elements

dict = {
    "Name":"Satyam Pandey",
    "Rollno": 24262,
    "Marks":98,
}
print(dict.keys())
print(dict.values())
print(dict.items())
print(dict.pop("Marks"))
print(dict)
print(dict.get("Name"))
dict.clear()
print(dict)
dict.update({"name":"Sundaram Pandey"})
print(dict)