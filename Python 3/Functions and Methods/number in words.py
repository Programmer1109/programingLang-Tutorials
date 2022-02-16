.7/#num = int(input("Enter the no.: "))
num= 123
proxy=num
digit=0

while proxy>0 :
    proxy= proxy//10
    digit =digit+1

proxy= num


def word(argument):
    switch={
        0: 'zero',
        1: 'one',
        2: 'two',
        3: 'three',
        4: 'four',
        5: 'five',
        6: 'six',
    }


for digit in range(digit,0):
    flag=proxy//pow(10,digit-1)
    proxy=proxy%pow(10,digit-1)
    word(flag)

input("\n\n\nPress Enter to terminate this program")
