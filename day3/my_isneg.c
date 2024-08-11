/*
** EPITECH PROJECT, 2024
** my_isneg
** File description:
** Function that displays 'N' if the number is negative,
** 'P' if the number is positive or zero.
** Author: Yanis "Zheeyr" R.
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n < 0) {
        write(1, "N", 1);
    } else {
        write(1, "P", 1);
    }
    return (0);
}
