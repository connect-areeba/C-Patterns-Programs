
#include <stdio.h>

int main() {
  int i =1, j = 1, n;
  printf("Enter a number:");
  scanf("%d", &n);
 
  for(i = 1; i<= n; i++){
      for(j = 1; j <= i; j++){
          printf("* ", n);
      }
      printf("\n");
  }
    return 0;
}
