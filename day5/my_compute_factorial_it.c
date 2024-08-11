/*
** EPITECH PROJECT, 2024
** my_compute_factorial_it
** File description:
** Function that returns the factorial of the number given as a parameter.
** If the number is less than 0, the function returns 0.
** Author: Yanis "Zheeyr" R.
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0 || nb > 12)
        return (0);
    while (nb > 0) {
        result *= nb;
        nb--;
    }
    return (result);
}
