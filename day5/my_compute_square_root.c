/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** Function that returns the square root of a number if it is a whole number.
** If the square root is not a whole number, the function returns 0.
** Author: Yanis "Zheeyr" R.
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0)
        return (0);
    while (i * i <= nb) {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}
