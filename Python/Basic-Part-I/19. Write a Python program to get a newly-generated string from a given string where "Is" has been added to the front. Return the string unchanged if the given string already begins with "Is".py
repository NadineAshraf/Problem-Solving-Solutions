def new_string(text):
    if len(text)>=2 and text[0:2] == "Is":
        return text
    else:
        return "Is"+text
print(new_string("Array"))
print(new_string("IsEmpty"))
