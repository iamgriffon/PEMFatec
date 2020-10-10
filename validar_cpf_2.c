#include<stdio.h>
#include<stdbool.h>

bool verificaDigito(int cpf[], int mult[], int N)
{   int i, soma=0;
	for(i=0; i<N; i++)
	{	soma = soma + cpf[i]*mult[i];
	}
	int resto = ((soma*10) % 11)%10;
	return (resto == cpf[N]);
}

bool cpfRepetido(int cpf[])
{
    int i = 1;
    while(cpf[0] == cpf[i])
    {
        i++;
    }
    return (i == 11);
    
}

int main()
{
	int cpf[11];
	int m1[9]={10,9,8,7,6,5,4,3,2};
	int m2[10]={11,10,9,8,7,6,5,4,3,2};
	int i;
	printf("Insira seu CPF com 11 digitos");
	for(i=0;i<11;i++) scanf("%d", &cpf[i]);
	

	if( verificaDigito(cpf, m1, 9) &&
        verificaDigito(cpf, m2, 10) && !cpfRepetido(cpf)){
		printf("\nCPF valido.");
	}
	else{
		printf("\nErro no CPF.");
	}
	return 0;
}