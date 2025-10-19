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


/*
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
    result = strlcat(dst, src, 5);
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


    strcpy(dst, "Hello");
    result = ft_strlcat(dst, dst, sizeof(dst));
    printf("Test 6: '%s' (return: %zu)\n", dst, result);
    
    return 0;
}
*/


// #define _GNU_SOURCE
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// #include <sys/wait.h>
// #include <stdint.h>
// #include <errno.h>

// #define GREEN "\x1b[32m"
// #define RED   "\x1b[31m"
// #define YELLOW "\x1b[33m"
// #define RESET "\x1b[0m"

// int test_ft_bzero_overflow(void)
// {
//     unsigned char buffer[20];
//     memset(buffer, 0xAB, sizeof(buffer));

//     size_t bzero_len = 10;

//     ft_bzero(buffer, bzero_len);

//     for (size_t i = 0; i < bzero_len; i++) {
//         if (buffer[i] != 0x00) return 1;
//     }

//     for (size_t i = bzero_len; i < sizeof(buffer); i++) {
//         if (buffer[i] != 0xAB) return 2;
//     }

//     return 0;
// }

// int test_ft_bzero_zero_len(void)
// {
//     unsigned char buffer[8];
//     memset(buffer, 0xCD, sizeof(buffer));

//     ft_bzero(buffer, 0);

//     for (size_t i = 0; i < sizeof(buffer); i++) {
//         if (buffer[i] != 0xCD) return 1;
//     }
//     return 0;
// }

// int test_ft_bzero_large(void)
// {
//     size_t len = 1000000;
//     unsigned char *buffer = malloc(len + 16);
//     if (!buffer) return 99;

//     memset(buffer, 0xEF, len + 16);

//     ft_bzero(buffer + 8, len);

//     for (size_t i = 0; i < len; ++i)
//         if (buffer[8 + i] != 0x00) { free(buffer); return 1; }

//     for (int i = 0; i < 8; ++i)
//         if (buffer[i] != 0xEF || buffer[len + 8 + i] != 0xEF) {
//             free(buffer);
//             return 2;
//         }

//     free(buffer);
//     return 0;
// }


// int run_test(const char *test_name, int (*test_fn)(void))
// {
//     pid_t pid = fork();
//     if (pid < 0) {
//         perror("fork");
//         return -1;
//     }
//     if (pid == 0) {
//         int r = test_fn();
//         _exit(r);
//     } else {
//         int status;
//         waitpid(pid, &status, 0);
//         if (WIFEXITED(status)) {
//             int code = WEXITSTATUS(status);
//             if (code == 0) {
//                 printf(GREEN "[OK] " RESET "%s\n", test_name);
//                 return 0;
//             } else {
//                 printf(RED "[FAIL] " RESET "%s (exit %d)\n", test_name, code);
//                 return 1;
//             }
//         } else if (WIFSIGNALED(status)) {
//             int sig = WTERMSIG(status);
//             printf(RED "[CRASH] " RESET "%s (signal %d)\n", test_name, sig);
//             return 2;
//         } else {
//             printf(YELLOW "[?] " RESET "%s (unknown status)\n", test_name);
//             return 3;
//         }
//     }
// }

// int main(void)
// {
// 	int failures = 0;
// 	failures += run_test("ft_bzero_overflow", test_ft_bzero_overflow);
// 	failures += run_test("ft_bzero_zero_len", test_ft_bzero_zero_len);
// 	failures += run_test("ft_bzero_large", test_ft_bzero_large);

// 	return 0;
// }

// #include <stdlib.h>
// #include <assert.h>

// int main() {
//     int *ptr = NULL;
//     int num_elements = 5;
//     size_t element_size = sizeof(int);

//     ptr = (int *)ft_calloc(num_elements, element_size);
//     if (ptr == NULL) {
//         printf("calloc failed to allocate memory.\n");
//         return 1;
//     }
//     printf("calloc successful!\n");

//     printf("Initial values: ");
//     for (int i = 0; i < num_elements; i++) {
//         printf("%d ", ptr[i]); // Should print 0 0 0 0 0
//         assert(ptr[i] == 0);   // Assert that the values are zero
//     }
//     printf("\n");

//     void *zero_ptr = ft_calloc(0, 0);
//     if (zero_ptr != NULL) {
//         printf("calloc(0,0) returned a unique pointer.\n");
//         free(zero_ptr);
//     } else {
//         printf("calloc(0,0) returned NULL (This is not the expected behavior).\n");
//     }

//     size_t large_num = 1000000000; // A large number
//     size_t large_size = 1000000000; // A large size
//     ptr = (int *)ft_calloc(large_num, large_size);
//     if (ptr == NULL) {
//         printf("calloc overflow test passed (returned NULL).\n");
//     } else {
//         printf("calloc overflow test failed (did not return NULL).\n");
//         free(ptr);
//     }


//     // Clean up memory
//     free(ptr);
//     ptr = NULL;

//     return 0;
// }

int main()
{
    char *str = "Oussama=Mpsy";
    char *str2 = ft_substr(str, 'a', 4);
    printf("%s\n", str2);
}