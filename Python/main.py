print("Esse programa calcula a média das notas de um aluno e imprime aprovado se a nota for >= 6, recuperação se nota = 5 e reprovado se nota < 5\n")
media=0
soma=0
i=1
qtd = int(input("Digite a quantidade de notas para calcular a média: "))
while i<=qtd:
  nota = float(input(f"Digite a {i} nota: "))
  soma = soma+nota
  i=i+1
media = soma/qtd
if media>=6:
  print("\nEsse aluno está aprovado!")
else:
  if media==5:
    print("\nEsse aluno está em recuperação!")
  else:
    print("\nEsse aluno está reprovado")