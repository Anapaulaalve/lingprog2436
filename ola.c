#include <stdio.h>
#include <stdio.h>

void main (   ) {
      int x = 0; //criando uma variavel inteira 
      printf ( "valor de x: %d\n",x);
      x++; // incrementando x em 1 unidade 
      printf ("valor de x: %d\n",x);
      float y = 12.345678; // criando uma variavel real 
      printf ( " valor de y : %f\n",y);
      //imprimindo o valor de y com apenas 2 casas
      printf ("valor de y: %.2f\n",y);
      //1 caractere deve estar entre apóstrofo
      char sexo = 'm'; // variavel que ceita 1 caractere
      printf ( " sexo: %C\n", sexo);
      //criando uma variavel string ( texto)
       char nome [30]= "joao";
       printf ("nome: %s\n", nome);
       //imprimindo a primeira letra do nome
       printf ( "primeira letra: %c\n", nome [0]);
      printf ("Ola mundo!");

}