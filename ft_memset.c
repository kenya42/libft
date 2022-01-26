#include<stddef.h>

void	*ft_memset(void	*buf,int	ch,size_t	n);

void	*ft_memset(void	*buf,int	ch,size_t	n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)buf;
	while (n--)
	{
		*ptr = (unsigned char)ch;
		ptr++;
	}
	return (buf);
}
/*
#include<stdio.h>
int main()
{
	char	str[] = "0123456789";
	ft_memset(str+2,'*',5);
	printf("%s\n",str);
}*/