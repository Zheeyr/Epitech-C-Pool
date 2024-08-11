/*
** EPITECH PROJECT, 2024
** my_getnbr
** File description:
** Function that returns a number sent to the function as a string.
** It handles edge cases such as overflow and leading signs.
** Author: Yanis "Zheeyr" R.
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long result = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        if (result > 2147483647 && sign == 1)
            return (0);
        if (result > 2147483648 && sign == -1)
            return (0);
        i++;
    }
    return ((int)(result * sign));
}
