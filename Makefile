# **************************************************************************** #
#                                                                              #
#                                                            +#                #
#    Makefile                                               +##                #
#                                                         +###+                #
#    By: lucas <lucas@tsiaraso.com>                   +########+               #
#                                                           +###+              #
#    Created: 2026/04/01 23:57:29 by lucas                   ##+               #
#    Updated: 2026/11/18 16:33:30 by lucas                  #+                 #
#                                                                              #
# **************************************************************************** #

NAME		= ft_nm

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I includes

SRCDIR		= srcs
OBJDIR		= objs

LIB_SRCS	= elf_parser.c \
			  elf32.c \
			  elf32_utils.c \
			  elf64.c \
			  elf64_utils.c \
			  macho64.c \
			  macho64_utils.c \
			  macho64_fill.c \
			  macho32.c \
			  macho32_utils.c \
			  file_detect.c \
			  output.c \
			  sort.c \
			  options.c \
			  utils.c \
			  error.c

SRCS		= main.c $(LIB_SRCS)

OBJS		= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
LIB_OBJS	= $(addprefix $(OBJDIR)/, $(LIB_SRCS:.c=.o))

all: $(NAME) assets

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

assets:
	$(MAKE) -C assets

test_unit: $(LIB_OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o test_unit tests/unit/test_nm_unit.c $(LIB_OBJS)
	./test_unit

test_func: $(LIB_OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o test_func tests/functional/test_nm_func.c $(LIB_OBJS)
	./test_func

test_integ: $(NAME)
	sh tests/integration/test_nm_integ.sh

test_e2e: $(NAME)
	sh tests/e2e/test_nm_e2e.sh

clean:
	rm -rf $(OBJDIR)
	$(MAKE) -C assets clean

fclean: clean
	rm -f $(NAME) test_unit test_func
	$(MAKE) -C assets fclean

re: fclean all

.PHONY: all clean fclean re assets test_unit test_func test_integ test_e2e
.NOTPARALLEL:
