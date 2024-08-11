/*
** EPITECH PROJECT, 2024
** my_print_comb2
** File description:
** Function that displays, in ascending order,
** all the different combinations of two two-digit numbers.
** Author: Yanis "Zheeyr" R.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void display_comb(int n1, int n2)
{
    my_putchar((n1 / 10) + '0');
    my_putchar((n1 % 10) + '0');
    my_putchar(' ');
    my_putchar((n2 / 10) + '0');
    my_putchar((n2 % 10) + '0');
    if (n1 != 98 || n2 != 99) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    int n1 = 0;
    int n2;

    while (n1 <= 98) {
        n2 = n1 + 1;
        while (n2 <= 99) {
            display_comb(n1, n2);
            n2++;
        }
        n1++;
    }
    return (0);
}
