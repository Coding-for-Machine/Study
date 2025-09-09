#include<stdio.h>

int main() {
    int rows =10;
    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=rows; j++){
            if (i==1 || j==1 || i==rows || j==rows) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}