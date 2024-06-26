#!/usr/bin/python3
"""Module for finding island perimeter"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid

    Args:
        grid (list[list[int]]): A list of lists rep the island grid.

    Returns:
        int: The perimeter of the island

    """
    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check adjacent cells (up,down, left, right)
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
