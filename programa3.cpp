#include <iostream>

using  namespace std;

int  max (int a, int b);

int main (){
	int a ,b,c;
	 cout << "introduce valor de a : ";
     cin >> a;
      cout << "introduce valor de b : ";
     cin >> b;
      cout << "introduce valor de c : ";
     cin >> c;
	int max1 = max ( a,b);
	int max2 = max (max1,c );
	 cout << "el mayor es : "<< max2;
 
	return 0;
}
int  max (int a, int b){
	int  c;
	if (a>b){ c=a;}
	else {c=b ;}
	return c;
	
}
