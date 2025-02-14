

#include <stdio.h>
#include <stdlib.h>

void print_binary(int b)
{
	int indx;

	indx = -1;
	while(++indx < 32)
	{
		if (!(indx % 8))
			printf(".");
		if (b & (1 << (7 - indx)))
			printf("1");
		else
			printf("0");

	}
	printf("\n");
}

int main(int ac, char **av)
{
	int indx;
	if (ac <= 1)
		return (0);
	indx = 0;
	while(++indx < ac)
	{
		print_binary(atoi(av[indx]));
	}

}
