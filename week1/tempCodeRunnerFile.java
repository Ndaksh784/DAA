import java.util.Scanner;

public class FriendlyPairChecker {

    
    public static int sumOfDivisors(int num) {
        int sum = 0;
        for (int i = 1; i <= num; i++) {
            if(num % i == 0) {
                sum += i;
            }
        }
        return sum;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
      
        System.out.print("Enter number 1: ");
        int num1 = sc.nextInt();
        System.out.print("Enter number 2: ");
        int num2 = sc.nextInt();
        
       
        int sum1 = sumOfDivisors(num1);
        int sum2 = sumOfDivisors(num2);
        
      
        double ratio1 = (double) sum1 / num1;
        double ratio2 = (double) sum2 / num2;
        
      
        final double TOLERANCE = 1e-9;
        if (Math.abs(ratio1 - ratio2) < TOLERANCE) {
            System.out.println("Friendly Pair");
        } else {
            System.out.println("Not Friendly Pair");
        }
       
        if (sum1 == num1 && sum2 == num2) {
            System.out.println("Abundant Numbers");
        } else {
            System.out.println("Not Abundant Numbers");
        }
        
        sc.close();
    }
}
