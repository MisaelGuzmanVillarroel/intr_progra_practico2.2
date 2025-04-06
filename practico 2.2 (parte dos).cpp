/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  /////////////PRACTICO CONDICIONALES
	///////Ejercicio 1
	cout << "ex1:Coloque una oracion de 3 palabras" << endl;
	string A;
	string B;
	string C;
	cin >> A >> B >> C;

	if(A <= B && A<= C) {
		cout << A << endl;
	}
	else if(B <= A && B <= C) {
		cout << B << endl;
	}
	else {
		cout << C << endl;
	}

	//////Ejercicio 2
	cout << "ex2 coeficientes reales de una ecuacion cuadratica" << endl;
	double A2, B2, C2;
	cin >> A2 >> B2 >> C2;
	
	if (A2 == 0){ /////ecuacion lineal
	    if (B2 != 0){
	        cout << -C2/B2 << endl;
	    }else {
	        cout << "No es una ecuacion " << endl;
	    }
	}else {////////ecuacion cuadratica
	   double res = B2*B2 - 4*A2*C2;
	   if(res >= 0){
	       double x1 = (-B2+sqrt(res))/4*C2;
	       double x2 = (-B2-sqrt(res))/4*C2;
	       cout << x1 << endl;
	       cout << x2 << endl;
	   }else{
	       cout << "no es una ecuacion valida" << endl;
	   }
	}
/////////Ejercicio 3
    cout << "ex3 coeficientes reales de una ecuacion cuadratica" << endl;
	cout << "Coloque dos numeros seguidos" << endl;
	int A3;
	int B3;
	cin >> A3 >> B3;

    if (B3==0){
		cout << "Imposible" << endl;
	}if (A3 != 0) {
	    int cociente = A3/B3;
		cout << cociente << endl;

	}
////////Ejercicio 4
     cout << "ex 4 coloque 5 numeros reales" << endl;
    double N,A4,B4,X,Y;
    cin >> N >> A4 >> B4 >> X >>Y;
    if(N>B4){
          N -= N * Y / 100;
        
    }else if(N > A4){
            N -= N * X / 100;
        
    }
    int resu = N*100;
    cout << resu/100 << "." << resu % 100 << endl;
/////////////Ejercicio 5
     cout << "ex5  pon un caracter" << endl;
     char c;
     c = cin.get();
     if(c >= 'A' && c <= 'Z'){
         cout << "lower-case alphabet"<< endl;
         
     }else if(c >= 'a' && c <= 'z'){
         cout << "upper-case alphabet"<< endl;
         
     }else {
         cout << "not an alphabet" << endl;
     }
///////////Ejercicio 6 
     cout << "ex6  pon un caracter inicial de un dia de la semana" << endl;
     int day;
     cin >> day;
     switch(day){
         case 1 :
            cout << "el dia es lunes " << endl;
         case 2 :
            cout << "Martes" << endl;
         case 3 :
            cout << "Miercoles" << endl;
         case 4:
            cout << "Jueves" << endl;
         case 5:
            cout << "Viernes" << endl;
         case 6:
            cout << "Sabado" << endl;
         case 7:
            cout << "Domingo" << endl;
         default:
            cout << "NO es un numero valido" << endl;
     }
/////////////Ejercicio 7
    cout << "ex7  pon un caracter inicial de un dia de la semana" << endl;
    double r;
    const double pi = 3.141592653589793;
    cin>>r;
    double area = 4*(pi*r*r);
    if(r < 0){
        cout << "Radius cannot be negative" << endl;
        
    }else if(r >= 0){
        cout << fixed << area << endl;
        
    }
///////////////Ejercicio 8
    cout << "ex8 coloca los segundos" << endl;
    int seg;
    cin >> seg;
    if(seg < 0){
        cout << "Input seconds cannot be negative" << endl;
        
    }else  {
        int h = seg/3600;
        int min = (seg % 3600) / 60;
        int seg = seg % 60;
        cout << h << " : " << min << " : " << seg << endl;
    }







    return 0;
}