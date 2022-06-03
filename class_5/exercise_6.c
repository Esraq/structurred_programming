#include <stdio.h>

int main() {
  int i,values[5];

  printf("Enter 5 integers\n: ");

  // taking input and storing it in an array
  for(i=0;i<5;++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(i=4;i>=0;--i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
