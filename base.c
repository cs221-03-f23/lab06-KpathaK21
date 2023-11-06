#include "lab06.h"

int string_to_int(char *string, int base) {
  // TODO: implement this

    int result = 0;
    int sign = 1; // Initialize the sign to positive

    // Handle leading '+' or '-' signs
    if (*string == '-') {
        sign = -1;
        string++;
    } else if (*string == '+') {
        string++;
    }

    // Iterate through the string and convert each character to an integer
    while (*string) {
        char digit = *string;
        int value = 0;

        if (digit >= '0' && digit <= '9') {
            value = digit - '0';
        } else if (base == 16 && digit >= 'a' && digit <= 'f') {
            value = 10 + (digit - 'a');
        } else if (base == 16 && digit >= 'A' && digit <= 'F') {
            value = 10 + (digit - 'A');
        } else {
            // Invalid character
            return 0;
        }

        result = result * base + value;
        string++;
    }

    return result * sign;
}
