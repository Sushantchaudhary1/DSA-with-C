#include<stdio.h>

int main(){

    int arow, acol, brow, bcol;
    printf("Enter Row and Column for 1st Marix=\n");
    scanf("%d%d", &arow, &acol);

    int arr1[arow][acol];
    printf("Enter elements in 1st matrix(%d X %d)=\n", arow, acol);
    for(int i=0;i < arow; i++){
        for(int j = 0; j < acol; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    
    
    printf("Enter Row and Column for 2nd Marix B=\n");
    scanf("%d%d", &brow, &bcol);

    int arr2[brow][bcol];
    printf("Enter elements in 2nd matrix(%d X %d)=\n", brow, bcol);
    for(int i = 0; i < brow; i++){
        for(int j = 0; j < bcol; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    int mulArr[arow][bcol];

    int sum = 0;

    if(acol != brow){
        printf("Invalid Row and Column");
    } else {
        for(int i = 0; i < arow; i++){
            for(int j = 0; j < bcol; j++){
                for(int k = 0; k < bcol; k++){
                    sum=sum+arr1[i][k]*arr2[k][j];
                }
            mulArr[i][j]=sum;
            sum=0;
            }
        }
    }

    printf("Multiplicaiton of Matrix(%d X %d) is: =\n", arow, bcol);
    printf("[\n");
    for(int i = 0; i < arow; i++){
        for(int j = 0; j < bcol; j++){
            printf("%d\t", mulArr[i][j]);
        }
        printf("\n");
    }
    printf("]\n");
    return 0;
}