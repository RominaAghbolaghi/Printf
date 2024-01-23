#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"
int	main(void)
{
	int i;
	char *str= "\0";
	int ret;

	i = 10;
	ret = ft_printf("char %c\n", 'c');
	printf("%d\n", ret);
	ret = printf("char %c\n", 'c');
	printf("%d\n", ret);
	ret = ft_printf("char %c\n", '\0');
	printf("%d\n", ret);
	ret = printf("char %c\n", '\0');
	printf("%d\n", ret);
	ret = ft_printf("char %s\n", "Hello je suis mathilde\n");
	printf("%d\n", ret);
	ret = printf("char %s\n", "Hello je suis mathilde\n");
	printf("%d\n", ret);
	ret = ft_printf("char %s\n", "");
	printf("%d\n", ret);
	ret = printf("char %s\n", "");
	printf("%d\n", ret);
	ret = ft_printf("char %p\n", NULL);
	printf("%d\n", ret);
	ret = printf("char %p\n", NULL);
	printf("%d\n", ret);
	ret = ft_printf("char %p\n", &i);
	printf("%d\n", ret);
	ret = printf("char %p\n", &i);
	printf("%d\n", ret);
	ret = ft_printf("char %d\n", i);
	printf("%d\n", ret);
	ret = printf("char %d\n", i);
	printf("%d\n", ret);
	ret = ft_printf("char %d\n", 0);
	printf("%d\n", ret);
	ret = printf("char %d\n", 0);
	printf("%d\n", ret);
	ret = ft_printf("char %d\n", -10);
	printf("%d\n", ret);
	ret = printf("char %d\n", -10);
	printf("%d\n", ret);
	ret = ft_printf("char %d\n", INT_MIN);
	printf("%d\n", ret);
	ret = printf("char %d\n", INT_MIN);
	printf("%d\n", ret);
	ret = ft_printf("char %d\n", INT_MAX);
	printf("%d\n", ret);
	ret = printf("char %d\n", INT_MAX);
	printf("%d\n", ret);
	ret = ft_printf("char %u\n", i);
	printf("%d\n", ret);
	ret = printf("char %u\n", i);
	printf("%d\n", ret);
	ret = ft_printf("char %u\n", 0);
	printf("%d\n", ret);
	ret = printf("char %u\n", 0);
	printf("%d\n", ret);
	ret = ft_printf("char %u\n", -10);
	printf("%d\n", ret);
	ret = printf("char %u\n", -10);
	printf("%d\n", ret);
	ret = ft_printf("char %u\n", INT_MIN);
	printf("%d\n", ret);
	ret = printf("char %u\n", INT_MIN);
	printf("%d\n", ret);
	ret = ft_printf("char %u\n", UINT_MAX);
	printf("%d\n", ret);
	ret = printf("char %u\n", UINT_MAX);
	printf("%d\n", ret);
	ret = ft_printf("char %x\n", 42);
	printf("%d\n", ret);
	ret = printf("char %x\n", 42);
	printf("%d\n", ret);
	ret = ft_printf("char %x\n", 16);
	printf("%d\n", ret);
	ret = printf("char %x\n", 16);
	printf("%d\n", ret);
	ret = ft_printf("char %x\n", 0);
	printf("%d\n", ret);
	ret = printf("char %x\n", 0);
	printf("%d\n", ret);
	ret = ft_printf("char %X\n", 42);
	printf("%d\n", ret);
	ret = printf("char %X\n", 42);
	printf("%d\n", ret);
	ret = ft_printf("char %X\n", 16);
	printf("%d\n", ret);
	ret = printf("char %X\n", 16);
	printf("%d\n", ret);
	ret = ft_printf("char %X\n", 0);
	printf("%d\n", ret);
	ret = printf("char %X\n", 0);
	printf("%d\n", ret);
	ret = ft_printf("char %%\n");
	printf("%d\n", ret);
	ret = printf("char %%\n");
	printf("%d\n", ret);
	ret = ft_printf("char %c char %c %s\n", 'c', '\0', "hello");
	printf("%d\n", ret);
	ret = printf("char %c char %c %s\n", 'c', '\0', "hello");
	printf("%d\n", ret);
	ret = ft_printf("char %d char %u %x\n", 42,  UINT_MAX, 42);
	printf("%d\n", ret);
	ret = printf("char %d char %u %x\n", 42,  UINT_MAX, 42);
	printf("%d\n", ret);
	ret = ft_printf("%s", str);
	printf("%d\n", ret);
	ret = printf("%s", str);
	printf("%d\n", ret);
	ret = ft_printf("\n");
	printf("%d\n", ret);
	ret = printf("\n");
	printf("%d\n", ret);
}