/*
** EPITECH PROJECT, 2024
** my_print_comb
** File description:
** Function that displays, in ascending order,
** all the numbers composed of three different digits,
** with the smallest number composed by those digits.
** Author: Yanis "Zheeyr" R.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void display_comb(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if (a != '7' || b != '8' || c != '9') {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    char a = '0';
    char b;
    char c;

    while (a <= '7') {
        b = a + 1;
        while (b <= '8') {
            c = b + 1;
            while (c <= '9') {
                display_comb(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
    return (0);
}
