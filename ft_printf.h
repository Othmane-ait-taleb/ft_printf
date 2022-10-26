#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_flags
{
	char	type;
	int		count;
	int		wdth;
	int		zero;
	int		dote;
	int		maxstr;
	int		hassh;
	int		espace;
	int		minus;
	int		plus;
	int		upcase;
}			s_flags;

s_flags	*mall_flags(void);
char	*first_arg(char *str);
int	print_norm_char(char *s, size_t size, s_flags *flag);
void	ft_putchar(char ch, s_flags *flag);
int	ft_isdigit(int c);
char	*print_d_arg(char *s, va_list arg, s_flags *flag);

#endif
