#include <iostream>
using namespace std;

int main() {
  cout << "Esse programa calcula a média das notas de um aluno e imprime aprovado se a nota for >= 6, recuperação se nota = 5 e reprovado se nota < 5 \n\n";
  int qtd;
  float soma=0,media=0,nota;
  cout << "Digite a quantidade de notas para calcular a média: ";
  cin >> qtd;
  for (int i=1;i<=qtd;i++)
  {
    cout << "Digite a " << i << " nota: ";
    cin >> nota;
    soma = soma + nota;
  }
  media = soma/qtd;
  if (media>=6)
  {
    cout << "\nEsse aluno está aprovado!\n";
  }
  else
  {
    if (media==5)
    {
      cout << "\nEsse aluno está em recuperação!\n";
    }
    else
    {
      cout << "\nEsse aluno está reprovado!\n";
    }
  }
}
