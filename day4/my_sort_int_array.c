/*
** EPITECH PROJECT, 2024
** my_sort_int_array
** File description:
** Function that sorts an integer array in ascending order.
** Author: Yanis "Zheeyr" R.
*/

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int j;
    int temp;

    while (i < size - 1) {
        j = i + 1;
        while (j < size) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            j++;
        }
        i++;
    }
}
