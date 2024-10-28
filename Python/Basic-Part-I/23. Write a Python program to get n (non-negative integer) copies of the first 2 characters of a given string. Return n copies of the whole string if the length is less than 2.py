def Copy_SubString (s,num):
    if len(s) < 2:
        return s*num
    else:
        return s[:2]*num
s = input("Enter a string: ")
num = int(input("Enter the number of copies: "))

result = Copy_SubString(s,num)
print(result)
