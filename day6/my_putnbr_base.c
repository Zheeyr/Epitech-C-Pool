/*
** EPITECH PROJECT, 2024
** my_putnbr_base
** File description:
** Function that converts and displays a decimal number into a number in a given base.
** The base is provided as a string. The function deals with negative numbers.
** Author: Yanis "Zheeyr" R.
*/

void my_putchar(char c);  // Assuming my_putchar is a function to print a character

int my_strlen(char const *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}

int my_putnbr_base(int nbr, char const *base)
{
    int base_len = my_strlen(base);

    if (base_len < 2)
        return (0);  // Invalid base

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= base_len)
        my_putnbr_base(nbr / base_len, base);
    my_putchar(base[nbr % base_len]);

    return (0);
}
