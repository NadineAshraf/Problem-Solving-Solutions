def Even_numbers(l):
    enum = []
    for n in l:
        if(n%2 == 0):
            enum.append(n)
    return enum
print(Even_numbers([1,2,3,4,5,6,7,8,9]))
