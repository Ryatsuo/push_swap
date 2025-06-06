#include "../../libft.h"

int	ft_put(char i, int compteur, va_list *args)
{
	void	*ptr;

	if (i == 'c')
		compteur += ft_putchar((char)va_arg(*args, int));
	else if (i == 'u')
		compteur += ft_put_unsigned_nbr(va_arg(*args, unsigned int));
	else if (i == 'x')
		compteur += ft_put_hexa((unsigned long)va_arg(*args, unsigned int));
	else if (i == 'X')
		compteur += ft_put_hexa_upper(va_arg(*args, unsigned int));
	else if (i == '%')
		compteur += ft_putchar('%');
	else if (i == 'p')
	{
		ptr = va_arg(*args, void *);
		if (!ptr)
			compteur += write(1, "(nil)", 5);
		else
		{
			compteur += ft_putstr("0x");
			compteur += ft_put_hexa((unsigned long)ptr);
		}
	}
	return (compteur);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			compteur;

	i = 0;
	compteur = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
				compteur += ft_putstr(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				compteur += ft_putnbr(va_arg(args, int));
			else
				compteur = ft_put(format[i], compteur, &args);
		}
		else
			compteur += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (compteur);
}

/*
#include <stdio.h>
#include <limits.h>
int main (void)
{
	printf(" %p %p ",(void *)0,(void *) 0);
	ft_printf(" %p %p ",(void *) 0,(void *) 0);
	return (0);
}*/
