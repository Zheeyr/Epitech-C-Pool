#include <criterion/criterion.h>
#include "my_str_islower.h"

Test(my_str_islower, all_lowercase)
{
    cr_assert_eq(my_str_islower("helloworld"), 1);
}

Test(my_str_islower, contains_uppercase)
{
    cr_assert_eq(my_str_islower("HelloWorld"), 0);
}

Test(my_str_islower, contains_special_characters)
{
    cr_assert_eq(my_str_islower("hello!world"), 0);
}

Test(my_str_islower, empty_string)
{
    cr_assert_eq(my_str_islower(""), 1);
}

Test(my_str_islower, all_uppercase)
{
    cr_assert_eq(my_str_islower("HELLOWORLD"), 0);
}
