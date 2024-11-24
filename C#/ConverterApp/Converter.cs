using System;

namespace ConverterApp
{
    public class Converter<TInput, TOutput>
    {
        private Func<TInput, TOutput> converterFunction;

        public Converter(Func<TInput, TOutput> converterFunction)
        {
            this.converterFunction = converterFunction;
        }

        public TOutput Convert(TInput input)
        {
            return converterFunction(input);
        }
    }
}