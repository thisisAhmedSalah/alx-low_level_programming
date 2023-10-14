#include "main.h"
/**
 * more_numbers - Prints the numbers from 0 to 14, one per line, with the
 * tens digit printed first, followed by the ones digit.
 *
 * Parameters:
 * None
 *
 * Returns:
 * None
 *
 * Side effects:
 * Prints the numbers from 0 to 14, one per line, to the standard output.
 */
void more_numbers(void) {
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j <= 14; j++) {
            if (j >= 10) {
                _putchar('0' + (j / 10));
            }
            _putchar('0' + (j % 10));      
        }
        _putchar('\n');                    
    }
   }
