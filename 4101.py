a, b = map(int, input().split())
while a and b != 0:
    if a > b:
        print('Yes')
    else:
        print('No')
    a, b = map(int, input().split())
if a and b == 0:
    quit()