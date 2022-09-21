#include <stdio.h>
#include <ctype.h>
int ft_isprint(int c)
{
    return (!(c < ' ' || c >= 127));
}
int main(){
    int i;
			i = -1;
			while (i < 561)
			{
				if (!!ft_isprint(i) != !!isprint(i))
					printf("%i - %i - %i\n", i, ft_isprint(i), isprint(i));
				i++;
			}
}