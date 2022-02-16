last = int(input("Enter the last no. : "))

for num in range(10, last):
    dummy = num
    digits = 0
    while dummy > 0:
        dummy = dummy // 10
        digits += 1

    dummy = num
    sum = 0
    n = digits

    for digits in range(1, digits + 1):
        temp = (dummy % 10)
        sum = sum + temp ** n
        dummy = dummy // 10

    if sum == num:
        print(f"{num} is an Armstrong no.")
    else:
        continue

input("\n\n\nPress Enter to terminate this program")