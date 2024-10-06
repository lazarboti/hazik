public class Main {
    public static void main(String[] args) {

        System.out.println("Character: isDigit() és toUpperCase() metódus bemutatása:");
        
        char char1 = '5';
        System.out.println("isDigit('5'): " + Character.isDigit(char1));
        
        char char2 = 'a';
        System.out.println("toUpperCase('a'): " + Character.toUpperCase(char2));
        System.out.println("--------------------------------------");
        
        
        System.out.println("Integer: parseInt() és toString() metódus bemutatása:");
        
        String intStr = "123";
        int parsedInt = Integer.parseInt(intStr);
        System.out.println("parseInt(\"123\"): " + parsedInt);
        
        int intValue = 456;
        String intToStr = Integer.toString(intValue);
        System.out.println("toString(456): " + intToStr);
        System.out.println("--------------------------------------");
        

        System.out.println("Double: parseDouble() és isNaN() metódus bemutatása:");
        
        String doubleStr = "3.14";
        double parsedDouble = Double.parseDouble(doubleStr);
        System.out.println("parseDouble(\"3.14\"): " + parsedDouble);
        
        double nanValue = Double.NaN;
        System.out.println("isNaN(Double.NaN): " + Double.isNaN(nanValue));
        System.out.println("--------------------------------------");
        

        System.out.println("Boolean: parseBoolean() és toString() metódus bemutatása:");
        
        String boolStr = "true";
        boolean parsedBoolean = Boolean.parseBoolean(boolStr);
        System.out.println("parseBoolean(\"true\"): " + parsedBoolean);
        
        boolean boolValue = false;
        String boolToStr = Boolean.toString(boolValue);
        System.out.println("toString(false): " + boolToStr);
        System.out.println("--------------------------------------");
    }
}