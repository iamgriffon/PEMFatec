#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int conversao(char entrada[], int CNPJ[])
{
    int Lenght = strlen(entrada); 
    int result[Lenght];
    int i, j = 0; 
    
    for(i = 0; i < Lenght; i++)
    {
        if(entrada[i] >= '0' && entrada[i] <= '9')
        {
            if(j<14){
                //printf("\nvalor da entrada: %d", entrada[i]);
                CNPJ[j] = entrada[i] - '0';
                j++;
            }
        }
    }
}

bool ValidaCNPJ(int cnpj[] ,int sequence[], int tamanho)
{
    int i = 0;
    int somados = 0;
    int divisao;
    int verif;
    
    for(i = 0; i < tamanho; i++)
    {
        somados = somados + (cnpj[i]*sequence[i]);
    }
    printf("\nResultado da soma: %d", somados);
    
    divisao = somados%11;
    printf("\nResto da divisao por 11: %d", divisao);
    
    if(divisao < 2)verif = 0;
        else verif = 11 - divisao;

    return (verif == cnpj[tamanho]);    
    
}

int main()
{
    char inputUser[30];
    int CNPJ[14];
    int sequence1[] = {5,4,3,2,9,8,7,6,5,4,3,2};
    int sequence2[] = {6,5,4,3,2,9,8,7,6,5,4,3,2};
    
    
    
    printf("Entre com o cpf: ");
    fgets(inputUser, 30, stdin);
    conversao(inputUser, CNPJ);
    if(ValidaCNPJ(CNPJ, sequence1, 12) && ValidaCNPJ(CNPJ, sequence2, 13))
    {
        printf("\nCNPJ correto");
    }else{
        printf("\nCNPJ incorreto");
    }
    return 0;
}
