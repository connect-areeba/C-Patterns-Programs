#include <stdio.h>
int main(){
    int i, j, n;
    char a;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 1; i<=n; i++){
        if( i % 2 != 0){
        for(j= 1; j<=i; j++){
            printf("%d ", j);
        }
        }
        else{
               for(j= 1; j<=i; j++){
                   printf("%c ", 'A'+j-1);
               }
               }
        printf("\n");
    }
}