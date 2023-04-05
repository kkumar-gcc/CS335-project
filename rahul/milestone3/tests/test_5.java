public class test_5 {
    // Program with arrays and method invocation:
    public static int sumArray(int[] arr,int n) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum =sum + arr[i];
        }
        return sum;
    }
    public static float main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};
        int  c = numbers[0];
        numbers[2]=7;
        for (int i = 0; i < 3; i++) {
            numbers[i]=1;
        }
        int p = sumArray(numbers, c);
        return c + numbers[1];
    }

    
}
