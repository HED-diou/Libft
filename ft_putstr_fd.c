#include <unistd.h>

void ft_putstr_fd(char *s,int fd)
{
    int i = 0;
    while (s[i])
        write(fd,&s[i++],1);
    
}

int main()
{
    ft_putstr_fd("hello world",1);
}