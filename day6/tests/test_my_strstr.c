#include <criterion/criterion.h>
#include "my_strstr.h"

Test(my_strstr, find_substring_at_start)
{
    char str[] = "HelloWorld";
    cr_assert_str_eq(my_strstr(str, "Hello"), "HelloWorld");
}

Test(my_strstr, find_substring_in_middle)
{
    char str[] = "HelloWorld";
    cr_assert_str_eq(my_strstr(str, "World"), "World");
}

Test(my_strstr, find_substring_not_present)
{
    char str[] = "HelloWorld";
    cr_assert_null(my_strstr(str, "Goodbye"));
}

Test(my_strstr, find_empty_substring)
{
    char str[] = "HelloWorld";
    cr_assert_str_eq(my_strstr(str, ""), "HelloWorld");
}

Test(my_strstr, find_substring_at_end)
{
    char str[] = "abcdef";
    cr_assert_str_eq(my_strstr(str, "def"), "def");
}
