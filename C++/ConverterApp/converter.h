#ifndef CONVERTER_H
#define CONVERTER_H

#include <functional>

template <typename TInput, typename TOutput>
class Converter {
public:
    Converter(std::function<TOutput(TInput)> func);
    TOutput Convert(TInput input) const;

private:
    std::function<TOutput(TInput)> func;
};

#endif