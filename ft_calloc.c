#include <stdlib.h>
#include "libft.h"
void* ft_calloc(size_t n, size_t size)
{
    if(n == 0 || size == 0)
    {
        return 0;
    }
   
    void *ptr =malloc(n * size);
    ft_bzero(ptr,n);
    return ptr;
}
int main()
{
  char *s=ft_calloc(5,sizeof(char));
}