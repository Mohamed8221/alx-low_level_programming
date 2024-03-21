#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for y in range(height):
        for x in range(width):
            if grid[y][x] == 1:
                size += 1
                if y > 0 and grid[y - 1][x] == 1:
                    edges += 1
                if x > 0 and grid[y][x - 1] == 1:
                    edges += 1

    return size * 4 - edges * 2
