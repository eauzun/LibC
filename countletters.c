#include <stdio.h>
#include <stdlib.h>

int l_counter(char *str, char c)
	{
		size_t i;
		i = 0;
		if(str[i] == '\0')
			return(0);
		while (str[i] && str[i] == c)
			i++;
		return i;
	}

	int main ()
	{
		char **str;
		int res = 0;
		int i = 0;

		str[0] =",merhaba,";
		str[1] = ",dunya,";
		str[2] = NULL;

		while(str[i] != NULL)
		{
			res += l_counter(str[i], ',');
			i++;
		}
		printf("%d", res);
	}