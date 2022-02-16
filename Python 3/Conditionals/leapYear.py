year = int(input(print("Enter the year:- ")))

if year%4==0:
    if year%400 == 0:
        print(f"{year} is a century year and a leap year"}
    elif year%400 != 0 and year%100 == 0:
        print(f"{year} is a century year but, not a leap year")
    elif year%100 != 0:
        print(f"{year} is not a century year but, a leap year")
else:
    print(f"{year} is not a leap year")
