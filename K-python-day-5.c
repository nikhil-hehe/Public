//jo samajh na aye puch lio :)


* 
* * 
* * * 
* * * * 
* * * * *

for i in range(1, 5 + 1):
    for j in range(1, i + 1):
        print("* ", end="")
    print("")

___________________________________

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

for i in range(0, 5):
    num=1
    for j in range(0, i+1):
        print(num, end=" ")
        num = num + 1
    print("")

__________________________________

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5
  
num=0
for i in range(0, 5):
    
    num = num + 1
    for j in range(0, i+1):
        
        print(num, end=" ")
        
    print("")

___________________________________
A 
B B 
C C C 
D D D D 
E E E E E 

num = 65 #Ascii for 'A'
for i in range(0, 5):
    for j in range(0, i+1):
        ch = chr(num)
        print(ch, end=" ")
    num = num + 1
    print("")

___________________________________
* * * * * 
* * * * 
* * * 
* * 
* 

for i in range(5, 0, -1):
        for j in range(1, i + 1):
            print("* ", end="")
        print("")

__________________________________
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1

for i in range(5, 0,-1):
    num=1
    for j in range(0, i):
        print(num, end=" ")
        num = num + 1
    print("")

___________________________________
    *
   ***
  *****
 *******
  
for i in range(1, 5):
    for j in range(5 - i):
        print(" ", end="")
        
    for k in range(1, 2*i):
        print("*", end="")
    print("")

__________________________________
1 
2 3 
4 5 6 
7 8 9 10 

num=1
for i in range(0, 4):
    for j in range(0, i+1):
        print(num, end=" ")
        num = num + 1
    print("")

_________________________________

A
B A B
A B A B A
B A B A B A B

#ye wala kal krunga


_________________________________
1
0 1 0
1 0 1 0 1
0 1 0 1 0 1 0

#same logic as above

_______________________________
A B C DA B C D
A B C    A B C
A B        A B
A            A

#output me gadbad hai kal krunga jugaad kuch

  for i in range(4):
      left = [chr(65 + j) for j in range(4 - i)] #ye shyd abhi padhaya ni hoga list comprehension kehte hai
      right = left[::-1][::-1]
      spaces = "  " * (2 * i)
      print(" ".join(left) + spaces + " ".join(right))

___________________________
**********
****  ****
***    ***
**      **
*        *

for i in range(5, 0, -1):
    for j in range(i):
        print("*", end="")
    for j in range(2 * (5 - i)):
        print(" ", end="")
    for j in range(i):
        print("*", end="")
    print()

__________________________

*        *
**      **
***    ***
****  ****
**********


for i in range(1,6): #just loop ulta chala de
    for j in range(i):
        print("*", end="")
    for j in range(2 * (5 - i)):
        print(" ", end="")
    for j in range(i):
        print("*", end="")
    print()

__________________________________

A 
B C 
D E F 
G H I J 
K L M N O 

start = 65  # ascii 'A' ka
for i in range(5):
    for j in range(i + 1):
        print(chr(start), end=" ")
        start += 1
    print()

________________________________
