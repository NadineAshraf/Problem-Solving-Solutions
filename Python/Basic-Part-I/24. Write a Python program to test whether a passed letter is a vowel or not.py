def is_vowel(letter):
    vowels = 'aeiouAEIOU'
    return letter in vowels
    
letter = input("Enter a letter: ")

if len(letter) == 1 and letter.isalpha():
    if is_vowel(letter):
        print("It's a vowel")
    else:
        print("Not a vowel")
