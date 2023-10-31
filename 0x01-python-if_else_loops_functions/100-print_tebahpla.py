#!/usr/bin/python3
for i in range(25, -1, -1):
    c = i + ord('A')
    if i % 2 is 1:
        c += 32
    print(f"{c:c}", end="")
