def is_perfect(num):
    sum = 0
    for x in range(1,num):
        if num%x == 0:
            sum+=x
    return sum == num
print(is_perfect(6))
