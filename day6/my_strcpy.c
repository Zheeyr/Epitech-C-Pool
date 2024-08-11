/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** Function that copies a string into another.
** The destination string will already have enough memory to copy the source string.
** The function returns dest.
** Author: Yanis "Zheeyr" R.
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
