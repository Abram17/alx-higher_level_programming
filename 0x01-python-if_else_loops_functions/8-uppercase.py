#!/usr/bin/python3
def confirm(c):
    if ord(c) >= ord('A') and ord(c) <= ord('Z'):
        return True
    else:
        return False
def uppercase(str):
    for c in str:
        print("{:c}" .format(ord(c) if confirm(c) else ord(c) - 32), end="")
    print("\n")
    