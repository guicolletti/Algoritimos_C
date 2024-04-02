#include <stdio.h>

int main()
{
    
   char Mouse[] = "mouse";
   char Teclado[] = "teclado";
   char Mousepad[] = "mouse";

   float valorMouse = 20.99;
   float valorTeclado = 47.99;
   float valorMousepad = 19.99;

   float total_lista = valorMouse + valorMousepad + valorTeclado;

   printf("O valor da sua compra e: %.2f", total_lista); 

    return 0;

}
