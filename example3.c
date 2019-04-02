#include <stdio.h>
#include <string.h>

/*Criando a struct */
struct Livro
{
  int codigo;
  char titulo[30], autor[30], categoria[20];
};

void listar(struct Livro v[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%d ", v[i].codigo);
    printf("%s ", v[i].titulo);
    printf("%s ", v[i].autor);
    printf("%s ", v[i].categoria);
    printf("\n");
  }
}

int main()
{
  int n;
  /*Criando a vari�vel r1 que ser� do
  tipo struct retangulo */
  struct Livro l1;
  l1.codigo = 1;
  strcpy(l1.autor, "Autor 1");
  strcpy(l1.categoria, "Categoria 1");
  strcpy(l1.titulo, "Titulo 1");

  struct Livro l2;
  l2.codigo = 2;
  strcpy(l2.autor, "Autor 2");
  strcpy(l2.categoria, "Categoria 2");
  strcpy(l2.titulo, "Titulo 2");

  struct Livro l3;
  l3.codigo = 3;
  strcpy(l3.autor, "Autor 3");
  strcpy(l3.categoria, "Categoria 3");
  strcpy(l3.titulo, "Titulo 3");

  struct Livro l4;
  l4.codigo = 4;
  strcpy(l4.autor, "Autor 4");
  strcpy(l4.categoria, "Categoria 4");
  strcpy(l4.titulo, "Titulo 4");

  struct Livro l5;
  l5.codigo = 5;
  strcpy(l5.autor, "Autor 5");
  strcpy(l5.categoria, "Categoria 5");
  strcpy(l5.titulo, "Titulo 5");

  struct Livro livros[5] = {l1, l2, l3, l4, l5};

  printf("Informe o numero de livros (1 a 5) :");
  scanf("%d", &n);

  if (n > 5)
    n = 5;

  listar(livros, n);
  return 0;
}
