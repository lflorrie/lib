char*	ft_strcpy(char *dist, char *source)
{
	int i;

	i = 0;
	while (source[i])
	{
		dist[i] = source[i];
		++i;
	}
	dist[i] = '\0';
	return (dist);
}