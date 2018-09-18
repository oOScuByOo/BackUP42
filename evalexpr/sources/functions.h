#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		eval_expr(char *str);
int		ft_atoi(char **str);
int		basic_operations(char **str);
int		is_basic_operator(char operator);

#endif
