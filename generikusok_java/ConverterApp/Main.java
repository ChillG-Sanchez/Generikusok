public class Main {
    public static void main(String[] args) {
        Converter<String, Integer> stringToIntConverter = new Converter<>(Integer::parseInt);

        String inputString = "123";
        int outputInt = stringToIntConverter.Convert(inputString);
        System.out.println("Converted '" + inputString + "' to " + outputInt);

        Converter<Double, String> doubleToStringConverter = new Converter<>(d -> String.format("%.2f", d));

        double inputDouble = 123.456;
        String outputString = doubleToStringConverter.Convert(inputDouble);
        System.out.println("Converted " + inputDouble + " to '" + outputString + "'");
    }
}