// 2) Programa de potenciação recursivo

#include <stdio.h>

int potenciacao(int base, int expoente)
{
    if (expoente == 0)
        return 1;
    else
        return potenciacao(base, expoente - 1) * base;
}

int main()
{
    printf("Hello Word");
    printf("\n %i", potenciacao(2, 5));
    return 0;
};

    // 3) Crie uma função recursiva que calcule multiplicações através de somas sucessivas:

#include <stdio.h>

int multiplicacao(int base, int multiplicador)
{
    if (multiplicador == 0)
        return 0;
    else
        return multiplicacao(base, multiplicador - 1) + base;
};

int main()
{
    printf("Hello World");
    printf("\n %i", multiplicacao(7, 0));
    return 0;
}

// 4) Calcule recursivamente o valor da expressão: expressao(n) = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + ...+ 1/(n-1) + 1/n

#include <stdio.h>

float inversa(int dividendo)
{
    if (dividendo == 1)
        return 1.0;
    else
        return inversa(dividendo - 1) + 1.0 / dividendo;
};

int main()
{
    printf("Hello World");
    printf("\n %f", inversa(3));
    return 0;
}

//5) Agora para divisão de inteiros

#include <stdio.h>

int divisao(int x, int y)
{
    if (x < y)
        return 0;
    else
        return divisao(x - y, y) + 1;
};

int main()
{
    printf("Hello World");
    printf("\n %i", divisao(4, 2));
    return 0;
}

//6) Soma de todos os numeros impares até o numero dado

#include <stdio.h>

int somaImpares(int n)
{
    if (n % 2 == 0)
        return somaImpares(n - 1);
    if (n == 1)
        return 1;
    else
        return somaImpares(n - 2) + n;
};

int main()
{
    printf("Hello World");
    printf("\n %i", somaImpares(97));
    return 0;
}

// 7) Agora para logartimo

#include <stdio.h>

int logaritmo(int x, int y)
{
    if (x < y)
        return 0;
    else
        return logaritmo(x / y, y) + 1;
};

int main()
{
    printf("Hello World");
    printf("\n %i", logaritmo(8, 2));
    return 0;
}

// 8) Busca recursiva
#include <stdio.h>

int busca(int vet[], int N, int indiceInicio, int procurado)
{
int i;
    for (i = indiceInicio; i < N; i++)
    {
if (procurado == vet[i]) return i;
    }
    return -1;
}


int buscaRecursiva(int vet[], int N, int indiceInicio, int procurado){
if (indiceInicio >= N) return -1; //não existe no vetor
    if (vet[indiceInicio] == procurado) return indiceInicio; //achei!!!
    return buscaRecursiva(vet, N, indiceInicio + 1, procurado);
}

int main()
{
int vet[] = {4, 8, 1, 7, 3, 12, 34, 97, -1, 2};
    printf("Procurando o elemento 12 (iterativa) => %d\n",
           busca(vet, 10, 0, 12));
    printf("Procurando o elemento 72 (iterativa) => %d\n",
           busca(vet, 10, 0, 72));
    printf("Procurando o elemento 12 (recursiva) => %d\n",
           buscaRecursiva(vet, 10, 0, 12));
    printf("Procurando o elemento 72 (recursiva) => %d\n",
           buscaRecursiva(vet, 10, 0, 72));
    return 0;
}

//9) Para calcular MDC

#include <stdio.h>

 int mdc(int x, int y)
{​​​​    
    if(x%y == 0) return y;
     else return mdc(y, x%y);
 }​​​​
 
int main()
{​​​​   
     printf("mdc(105, 70) => %d\n", mdc(105, 70));
     return 0;
}​​​​

