/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    rodata.c                                              +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 23:54:59 by lucas                  ##+              */
/*    Updated: 2026/04/01 23:55:00 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

/* R - Global read-only data */
const int global_const = 100;

/* r - Local read-only data */
static const int local_const = 50;

/* String literal in rodata */
const char *global_string = "hello world";

int main(void) {
    return global_const + local_const;
}
