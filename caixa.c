#include <stdlib.h>
#include <stdio.h>

int valores(int valor){
    int cont = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;
    int cont5 = 0;
    while(valor>600){
        printf("valor maximo atingido!\n");
        printf("Digite um valor inferior ou igual a 600 para continuar.\n");
        scanf("%d",&valor);
    }

    while(valor >=100){
        cont++;
        valor = valor-100;
    }
     while(valor >=50){
        cont2++;
        valor = valor-50;
    }
     while(valor >= 10){
        cont3++;
        valor = valor-10;
    }
     while(valor >=5){
        cont4++;
        valor = valor-5;
    }
     while(valor >=1){
        cont5++;
        valor = valor-1;
    }
    
printf("Sera sacado %d notas de 100 reais\n",cont);
printf("Sera sacado %d notas de 50 reais\n",cont2);
printf("Sera sacado %d notas de 10 reais\n",cont3);
printf("Sera sacado %d notas de 5 reais\n",cont4);
printf("Sera sacado %d notas de 1 reais\n",cont5);
    }




int main(){
    printf("Qual valor deseja sacar?\n");

    int valor;
    
    scanf("%d",&valor);
    (valor);
    valores(valor);
}
    