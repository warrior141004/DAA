

while True:
    print("who are you")
    name=input()
    if name != 'joe':
        continue
    print("hello joe what is the password")
    password=input()
    if password=='swordfish':
        break
print("access granted")
