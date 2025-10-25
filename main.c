#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <fcntl.h>

/* Print a result array (for human inspection) */
static void print_res(char **res)
{
	size_t i;

	if (!res)
	{
		printf("(NULL)\n");
		return ;
	}
	printf("[");
	i = 0;
	while (res[i])
	{
		if (i)
			printf(", ");
		printf("\"%s\"", res[i]);
		i++;
	}
	printf("]\n");
}

/* Free array returned by ft_split */
static void free_res(char **res)
{
	size_t i;

	if (!res)
		return ;
	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}

/* Compare result to expected NULL-terminated array.
   Returns 1 if equal, 0 otherwise. */
static int compare_res(char **res, char **expected)
{
	size_t i;

	/* Both NULL is considered equal */
	if (!res && !expected)
		return (1);
	/* One NULL and the other not -> not equal */
	if (!res || !expected)
		return (0);
	i = 0;
	while (res[i] || expected[i])
	{
		if (!res[i] || !expected[i]) /* one ended earlier */
			return (0);
		if (strcmp(res[i], expected[i]) != 0)
			return (0);
		i++;
	}
	return (1);
}

/* Helper to run a single test case */
static void run_test(const char *label, const char *s, char c,
		     char *expected[]) /* expected must be NULL-terminated */
{
	char **res;
	int ok;

	printf("TEST: %s\n", label);
	printf(" input: \"%s\" delim: '%c'\n", s ? s : "NULL", c ? c : '\0');
	res = ft_split(s, c);
	printf(" result: ");
	print_res(res);
	ok = compare_res(res, expected);
	printf(" expected: ");
	print_res(expected);
	printf(" => %s\n\n", ok ? "PASS" : "FAIL");
	free_res(res);
}

/* Small helper to build a NULL-terminated empty expected array */
static char *empty_expected[] = { NULL };

int main(void)
{
	/* Define expected arrays (each must be NULL-terminated) */
	char *exp_abc[] = { "a", "b", "c", NULL };
	char *exp_single[] = { "hello", NULL };
	char *exp_comma[] = { "a", "b", NULL };
	char *exp_full[] = { "abc", NULL };

	///* Run tests */
	run_test("empty string", "", ' ', empty_expected);
	run_test("only delimiters", "   ", ' ', empty_expected);
	run_test("simple words", "a b c", ' ', exp_abc);
	run_test("leading/trailing/multiple delimiters", ",a,,b,", ',', exp_comma);
	run_test("no delimiter present", "hello", ' ', exp_single);
	run_test("delimiter is NUL (treat whole string as single word)", "abc", '\0', exp_full);

	///* Test NULL input (your implementation should return NULL) */
	run_test("NULL input", NULL, ' ', NULL);

	return (0);
}