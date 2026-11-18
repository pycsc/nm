/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    test_nm_func.c                                         +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                    +########+            */
/*                                                          +###+             */
/*    Created: 2026/11/18 16:32:15 by lucas                  ##+              */
/*    Updated: 2026/11/18 16:32:15 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"
#include <assert.h>

static void	test_sort_symbols(void)
{
	t_nm		nm;
	t_symbol	syms[3];

	syms[0].name = "zeta";
	syms[0].value = 10;
	syms[0].index = 0;
	syms[1].name = "alpha";
	syms[1].value = 20;
	syms[1].index = 1;
	syms[2].name = "alpha";
	syms[2].value = 5;
	syms[2].index = 2;
	nm.symbols = syms;
	nm.sym_count = 3;
	nm.options = 0;
	sort_symbols(&nm);
	assert(ft_strcmp(syms[0].name, "alpha") == 0 && syms[0].value == 5);
	assert(ft_strcmp(syms[1].name, "alpha") == 0 && syms[1].value == 20);
	assert(ft_strcmp(syms[2].name, "zeta") == 0);
	nm.options = OPT_R;
	sort_symbols(&nm);
	assert(ft_strcmp(syms[0].name, "zeta") == 0);
}

int	main(void)
{
	test_sort_symbols();
	printf("functional: OK\n");
	return (0);
}
