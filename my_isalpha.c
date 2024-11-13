int	my_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c < 123 && c > 96))
		return (1);
	return (0);
}
