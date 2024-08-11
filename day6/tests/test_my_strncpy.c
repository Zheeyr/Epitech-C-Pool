#include <criterion/criterion.h>
#include "my_strncpy.h"

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};
    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copy_string_in_empty_array)
{
    char my_dest[6] = {0};
    char dest[6] = {0};

    my_strncpy(my_dest, "Hello", 6);
    strncpy(dest, "Hello", 6);
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strncpy, copy_entire_string)
{
    char dest[11] = {0};

    my_strncpy(dest, "HelloWorld", 10);
    cr_assert_str_eq(dest, "HelloWorld");
}

Test(my_strncpy, copy_with_n_greater_than_src_length)
{
    char dest[20] = {0};

    my_strncpy(dest, "Test", 15);
    cr_assert_str_eq(dest, "Test");
    cr_assert_eq(dest[14], '\0');
}
