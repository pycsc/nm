#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                            +#                #
#    test_nm_integ.sh                                       +##                #
#                                                         +###+                #
#    By: lucas <lucas@tsiaraso.com>                     +########+             #
#                                                           +###+              #
#    Created: 2026/11/18 16:33:10 by lucas                   ##+               #
#    Updated: 2026/11/18 16:33:10 by lucas                  #+                 #
#                                                                              #
# **************************************************************************** #

set -eu

./ft_nm ./ft_nm | grep -q "main"
./ft_nm -g ./ft_nm | grep -q "parse_elf64"
echo "integration: OK"
