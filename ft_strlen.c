#include<stddef.h>

size_t	ft_strlen(const	char	*str);

size_t	ft_strlen(const	char	*str)
{
	size_t	count;

	count = 0;
	while(*str)
	{
		str++;
		count++;
	}
	return (count);
}
/*
#include<stdio.h>
int main()
{
	printf("%zu",ft_strlen("aaaaaaaaaaaaaaa"));
}*/