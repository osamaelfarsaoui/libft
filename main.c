#include "libft.h"
#include <stdio.h>
#include <string.h>

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

int main(void)
{
    char dst[20];
    char src[] = "World";
    size_t result;
    
    // Test 1: Normal case
    strcpy(dst, "Hello");
    result = ft_strlcat(dst, src, sizeof(dst));
    printf("Test 1: '%s' (return: %zu)\n", dst, result);
    
    // Test 2: Buffer exactly filled
    strcpy(dst, "Hello");
    result = ft_strlcat(dst, src, 11);
    printf("Test 2: '%s' (return: %zu)\n", dst, result);
    
    // Test 3: Buffer too small
    strcpy(dst, "Hello");
    result = ft_strlcat(dst, src, 8);
    printf("Test 3: '%s' (return: %zu)\n", dst, result);
    
    // Test 4: Empty destination
    dst[0] = '\0';
    result = ft_strlcat(dst, src, sizeof(dst));
    printf("Test 4: '%s' (return: %zu)\n", dst, result);
    
    // Test 5: Size 0
    strcpy(dst, "Hello");
    result = ft_strlcat(dst, src, 0);
    printf("Test 5: '%s' (return: %zu)\n", dst, result);
    
    // Test 6: Empty source
    strcpy(dst, "Hello");
    result = ft_strlcat(dst, "", sizeof(dst));
    printf("Test 6: '%s' (return: %zu)\n", dst, result);
    
    return 0;
}