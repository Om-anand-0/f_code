#include <stdio.h>
#include <conio.h>
int main(){
        int i, j;
        int n =6;
                for(int i=0; i<n; i++){
                for(j=0; j < n-i-1; j++) 
                printf(" ");
                for (j = n-i-1; j < n + i; j++) 
                printf("*");
        printf("\n");
}

}
