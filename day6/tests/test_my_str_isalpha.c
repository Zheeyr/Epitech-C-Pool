#include <criterion/criterion.h>
#include "my_str_isalpha.h"

Test(my_str_isalpha, only_alphabets)
{
    cr_assert_eq(my_str_isalpha("HelloWorld"), 1);
}

Test(my_str_isalpha, contains_numbers)
{
    cr_assert_eq(my_str_isalpha("Hello123"), 0);
}

Test(my_str_isalpha, contains_special_characters)
{
    cr_assert_eq(my_str_isalpha("Hello!World"), 0);
}

Test(my_str_isalpha, empty_string)
{
    cr_assert_eq(my_str_isalpha(""), 1);
}

Test(my_str_isalpha, all_uppercase)
{
    cr_assert_eq(my_str_isalpha("HELLOWORLD"), 1);
}
