num= int(input("Enter the no.: "))

dummy= num
digit= 0
while dummy>0:
    dummy=dummy//10
    digit= digit+1

dummy= num
summer = 0
for digit in range(1,digit+1):
    temp= dummy%10
    summer = summer*10 + temp
    dummy//= 10

print(f"rev of the no: {sum}")
if summer == num:
    print(f"The no. is a palindrome.")
else:
    print("Not a palindrome number.")

input("\n\n\nPress Enter to terminate this program")