public class test_6 {
    // Pwhile loops:
    public static void main(String[] args) {
        int j = -6;
        while (j <= 5) {
            j++;
        }
        int i=5;
        while (j <= 5&& i>=10) {
            j++;
            i++;
        }
        int a = 0,b=0;
        while (a < 3) {
            b = a + b;

            for(;;){ 
                if(b==5){
                    if(a==3){
                       break;
                    }
                }
            }
        }
    }
}
