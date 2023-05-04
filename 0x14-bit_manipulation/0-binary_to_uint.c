#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    
    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
            num = num << 1;
        else if (b[i] == '1')
            num = (num << 1) | 1;
        else
            return 0;
    }

    return num;
}
