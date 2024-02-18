from datetime import time

print('jay')
print('i love you')
print('i really love pizza')



#String datatype......
first_name = "jay"
last_name = "vashihstha"
full_name = first_name + " "+ last_name
print(type(full_name))
print(full_name)


#Int datatype......
age = 21
age = age + 1

#to print int value with string we need to typecast the value with str............
print("Your age is: " + str(age))
#print(type(age))

#float datatype
height = 20.1
print("your height is:" + str(height))
print(type(height)) #float datatype....

#boolea datatype.....
human = False
print(human)
print(type(human))
print("Are You a human: " + str(human))

#Multiple assugnment....
name,age,height = "jay", 20, 50
print(name)
print(age)
print(height)

jay = priya = ram = shyam = 30
print(ram)

#String Methods........
name = "bro code"
print(len(name))
print(name.find(" "))
print(name.capitalize())
print(name.upper())
print(name.lower())
print(name.isdigit())
print(name.isalpha())
print(name.isalnum())
print(name.count("o"))
print(name.replace("o","a"))
print(name*3)


#Typecasting in Python..............
x=1
y=2.0
z="3"

x=float(x)
y=int(y)
z=int(z)

print(x)
print(y*3)
print(z*3)

#User input..
#name = input("What is your name?: ")
#age = int(input("How old are you?: "))
#height= float(input("how tall are you?: "))
#age = age +1

#print("My age is: " + str(age))
#print("My name is : " + name)
#print("Yur height is: " + str(height))

#Import functions.........

import math

pi = -3.14
x=1
y=2
z=3

print(round(pi))
print(math.ceil(pi))
print(abs(pi))
print(pow(pi,2))
print(math.sqrt(420))
print(max(x,y,z))
print(min(x,y,z))


#String Slicing.... Create a substring by extracting element s from another string indexing[
 #or slice()
 #[start:stop:step]

name = "Bro code"

first_name = name[:3]
last_name = name[4:8]
funky_name = name[::2]
reversed_name = name[::-1]

print(first_name)
print(last_name)
print(funky_name)
print(reversed_name)


website1 = "http://google.com"
website2 = "https://wikipedia.com"

slice = slice(7,-4)
print(website1[slice])
print(website2[slice])

#If-Else....
#block of code executes if condition is true...

#age = int(input("How old are you?: "))
if age >= 10:
    print("You are about to die!")
elif age >= 18:
    print("You are an adult!")
elif age <=0:
    print("You haven't born yet!")
else:
    print("You are a child")


#Logical Operators.......(and,or)
#temp = int(input("What is the temperature outside?: "))
#if not(temp>=0 and temp >= 30):
    print("tenperature is good today!")
    print("Go outside....")
#elif not(temp < 0 or temp > 30):
    print("The temperature is abd today ")
    print("stay inside")


#while loop...... a statement that will executes it's block of code,
#                  as long as it's codition remains true

name = "jay"
#while len(name) >= 1:
#    print("Help! I'm stuck in a loop..")

#FOR loop...
#for i in range (10):
 #   print("jay = " +str(i))

#for i in range(50,100+1,2):
#    print(i)

for i in "jay":
    print(i)

#for seconds in range(10,0,-1):
#    print(seconds)
#    time.sleep(1)
#print("happy new year")

#NEsted loops in python......

#rows = int(input("how many rows?:"))
#columns = int(input("how many columns?:"))
#symbol = input("Enter a symbol touse:?: ")

#for i in range(rows):
 #   for j in range(columns):
  #      print(symbol, end = "")
   # print()

#Loop control statements.......

#while True:
 ### if name != "":
    #  break

#phone_number = "123-456-789"
#for i in phone_number:
 #   if i == "-":
  ## print(i,end="")

#for i in range(1,21):

 #   if i == 13:
  #      pass
   # else :
    #    print(i)

#Lists in Python...........
# used to store multiple items in a single variable..

food = ["pizza","burger","hotdog","spaghetti"]

#print(food[0])
#print(food[3])
# print(food[8])


#food.pop()
#food.append("jay")
#food.remove("hotdog")
#food.insert(0,"cake")
#food.clear()

#for x in food:
 #   print(x)

#2D lists......

#drinks = ["coffee", "soda", "tea"]
#dinner = ["pizza","hmburger", " hotdog"]
#dessert = ["cake","ice cream","hotdog"]

#food = [drinks,dinner,dessert]

#print(food[2][1])
student = ("bro", 21, "male")

print(student.count("bro"))
print(student.index("male"))

for x in student:
    print(x)
if "bro" in student:
    print("bro is here!")

# set  = colllection which is unordered, unindexed. No duplicate values

utensils = {"fork","spoon","knife"}
dishes ={"bowl","plate","cup","knife"}

utensils.add("napkin")
utensils.remove("fork")
#utensils.clear()
#dishes.update(utensils)
dinner_table = utensils.union(dishes)
print(dishes.intersection(utensils))
#print(dishes.difference(utensils))
#for x in dinner_table:
#   print(x)


