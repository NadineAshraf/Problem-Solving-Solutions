import string

def ispangram(str1,alphabet=string.ascii_lowercase):
    alpha = set(alphabet)
    str_set = set(str1.lower())
    return alpha <= str_set
print(ispangram('The quick brown fox jumps over the lazy dog'))
