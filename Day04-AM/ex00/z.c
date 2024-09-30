#include <stdio.h>
#include <stdint.h>

void decimal_to_binary_string(uint64_t decimal_value, char *binary_str, size_t size) {
    binary_str[size - 1] = '\0';  // Null-terminate the string
    for (int i = size - 2; i >= 0; i--) {
        binary_str[i] = (decimal_value & 1) ? '1' : '0';  // Check the least significant bit
        decimal_value >>= 1;  // Shift the decimal_value right by 1 bit
    }
}

int main(int argc, char **argv) {
    printf("%s\n", argv[1]);
    uint64_t decimal_value = 0;
    decimal_value = strtoull(argv[1], NULL, 16);
    printf("%llu\n", decimal_value);

    printf("Hello, World!\n");


    // Create a string to hold the binary representation (64 bits + 1 for the null terminator)
    char binary_str[65];
    
    // Convert the decimal value to a binary string
    decimal_to_binary_string(decimal_value, binary_str, sizeof(binary_str));

    // Print the binary representation
    printf("Binary value: %s\n", binary_str);

    return 0;
}