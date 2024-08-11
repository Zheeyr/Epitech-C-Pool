/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** Function that displays, one-by-one, the characters of a string.
** Author: Yanis "Zheeyr" R.
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}
