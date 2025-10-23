#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <fcntl.h>

int	main(void)
{
	//int fd = open("test.txt",O_RDWR);
	//printf("%d\n",fd);
	//ft_putstr_fd("walid laizi",fd);
	char	*str1 = "The storm";
	char	*chr = ft_strchr(str1, 's');
	printf("%s\n", chr);
}
