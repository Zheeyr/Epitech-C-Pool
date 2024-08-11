/*
** EPITECH PROJECT, 2024
** my_is_prime
** File description:
** Function that returns 1 if the number is prime and 0 if not.
** Author: Yanis "Zheeyr" R.
*/

int my_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0);
    i = 2;
    while (i * i <= nb) {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}
