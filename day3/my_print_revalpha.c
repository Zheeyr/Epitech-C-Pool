/*
** EPITECH PROJECT, 2024
** my_print_revalpha
** File description:
** Function that displays the lowercase alphabet
** in descending order, starting from 'z'.
** Author: Yanis "Zheeyr" R.
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    char letter = 'z';

    while (letter >= 'a') {
        write(1, &letter, 1);
        letter--;
    }
    return (0);
}
