/*
** EPITECH PROJECT, 2024
** my_compute_power_it
** File description:
** Function that returns the first argument raised to the power p,
** where p is the second argument, using an iterative approach.
** Author: Yanis "Zheeyr" R.
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p < 0)
        return (0);
    while (p > 0) {
        result *= nb;
        p--;
    }
    return (result);
}
