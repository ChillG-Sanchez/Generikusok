#include <stdio.h>
#include <stdlib.h>
#include "converter.h"

void* int_to_string(void* input) {
    int* int_input = (int*)input;
    char* str_output = (char*)malloc(12 * sizeof(char));
    sprintf(str_output, "%d", *int_input);
    return str_output;
}

void print_conversion(const char* input_type, void* input, const char* output_type, void* output) {
    printf("Converted from %s: %d to %s: %s\n", input_type, *(int*)input, output_type, (char*)output);
}

int main() {
    int input = 123;
    Converter* converter = create_converter(int_to_string);

    char* output = (char*)convert(converter, &input);
    print_conversion("int", &input, "string", output);

    free(output);
    free_converter(converter);
    return 0;
}