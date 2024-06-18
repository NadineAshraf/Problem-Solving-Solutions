def min_list(list):
    min = list[0]
    for i in list:
        if i<min:
            min=i
    return min
print(min_list([1,2,-8]))
