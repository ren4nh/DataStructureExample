#include <stdio.h>
#include <stdlib.h>

/*Criando a struct */
struct Retangulo
{
  int comprimento;
  int largura;
  int area;
};

int main()
{
  srand(time(NULL));
  /*Criando a vari�vel r1 que ser� do
  tipo struct retangulo */
  struct Retangulo r1;
  r1.comprimento = rand() % 100;
  r1.largura = rand() % 100;
  r1.area = r1.comprimento * r1.largura;

  struct Retangulo r2;
  r2.comprimento = rand() % 100;
  r2.largura = rand() % 100;
  r2.area = r2.comprimento * r2.largura;

  struct Retangulo r3;
  r3.comprimento = rand() % 100;
  r3.largura = rand() % 100;
  r3.area = r3.comprimento * r3.largura;

  struct Retangulo r4;
  r4.comprimento = rand() % 100;
  r4.largura = rand() % 100;
  r4.area = r4.comprimento * r4.largura;

  struct Retangulo r5;
  r5.comprimento = rand() % 100;
  r5.largura = rand() % 100;
  r5.area = r5.comprimento * r5.largura;

  struct Retangulo retangulos[5] = {r1, r2, r3, r4, r5};

  printf("Elementos: ");
  int i, j;

  for (i = 0; i < 5; i++)
  {
    printf("%d ", retangulos[i].area);
  }

  for (i = 0; i < 5; i++) //Loop for descending ordering
  {
    for (j = 0; j < 5; j++) //Loop for comparing other values
    {
      if (retangulos[j].area < retangulos[i].area) //Comparing other array elements
      {
        struct Retangulo tmp = retangulos[i]; //Using temporary variable for storing last value
        retangulos[i] = retangulos[j];        //replacing value
        retangulos[j] = tmp;                  //storing last value
      }
    }
  }
  printf("\n\nDescending : "); //Printing message
  for (i = 0; i < 5; i++)      //Loop for printing array data after sorting
  {
    printf(" %d ", retangulos[i].area); //Printing data
  }
  return 0;
}
