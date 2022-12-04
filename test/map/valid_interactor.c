/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_interactor.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:59:18 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/12/03 22:20:33 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minunit.h"

t_data	foo;

void	test_setup(void)
{
}
void	test_teardown(void)
{
}

MU_TEST(open_invalid_file_tst)
{
	ft_bzero(&foo, sizeof(t_data));
	mu_assert_int_eq(interactor_chars_or_die(&foo.map, 'S'), 1);
	mu_assert_int_eq(interactor_chars_or_die(&foo.map, 'W'), 0);
	mu_assert_int_eq(interactor_chars_or_die(&foo.map, 'E'), 0);

}

MU_TEST(open_file_tst)
{
}

MU_TEST_SUITE(open_file_suite)
{
	MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

	MU_RUN_TEST(open_invalid_file_tst);
	MU_RUN_TEST(open_file_tst);
}

MU_MAIN
{
	MU_DIVIDER;
	MU_RUN_SUITE(open_file_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
