public class Enum {
    public static void main(String[] args) {
        Season season = Season.SUMMER;
        System.out.println("Current season: " + season);
       
    }
}

class Season {
   int WINTER, SPRING, SUMMER, FALL;
}
