#!/usr/bin/python3
"""function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """defining the perimeter of an island"""
    perimeter = 0
    for a in range(0, len(grid)):
        for b in range(0, len(grid[a])):
            if grid[a][b] == 1:
                if a == 0:
                    perimeter += 1
                elif grid[a-1][b] == 0:
                    perimeter += 1
                if b == 0:
                    perimeter += 1
                elif grid[a][b-1] == 0:
                    perimeter += 1
                if b == len(grid[a]) - 1:
                    perimeter += 1
                elif grid[a][b+1] == 0:
                    perimeter += 1
                if a == len(grid) - 1:
                    perimeter += 1
                elif grid[a+1][b] == 0:
                    perimeter += 1
    return perimeter
