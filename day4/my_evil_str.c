/*
** EPITECH PROJECT, 2024
** my_evil_str
** File description:
** Function that swaps each of the string’s characters,
** two by two, effectively reversing the string.
** Author: Yanis "Zheeyr" R.
*/

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    int length = my_strlen(str);
    int i = 0;
    char temp;

    while (i < length / 2) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
        i++;
    }
    return (str);
}

int my_strlen(char const *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}
