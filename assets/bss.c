/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    bss.c                                                 +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/01 23:54:11 by lucas                  ##+              */
/*    Updated: 2026/04/01 23:54:36 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

/* B - Global BSS (uninitialized) */
int global_bss;

/* b - Local BSS (static uninitialized) */
static int local_bss;

int main(void) {
    global_bss = 1;
    local_bss = 2;
    return global_bss + local_bss;
}
