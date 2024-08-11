/*
** EPITECH PROJECT, 2024
** count_valid_queens_placements
** File description:
** Function that computes recursively and returns the number of
** possible ways to place n queens on an n x n chessboard
** without them being able to attack each other.
** Author: Yanis "Zheeyr" R.
*/

int is_safe(int board[], int row, int col, int n)
{
    int i;

    for (i = 0; i < row; i++) {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row)
            return (0);
    }
    return (1);
}

int solve_n_queens(int board[], int row, int n)
{
    int count = 0;
    int col;

    if (row == n)
        return (1);
    for (col = 0; col < n; col++) {
        if (is_safe(board, row, col, n)) {
            board[row] = col;
            count += solve_n_queens(board, row + 1, n);
        }
    }
    return (count);
}

int count_valid_queens_placements(int n)
{
    int board[n];

    if (n < 1)
        return (0);
    return (solve_n_queens(board, 0, n));
}


// VERSION WITH ALLOCATE MEMORY, DON'T COPY IF U DON'T KNOW WHAT YOU'RE DOING.

/*
** EPITECH PROJECT, 2024
** count_valid_queens_placements
** File description:
** Function that computes recursively and returns the number of
** possible ways to place n queens on an n x n chessboard
** without them being able to attack each other.
** Author: Yanis "Zheeyr" R.
*/

#include <stdlib.h>

int is_safe(int *board, int row, int col, int n)
{
    int i;

    for (i = 0; i < row; i++) {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row)
            return (0);
    }
    return (1);
}

int solve_n_queens(int *board, int row, int n)
{
    int count = 0;
    int col;

    if (row == n)
        return (1);
    for (col = 0; col < n; col++) {
        if (is_safe(board, row, col, n)) {
            board[row] = col;
            count += solve_n_queens(board, row + 1, n);
        }
    }
    return (count);
}

int count_valid_queens_placements(int n)
{
    int *board;
    int result;

    if (n < 1)
        return (0);
    board = malloc(n * sizeof(int));
    if (board == NULL)
        return (0);
    result = solve_n_queens(board, 0, n);
    free(board);
    return (result);
}
