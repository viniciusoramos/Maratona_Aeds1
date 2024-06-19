#include <stdio.h>
#include <stdlib.h>
/*Seu amigo está perdido no deserto e precisa encontrar um oásis. Você sabe que seu amigo está, no momento, virado para um dos pontos
cardeais (norte, sul, leste, oeste). Você também sabe que o oásis mais próximo está em uma dessas quatro direções. Dadas essas duas
informações, você deve dizer qual o menor ângulo, em graus, que seu amigo deverá virar para ir na direção do oásis mais próximo.
Entrada
A entrada contém duas strings, A e B, a direção para onde seu amigo está virado originalmente e a direção do oásis, respectivamente.
Saída
Seu programa deve produzir uma única linha, contendo um único inteiro, o menor ângulo que seu amigo deve virar para continuar na direção
correta para o oásis.
Restrições
Os valores possíveis para A e B são {norte, leste, oeste, sul*/
#include <string.h>

int direction_to_angle(char* direcao) {
    if (strcmp(direcao, "norte") == 0) return 0;
    if (strcmp(direcao, "leste") == 0) return 90;
    if (strcmp(direcao, "sul") == 0) return 180;
    if (strcmp(direcao, "oeste") == 0) return 270;
    return -1; 
}

int Calcular_Angulo_Min(int angulo1, int angulo2) {
    int diferenca = abs(angulo1 - angulo2);
    if (diferenca > 180) diferenca = 360 - diferenca;
    return diferenca;
}

int main() {
    char direcaoA[10], direcaoB[10];
    scanf("%s %s", direcaoA, direcaoB);
    
    int anguloA = direction_to_angle(direcaoA);
    int anguloB = direction_to_angle(direcaoB);
    
    int result = Calcular_Angulo_Min(anguloA, anguloB);
    
    printf("%d\n", result);
    return 0;
}
