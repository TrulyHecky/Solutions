import java.util.Scanner;
public class Main {
  public static double average(int length, int sum, int arr[]) {
    double average = 0;
    for (int i = 0; i < arr.length; i++) {
      sum += arr[i];
      average = sum / length;
    }
    return average;
 }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    int length = arr.length;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
    System.out.println(average(length, sum, arr));
  }
}
