/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    undef.c                                               +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/01/20 09:50:45 by lucas                  ##+              */
/*    Updated: 2026/01/20 09:50:45 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

/* U - Undefined symbol */
extern int undefined_external;
extern void undefined_function(void);

int main(void) {
    undefined_function();
    return undefined_external;
}
