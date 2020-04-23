#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(k=n-i; k>=0; k--)
            printf(" ");
        
        for(int j=0; j<=i; j++)
            printf("* ");
    
        printf("\n");
    }

}