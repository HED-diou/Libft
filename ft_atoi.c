#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *c)
{
	int i = 0;
	int x = 1;
	int out = 0;
	while(c[i] == ' ' ||c[i] == '	')
		i++;
	if(c[i] == '-' || c[i] == '+')
	{
		if(c[i] == '-')
			x = x * -1;
		i++;
	}
	while(c[i] >= '0' && c[i] <= '9')
	{
		out = (out * 10) + (c[i] - '0');
		i++;
	}
	out = out * x;
	return out;

}

int main()
{
	int a = ft_atoi("  - 552");
	int b = atoi("  - 552");
	printf(">>  %d \n<<  %d",a,b);
}
