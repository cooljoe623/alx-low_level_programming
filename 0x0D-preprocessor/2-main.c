#include <stdio.h>
#include <stdlib.h>

/*
 *prints the name of file the program was compiled from 
 *
 * return: name of file
 */

int main (void)
{
	printf("%s\n", _FILE_);
	return (0);
}
