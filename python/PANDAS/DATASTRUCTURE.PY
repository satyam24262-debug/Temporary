# import pandas as pd

# # #creating a series
# # # s = pd.Series([1,2,3,4,5],name='Money in Lakhs')
# # # print(s)
# ## print(s.loc[0])

# # #create a structure
# df = pd.DataFrame({
#     'Name':['Satyam Pandey','Shivam Pandey','Sundaram Pandey','Kshama Pandey','Preeti Pandey','Pooja Pandey'],
#     'Age(years)':[20,22,23,25,29,35],
# })
# # print(df)
# print(df.loc[5,'Name'])
# print(df.loc[5,'Age(years)'])
# #selecting multiple colums
# sel_colums = df.loc[:,['Name','Age(years)']]
# #selecting multiple rows
# sel_rows = df.loc[1:4,:]

# print(sel_colums)
# print(sel_rows)

