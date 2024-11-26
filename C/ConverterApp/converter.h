#ifndef CONVERTER_H
#define CONVERTER_H

typedef void* (*ConverterFunc)(void*);

typedef struct {
    ConverterFunc func;
} Converter;

Converter* create_converter(ConverterFunc func);
void* convert(Converter* converter, void* input);
void free_converter(Converter* converter);

#endif