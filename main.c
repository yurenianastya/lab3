#include <stdio.h>
#include <math.h>


int main() {
    int Matrix[5][5] = {{1, 1, 6, 7, 1},
                        {5, 3, 2, 5, 9},
                        {4, 6, 2, 4, 3},
                        {2, 5, 6, 4, 5},
                        {3, 4, 6, 9, 3}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    int i, k, j, tempMatrix; // these are varibables for the loops
    for (j = 0; j < 5 ; j++)
    {
        for (k = 1; k < 5 ; k++)
        {
            tempMatrix = Matrix[k][j];
            for (i = k - 1; i >= 0 && Matrix[i][j] < tempMatrix; i--)
            {
                Matrix[i + 1][j] = Matrix[i][j];
                Matrix[i][j] = tempMatrix;
            }
        }
    }
    printf ("\n\n");
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    double product = 1.0;
    double geometricAverageValue = 1.0;
    double sumOfAverageValues = 0.0;
    for ( i = 1; i < 5 ; i++){
        for ( j = 0; j < 5; j++){
            if (i > j) {
                product*=Matrix[i][j];
            }
        }
        geometricAverageValue = pow(product,1/4.0);
        printf("i=%d\t",i);
        printf("geometricAverageValue=%lf\n",geometricAverageValue);
        sumOfAverageValues +=geometricAverageValue;
        product = 1.0;
    }
    printf("sumOfAverageValues=%lf",sumOfAverageValues);

    return 0;
}