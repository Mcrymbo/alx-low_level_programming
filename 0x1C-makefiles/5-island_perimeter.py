#!/usr/bin/python3
"""
module that returns the perimeter of an island
"""


def island_perimeter(grid):
    """ function that calculates perimeter of an island """
    perimeter = 0
    rows = len(grid)
    if len(grid) != 0:
        columns = len(grid[0])

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) == rows or grid[i + 1][j] == 0:
                    perimeter += 1
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    perimeter += 1
                if (j + 1) == columns or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
