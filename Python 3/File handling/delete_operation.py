import os


# Deleting a given file
while(True):
    filename = input(print("Enter name of file to be deleted :- "))

    if os.path.exists(filename):
        os.remove(filename)
        print("File was Successfully deleted!!!")
    else:
        print("Error:- No such file exists!!!")

    terminate = input(print("Do you want to quit? (Y/N) \nYour Choice:- "))
    if terminate == 'N' or terminate == 'n':
        continue
    elif terminate == 'Y' or terminate == 'y':
        break

