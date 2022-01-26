#include<string.h>

void	*ft_memcpy(void	*dst,const	void	*src,size_t	n);

void	*ft_memcpy(void	*dst,const	void	*src,size_t	n)
{
	size_t	i;
	unsigned	char	*ptr_dst;
	unsigned	char	*ptr_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}