#include <stdio.h>
int main(){
    int i, j, n;
    char a;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 1; i<=n; i++){
        a = 64;
        for(j= 1; j<=i; j++){
            a++;
            printf("%c ", a);
            
        }
        printf("\n");
    }
    return 0;
}