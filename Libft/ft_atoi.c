/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:36:30 by ekashirs          #+#    #+#             */
/*   Updated: 2024/10/29 14:51:42 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

#include "libft.h"


int test_cases(void)
{
	const char test1[] = "123";
	const char test2[] = "-123";
	const char test3[] = "+123";
	const char test4[] = "-2147483648";
	const char test5[] = "2147483647";
	const char test6[] = "123abc456";
	const char test7[] = "   \t\n  42";
	const char test8[] = "   +0";
	const char test9[] = "-0";
	const char test10[] = "a123";
	const char test11[] = "";
	const char *tests[] = {test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11};
	int correct[] = {123, -123, 123, -2147483648, 2147483647, 123, 42, 0, 0, 0, 0};

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

int main(void)
{
	test_cases();
	return(0);
}


