while True:
    N = list(input())[:1000]
    a = 0
    for i in range(len(N)):
        if N[i] == '(':
            a = a + 1
        if N[i] == ')':
            a = a - 1
        if a < 0:
            break
    if a == 0:
        print('correct')
    else:
        print('incorrect')