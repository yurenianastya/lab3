#include <stdio.h>
#include <math.h>


int main() {
    int array[5][5] = {{1, 1, 6, 7, 1},{5, 3, 2, 5, 9},{4, 6, 2, 4, 3},{2, 5, 6, 4, 5},{3, 4, 6, 9, 3}};
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    int i, k, j, x;
    for (j = 0; j < 5 ; j++)
    {
        for (k = 1; k < 5 ; k++)
        {
            x = array[k][j];
            for (i = k - 1; i >= 0 && array[i][j] < x; i--)
            {
                array[i + 1][j] = array[i][j];
                array[i][j] = x;
            }
        }
    }
        printf ("\n\n");
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    double product = 1.0;
    double gav = 1.0;
    double suma = 0.0;
    for ( i = 1; i < 5 ; i++){
        for ( j = 0; j < 5; j++){
            if (i > j) {
                product*=array[i][j];
            }
        }
        gav = pow(product,1/4.0);
        printf("i=%d\t",i);
        printf("gav=%lf\n",gav);
        suma +=gav;
        gav = 1.0;
        product = 1.0;
    }
    printf("suma=%lf",suma);

    return 0;
    }
