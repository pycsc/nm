/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    weak_obj.c                                            +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/01/20 09:50:45 by lucas                  ##+              */
/*    Updated: 2026/01/20 09:50:45 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

/* V - Weak object (defined) */
__attribute__((weak)) int weak_data = 42;

/* v - Weak object (undefined) */
__attribute__((weak)) extern int weak_undef_data;

int main(void) {
    return weak_data + weak_undef_data;
}
