/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    error.c                                               +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/01/20 08:37:49 by lucas                  ##+              */
/*    Updated: 2026/01/20 08:37:49 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

void	print_error(const char *filename, const char *msg)
{
	fprintf(stderr, "ft_nm: %s: %s\n", filename, msg);
}
