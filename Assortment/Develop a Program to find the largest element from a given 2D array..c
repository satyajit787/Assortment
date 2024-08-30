// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int rows,cols;

    printf("Enter Row : ");
    scanf("%d",&rows);
    printf("Enter Colam : ");
    scanf("%d",&cols);

    int arry[rows][cols];
   // printf("Enter : \n");

    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){

        printf("a[%d][%d]=",i,j);
        scanf("%d",&arry [i] [j]);

        }
    }
    // printf("The largest number is : ");

    int largest = arry[0][0];

    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
             if(arry [i] [j] > largest){
             largest=arry[i][j];
             }
        }
    }
    printf("the laegest number is : %d",largest);

    }



