import os


# Append to a fileusing 'a' mode
file = open("Norsk Language.txt", "a")
file.write("\nMin hund heter er Labby.")
file.close()
file = open("Norsk Language.txt", "r")
print(file.read())
file.close()
# Append to file using 'a+' mode
file = open("Norsk Language.txt", "a+")
file.write("\nJeg liker hunden.")
file.seek(0)
print(file.read())
file.close()
