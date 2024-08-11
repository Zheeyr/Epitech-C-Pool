/*
** EPITECH PROJECT, 2024
** my_compute_factorial_rec
** File description:
** Function that returns the factorial of the number given as a parameter.
** It uses a recursive approach. If the number is less than 0 or too large,
** the function returns 0.
** Author: Yanis "Zheeyr" R.
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    return (nb * my_compute_factorial_rec(nb - 1));
}
