#include <unistd.h>
/**
 * puchar files
 * Return: 0 success
 */
int _putchar(char a)
{ 
	return(write(1,&a, 1));
}

