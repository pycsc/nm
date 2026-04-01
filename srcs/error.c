/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    error.c                                               +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 23:56:16 by lucas                  ##+              */
/*    Updated: 2026/04/01 23:56:17 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

void	print_error(const char *filename, const char *msg)
{
	fprintf(stderr, "ft_nm: %s: %s\n", filename, msg);
}
