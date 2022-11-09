#!/usr/bin/python3
""" This is bout getting the perimeter of an island
"""


def island_perimeter(grid):
    """gets the perimeter of an island"""
    x = []
    width = 0
    lenght = 0
    for i in grid:
        j, l, y = 0, 0, []
        for j in range(len(i)):
            if i[j] == 1 and j not in x:
                width += 1
                x.append(j)
            if i[j] == 1 and l == 0:
                lenght += 1
                y.append(l)
                l = 1
    return 2 * (lenght + width)
