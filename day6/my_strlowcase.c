/*
** EPITECH PROJECT, 2024
** my_strlowcase
** File description:
** Function that puts every letter of every word in the string to lowercase.
** The function returns str.
** Author: Yanis "Zheeyr" R.
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
    return (str);
}
