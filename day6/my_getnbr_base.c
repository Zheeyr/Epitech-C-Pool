/*
** EPITECH PROJECT, 2024
** my_getnbr_base
** File description:
** Function that converts and returns a number in a given base as a decimal number.
** The function deals with negative numbers and handles multiple successive + or - signs.
** If any error occurs, the function returns 0.
** Author: Yanis "Zheeyr" R.
*/

int my_strlen(char const *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}

int is_valid_base(char const *base)
{
    int i, j;

    if (my_strlen(base) < 2)
        return (0);
    for (i = 0; base[i] != '\0'; i++) {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        for (j = i + 1; base[j] != '\0'; j++) {
            if (base[i] == base[j])
                return (0);
        }
    }
    return (1);
}

int get_base_value(char c, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++) {
        if (base[i] == c)
            return (i);
    }
    return (-1);
}

int my_getnbr_base(char const *str, char const *base)
{
    int base_len = my_strlen(base);
    int result = 0;
    int sign = 1;
    int i = 0;
    int value;

    if (!is_valid_base(base))
        return (0);
    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] != '\0') {
        value = get_base_value(str[i], base);
        if (value == -1)
            return (0);
        result = result * base_len + value;
        i++;
    }
    return (result * sign);
}
