/*
15. (Desafio) Uma eleição presidencial é disputada por quatro candidatos. Os votos são informados 
através de código. Os dados utilizados no processo de apuração devem seguir as opções: 
1,2,3,4 – voto para os respectivos candidatos; 
5 – voto nulo; 
6 – voto em branco. 
Elabore um programa para calcular e escrever: 
Total de votos para cada candidato; 
Total de votos nulos; 
Total de votos em branco; 
Percentual dos votos branco e nulo sobre o total. 
Como finalizador do conjunto de votos, tem-se o valor 0. O programa deve permitir apenas 
entradas válidas.  
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int dec, vc1=0, vc2=0, vc3=0, vc4=0, vn=0, vb=0, total, totalnb;
    float pnbtotal;
    do{
        printf("\nSistema de Votação\n[0] Sair\n[1] Candidato 1\n[2] Candidato 2\n[3] Candidato 3\n[4] Candidato 4\n[5] Voto nulo\n[6] Voto em branco\n");
        scanf("%d", &dec);
        switch(dec){
            case 0: break;
            case 1: vc1++; break;
            case 2: vc2++; break;
            case 3: vc3++; break;
            case 4: vc4++; break;
            case 5: vn++; break;
            case 6: vb++; break;
            default: printf("\nCódigo Inválido, insira novamente:"); scanf("%d", &dec); break;
        }
    }while(dec!=0);
    total=(vc1+vc2+vc3+vc4+vn+vb);
    totalnb=vn+vb;
    pnbtotal=(float)totalnb/total;
    printf("\nVotos para o candidato 1: %d", vc1);
    printf("\nVotos para o candidato 2: %d", vc2);
    printf("\nVotos para o candidato 3: %d", vc3);
    printf("\nVotos para o candidato 4: %d", vc4);
    printf("\nVotos nulos: %d", vn);
    printf("\nVotos em branco: %d", vb);
    printf("\nPercentual dos votos branco e nulo: %.2f", pnbtotal*100);
    return 0;
}