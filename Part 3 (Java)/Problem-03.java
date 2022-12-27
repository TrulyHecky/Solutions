// Sort array of strings using loops

import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static String[] sortStringArray(String[] words, int size) {
        for (int i = 0; i < size - 1; i++) {  
            for (int j = i + 1; j < words.length; j++) {  
                if (words[i].compareTo(words[j]) > 0) {  
                    String temp = words[i];  
                    words[i] = words[j];  
                    words[j] = temp;  
                }  
            }  
        }
        return words;
    }
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String[] words = new String[n];
        int size = words.length;  
        for (int i = 0; i < n; i++) {
            words[i] = input.next();
        }
        System.out.println(Arrays.toString(sortStringArray(words, size)));
    }  
}
