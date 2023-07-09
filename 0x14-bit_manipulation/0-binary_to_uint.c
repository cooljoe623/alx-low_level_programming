#include "main.h"
#include <stdio.io>



int _putchar(char c);

unsigned int binary_to_uint(const char *b) {
	    if (b == NULL)
		            return 0;

	        unsigned int result = 0;

		    for (int i = 0; b[i] != '\0'; i++) {
			            if (b[i] == '0' || b[i] == '1') {
					                result = (result << 1) | (b[i] - '0');
							        } else {
									            return 0;
										            }
				        }

		        return result;
}

int main(void) {
	    const char *binary = "101010";
	        unsigned int result = binary_to_uint(binary);

		    if (result == 0) {
			            _putchar('0');
				        } else {
						        int digits[10];
							        int num_digits = 0;
								        while (result > 0) {
										            digits[num_digits++] = result % 10;
											                result /= 10;
													        }
									        for (int i = num_digits - 1; i >= 0; i--) {
											            _putchar('0' + digits[i]);
												            }
										    }

		        _putchar('\n');

			    return 0;
}

