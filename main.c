#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{

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