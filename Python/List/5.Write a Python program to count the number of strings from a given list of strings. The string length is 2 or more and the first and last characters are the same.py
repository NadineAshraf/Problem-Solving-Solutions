def match_words(words):
    c=0
    for i in words:
        if len(i)>1 and i[0] == i[-1]:
            c+=1
    return c
            
result = match_words(['abc', 'xyz', 'aba', '1221'])
print(result)
