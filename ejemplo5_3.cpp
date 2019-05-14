#include <iostream>

using namespace std;

int main()
{
   char car;
   bool digito_leido=false;
   while (!digito_leido)
   {
       cout << "Introduzca un caracter:"; 
       cin >> car;
       digito_leido = (('0'<=car)&&(car<='9'));
   }
   return 0;
}
