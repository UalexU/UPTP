def Ex(N):
    print(N)
    if (N < 7):
        Ex(N+2)
    else:
        print(N)
    print(N)


N = 4
Ex(N)
