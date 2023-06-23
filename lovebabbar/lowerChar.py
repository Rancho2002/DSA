n=input("Enter alphabet: ")

n= ord(n) - ord("A") + ord("a") if ord(n) > 65 and ord(n)<65+26 else ord(n)

print(chr(n))