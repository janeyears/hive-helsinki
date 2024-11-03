/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:42:44 by ekashirs          #+#    #+#             */
/*   Updated: 2024/10/29 11:20:03 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

#include "libft.h"

int test_cases(void)
{
	int test1 = '5';
	int test2 = 'F';
	int test3 = 'n';
	int test4 = '\n';

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {0, 1, 1, 0};

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

int main(void)
{
	test_cases();
	return(0);
}

