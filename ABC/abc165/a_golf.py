K = int(input())
A, B = list(map(int, input().split()))

ok = False

for x in range(A, B+1):
    if x % K == 0:
        ok = True

if ok:
    print("Yes")
else:
    print("No")  
    