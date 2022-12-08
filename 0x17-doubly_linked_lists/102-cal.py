#!/usr/bin/python3
def cal():
    """calculates the multiply of 2 3digits numbers"""
    a = []
    for i in range(100, 1000):
        for j in range(100, 1000):
            if check_pal(j * i) == 1:
                a.append(j * i)
    return max(a)


def arrays(p):
    """chaecks for palindrome"""
    q = []
    while p != 0:
        q.append(p % 10)
        p = int(p / 10)
    return q


def check_pal(q):
    """checks if pal"""
    z = arrays(q)
    l = len(z)
    x = int(len(z) / 2)
    flag = 0
    y = []
    for i in range(0, x):
        l -= 1
        if z[i] == z[l]:
            flag += 1
    if x == flag:
        y.append(z)
        return 1
    return 0

a = cal()
print(a)

