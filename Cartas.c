#include <stdio.h>

/*Beatriz gosta muito de jogar cartas com as amigas. Para treinar memória e raciocínio lógico, ela inventou um pequeno passatempo com cartas.
Ela retira as cinco primeiras cartas do topo de um baralho bem embaralhado, e as coloca em sequência, da esquerda para a direita, na mesa, com
as faces voltadas para baixo.
Então ela olha, por um breve instante, cada uma das cartas da sequência (e logo as recoloca na mesa, com a face para baixo). Usando apenas a
sua memória, Beatriz deve agora dizer se a sequência de cartas está ordenada crescentemente, decrescentemente, ou não está ordenada.
De tanto jogar, ela está ficando cansada, e não confia em seu próprio julgamento para saber se acertou ou errou. Por isso, ela pediu para você
fazer um programa que, dada uma sequência de cinco cartas, determine se a sequência dada está ordenada crescentemente, decrescentemente,
ou não está ordenada.*/

int Crescente(int cartas[]) {
    for (int i = 0; i < 4; i++) {
        if (cartas[i] > cartas[i + 1]) {
            return 0;
        }
    }
    return 1; 
}

int Decrescente(int cartas[]) {
    for (int i = 0; i < 4; i++) {
        if (cartas[i] < cartas[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int cartas[5];
    printf("CARTAS\n");
    printf("Digite uma sequencia de 5 cartas:\n");
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }


    if (Crescente(cartas)) {
        printf("C\n");
    } else if (Decrescente(cartas)) {
        printf("D\n");
    } else {
        printf("N\n");
    }

    return 0;
}
