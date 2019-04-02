#include <stdio.h>
#include <math.h>

double somarElementosPares(double vet[], int n)
{
    int i;
    double soma = 0;
    for (i = 0; i < n; i++)
    {
        double resto = fmod(vet[i], 2);
        if (resto = 0)
        {
            soma += vet[i];
        }
    }
    return soma;
}

int main()
{
    double vet[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    double soma = somarElementosPares(vet, 10);
    printf("%f", soma);
    return 0;
}