#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include <stdio.h>

// HERHANGİ BİR FD PROJESİ



//STRİTERİ

// #include <stdio.h>
// #include "libft.h"

// void	make_a(unsigned int i, char *c)
// {
// 	(void)i;
// 	if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
// 		*c = 'A';
// }

// int	main(void)
// {
// 	char	str[] = "hello world im root";

// 	printf("%s\n", str);
// 	ft_striteri(str, make_a);
// 	printf("%s\n", str);

// 	return (0);
// }



// //STRMAPİ

// #include <stdio.h>
// #include "libft.h"


// char	make_a(unsigned int i, char c)
// {
// 	(void)i;
// 	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
// 	{
//     	c = 'A';
//         return (c );
//     }    
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str = "hello world im root";
// 	char	*result;
//     printf("%s\n", str);
// 	result = ft_strmapi(str, make_a);
// 	printf("%s\n", result);

// 	return (0);
// }


// SİKİMSONİK SORU MEMSET : -42 yazdır  
// int main()
// {
//     int a = 3;
//     ft_memset(&a, 255, 4);
//     ft_memset(&a, 255, 3);
//     ft_memset(&a, 255, 2);
//     ft_memset(&a, 214, 1);

//     printf("%d\n", a);
    
//     }
//STANDARD MEMSET
// int main()
// {
//     char str[] = "merhaba";
//     char *res = ft_memset(str, 'g', 5);
//     int dec[] = {1,2,3,4,5,6};
//     int *out = ft_memset(dec, -1, sizeof(int) * 5);
//     printf("%s\n", str);
//     printf("%d\n", dec[0]);
//     printf("%d\n", dec[1]);
//     printf("%d\n", dec[2]);
//     printf("%d\n", dec[3]);
//     printf("%d\n", dec[4]);
//     printf("%d\n", dec[5]);
    
// }

// STRLCPY
// int main()
// {
//     char str[] = "hello world ";
//     char str2[] = "im root";
//     size_t res = ft_strlcpy(str, str2, 3);
//     printf("%zu\n", res);
//     printf("%s\n",str);
//     printf("%s\n",str2);
// }


// STRCHR / STRRCHR
// int main()
// {
//     char str[] = "hello world im root";
//     printf("%s\n", ft_strchr(str, 'o'));
//     printf("%s\n", ft_strrchr(str, 'o'));


// S U B S T R
// int main()
// {
//     char str[] = "hello world im root";
//     printf("%s", ft_substr(str, 6, 5));
// }


//S P L I T
//int main()
// {
//     char str[] = ",,,,,,hello,,world,,,,,,,,,,,im,root";
//     char **result = ft_split(str, ',');
//     size_t i = 0;

//     while (result[i])
//     {
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     return (0);
// }
