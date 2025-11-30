def Sequential_Search(item_list,item):
    i=0
    found = False
    while i<len(item_list) and not found:
        if item_list[i] == item:
            print("Found at position: ",i)
            found = True
        else:
            i+=1
Sequential_Search([11,23,58,31,56,77,43,12,65,19],31)
