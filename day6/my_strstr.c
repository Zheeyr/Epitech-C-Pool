/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** Function that reproduces the behavior of the strstr function.
** The function returns a pointer to the first occurrence of the substring to_find in the string str.
** If the substring is not found, the function returns NULL.
** Author: Yanis "Zheeyr" R.
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j;

    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0') {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0') {
            j++;
        }
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (NULL);
}
