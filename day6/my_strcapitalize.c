/*
** EPITECH PROJECT, 2024
** my_strcapitalize
** File description:
** Function that capitalizes the first letter of each word in a string.
** The function returns str.
** Author: Yanis "Zheeyr" R.
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (i == 0 || (str[i - 1] < 'a' || str[i - 1] > 'z') &&
            (str[i - 1] < 'A' || str[i - 1] > 'Z') &&
            (str[i - 1] < '0' || str[i - 1] > '9')) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= ('a' - 'A');
            }
        } else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += ('a' - 'A');
            }
        }
        i++;
    }
    return (str);
}
