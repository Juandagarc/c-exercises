//Presentado por: Juan David García Arce

#include <iostream>
using namespace std;
int main()
{
 int a,b,resultado_entero; //declarar valiables tipo entero 
 float c,d,resultado_real; //declarar varialbes tipo real 
 float PI=3.1416; // asigna un valor a una contante 
 char letra;
 a=5;
 b=6;
 c=3.1;
 d=4.0;
 resultado_entero=a*b/3;
 resultado_real=c*d/3;
 cout<<"el resultado de la expresion a*b/3 es: "<<resultado_real<<endl; 
 cout<<"el resultado de la expresion c*d/3 es "<<resultado_entero<<endl; 
 cout <<"el valor de PI es:"<<PI<<endl;
 // cin>>PI; // no se debe modificar le valor de una constante; 
 letra ='@';
 cout<<"el valor de la variable letra es: "<<letra<<endl;; 
 system("PAUSE");
 return 0;
}