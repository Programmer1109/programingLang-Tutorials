import os


# Creating a file using 'x' command
file = open("Norsk Language2.txt", "x")
file.close()
file = open("Norsk Language2.txt", "w+")
file.write("Jeg elsker henne. Bare bra. Bare hyggelig")
file.seek(0)
print(file.read())
file.close()
# Creating a file using 'w' command 
file = open("Animals.txt", "w")
file.write("Bjorn -> Bear\nFugl -> Bird\nUlv -> Wolf\nElg -> Moose")
file.close()
file = open("Animals.txt", "r")
print(file.read())
file.close()
# Creating a file using 'w' command 
file = open("Family.txt", "a")
file.write("Mor -> Mother\tFar -> Father\nFar Mor -> Paternal Grandmother\tFar Far -> Paternal Grandfather\nMor Mor -> Maternal Grandmother\tMor Far -> Maternal Grandfather")
file.close()
file = open("Family.txt", "r")
print(file.read())
file.close()