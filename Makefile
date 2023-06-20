# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 13:37:38 by fsantama          #+#    #+#              #
#    Updated: 2023/06/20 19:13:16 by fsantama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# =============================================================================#
#                        	GENERAL CONFIG & FLAGS                             #
# =============================================================================#

# PROGRAM FOR COMPILING C PROGRAMS
CC 		=	gcc
# C COMPILER FLAGS
CFLAGS =	-Werror -Wall -Wextra

NAME 	=	push_swap
LIBFT 	=	./inc/Libft/libft.a
PRINTF 	=	./inc/ft_printf/libftprintf.a

# =============================================================================#
#                              MANDATORY PART                                  #
# =============================================================================#

SRCS	=	src/main.c \
			src/ft_check_args.c \
			src/ft_check_num.c \
			src/ft_check_limits.c \
			src/ft_atoi_long.c \
			src/ft_free.c \
			src/ft_check_order.c \
			src/ft_check_repeat_numbers.c \
			src/ft_2args.c \
			src/ft_sa.c \
			src/ft_3args.c \
			src/ft_ra.c \
			src/ft_swap.c \
			src/ft_rra.c \
			src/ft_4args.c \
			src/ft_pb.c \
			src/ft_pa.c \
			src/ft_5args.c \
			src/ft_100args.c \
			src/ft_index.c \

OBJS	=	$(SRCS:.c=.o)

# =============================================================================#
#                                  RULES                                       #  
# =============================================================================#

all : $(NAME) $(LIBFT) $(PRINTF)

$(LIBFT) : 
	@make  -C inc/Libft > /dev/null

$(PRINTF) : 
	@make  -C inc/ft_printf > /dev/null

$(NAME) : $(LIBFT) $(OBJS) | $(PRINTF) $(OBJS)
	@$(CC) $(CFLAGS) $(LIBFT) $(PRINTF) $(OBJS) -o $(NAME)
	@echo "$(CYAN) ======================================================="
	@echo " |    ___           _                                  |"
	@echo " |   / _ \_   _ ___| |__      _____      ____ _ _ __   |"
	@echo " |  / /_)/ | | / __| '_ \    / __\ \ /\ / / _  |  _ \  |"
	@echo " | / ___/| |_| \__ \ | | |   \__ \\ V  V / (_| | |_)  | |"
	@echo " | \/     \__,_|___/_| |_|___|___/ \_/\_/ \__,_| .__/  |"
	@echo " |                      |_____|                |_|     |"
	@echo " ======================================================="
	@echo " ================ Develop by fsantama =================="
	@echo " ======================================================="
	@echo "																	"
	@echo "      (((/               /(((((,              .((((				"
	@echo "     ((,,,*((((((((((((((,,*,,,*(((((((((((((/   *(/				"
	@echo "     ((,,,,,,,,,,,,,,,,,,,,,,,,,,,,,(((..       .(((				"
	@echo "    ((/,,,,,,,,,,,,(##(####/,,,,*(((   *%, # ,(((%((				"
	@echo "    #(/,,,,,,,,,,*%##########(((/  #  ,*, *((#  %#((				"
	@echo "    /((,,,,/(#(###%##%%#,,,*,,,#,   // /((,,%%  %#((				"
	@echo "     (((###(##((#####%,,,/,*##,*#*  (((#%% ,%%  %(((				"
	@echo "     (((%##%%%%%%%#(((,,(/,((*#*,,((#. #%% ,%%  %((,				"
	@echo "      ((#%%%####(((* .,,,%/*,*/*,* %%. #%% ,%%  (((				"
	@echo "      ,((#%%%(((, *%, %((,,,/,,/#  %%. #%% ,%% (((				"
	@echo "       *(((((   ## (   *(((%( ,%%  %%. #%% ,%%(((				"
	@echo "        .((*  /*((  /(((%%%%( ,%%  %%. #%% ,%(((					"
	@echo "          (((    (((#%%%%%%%( ,%%  %%. #%% ,(((					"
	@echo "           ((((((#%%%%%%%%%%( ,%%  %%. #%%/((,					"
	@echo "             (((#%%%%%%%%%%%( ,%%  %%. ##(((						"
	@echo "              .(((%%%%%%%%%%( ,%%  %%. (((						"
	@echo "                ,(((%%%%%%%%( ,%%  %#(((							"
	@echo "                  .(((%%%%%%( ,%% .(((							"
	@echo "                     (((#%%%( ,%((((								"
	@echo "                       *(((%( (((.								"
	@echo "                          ((((*									"
	@echo "	                                                      			"
	@echo " =======================================================			"
	@echo "                                                       $(DEFAULT)"
	@echo "$(GREEN) $(NAME) make done ✅ $(DEFAULT)"
	@echo "$(GREEN) $(LIBFT) make done ✅ $(DEFAULT)"
	@echo "$(GREEN) $(PRINTF) make done ✅ $(DEFAULT)"
	@echo " "

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS)
	@make -C inc/Libft clean > /dev/null
	@make -C inc/ft_printf clean > /dev/null
	@echo "$(RED) $(NAME) objects clean done 🧹 $(DEFAULT)"
	@echo "$(RED) $(LIBFT) objects clean done 🧹 $(DEFAULT)"
	@echo "$(RED) $(PRINTF) objects clean done 🧹 $(DEFAULT)"

fclean : clean
	@rm -f $(NAME)
	@make -C inc/Libft fclean > /dev/null
	@make -C inc/ft_printf fclean > /dev/null
	@echo "$(RED) $(NAME) clean done 🧹 $(DEFAULT)"
	@echo "$(RED) $(LIBFT) clean done 🧹 $(DEFAULT)"
	@echo "$(RED) $(PRINTF) clean done 🧹 $(DEFAULT)"

re: fclean all

#bonus : $(NAME_BONUS)

# =============================================================================#
#                                 COLORS                                       #
# =============================================================================#

BOLD	:=	\033[1m
BLACK	:=	\033[30;1m
RED		:=	\033[31;1m
GREEN	:=	\033[32;1m
YELLOW	:=	\033[33;1m
BLUE	:=	\033[34;1m
MAGENTA	:=	\033[35;1m
CYAN	:=	\033[36;1m
WHITE	:=	\033[37;1m
DEFAULT	:=	\033[0m

.PHONY: all clean fclean re
