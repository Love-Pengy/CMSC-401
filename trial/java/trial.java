// Brandon Frazier 1/19/24 CMSC 401

import java.util.Scanner;

public class trial {

  public static void main(String[] args) {

    Scanner scan = new Scanner(System.in);
    int[] tmpArr;
    tmpArr = new int[1001];
    int amtLineInts, amtLines, currInt, index1, index2 = 0;
    amtLines = scan.nextInt();

    for(int i = 0; i < amtLines; i++){
      amtLineInts = scan.nextInt();

      for(int j = 0; j < amtLineInts - 2; j++){
        currInt = scan.nextInt();
        tmpArr[j] = currInt;
      }

      index1 = scan.nextInt();
      index2 = scan.nextInt();
      System.out.println(tmpArr[index1-1] > tmpArr[index2-1]?tmpArr[index1-1]:tmpArr[index2-1]);

    }
    scan.close();
  }
}
