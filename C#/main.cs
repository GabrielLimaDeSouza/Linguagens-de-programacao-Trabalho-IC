using System;

class Program {
  public static void Main (string[] args) {
    Console.WriteLine ("Esse programa calcula a média das notas de um aluno e imprime aprovado se a nota for >= 6, recuperação se nota = 5 e reprovado se nota < 5 \r\n");
    int qtd;
    float soma=0,media=0,nota;
    Console.Write("Digite a quantidade de notas para calcular a média: ");
    qtd = int.Parse(Console.ReadLine());
    for (int i=1;i<=qtd;i++)
    {
      Console.Write("Digite a "+i+ " nota: ");
      nota = float.Parse(Console.ReadLine());
      soma = soma + nota;
    }
    media = soma/qtd;
    Console.WriteLine("");
    if (media>=6)
    {
      Console.WriteLine("Esse aluno está aprovado!");
    }
    else
    {
      if (media==5)
      {
        Console.WriteLine("Esse aluno está em recuperação!");
      }
      else
      {
        Console.WriteLine("Esse aluno está reprovado!");
      }
    }
  }
}