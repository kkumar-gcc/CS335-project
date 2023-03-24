public class test_10 {
    //Error expected 
    public static void main(String[] args) {
        int x = 10;
        boolean y;
        x=y;
        if (x == 10) { //Error cause missing ')' 
            System.out.println("x is equal to 10");
        }
    }
}
