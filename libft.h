#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <unistd.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

#endif