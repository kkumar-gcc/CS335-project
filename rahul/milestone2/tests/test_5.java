public class test_5 {
    // Program with arrays:
    public static int sumArray(int[] arr,int n) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }
    public static float main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};
        int  c = numbers[0];

        numbers[2]=7;
        for (int i = 0; i < 3; i++) {
            numbers[i]+=1;
            ++i;
            // System.out.println("Value at index " + i + ": " + numbers[i]);
            
        }
        return c+numbers[1];
    }

    
}
