/*
** EPITECH PROJECT, 2024
** my_revstr
** File description:
** Function that reverses a string.
** The function returns str.
** Author: Yanis "Zheeyr" R.
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int i = 0;
    char temp;

    while (i < len / 2) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        i++;
    }
    return (str);
}

int my_strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}
