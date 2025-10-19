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
	char *result;
	
	// Test 1: Normal case
	result = ft_strjoin("Hello ", "World!");
	printf("Test 1: '%s'\n", result);
	free(result);
	
	// Test 2: Empty first string
	result = ft_strjoin("", "World!");
	printf("Test 2: '%s'\n", result);
	free(result);
	
	// Test 3: Empty second string
	result = ft_strjoin("Hello ", "");
	printf("Test 3: '%s'\n", result);
	free(result);
	
	// Test 4: Both empty
	result = ft_strjoin("", "");
	printf("Test 4: '%s'\n", result);
	free(result);
	
	// Test 5: NULL pointers (should return NULL)
	result = ft_strjoin(NULL, "test");
	printf("Test 5: %s\n", result == NULL ? "NULL" : "NOT NULL");
	
	return (0);
}
