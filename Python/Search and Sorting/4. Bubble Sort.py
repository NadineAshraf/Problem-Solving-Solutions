def BubbleSort(list):
    for p in range(len(list)-1,0,-1):
        for i in range (p):
            if list[i]>list[i+1]:
                temp = list[i]
                list[i] = list[i+1]
                list[i+1] = temp
list1 = [14,46,43,27,57,41,45,21,70]
BubbleSort(list1)
print(list1)
