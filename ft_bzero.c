#include<stddef.h>

void	*ft_bzero(void	*s,size_t	n);

void	*ft_bzero(void	*s,size_t	n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr = '\0';
		ptr++;
	}
	return (s);
}
/*
#include<stdio.h>
int main()
{
	char	str[] = "0123456789";
	ft_memset(str+2,'*',5);
	printf("%s\n",str);
}*/