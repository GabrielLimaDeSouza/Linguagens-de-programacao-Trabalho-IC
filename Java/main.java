import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    System.out.println("Esse programa calcula a média das notas de um aluno e imprime aprovado se a nota for >= 6, recuperação se nota = 5 e reprovado se nota < 5 \n");
    int qtd;
    float soma=0,media=0,nota;
    Scanner entrada = new Scanner(System.in);
    System.out.print("Digite a quantidade de notas para calcular a média: ");
    qtd = entrada.nextInt();
    for (int i=1;i<=qtd;i++)
    {
      System.out.print("Digite a "+i+" nota: ");
      nota = entrada.nextFloat();
      soma = soma + nota;
    }
    media = soma/qtd;
    if(media>=6)
    {
      System.out.println("Esse aluno está aprovado!\n");
    }
    else
    {
      if(media==5)
      {
        System.out.println("Esse aluno está em recuperação\n");
      }
      else
      {
        System.out.println("Esse aluno está reprovado!\n");
      }
    }
  }
}