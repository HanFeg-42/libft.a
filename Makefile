# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 17:35:22 by hfegrach          #+#    #+#              #
#    Updated: 2024/11/01 09:51:58 by hfegrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# hello:
# 	echo "Hello, World"

# targets: prerequisites
# 	command
# 	command
# 	command

NAME	=	libft.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

ar		=	ar -rcs

SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

OBJS	=	${SRCS:.c=.o}

B_SRCS	=	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

B_OBJS	=	${B_SRCS:.c=.o}

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(NAME) $(B_OBJS)
	$(AR) $(NAME) $(B_OBJS)

all: $(NAME)
# $(CC) $(FLAGS) -o $(OBJS) $(SRCS)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re




































































# NAME	=   libft.a
# SRCS	=	ft_atoi.c \
# 			ft_bzero.c \
# 			ft_calloc.c \
# 			ft_isalnum.c \
# 			ft_isalpha.c \
# 			ft_isascii.c \
# 			ft_isdigit.c \
# 			ft_isprint.c \
# 			ft_itoa.c \
# 			ft_memcpy.c \
# 			ft_memchr.c \
# 			ft_memcmp.c \
# 			ft_memcpy.c \
# 			ft_memmove.c \
# 			ft_memset.c \
# 			ft_putchar_fd.c \
# 			ft_putendl_fd.c \
# 			ft_putnbr_fd.c \
# 			ft_putstr_fd.c \
# 			ft_split.c \
# 			ft_strchr.c \
# 			ft_strdup.c \
# 			ft_striteri.c \
# 			ft_strjoin.c \
# 			ft_strlcat.c \
# 			ft_strlcpy.c \
# 			ft_strlen.c \
# 			ft_strmapi.c \
# 			ft_strncmp.c \
# 			ft_strnstr.c \
# 			ft_strrchr.c \
# 			ft_strtrim.c \
# 			ft_substr.c \
# 			ft_tolower.c \
# 			ft_toupper.c 

# SRCS_B	=   ft_lstadd_back_bonus.c \
# 			ft_lstadd_front_bonus.c \
# 			ft_lstclear_bonus.c \
# 			ft_lstdelone_bonus.c \
# 			ft_lstiter_bonus.c \
# 			ft_lstlast_bonus.c \
# 			ft_lstmap_bonus.c \
# 			ft_lstnew_bonus.c \
# 			ft_lstsize_bonus.c

# OBJS	= $(SRCS:.c=.o)
# OBJS_B	= $(SRCS_B:.c=.o)
# RM		= rm -f
# LIBC	= ar -rcs
# FLAGS	= -Wall -Wextra -Werror
# INCS	= .

# #"all files with the extension .c, build a file with the same name but with the extension .o".
# #$< is a special variable in makefiles that refers to the first prerequisite of the rule.
# #In this case, the prerequisite is the .c file that the rule is trying to build the .o file from.
# #It is not mentioned as prerequisites in the rule itself, but it is implied that the .c file 
# #is the prerequisite for the .o file because of the pattern matching with the rule .c.o.
# #So when we run make command, make will look for the corresponding .c file to 
# #the given .o file, and the $< will be replaced by the name of the .c file.
# #.c.o : is an example of an implicit rule in make.
# #In make, implicit rules are predefined rules that are used when no explicit rule 
# #for a target can be found. They are used to build a target from a source file of a different type.
# #This particular rule .c.o : is an implicit rule that tells make how to build a .o file from a .c file, if no explicit rule is provided.
# #It is a pattern rule, that specifies how to create the target file (here .o) from the source file(here .c) by matching the pattern.
# #IT IS LIKE WRITING
# #%.o: %.c
# #	${CC} ${FLAGS} -c $< -o $@ -I${INCS}

# .c.o :
# 	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

# $(NAME): ${OBJS} 
# 	${LIBC} $(NAME) $(OBJS) 

# all: $(NAME)

# bonus: $(NAME) $(OBJS_B)
# 	${LIBC} $(NAME) $(OBJS_B)
    
# fclean: clean
# 	$(RM) $(NAME) $(bonus)

# clean:
# 	$(RM) -f $(OBJS) $(OBJS_B)
    
# re: fclean all

# .PHONY: all bonus clean fclean re .c.o