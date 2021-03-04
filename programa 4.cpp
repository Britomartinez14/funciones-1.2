#include <iostream>

using  namespace std;

int max (int a, int b):
	
 int main (){

	int a,b,c ;
	cout << "introduce valor de a : ";
     cin >> a;
      cout << "introduce valor de b : ";
     cin >> b;
      cout << "introduce valor de c : ";
     cin >> c;
     int max = max( max(a,b),c );
     cout << "el mayor es : "<< max ;
     return 0;
     
}
int max (int a, int b ){
	int c ;
	if (a>b){return a;}
	else {return b; }
}
