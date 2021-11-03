#include<string.h>
#include <stddef.h>
void *ft_memchr( const void *str, int ch, size_t n )
{
    char *s = (char*)str;
    size_t i = 0;
    size_t j = 0;
    while (i < n && s[i])
    {
        if(ch == s[i])
            return s+i;
        i++;
    }
    return 0;
}
/*
#include<stdio.h>
int main()
{
   //initializing character pointer
   const char *str = "hmaza";
   const char ch = 'z';

   //displaying str
   printf("str = %s\n\n", str);

   printf(" '%c' : %s\n", ch, (char *) memchr( str, ch, 3));
   printf(" '%c' : %s\n", ch, (char *) ft_memchr( str, ch, 3));

   return 0;
}//end
/*