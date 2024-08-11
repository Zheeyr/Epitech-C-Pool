/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** Function that counts and returns the number of characters
** found in the string passed as parameter.
** Author: Yanis "Zheeyr" R.
*/

int my_strlen(char const *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}
