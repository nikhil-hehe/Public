#moj kr :)

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

rows = 4

for i in range(rows):
    row = []
    for j in range(2 * i + 1):  
        if (i + j) % 2 == 0:
            row.append('A')
        else:
            row.append('B')
    print(" ".join(row))


_________________________________
1
0 1 0
1 0 1 0 1
0 1 0 1 0 1 0

rows = 4
for i in range(rows):
    row = []
    for j in range(2 * i + 1):  
        row.append((i + j) % 2)
    print(" ".join(map(str, row))) #ise bina mapping ke nahi kr pa rha tha sori


_______________________________
#incorrect one
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

++++++++++++++++++++++++++++++++
#AFTER JUGAAD XD
A B C D C B A
A B C   C B A
A B       B A
A           A

for i in range(4):
    left = [chr(65 + j) for j in range(4 - i)] #ye shyd abhi padhaya ni hoga list comprehension kehte hai
    spaces = "  " * (2 * i -1) + " " #iska sara khel tha aur if else lagana tha pehle iteraton me
    if i==0:
        right = left[:-1][::-1] #isme D dubara ni lena tha
        
    else:
        right = left[::-1]
        
    print(" ".join(left) + spaces + " ".join(right))

# 4 ki jagah 7 le lio question ke hisab se krna ho to same hi hai prog to

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

1        1
12      21
123    321
1234  4321
1234554321

for i in range(1,6):
    for j in range(1,i+1):
        print(j, end="")
    for j in range(2 * (5 - i)):
        print(" ", end="")
        
    for j in range(i,0,-1):
        print(j, end="")
    print()

__________________________________
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 

n = 5
for i in range(0, n):
    print(" " * (n-i), end=" ")
    for j in range(0, i+1):
        print("*", end=" ")
    print()

______________________________________

A1B2C3D4E5F6
A1B2C3D4E5
A1B2C3D4
A1B2C3
A1B2
A1

n=6
for i in range(n, 0, -1):
    alph=65
    for j in range(i):
        print(chr(alph+j), end="")
        print(j+1,end='')
    print("")


_______________________________________


      1 
     1 0 
    1 0 1 
   1 0 1 0 
  1 0 1 0 1 


n = 5
m=1
for i in range(0, n):
    print(" " * (n-i), end=" ")
    for j in range(0, i+1):
        if j%2==0:
            print(m,end=" ")
        else:
            m-=1
            print(m, end=" ")
            m+=1
    print()

___________________________________________

    A    
   BAB   
  CBABC  
 DCBABCD 
EDCBABCDE

n = 5
for i in range(n):
    left = ''.join(chr(65 + j) for j in range(i, -1, -1)) #-1 exclude taaki 'A' repeat na ho beech wala (jo left part ki list me last element hai)
    
    right = ''.join(chr(65 + j) for j in range(1, i + 1))
    line = left + right
    print(line.center(2 * n - 1))

_______________________________________________

          0
        1 0 1
      2 1 0 1 2
    3 2 1 0 1 2 3
  4 3 2 1 0 1 2 3 4


n = 5
space=[" "]
for i in range(n):
    
    left = space*(n-i) + list(range(i, -1, -1))
        
    right = list(range(1, i + 1))
        
    line =  left + right
        
    line_str = " ".join(map(str, line))
        
    print(line_str.center(2 * n - 1))




