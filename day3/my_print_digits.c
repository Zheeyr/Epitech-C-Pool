/*
** EPITECH PROJECT, 2024
** my_print_digits
** File description:
** Function that displays all the digits
** in ascending order, on a single line.
** Author: Yanis "Zheeyr" R.
*/

#include <unistd.h>

int my_print_digits(void)
{
    char digit = '0';

    while (digit <= '9') {
        write(1, &digit, 1);
        digit++;
    }
    return (0);
}
