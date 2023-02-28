public class test_8 {
    public static void main(String[] args) {
        /* This variable is *** added to check the ultimate level of errorCheck */
        double $Beaware = 0x0___00___0.1___1___1p0____0d;
        double $$NOOO = .0____0e-0_____0;
        long _$_$YEs = 0___7____3___2___1L;
        /*** / ****/

        // Declare variables
        int[] arr = { 1, 2, 3 };
        Map map = new HashMap();

        String str = "Hello, world!";
        double d = 3.14159;
        boolean b = true;

        // Call a function
        int sum = sumArray(arr);
        System.out.println("Sum of array elements: " + sum);

        // Use a loop
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Array element " + i + ": " + arr[i]);
        }

        // Use a conditional statement
        if (d > 3.0) {
            System.out.println("d is greater than 3.0");
        } else {
            System.out.println("d is less than or equal to 3.0");
        }
        // Use a while loop
        int i = 0;
        while (i < 5) {
            System.out.println("i = " + i);
            i++;
        }

        // Use a map
        map.put("one", 1);
        map.put("two", 2);
        map.put("three", 3);
        System.out.println("Value of \"two\": " + map.get("two"));

        // Use a boolean expression
        if (b && (d < 4.0 || str.equals("Hello"))) {
            System.out.println("The boolean expression is true");
        } else {
            System.out.println("The boolean expression is false");
        }
    }

    public static int sumArray(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }
}
