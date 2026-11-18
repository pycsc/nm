/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    test_nm_unit.c                                         +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                    +########+            */
/*                                                          +###+             */
/*    Created: 2026/11/18 16:32:00 by lucas                  ##+              */
/*    Updated: 2026/11/18 16:32:00 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"
#include <assert.h>

static void	test_options_and_filter(void)
{
	int			opts;
	char		*argv[3];
	t_symbol	sym;

	argv[0] = "ft_nm";
	argv[1] = "-agurp";
	argv[2] = NULL;
	opts = 0;
	assert(parse_options(2, argv, &opts) == 2);
	assert((opts & (OPT_A | OPT_G | OPT_U | OPT_R | OPT_P))
		== (OPT_A | OPT_G | OPT_U | OPT_R | OPT_P));
	sym.name = "foo";
	sym.bind = STB_LOCAL;
	sym.type = 't';
	assert(filter_symbol(&sym, OPT_G) == 0);
	sym.bind = STB_GLOBAL;
	sym.type = 'U';
	assert(filter_symbol(&sym, OPT_G | OPT_U) == 1);
}

int	main(void)
{
	test_options_and_filter();
	printf("unit: OK\n");
	return (0);
}
