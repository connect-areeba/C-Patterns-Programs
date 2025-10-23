
#include <stdio.h>

int main() {
  int i =1, j = 1, n;
  printf("Enter no of rows:");
  scanf("%d", &n);
 
  for(i = 1; i<= n; i++){
      for(j = 1; j <= n+1-i ; j++){
          printf("* ");
      }
      printf("\n");
  }
    return 0;
} 