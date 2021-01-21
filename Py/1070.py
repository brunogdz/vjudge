import sys

X = int(input())

if (X%2) == 0:
    X = X+1
    for x in range(6):
        print(X)
        X = X+2
else:
    for x in range(6):
        X = X + 2
        print(X)