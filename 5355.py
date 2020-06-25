t = int(input())
for _ in range(t):
    mars = input().split()
    ans = float(mars[0])
    for i in range(1, len(mars)):
        if mars[i] == '@':
            ans *= 3
        elif mars[i] == '%':
            ans += 5
        elif mars[i] =='#':
            ans -= 7
    print('%0.2f' %(ans))