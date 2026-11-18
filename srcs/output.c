/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    output.c                                              +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 23:57:08 by lucas                  ##+              */
/*    Updated: 2026/11/18 16:29:00 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

int	filter_symbol(t_symbol *sym, int options)
{
	if (options & OPT_G)
	{
		if (sym->bind != STB_GLOBAL && sym->bind != STB_WEAK)
			return (0);
	}
	if (options & OPT_U)
	{
		if (sym->type != 'U' && sym->type != 'w' && sym->type != 'v')
			return (0);
	}
	return (1);
}

static void	print_symbol_32(t_symbol *sym, int options, int file_type)
{
	if ((options & OPT_U) && file_type == FILE_MACHO)
		printf("%s\n", sym->name);
	else if (sym->type == 'U' || sym->type == 'w' || sym->type == 'v')
		printf("         %c %s\n", sym->type, sym->name);
	else
		printf("%08lx %c %s\n", sym->value, sym->type, sym->name);
}

static void	print_symbol_64(t_symbol *sym, int options, int file_type)
{
	if ((options & OPT_U) && file_type == FILE_MACHO)
		printf("%s\n", sym->name);
	else if (sym->type == 'U' || sym->type == 'w' || sym->type == 'v')
		printf("                 %c %s\n", sym->type, sym->name);
	else
		printf("%016lx %c %s\n", sym->value, sym->type, sym->name);
}

void	print_symbols(t_nm *nm)
{
	int	i;

	if (nm->multi_files)
		printf("\n%s:\n", nm->file.filename);
	i = 0;
	while (i < nm->sym_count)
	{
		if (!filter_symbol(&nm->symbols[i], nm->options))
		{
			i++;
			continue ;
		}
		if (nm->file.is_64bit)
			print_symbol_64(&nm->symbols[i], nm->options, nm->file.file_type);
		else
			print_symbol_32(&nm->symbols[i], nm->options, nm->file.file_type);
		i++;
	}
}
