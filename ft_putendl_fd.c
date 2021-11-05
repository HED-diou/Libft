#include <unistd.h>

void ft_putendl_fd(char *s,int fd)
{
    int i = 0;
    while (s[i])
        write(fd,&s[i++],1);
    write(fd,"\n",1);
    
}

int main()
{
   ft_putendl_fd("hello world",1);
}