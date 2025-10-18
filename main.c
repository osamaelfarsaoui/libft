#include "libft.h"
#include <stdio.h>

//int main()
//{
	//char	*str1 = "Hilolola";
	//char	*str2 = "Hella";
	//int test = 511;
	//printf("%d\n", ft_strncmp(str1, str2, 6));
	//ft_bzero(&test, 1);
	//printf("%d\n", test);
	//printf("%s\n", ft_strrchr(str1, 'o'));
//}


int main() {
    const char *haystack = "hello world";
    const char *needle = "world";
    size_t len = 11;

    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL) {
        printf("Found '%s' in '%s' at position: %ld\n", needle, haystack, result - haystack);
    } else {
        printf("Did not find '%s' in the first %zu characters of '%s'\n", needle, len, haystack);
    }

    // Another example with shorter length where needle won't fit
    len = 5;
    result = ft_strnstr(haystack, needle, len);
    if (result != NULL) {
        printf("Found '%s' in '%s' at position: %ld\n", needle, haystack, result - haystack);
    } else {
        printf("Did not find '%s' in the first %zu characters of '%s'\n", needle, len, haystack);
    }

    return 0;
}