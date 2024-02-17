[print("Hello World")
print('Welcome to AI Lab')
for i in range(1,10):
    if i % 2 == 0:
        print(i)
name = "jay"
last_name ="vashishtha"
paragraph= " This is Nit Patna, in which studying " \
           "in Cse  branch currently i am in 4th semester "
age = 21
print("Your age is: " +name + " " + str(age))
print(name)
print(name + " " + last_name + "\t" + paragraph)

mylist = ['jay','vardhan','vashishtha']
print(mylist)
mylist.append('bro')
print(mylist)
print(mylist[0])
print(mylist[1])

nested_list = [[1,2,3,],['a','b','c'],['!','@','#']]
print(nested_list)

#max_num = max(num)
#min_num = min(num)

#print("Maximum no. is: " + " " + str(max_num))
#print("Minimum no. is: " + " " + str(min_num))
num = [1,2,3,4,5]
x = num[0]
# For finding maximum.....
for i in range(1,len(num)):
    if x < num[i]:
        x = num[i]
print(x)

# for minimum....
y = num[0]

for i in range(1,len(num)):
    if x > num[i]:
        x = num[i]
print(y)

list = [3,2,[5,4,3],[2,3,2]]
# Slicing the list.......
#comparing the list......

#make 3 list and comapre them.......

list1=[1,2,3,4,5,6]
list2=[7,8,9,10]
list3=[0,23,45,67,89]

if list1 == list2:
    print("true")
else:
    print("false")

# A tuple is mutable or unmutable.......
# tuple is unmutable as it doesn't change....
# Dictionary....
x=12
y=3
a=x+y
z=x**y
b=x%y
c=x/y
print(a)
print(z)
print(b)
print(c)

