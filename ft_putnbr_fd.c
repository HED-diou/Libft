#include<unistd.h>

void	ft_putnbr_fd(int nb,int fd)
{
	if (nb == -2147483648)
	{
		ft_putnbr_fd(nb / 10,fd);
		write(fd, "8", 1);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);;
		ft_putnbr_fd(-nb,fd);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr_fd(nb / 10,fd);
		}
		char c = ((nb % 10) + '0');
        write(1, &c, 1);
	}
}
int main()
{
    ft_putnbr_fd(1337,1);

}