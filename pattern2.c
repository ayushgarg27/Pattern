#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sp = n -1;
    int st = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sp; j++){
            printf("  ");
        }
        for(int m=1; m<=st; m++){
            printf("*");
            printf(" ");
        }
        printf("\n");
        sp--;
        st++;
    }
}