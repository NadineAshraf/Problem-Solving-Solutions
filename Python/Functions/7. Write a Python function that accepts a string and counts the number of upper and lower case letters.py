def string_test(s):
    count1=0
    count2=0
    for c in s:
        if c.isupper():
            count1+= 1
        elif c.islower():
            count2+= 1
        else:
            pass
    print("Original String: ", s)
    print("No. of Upper case characters: ", count1)
    print("No. of Lower case Characters: ", count2)
string_test('The quick Brown Fox') 
