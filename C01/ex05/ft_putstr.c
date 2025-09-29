#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str)
{
    int bytes = 0;

    if (str[bytes] != '\0')
    {
        bytes ++;
    }
    
    write(0, &str, bytes);
}

int main (void)
{
    char *mystr = "pavel";
    ft_putstr(mystr);
    return(0);
}