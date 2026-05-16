#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	write(1, "hello world\n", 12);
	return (0);
}

int	main2(void)
{
	char *c;
	int	i;

	i = 0;
	c = "hello world";
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

void ft_print_hw(void)
{
	printf("hello world");
}
