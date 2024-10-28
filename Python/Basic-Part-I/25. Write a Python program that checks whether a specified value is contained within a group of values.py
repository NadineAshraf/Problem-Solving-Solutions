def List(data,n):
    for i in data:
        if i==n:
            return True
    return False
    
print(List([1,2,3,4],3))
print(List([1,2,3,4],5))
