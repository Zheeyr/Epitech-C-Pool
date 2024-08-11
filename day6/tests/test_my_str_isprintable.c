#include <criterion/criterion.h>
#include "my_str_isprintable.h"

Test(my_str_isprintable, all_printable)
{
    cr_assert_eq(my_str_isprintable("Hello World!"), 1);
}

Test(my_str_isprintable, contains_non_printable)
{
    char str[] = "Hello\1World";
    cr_assert_eq(my_str_isprintable(str), 0);
}

Test(my_str_isprintable, contains_only_spaces)
{
    cr_assert_eq(my_str_isprintable("     "), 1);
}

Test(my_str_isprintable, empty_string)
{
    cr_assert_eq(my_str_isprintable(""), 1);
}

Test(my_str_isprintable, contains_tab_character)
{
    char str[] = "Hello\tWorld";
    cr_assert_eq(my_str_isprintable(str), 0);
}
