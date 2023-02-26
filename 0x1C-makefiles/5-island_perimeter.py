#!/usr/bin/python3
""" Create a function def island_perimeter(grid): """


def island_perimeter(grid: list[list[int]]):
    """ find the perimeter of a grid """
    total = 0
    if not grid:
        return total
    len_row = grid[0].__len__()
    # check equal rows
    if not all([row.__len__() == len_row for row in grid]):
        return total
    # get horizontal perimeter
    for row in grid:
        for index, item in enumerate(row):
            if item:
                # check back
                if index:
                    total = total + 1 if not row[index - 1] else total
                # check foward
                if index < len_row - 1:
                    total = total + 1 if not row[index + 1] else total
    # get vertical perimeter
    for column in zip(*grid):
        col_l = column.__len__()
        for index, item in enumerate(column):
            if item:
                # check back
                if index:
                    total = total + 1 if not column[index - 1] else total
                # check foward
                if index < col_l - 1:
                    total = total + 1 if not column[index + 1] else total
    return total
