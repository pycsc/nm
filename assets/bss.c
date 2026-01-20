/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    bss.c                                                 +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/01/20 09:50:45 by lucas                  ##+              */
/*    Updated: 2026/01/20 09:50:45 by lucas                 #+                */
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
