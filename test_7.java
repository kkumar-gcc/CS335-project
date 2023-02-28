public class test_7 {
    private int x = 5;

    class Inner {
        public void printX() {
            System.out.println("Value of x: " + x);
        }
    }

    public static void main(String[] args) {
        NestedClass outer = new NestedClass();
        NestedClass.Inner inner = outer.new Inner();
        inner.printX();
    }
}
