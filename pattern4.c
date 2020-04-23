#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int st = n;
    int sp=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sp; j++){
            printf("  ");
        }
        for(int m=1; m<=st; m++){
            printf("*");
            printf(" ");
        }
        printf("\n");
        st--;
        sp++;
    }
}