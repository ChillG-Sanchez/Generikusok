#include <stdio.h>
#include <stdlib.h>
#include "converter.h"

Converter* create_converter(ConverterFunc func) {
    Converter* converter = (Converter*)malloc(sizeof(Converter));
    converter->func = func;
    return converter;
}

void* convert(Converter* converter, void* input) {
    return converter->func(input);
}

void free_converter(Converter* converter) {
    free(converter);
}