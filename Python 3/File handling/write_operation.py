import os


# Writting to a file using 'w' mode
file = open("Norsk Language.txt", "w")
file.write("De viser oss en katt.\nHun ser en edderkopp.\nEt barn drikker melk.")
file.close()
file = open("Norsk Language.txt", "r")
print(file.read())
file.close()
# Writting to a file using 'w+' mode
file = open("Norsk Language.txt", "w+")
file.write("De ser en edderkopp.\nHan viser oss en hun.\nJeg lesser et brev og drikker ool.")
file.seek(0)
temp = file.read()
print(temp)
file.close()
