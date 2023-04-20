class test1{
    static void printHello(){
        String c = " Hello World!";
    }
}
public class test_10 {
    // Method scope error
    public static void main(String[] args) {
        test1.printHello();
    }
}
