/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:59:18 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/12/03 23:00:25 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minunit.h"

t_data	data;

void	test_setup(void)
{
}
void	test_teardown(void)
{
}

MU_TEST(open_invalid_file_tst)
{
	ft_bzero(&data, sizeof(t_data));

	data.map.file_name = "./map/map.c";
	mu_assert_int_eq(open_file_or_die(&data.map), FALSE);

	data.map.file_name = "./map/map.cu";
	mu_assert_int_eq(open_file_or_die(&data.map), FALSE);

	data.map.file_name = "./map/map.cubb";
	mu_assert_int_eq(open_file_or_die(&data.map), FALSE);
}

MU_TEST(open_file_tst)
{
	data.map.file_name = "./map/map.cub";
	mu_assert_int_eq(open_file_or_die(&data.map), TRUE);
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
