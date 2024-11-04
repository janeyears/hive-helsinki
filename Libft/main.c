#include "libft.h"
#include <string.h>
#include <limits.h>


int	test_ft_atoi(void)
{
	const char test1[] = "123";
	const char test2[] = "-123";
	const char test3[] = "+123";
	const char test4[] = "-2147483648";
	const char test5[] = "2147483647";
	const char test6[] = "123abc456";
	const char test7[] = "   \t\n  123";
	const char test8[] = "   +0";
	const char test9[] = "-0";
	const char test10[] = "a123";
	const char test11[] = "";
	const char *tests[] = {test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11};
	int correct[] = {123, -123, 123, -2147483648, 2147483647, 123, 123, 0, 0, 0, 0};
	
	printf("➡️ Test cases for ft_atoi\n");

	for (int i = 0; i < 11; i++)
	{
		int result = ft_atoi(tests[i]);
		printf("Test %d: Input: \"%s\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

	return (0);
}

int	test_ft_bzero(void)
{
	char str[] = "abcdcde";
	char str2[] = "abcdcde";
	int c = 3;
 
 	printf("➡️ Test cases for ft_bzero\n");

	printf("String before original bzero: %c, %c, %c, %c, %c, %c \n", str[0], str[1], str[2], str[3], str[4], str[5]);
	bzero(str, c);
	printf("String after original bzero: %c, %c, %c, %c, %c, %c \n", str[0], str[1], str[2], str[3], str[4], str[5]);
	printf("String before my ft_bzero: %c, %c, %c, %c, %c, %c \n", str2[0], str2[1], str2[2], str2[3], str2[4], str2[5]);
	ft_bzero(str2, c);
	printf("String after my ft_bzero: %c, %c, %c, %c, %c, %c \n", str2[0], str2[1], str2[2], str2[3], str2[4], str2[5]);
	return(0);
}

int	test_ft_calloc(void)
{
	printf("➡️ Test cases for ft_calloc\n");

	int *arr = (int *)calloc(10, sizeof(int));
    if (arr) {
        printf("✅ Test 1 Passed: Allocated 10 integers.\n");
        for (int i = 0; i < 10; i++) {
            if (arr[i] != 0) {
                printf("❌ Test 1 Failed: Memory not initialized to zero.\n");
                free(arr);
                return 1;
            }
        }
        printf("✅ Test 1 Memory initialized to zero: Passed\n");
    	free(arr);
    } else {
        printf("❌ Test 1 Failed: ft_calloc returned NULL.\n");
    }

	arr = (int *)calloc(2, INT_MAX + 1);
    if (arr == NULL) {
        printf("✅ Test 2 Passed: detected overflow and returned NULL.\n");
    } else {
        printf("❌ Test 2 Failed: Expected NULL but got a pointer.\n");
      free(arr);
    }
	return 0;
}


int	test_ft_isalnum(void)
{
	int test1 = '5';
	int test2 = 'F';
	int test3 = 'n';
	int test4 = '\n';

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 1, 1, 0};
	
	printf("➡️ Test cases for ft_isalnum\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isalnum(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

	return (0);
}

int	test_ft_isalpha(void)
{
	int test1 = '5';
	int test2 = 'F';
	int test3 = 'n';
	int test4 = '\n';

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {0, 1, 1, 0};
	
	printf("➡️ Test cases for ft_isalpha\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isalpha(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

	return (0);
}

int	test_ft_isascii(void)
{
	int test1 = 0;
	int test2 = -127;
	int test3 = 'A';
	int test4 = 255;

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 0, 1, 0};
	
	printf("➡️ Test cases for ft_isascii\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isascii(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

	return (0);
}

int	test_ft_isdigit(void)
{
	int test1 = '0';
	int test2 = '9';
	int test3 = 'A';
	int test4 = '2';

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 1, 0, 1};
	
	printf("➡️ Test cases for ft_isdigit\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isdigit(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

	return (0);
}

int	test_ft_isprint(void)
{
	int test1 = 'H';
	int test2 = 30;
	int test3 = 105;
	int test4 = 129;

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 0, 1, 0};
	
	printf("➡️ Test cases for ft_isprint\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isprint(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

	return (0);
}

int	test_ft_itoa(void)
{
	int test1 = 0;
	int test2 = 1;
	int test3 = -1;
	int test4 = 123;
	int test5 = -123;
	int test6 = 1000;
	int test7 = 2147483647;
	int test8 = -2147483648;
	int tests[] = {test1, test2, test3, test4, test5, test6, test7, test8};
	const char *correct[] = {"0", "1", "-1", "123", "-123", "1000", "2147483647", "-2147483648"};
	
	printf("➡️ Test cases for ft_itoa\n");

	for (int i = 0; i < 8; i++)
	{
		char *result = ft_itoa(tests[i]);
		printf("Test %d: Input: \"%d\" | Expected: %s | Result: %s\n", i + 1, tests[i], correct[i], result);
		if (result != NULL && strcmp(result, correct[i]) == 0)
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

	return (0);
}

void	test_ft_memchr(void)
{
	char str[] = "Hello World!";
	char c = 'r';
	char c2 = 'A';
	size_t n = 10;
	size_t n2 = 0;
	
	printf("➡️ Test cases for ft_memchr\n");
	
	char *test1 = ft_memchr(str, c, n); 
	if (test1 != NULL)
		printf("✅ Test 1 Passed: Found '%c' at position %ld\n", c, test1 - str);
	else
		printf("❌ Test 1 Failed: Character '%c' not found\n", c);
	char *test2 = ft_memchr(str, c2, n); 
	if (test2 == NULL)
		printf("✅ Test 2 Passed: Character '%c' not found\n", c);
	else
		printf("❌ Test 2 Failed: Unexpectedly found '%c'\n", c);
	
	char *test3 = ft_memchr(str, c, n2); 
	if (test3 == NULL)
		printf("✅ Test 1 Passed: no search for zero n\n");
	else
		printf("❌ Test 1 Failed: Unexpectedly found '%c'\n", c);

}

void	test_ft_memcmp(void)
{
	const char str1[] = "Hello!";
	const char str2[] = "Hello World";
	const char str3[] = "World!";
	
	printf("➡️ Test cases for ft_memcmp\n");

	int test1 = ft_memcmp(str1, str2, 4);
	if (test1 == 0)
		printf("✅ Test 1 Passed: first 4 characters are the same\n");
	else
		printf("❌ Test 1 Failed: first 4 characters should be the same\n");
	int test2 = ft_memcmp(str1, str2, 6);
	if (test2 != 0)
		printf("✅ Test 2 Passed: first 6 characters are not the same\n");
	else
		printf("❌ Test 2 Failed: first 6 characters shouldn't be the same\n");
	int test3 = ft_memcmp(str1, str3, 1);
	if (test3 != 0)
		printf("✅ Test 3 Passed: strings are not the same\n");
	else
		printf("❌ Test 3 Failed: strings shoudn't be same\n");
}

void	test_ft_memcpy(void)
{
	char src[] = "Hello, World!";
    char dest[20];

	printf("➡️ Test cases for ft_memcpy\n");

	ft_memcpy(dest, src, strlen(src));
	printf("Test 1: copy the whole src: %s\n", dest);

	char dest2[20];
	ft_memcpy(dest2, src, 0);
	printf("Test 2: copy 0 chars: %s\n", dest2);

	char *null_dest = NULL;
    char *null_src = NULL;
    if (ft_memcpy(null_dest, null_src, 10) == NULL)
		printf("✅ Test 3 - NULL Dest and Src: Passed\n");
    else
		printf("❌ Test 3 - NULL Dest and Src: Failed\n");
}

void	test_ft_memmove(void)
{
	char src[] = "Hello, World!";
	char dest[50];

	printf("➡️ Test cases for ft_memmove\n");

	ft_memmove(dest, src, 14);
	printf("Test 1 - Basic move: %s\n", dest);

	char empty_buffer[10] = "Test";
	ft_memmove(empty_buffer, empty_buffer, 0);
	printf("Test 2 - Zero bytes: %s\n", empty_buffer); 
}

void	test_ft_memset(void) 
{
	char buffer[50];

	printf("➡️ Test cases for ft_memset\n");

	ft_memset(buffer, 'A', 10);
	printf("Test 1: %s\n", buffer); 

	ft_memset(buffer, '\0', 10);
	printf("Test 2: '%s'\n", buffer); 

	ft_memset(buffer, 66, 50); 
	printf("Test 3: %s\n", buffer); 

	char buffer2[10] = "Hello!";
	ft_memset(buffer2, 'Z', 0);
	printf("Test 4: %s\n", buffer2); 

}

void test_ft_putchar_fd(void)
{
	printf("➡️ Test cases for ft_putchar_fd\n");
	
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
}

void test_ft_putendl_fd(void)
{
	printf("➡️ Test cases for ft_putendl_fd\n");
	
	ft_putendl_fd("- Is there a new line?", 1);
	ft_putendl_fd("- I hope so", 1);
}

void	test_ft_putnbr_fd(void)
{
	printf("➡️ Test cases for ft_putnbr_fd\n");
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
    ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
}

void	test_ft_putstr_fd(void)
{
	printf("➡️ Test cases for ft_putnbr_fd\n");
	ft_putstr_fd("Hello world", 1);
}

void	test_ft_strchr(void) 
{
	printf("➡️ Test cases for ft_putstr_fd\n");
	const char *str1 = "Hello, World!";
	char search1 = 'W';
	char *result1 = ft_strchr(str1, search1);
	printf("Test 1 - Expected: %s, Got: %s\n", "World!", result1);

	const char *str2 = "Hello, World!";
	char search2 = 'x';
	char *result2 = ft_strchr(str2, search2);
	printf("Test 2 - Expected: (null), Got: %s\n", result2);

	const char *str3 = "";
	char search3 = 'H';
	char *result3 = ft_strchr(str3, search3);
	printf("Test 3 - Expected: (null), Got: %s\n", result3);
}

void	test_ft_strdup(void)
{

	printf("➡️ Test cases for ft_strdup\n");
	const char *test_cases[] = {"Hello, world!", "", "1234567890", NULL};

	for (int i = 0; test_cases[i] != NULL; i++) 
	{
		char *dup = ft_strdup(test_cases[i]);
		if (dup == NULL) 
			printf("Test case %d: Memory allocation failed or NULL input\n", i + 1);
		else
		{
			printf("Test case %d: Original: \"%s\", Duplicated: \"%s\"\n", i + 1, test_cases[i], dup);
			if (strcmp(test_cases[i], dup) == 0) 
                		printf("✅ Test %d passed\n", i + 1);
			else 
				printf("❌ Test %d failed\n", i + 1);
            		free(dup);
        	}
	}
}

void	to_uppercase(unsigned int i, char *c)
{
	(void) i;
	if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}
void	test_ft_striteri(void)
{
	char str[] = "hello world";
	printf("Original string: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Modified string: %s\n", str);
}


int main(void)
{
	test_ft_atoi();
	test_ft_bzero();
	test_ft_calloc();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_itoa();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memset();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_ft_putstr_fd();
	test_ft_strchr();
	test_ft_strdup();
	test_ft_striteri();
	
	return(0);
}
