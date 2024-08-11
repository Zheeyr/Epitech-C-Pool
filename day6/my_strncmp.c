/*
** EPITECH PROJECT, 2024
** my_strncmp
** File description:
** Function that reproduces the behavior of the strncmp function.
** The function compares up to n characters of the strings s1 and s2.
** Author: Yanis "Zheeyr" R.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n == 0)
        return (0);
    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i < n)
        return (s1[i] - s2[i]);
    return (0);
}
