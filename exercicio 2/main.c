#include <stdio.h>
#include <stdlib.h> 

const char * containsValue (int inteiros[]) {
	int i,m;
	for(i = 0; i<4;i++) {
		for(m = 0; m <4;m++) {
			if(i == m) continue;
			if(inteiros[i] == inteiros[m]) {
				return "Contem numeros repetidos";
			}
		}
		
	}
	return "Não contem numeros repetidos";
}

int main () {
srand(time(NULL));
  int inteiros [4] = {rand() % 10, rand() % 10,rand() % 10,rand() % 10};
	
  printf("inteiros {%d, %d, %d, %d}",inteiros[0], inteiros[1], inteiros[2],inteiros[3]);
  const char* resp = containsValue(inteiros);
  printf("\n %s", resp);
  return 0;
}
