num = int(input("Enter the no.: "))
dummy = num
digit = 0

while dummy > 0:
    dummy = dummy//10
    digit = digit + 1

dummy = num
print(f"digits= {digit}")
sumn = 0
for digit in range(1, digit+1):
    temp = dummy % 10
    sumn  = sumn + temp
    dummy = dummy//10
print(f"sum of digits of {num}= {sumn}")

input("\n\n\nPress Enter to terminate this program")
