def string_rev(str1):
    strr=''
    index = len(str1)
    while index > 0:
        strr+=str1[index-1]
        index-=1
    return strr
print(string_rev("abc123"))
