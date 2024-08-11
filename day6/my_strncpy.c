/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** Function that copies n characters from a string into another.
** The destination string will already have enough memory to contain n characters.
** The function returns dest.
** Author: Yanis "Zheeyr" R.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
