#include <iostream>

using  namespace std;

float suma( float a , float b);

int main (){
 float a;
 float b;
 cout << "introduce valor de a : ";

   cout << "introduce valor de b : ";
 cin >> b;
 float resultado = suma (a,b);
 cout << "el resultado es: " << resultado ;

}
float suma ( float a , float b){
  return a +b ;
  
}
