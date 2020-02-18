#include <iostream>
using namespace std;


int globalt = 5;
int no_inicializar;

int main()
{
   cout << "Aproximado de la dirección de segmento de Stack: ";
   int * sp = NULL;
   cout << &sp << endl;
   
   cout << "Aproximado de la dirección del segmento de Código: ";
   printf("%p\n", main); 
   
   int * temp = &globalt;
   int * temp2 = &no_inicializar;
   
   cout << "Dirección de segmento de Data: ";
   cout << ++temp << endl;
   
   cout << "Dirección de segmento de BSS: ";
   cout << ++temp2 << endl;
   
   cout << "Aproximado de la dirección de variable en segmento de Stack: ";
   int numero = 9;
   int * puntero = &numero;
   cout << &puntero << endl;
   
   return 0;
}