int	my_isprint(int c)
{
	if (c < 127 && c > 31)
	{ 
		return (1);
	}
	return (0);
}
