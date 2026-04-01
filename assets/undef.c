/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    undef.c                                               +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 23:55:09 by lucas                  ##+              */
/*    Updated: 2026/04/01 23:55:10 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

/* U - Undefined symbol */
extern int undefined_external;
extern void undefined_function(void);

int main(void) {
    undefined_function();
    return undefined_external;
}
