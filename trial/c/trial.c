#include <stdio.h>
#include <string.h>
// Program prints the maximum of two selected numbers from a line
// first line: number of lines to follow
// following line structure:
//   + first number contains the number of integers (4 <= n <= 1000)
//   + each integer is 0 <= x <= 1000
//   + last two integers represent the indices that you're going to take from
//   + index starts at 1
// NOTE: can assume that input is valid

int main(void) {
  int tmpArr[1000] = {0};
  int amtLineInts, amtLines, currInt, index1, index2 = 0;
  scanf("%d", &amtLines);
  for (int i = 0; i < amtLines; i++) {
    memset(tmpArr, 0, sizeof(tmpArr));
    scanf("%d", &amtLineInts);
    for (int j = 0; j < amtLineInts - 2; j++) {
      scanf("%d", &currInt);
      tmpArr[j] = currInt;
    }
    scanf("%d", &index1);
    scanf("%d", &index2);
    tmpArr[index1-1] > tmpArr[index2-1] ? printf("%d\n", tmpArr[index1-1]) : printf("%d\n", tmpArr[index2-1]);
  }
}
