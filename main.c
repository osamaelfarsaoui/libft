#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

void run_test(int number, char *expected_str)
{
    char *result = ft_itoa(number);
    
    printf("Testing:  %d\n", number);
    printf("Expected: %s\n", expected_str);
    printf("Got:      %s\n", result);
    
    if (result != NULL && strcmp(result, expected_str) == 0)
    {
        printf("Result:   OK ✅\n");
    }
    else
    {
        printf("Result:   FAIL ❌\n");
    }
    
    printf("--------------------------------------\n");
    free(result); // Don't forget to free the allocated memory!
}

int main(void)
{
    // The test you asked for
    run_test(INT_MIN, "-2147483648");
    
    // Other important edge cases
    run_test(INT_MAX, "2147483647");
    run_test(0, "0");
    
    // Standard cases
    run_test(42, "42");
    run_test(-42, "-42");
    run_test(1234567, "1234567");
    
    return (0);
}

//int main()
//{
//	char	*str1 = "Hilolola";
//	char	*str2 = "Hella";
//	int test = 511;
//	printf("%d\n", ft_strncmp(str1, str2, 6));
//	ft_bzero(&test, 1);
//	printf("%d\n", test);
//	printf("%s\n", ft_strrchr(str1, 'o'));
//}

//int main() {
//	char	*str1 = "xx";
//	char	*str2 = "x";
//	char	*result = ft_strtrim(str1, str2);
//	printf("%s\n", result);
//	free(result);
//    return 0;
//}

//char example_func(unsigned int i, char c)
//{
//    if (i % 2 == 0)
//    {
//        if (c >= 'a' && c <= 'z')
//            return c - 32; // uppercase
//    }
//    else
//    {
//        if (c >= 'A' && c <= 'Z')
//            return c + 32; // lowercase
//    }
//    return c; // unchanged
//}

//int main(void)
//{
//    char *result;

//    result = ft_strmapi("Hello World!", example_func);
//    if (result)
//    {
//        printf("%s\n", result);  // Should print: HeLlO WoRlD!
//        free(result);
//    }
//    else
//    {
//        printf("ft_strmapi returned NULL\n");
//    }
//    return 0;
//}

//void example_func(unsigned int i, char *c)
//{
//    if (i % 2 == 0)
//    {
//        if (*c >= 'a' && *c <= 'z')
//            *c = *c - 32; // uppercase
//    }
//    else
//    {
//        if (*c >= 'A' && *c <= 'Z')
//            *c = *c + 32; // lowercase
//    }
//}

//int main(void)
//{
//    char str[] = "Hello World!";

//    ft_striteri(str, example_func);
//    printf("%s\n", str);  // Should print: HeLlO WoRlD!

//    return 0;
//}