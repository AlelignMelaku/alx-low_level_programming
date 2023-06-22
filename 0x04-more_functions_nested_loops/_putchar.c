#include "main.h"
#include <unistd.h>
/**
 * _putchar. writes the character c to stdout
 * @c : the character points
 *
 * Retur: on Success 1
 * On Error -1 is returned.
 */
int _putchar (char c)
{
	return(write(1,&c,1))
}
