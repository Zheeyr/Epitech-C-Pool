/*
** EPITECH PROJECT, 2024
** my_print_alpha
** File description:
** Function that displays the lowercase alphabet
** in ascending order, starting from 'a'.
** Author: Yanis "Zheeyr" R.
*/

#include <unistd.h>

int my_print_alpha(void)
{
    char letter = 'a';

    while (letter <= 'z') {
        write(1, &letter, 1);
        letter++;
    }
    return (0);
}
