// Brandon Frazier 2/5/25 CMSC 401

import java.util.Scanner;

public class as1 {

  public static void main(String[] args) {

    Scanner scan = new Scanner(System.in);
    int[] output =  {-1, -1};
    int amtLines = 0;
    int maxVal = -999999;
    amtLines = scan.nextInt();
    int[] input = new int[amtLines];
   
    for(int i = 0; i < amtLines; i++){
      input[i] = scan.nextInt();    
      if(input[i] > maxVal){
        maxVal = input[i];
      }
    }
    

    int[] countArray = new int[maxVal+1];
    
    for(int i = 0; i < amtLines; i++){
      countArray[input[i]]++;
    }
   
    for(int i = 0; i < maxVal+1; i++){
      if(countArray[i] > (int)(amtLines/3)){
        int nothing = output[0] == -1 ? (output[0] = i) : (output[1] = i); 
      }
    }
    
    if(output[0] == -1){
      System.out.println("-1");
    }
    else if(output[1] == -1){ 
      System.out.println(output[0]);
    }
    else{
      System.out.println(output[0]+ " " + output[1]);
    } 

    scan.close();
  }
}
