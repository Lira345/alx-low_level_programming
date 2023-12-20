#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island."""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    perimeter = 0

    for n in range(height):
        for a in range(width):
            if grid[n][a] == 1:
                perimeter += 1
                if (a > 0 and grid[n][a - 1] == 1):
                    edges += 1
                if (n > 0 and grid[n - 1][a] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
