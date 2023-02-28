package xyz;
//almost all cases
public class test_11 {
    
    // Static variable
    static int count = 0;

    // Instance variables
    private String name;
    private int age;
    private int[] grades;

    // Constructor
    public test_11(String name, int age, int[] grades) {
        this.name = name;
        this.age = age;
        this.grades = grades;
        count++;
    }

    // Instance method
    public void greet() {
        System.out.println("Hello, my name is " + name + " and I am " + age + " years old.");
    }

    // Static method
    public static void printCount() {
        System.out.println("There are " + count + " instances of MyClass.");
    }

    // Main method
    public static void main(String[] args) {
        
        // Create two instances of MyClass
        int[] grades1 = {85, 90, 95};
        test_11 obj1 = new test_11("Alice", 25, grades1);

        int[] grades2 = {70, 75, 80};
        test_11 obj2 = new test_11("Bob", 30, grades2);

        // Call instance method on each object
        obj1.greet();
        obj2.greet();

        // Call static method on class
        test_11.printCount();

        // Use a for loop to calculate the average of the grades for each object
        double avg1 = 0;
        for (int i = 0; i < obj1.grades.length; i++) {
            avg1 += obj1.grades[i];
        }
        avg1 /= obj1.grades.length;

        double avg2 = 0;
        for (int i = 0; i < obj2.grades.length; i++) {
            avg2 += obj2.grades[i];
        }
        avg2 /= obj2.grades.length;

        // Use a while loop to print out the grades for each object
        int j = 0;
        System.out.print(obj1.name + "'s grades are: ");
        while (j < obj1.grades.length) {
            System.out.print(obj1.grades[j] + " ");
            j++;
        }
        System.out.println(" (average = " + avg1 + ")");

        int k = 0;
        System.out.print(obj2.name + "'s grades are: ");
        while (k < obj2.grades.length) {
            System.out.print(obj2.grades[k] + " ");
            k++;
        }
        System.out.println(" (average = " + avg2 + ")");

        // Use an if statement to compare the averages
        if (avg1 > avg2) {
            System.out.println(obj1.name + " has a higher average grade.");
        } else if (avg2 > avg1) {
            System.out.println(obj2.name + " has a higher average grade.");
        } else {
            System.out.println("Both have the same average grade.");
        }
    }
}

