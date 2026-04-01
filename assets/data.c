/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    data.c                                                +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 23:54:48 by lucas                  ##+              */
/*    Updated: 2026/04/01 23:54:49 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

/* D - Global data (initialized) */
int global_data = 42;

/* d - Local data (static initialized) */
static int local_data = 10;

int main(void) {
    return local_data + global_data;
}
