/*
** EPITECH PROJECT, 2024
** my_compute_power_rec
** File description:
** Function that returns the first argument raised to the power p,
** where p is the second argument, using a recursive approach.
** Author: Yanis "Zheeyr" R.
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    return (nb * my_compute_power_rec(nb, p - 1));
}
