public class test_5 {
     // Program with arrays.
    public static float main() {
        int[] numbers = {1, 2, 3, 4, 5};
        int  c = numbers[0];
        numbers[2]=7;
        for (int i = 0; i < 3; i++) {
            numbers[i]=1;
        }
        return c + numbers[1];
    }
}
