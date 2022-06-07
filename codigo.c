#include <stdio.h>

int main(){
    int codigo;
    float preco;
    printf("Digite o código:");
    scanf("%i",&codigo); 
    printf("Digite o preco:");
    scanf("%f",&preco); 
     if(codigo == 1){ 
        printf("Sul");
    }if(codigo == 2){
       printf("Norte");
    }if(codigo == 3){
       printf("Leste");
    }if(codigo == 4){
       printf("Oeste");                        
    }if(codigo == 5 || codigo == 6){
       printf("Nordeste");
    }if(codigo == 7 || codigo == 8 || codigo == 9){
       printf("Sudeste");
    }if(codigo >= 10 && codigo <= 20){
       printf("Centro-Oeste");
    }if(codigo >= 21 && codigo <= 30){
       printf("Nordeste");
    }
    return 0;
}
