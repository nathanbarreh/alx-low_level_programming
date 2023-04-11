#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint: converts a binary no to an unassigned int
 * @b: char string
 * Return: converts to decimal no else 0 if there is unconvertable char
 */
unsigned int binary_to_uint(const char *b)
	if (binary == NULL) {
        return 0;
    }

    size_t len = strlen(binary);
    unsigned int t = 0;
    unsigned int p = 1;

    for (int i = len - 1; i >= 0; i--) {
        if (!isdigit(binary[i])) {
            return 0;
        }

        if (binary[i] == '1') {
            t += p;
        }

        p *= 2;
    }

    return (p);
}
