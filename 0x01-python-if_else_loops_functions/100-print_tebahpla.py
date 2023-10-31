#!/usr/bin/python3
for i in range(ord('z'), ord('A') - 1, -1):
    if i % 2 == 1:
        print(chr(i), end='')
    else:
        print(chr(i).upper(), end='')

print()
