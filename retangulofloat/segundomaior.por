programa
{
	
	funcao inicio()
	{
	inteiro n1, n2, n3, n4
		escreva("Por favor, digite 4 números, e lembre-se de que o segundo deve ser o maior deles\n")
			leia(n1)
			leia(n2)
			leia(n3)
			leia(n4)

limpa()

	se (n2>n1 e n2>n3 e n2>n4){
		escreva("", n2,", ")
		
			se(n1>n3 e n1>n4 e n3>n4){
			escreva("", n1, ", ",n3, ", ",n4)}

			se(n1>n3 e n1>n4 e n4>n3){
			escreva("", n1, ", ",n4, ", ",n3)}

			se(n3>n1 e n3>n4 e n1>n4){
			escreva("", n3, ", ",n1, ", ",n4)}

			se(n3>n1 e n3>n4 e n4>n1){
			escreva("", n3, ", ",n4, ", ",n1)}

			se(n4>n1 e n4>n3 e n3>n1){
			escreva("", n4, ", ",n3, ", ",n1)}

			se(n4>n1 e n4>n3 e n1>n3){
			escreva("", n4, ", ",n1, ", ",n3)}
	}
	senao{
		escreva("O segundo número não é o maior, por favor, refaça.")
	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 209; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */