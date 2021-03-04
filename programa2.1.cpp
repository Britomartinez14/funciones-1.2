#include <iostream>

using  namespace std;

float  max(float  a ,float  b);
int main (){
    float  a, b;
 cout << "introduce valor de a : ";
 cin >> a;
 cout << "introduce valor de b : ";
 cin >> b;
	max(a,b );
	return 0;
}
float  max(float a, float b){
	if (a>b){
		 cout << "es mayor  a : ";
	}
	else if (a<b){
		 cout << "es mayor b: ";
	}
	else 
	printf ("error\n");
}
