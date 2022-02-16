import os
    

# Various file reading operations
file = open("Norsk Language.txt", "r")
print(file.read())
print("\n")
file.close()
file = open("Norsk Language.txt", "r")
print(file.read(15))
print("\n")
file.close()
file = open("Norsk Language.txt", "r")
print(file.readline())
print("\n")
file.close()
file = open("Norsk Language.txt", "r")
print(file.readlines())
print("\n")
file.close()
