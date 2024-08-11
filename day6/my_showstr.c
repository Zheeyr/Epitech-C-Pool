/*
** EPITECH PROJECT, 2024
** my_showstr
** File description:
** Function that prints a string and returns 0. If the string contains non-printable
** characters, they are printed in hexadecimal (in lowercase) with a backslash before the value.
** Author: Yanis "Zheeyr" R.
*/

void my_putchar(char c);

void print_hex_char(char c)
{
    char *hex = "0123456789abcdef";
    my_putchar('\\');
    my_putchar(hex[(c / 16) % 16]);
    my_putchar(hex[c % 16]);
}

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 126)
            my_putchar(str[i]);
        else
            print_hex_char(str[i]);
        i++;
    }
    return (0);
}
