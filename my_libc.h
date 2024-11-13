#ifndef LIBC_H
# define LIBC_H
# include <stdlib.h>
# include <unistd.h>
#include <fcntl.h>

typedef struct s_size_list
{
	size_t	start;
	size_t	end;
	size_t	word;
}	t_size_list;

void		my_bzero(void *s, size_t n);
void		*my_calloc(size_t nbyte, size_t size);
void		*my_memcpy(void *dst, const void *src, size_t n);
void		*my_memmove(void *dst, const void *src, size_t n);
void		*my_memset(void *ptr, int c, size_t num);
void		my_putendl_fd(char *s, int fd);
void		my_putstr_fd(char *s, int fd);
void		my_putchar_fd(char c, int fd);
void		my_putnbr_fd(int n, int fd);
void		*my_memchr(const void *s, int c, size_t n);
void		my_striteri(char *s, void (*f)(unsigned int, char*));
int			my_isalnum(int c);
int			my_isalpha(int c);
int			my_isascii(int c);
int			my_isdigit(int c);
int			my_isprint(int c);
int			my_tolower(int c);
int			my_toupper(int c);
int			my_atoi(const char *str);
int			my_strncmp(const char *s1, const char *s2, size_t n);
int			my_memcmp(const void *s1, const void *s2, size_t n);
size_t		my_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		my_strlcat(char *dst, const char *src, size_t dstsize);
size_t		my_strlen(const char *s);
char		*my_strnstr(const char *haystack, const char *needle, size_t len);
char		*my_strchr(const char *s, int c);
char		*my_strrchr(const char *str, int c);
char		*my_strdup(const char *s);
char		*my_substr(char const *s, unsigned int start, size_t len);
char		*my_strjoin(char const *s1, char const *s2);
char		*my_itoa(int n);
char		*my_strmapi(char const *s, char (*f)(unsigned int, char));
char		**my_split(char const *s, char c);
char		*my_strtrim(char const *s1, char const *set);

#endif
