#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int N;
    float Sum;
    int n;

    printf("\n enter N >= 1: ");
    scanf("%d", &N);

    if (N>=1) {

    for (n = 1; n <= N; n++)
    {
        Sum = pow(2, n)-pow(2, (n-1));
    }
  }
    printf("\n\n result = %f", Sum);
}
