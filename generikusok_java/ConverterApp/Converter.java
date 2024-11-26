import java.util.function.Function;

public class Converter<TInput, TOutput> {
    private Function<TInput, TOutput> converterFunction;

    public Converter(Function<TInput, TOutput> converterFunction) {
        this.converterFunction = converterFunction;
    }

    public TOutput Convert(TInput input) {
        return converterFunction.apply(input);
    }
}