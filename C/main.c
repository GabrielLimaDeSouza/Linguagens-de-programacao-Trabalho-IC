#include <stdio.h>

int main(void) {
  printf("Esse programa calcula a média das notas de um aluno e imprime aprovado se a nota for >= 6, recuperação se nota = 5 e reprovado se nota < 5 \n\n");
  int qtd;
  float soma=0,media=0,nota;
  printf("Digite a quantidade de notas para calcular a média: ");
  scanf("%i",&qtd);
  for (int i=1;i<=qtd;i++)
  {
    printf("Digite a %i nota: ",i);
    scanf("%f",&nota);
    soma = soma+nota;
  }
  media = soma/qtd;
  if (media>=6)
  {
    printf("\nEsse aluno está aprovado!\n");
  }
  else
  {
    if (media==5)
    {
      printf("\nEsse aluno está em recuperação!\n");
    }
    else
    {
      printf("\nEsse aluno está reprovado!\n");
    }
  }
  return 0;
}
