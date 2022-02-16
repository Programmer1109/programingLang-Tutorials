def func1(name):
    return f"Hello {name}"


def func2(name):
    return f"Hey! {name}, how you doin?"


def func3(func4):
    return func4("Sofia")


a = func3(func1)
b = func3(func2)
print(func3(func1))
print(func3(func2))
print(a)
print(b)