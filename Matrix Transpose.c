#include<stdio.h>
//WAP TO PRINT TRANSPOSE OF MATRIX 2*3//
int main()
{
    int i,j,a[2][3];
    printf("Enter your Matrix Element: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

//Printing original Matrix//

    printf("The Matrix Element are: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

//Printing the Trnaspose of original Matrix//

    printf("The Transpose of The matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
