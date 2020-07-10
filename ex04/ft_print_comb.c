#include <unistd.h>

int ft_putchar (char c)
{
	write(1, &c, 1);
	return 0;
}
void ft_print_comb(void)
{
	int a, b, c;
	for (a=0; a<=9; a++)
	{
		for (b =a+1; b<=9; b++)
		{
			for(c=b+1; c<=9; c++)
			{
				ft_putchar (a);
				ft_putchar (b);
				ft_putchar (c);
			}
		}
	}
}
int main()
{
	ft_print_comb();
	return 0;
}


