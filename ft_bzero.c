
void ft_bzero(void *ss , size_t c)
{
	size_t i = 0;
	char *s = (char*)ss;
	while(s[i])
	{
		if(i < c)
			s[i] = '\0';
		i++;
	}
}

int main()
{
       ft_bzero("hello world", 3);
}
