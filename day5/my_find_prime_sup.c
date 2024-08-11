/*
** EPITECH PROJECT, 2024
** my_find_prime_sup
** File description:
** Function that returns the smallest prime number greater than or equal to nb.
** Author: Yanis "Zheeyr" R.
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb <= 2)
        return (2);
    while (!my_is_prime(nb)) {
        nb++;
    }
    return (nb);
}

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
