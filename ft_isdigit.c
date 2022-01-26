int	ft_isdigit(int	c);

int ft_isdigit(int	c)
{
	if(48 <= c && c <= 57)
	return (1);
	return (0);
}
/*
#include<stdio.h>
int main()
{
	printf("%d\n%d\n",ft_isdigit(50),ft_isdigit(20));
}*/