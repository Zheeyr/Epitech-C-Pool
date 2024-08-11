#include <criterion/criterion.h>
#include "my_strncmp.h"

Test(my_strncmp, compare_equal_strings)
{
    cr_assert_eq(my_strncmp("Hello", "Hello", 5), 0);
}

Test(my_strncmp, compare_different_strings)
{
    cr_assert_lt(my_strncmp("Hello", "World", 5), 0);
}

Test(my_strncmp, compare_prefix_same)
{
    cr_assert_eq(my_strncmp("Hello", "Hell", 4), 0);
}

Test(my_strncmp, compare_prefix_different)
{
    cr_assert_gt(my_strncmp("Hello", "Hell", 5), 0);
}

Test(my_strncmp, compare_with_n_greater_than_length)
{
    cr_assert_eq(my_strncmp("Hello", "HelloWorld", 10), 0);
}
