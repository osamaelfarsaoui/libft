#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <fcntl.h>

// --- Test Utility ---
void run_test(const char *haystack, const char *needle, size_t l)
{
	// Call both functions
	char *expected = strnstr(haystack, needle, l);
	char *actual = ft_strnstr(haystack, needle, l);

	// Compare the results
	if (actual == expected)
	{
		printf("[PASS] (%s, %s, %zu)\n", haystack, needle, l);
	}
	else
	{
		printf("[FAIL] Test Failed! (%s, %s, %zu)\n", haystack, needle, l);
		printf("       Expected: %p (%s)\n", (void *)expected, expected);
		printf("       Actual:   %p (%s)\n", (void *)actual, actual);
	}
}

int	main(void)
{
	char	*s = "See, I am a test string.";
	char	empty[] = "";

	printf("--- Basic Tests ---\n");
	run_test(s, "test", 25);
	run_test(s, "See", 5);
	run_test(s, "string.", 25);
	run_test(s, "am a", 10);
	run_test(s, "NOT", 25);
	run_test(s, s, 25);

	printf("\n--- Empty Needle Test ---\n");
	run_test(s, empty, 25);
	run_test(s, empty, 0);
	run_test(empty, empty, 0);
	run_test(empty, "a", 0);

	printf("\n--- 'l' Boundary Tests (Crucial!) ---\n");
	run_test(s, "test", 0);
	run_test(s, "See", 2);
	run_test(s, "See", 3);
	run_test(s, "string.", 24); // <-- This is a key test
	run_test(s, "string.", 25); // <-- This is a key test

	printf("\n--- End of String / 'l' Limit Tests ---\n");
	run_test("pouille", "pou", 6); // <-- This is a key test
	run_test("pouille", "pou", 7); // <-- This is a key test
	
	run_test("abc", "abcd", 4);
	run_test("abc", "abc", 3);
	run_test("abc", "abc", 2);
	
	printf("\n--- Repetition Tests ---\n");
	run_test("aaaaa", "aa", 5);
	run_test("banana", "ana", 6);
	run_test("lollol", "lol", 5);

	/*
	 * We CANNOT test the NULL segfaults, because
	 * if we call the real strnstr(NULL, ...),
	 * our test program itself will crash.
	 * * You have already confirmed your function will
	 * crash by checking the code.
	 */
	// run_test(NULL, "hello", 5); // <-- DO NOT UNCOMMENT
	// run_test("hello", NULL, 5); // <-- DO NOT UNCOMMENT

	printf("\nAll tests complete.\n");
	return (0);
}