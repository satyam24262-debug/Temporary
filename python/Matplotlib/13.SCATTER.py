import matplotlib.pyplot as plt

#sample data
x = [1,2,3,4,5]
y = [10,2,34,45,35]

#create a scatter plot
plt.scatter(x,y,color='orange',marker='o')

# add title and labels
plt.title("Welcome to KNIT")
plt.xlabel("Hi X-axis")
plt.ylabel("Hi Y-axis")

#display
# plt.show()