/*
** EPITECH PROJECT, 2024
** my_strupcase
** File description:
** Function that puts every letter of every word in the string to uppercase.
** The function returns str.
** Author: Yanis "Zheeyr" R.
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    return (str);
}
