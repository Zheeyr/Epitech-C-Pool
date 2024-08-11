/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** Function that displays the number given as a parameter.
** It must be able to display all the possible values of an int.
** Author: Yanis "Zheeyr" R.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_put_nbr(147483648);
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    return (0);
}
