public class test_5 {
    // Program with arrays:
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Value at index " + i + ": " + numbers[i]);
        }
        String[] fruits = new String[3];
        fruits[0] = "Apple";
        fruits[1] = "Banana";
        fruits[2] = "Orange";
        for (String fruit : fruits) {
            System.out.println("Fruit: " + fruit);
        }
    }
}
