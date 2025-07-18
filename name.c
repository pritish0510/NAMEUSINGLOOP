#include <stdio.h>

int main() {
    int n = 5;
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(j==n+1-i){
                printf("*");
            }
           else if(i==j && j!=n-1 && j!=n){
               printf("*");
           }
           else{
               printf(" ");
           }
            }
            for(int s = 1;s<=2;s++){
                printf(" ");
            }
            for(int k = 1;k<=n;k++){
               if(i==1 || k==1 || k==n || i==n-2){
                   printf("*");
               }
               else{
                   printf(" ");
               }
            }
              for(int s = 1;s<=2;s++){
                printf(" ");
            }
            for(int k2 = 1;k2<=n;k2++){
                if(i==1 || i==n || i==n-2){
                    printf("*");
                }
                else if(k2==1 && i ==n-2 || i==n-3 &&k2==1){
                    printf("*");
                }
                else if(k2==n && i==n-1){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            for(int s = 1;s<=2;s++){
                printf(" ");
            }
            for(int h = 1;h<=n;h++){
                if(h==1 || i==n-2 || h==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    return 0;
}