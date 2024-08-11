/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** Function that swaps the content of two integers,
** whose addresses are given as parameters.
** Author: Yanis "Zheeyr" R.
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
