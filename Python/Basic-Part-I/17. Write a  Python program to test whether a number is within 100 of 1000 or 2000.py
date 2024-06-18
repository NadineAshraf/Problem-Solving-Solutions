def approx(n):
    return ((abs(1000-n)<=100) or (abs(2000-n)<=100))
    
print(approx(1000))
print(approx(900))
print(approx(800))
print(approx(2200))
