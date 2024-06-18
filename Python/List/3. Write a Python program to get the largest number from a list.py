def max_list(list):
    max = list[0]
    for i in list:
        if i>max:
            max=i
    return max
print(max_list([1,2,-8]))
