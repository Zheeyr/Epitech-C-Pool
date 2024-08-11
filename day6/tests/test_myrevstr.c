#include <criterion/criterion.h>
#include "my_revstr.h"

Test(my_revstr, reverse_simple_string)
{
    char str[] = "Hello";
    cr_assert_str_eq(my_revstr(str), "olleH");
}

Test(my_revstr, reverse_empty_string)
{
    char str[] = "";
    cr_assert_str_eq(my_revstr(str), "");
}

Test(my_revstr, reverse_palindrome)
{
    char str[] = "madam";
    cr_assert_str_eq(my_revstr(str), "madam");
}

Test(my_revstr, reverse_odd_length_string)
{
    char str[] = "abcde";
    cr_assert_str_eq(my_revstr(str), "edcba");
}

Test(my_revstr, reverse_even_length_string)
{
    char str[] = "abcdef";
    cr_assert_str_eq(my_revstr(str), "fedcba");
}
