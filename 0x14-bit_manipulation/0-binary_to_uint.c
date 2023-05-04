#include <stdio.h>

/**
 * the function converts binary to unsigned integer
 * b = pointing to string char 0 and 1
 * return, the converted number that is not 0,1
 *
 * */

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    
    if (b == NULL) {
        return 0;
    }
    
    while (*b != '\0') {
        if (*b == '0') {
            num = (num << 1) | 0;
        } else if (*b == '1') {
            num = (num << 1) | 1;
        } else {
         
	       	return 0;
        }
        
        b++;
    }
    
    return num;
}
