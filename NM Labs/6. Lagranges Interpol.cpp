//6. Polynomial interpolation using Lagrange's Method


#include <stdio.h>
#include <math.h>
#define MAX 15

int main()
{
    int n;
    float x[MAX], f[MAX], fp, lf, sum, xp;
    char q;

    printf("\nInput the number of data pairs: ");
    scanf("%d", &n);
    printf("\nInput data pairs x(i) and values f(i) (one set in each line): ");

    for (int i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &f[i]);
    }

    do
    {
        printf("\nInput x at which interpolation is required: ");
        scanf("%f", &xp);
        sum = 0.0;
        for (int i = 0; i < n; i++)
        {
            lf = 1.0;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    lf = lf * (xp - x[j]) / (x[i] - x[j]);
            }
            sum = sum + lf * f[i];
        }
        fp = sum;

        printf("\nInterpolated function value at x = %f is %f.\n", xp, fp);	//%.5f
        printf("Do you want to input another value? (y/n): ");
      //  fflush(stdin); // clear input buffer
        scanf(" %c", &q);
    } while (q == 'y');
    return 0;
}

/*
Inputs first run: 4

: 1 2
2 3
3 5
4 7

: 2

Inputs second run: 4
*/
