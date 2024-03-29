#!/usr/bin/python3
""" This is bout getting the perimeter of an island
"""


def island_perimeter(grid):
    """gets the perimeter of an island"""
    x = []
    width = 0
    lenght = 0
    try:
        for i in grid:
            j, flag = 0, 0
            try:
                for j in range(len(i)):
                    if i[j] == 1 and j not in x:
                        width += 1
                        x.append(j)
                    if i[j] == 1 and flag == 0:
                        lenght += 1
                        flag = 1
            except TypeError:
                return 0
        if lenght > 100 or width > 100:
            return 0
        return 2 * (lenght + width)
    except TypeError:
        return 0
