#include <iostream>
#include <string>
#include <typeinfo>
#include <cxxabi.h>
#include "converter.h"

template <typename T>
std::string GetTypeName() {
    int status;
    char* demangled = abi::__cxa_demangle(typeid(T).name(), 0, 0, &status);
    std::string result(demangled);
    std::free(demangled);
    return result;
}

int main() {
    Converter<int, std::string> intToString([](int input) {
        return std::to_string(input);
    });

    int input = 42;
    std::string output = intToString.Convert(input);
    std::string inputType = GetTypeName<decltype(input)>();
    std::string outputType = GetTypeName<decltype(output)>();
    std::cout << "Converted " << input << " (" << inputType << ") to " << output << " (" << outputType << ")" << std::endl;

    return 0;
}