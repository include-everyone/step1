#include <unistd.h>

void my_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

int main()
{
	my_print("hello world!!!\n");
	return (0);
}
