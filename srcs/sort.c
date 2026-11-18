/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    sort.c                                                +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 23:57:13 by lucas                  ##+              */
/*    Updated: 2026/11/18 16:29:35 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

static int	compare_symbols(t_symbol *a, t_symbol *b, int options)
{
	int	cmp;

	cmp = ft_strcmp(a->name, b->name);
	if (cmp == 0 && a->value != b->value)
	{
		if (a->value < b->value)
			cmp = -1;
		else
			cmp = 1;
	}
	if (options & OPT_R)
		cmp = -cmp;
	if (cmp == 0)
		cmp = a->index - b->index;
	return (cmp);
}

static void	swap_symbols(t_symbol *a, t_symbol *b)
{
	t_symbol	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_symbols(t_nm *nm)
{
	int	i;
	int	j;
	int	min;

	if (nm->options & OPT_P)
		return ;
	i = 0;
	while (i < nm->sym_count - 1)
	{
		min = i;
		j = i + 1;
		while (j < nm->sym_count)
		{
			if (compare_symbols(&nm->symbols[j], &nm->symbols[min],
					nm->options) < 0)
				min = j;
			j++;
		}
		if (min != i)
			swap_symbols(&nm->symbols[i], &nm->symbols[min]);
		i++;
	}
}
