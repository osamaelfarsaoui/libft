#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <fcntl.h>

void	run_test(const char *haystack, const char *needle, size_t l)
{
	char	*expected = strnstr(haystack, needle, l);
	char	*actual = ft_strnstr(haystack, needle, l);

	if (expected == actual)
	{
		printf("[PASS] (%s, %s, %zu) -> %s\n", haystack, needle, l, actual);
	}
	else
	{
		printf("[FAIL] (%s, %s, %zu)\n", haystack, needle, l);
		printf("       Expected: %s\n", expected);
		printf("       Actual:   %s\n", actual);
	}
}

int	main(void)
{
	char	*s = "See, I am a test string.";
	char	empty[] = "";

	printf("--- Basic Tests ---\n");
	run_test(s, "test", 25); // Simple find
	run_test(s, "See", 5);    // Find at start
	run_test(s, "string.", 25); // Find at end
	run_test(s, "am a", 10);  // Find in middle
	run_test(s, "NOT", 25);   // Not found
	run_test(s, s, 25);       // Haystack == Needle

	printf("\n--- Empty Needle Test ---\n");
	run_test(s, empty, 25); // Empty needle
	run_test(s, empty, 0);  // Empty needle with l=0
	run_test(empty, empty, 0); // Empty everything

	printf("\n--- 'l' Boundary Tests (Crucial!) ---\n");
	run_test(s, "test", 0);  // l=0, should find nothing
	run_test(s, "See", 2);   // l=2, "See" is 3. Should fail.
	run_test(s, "See", 3);   // l=3, "See" is 3. Should succeed.
	run_test(s, "string.", 24); // Found, but 'l' is too short
	run_test(s, "string.", 25); // Found, 'l' is just long enough

	printf("\n--- Overlap & Repetition Tests ---\n");
	run_test("aaaaa", "aa", 5);     // Should find first "aa"
	run_test("banana", "ana", 6);   // Should find first "ana"
	run_test("lollol", "lol", 5);   // Should find first "lol"

	printf("\n--- End of String / 'l' Limit Tests ---\n");
	// This tests the bug I mentioned.
	// We search "pouille" for "pou"
	// "pou" starts at index 4, length 3.
	run_test("pouille", "pou", 6);  // l=6. Searches index 0-5. Fails.
	run_test("pouille", "pou", 7);  // l=7. Searches index 0-6. Finds it!
	run_test("abc", "abcd", 4);     // Needle longer than haystack
	run_test("abc", "abc", 3);      // Needle == haystack
	run_test("abc", "abc", 2);      // Needle longer than l
	
	// This is the one that *could* read out of bounds.
	// Your function needs to check `l` *before* reading the byte.
	run_test("abc", "abcx", 3); // Checks 'x' against '\0'. Should be safe.
	run_test("abc", "abcy", 10); // l is > strlen. Should not read past '\0'.

	return (0);
}