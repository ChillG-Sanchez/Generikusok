#include "converter.h"

template <typename TInput, typename TOutput>
Converter<TInput, TOutput>::Converter(std::function<TOutput(TInput)> func) : func(func) {}

template <typename TInput, typename TOutput>
TOutput Converter<TInput, TOutput>::Convert(TInput input) const {
    return func(input);
}

template class Converter<int, std::string>;
template class Converter<std::string, int>;