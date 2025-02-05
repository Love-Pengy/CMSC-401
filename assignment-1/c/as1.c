// Brandon Frazier 2/5/25 CMSC 401

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Program prints the elements that occur morethan N/3 times
// first line: number of numbers to follow 
// following line structure:
//  elements of the array 
// NOTE: can assume that input is valid

int main(void) {

  int output[2] = {-1, -1};
  int amtLines = 0;
  int maxVal = -999999;
  scanf("%d", &amtLines); 
  int* input = malloc(sizeof(int) * amtLines);
  memset(input, 0, amtLines);

  // take in all values and determine max 
  for(int i = 0; i < amtLines; i++){
    scanf("%d", &input[i]);    
    if(input[i] > maxVal){
      maxVal = input[i]; 
    }
  }

  int* countArray = malloc(sizeof(int) * (maxVal+1));
  memset(countArray, 0, maxVal+1); 

  for(int i = 0; i < amtLines; i++) { 
    countArray[input[i]]++; 
  }

  // alloc one extra array 
  // use indices to determine the what the number is and the current count
  for(int i = 0; i < maxVal+1; i++){
    if(countArray[i] > (int)(amtLines/3)){  
      output[0] == -1 ? (output[0] = i) : (output[1] = i);
    }
  }

  if(output[0] == -1){
    printf("-1\n");
  }
  else if(output[1] == -1){
    printf("%d\n", output[0]);
  }
  else{
    printf("%d %d\n", output[0], output[1]);
  }

  free(input);
  free(countArray);
}


