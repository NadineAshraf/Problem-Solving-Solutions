def sumxyz (x,y,z):
    sum = x+y+z
    if x == y == z:
        sum*=3
    return sum
print(sumxyz(1,2,3))
print(sumxyz(3,3,3))
