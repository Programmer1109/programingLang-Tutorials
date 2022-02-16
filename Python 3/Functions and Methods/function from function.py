def func(n):
    def func1():
        return "edureka"

    def func2():
        return "python"

    def func3():
        return "PyCharm"

    if n == 1:
        return func1
    elif n == 2:
        return func2
    elif n == 3:
        return func3()


a = func(1)
b = func(2)
c = func(3)
print(a())
print(b())
'''stmt at line 22 and line 23 are executed it prints the string returned by 'func1' and 'func2' resp. This happens 
because the function 'func' return the address of 'func1' and 'func2' when function calls at lines 19 and 20 are 
executed and hence, 'a()' executes 'func1' and 'b()' executes 'func2'. '''
# print(c())
'''stmt at line 27 prints an error message as a string was returned when stmt at line 21 is executed and not the address
of a function'''
print(a)
print(b)
print(c)
