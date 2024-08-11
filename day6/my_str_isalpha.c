/*
** EPITECH PROJECT, 2024
** my_str_isalpha
** File description:
** Function that returns 1 if the string only contains alphabetical characters,
** and 0 if the string contains another type of character.
** The function returns 1 if str is an empty string.
** Author: Yanis "Zheeyr" R.
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0') {
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
            return (0);
        i++;
    }
    return (1);
}
