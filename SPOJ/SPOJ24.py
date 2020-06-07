
def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)


t=int(input())
while t>0:
    t-=1
    n=int(input())
    print(fact(n))`