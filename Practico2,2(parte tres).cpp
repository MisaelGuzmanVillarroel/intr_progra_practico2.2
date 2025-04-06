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
////////////Ejercicio 9
cout << "ex9  " << endl;
string a;
string b;
string c;
string d;
string e;
cin >> a >> b >> c >> d >> e;

char cha =  a[0];
 
char chb = b[0];
 
char chc = c[0];
 

char chd = d[0];
 
char che = e[0];
cout << cha << chb << chc << chd << che << endl;

if(a[0]==e[0]){
    cout << "Hemos encontrado algo!" << endl;
}else{
cout << "Aun sin suerte" << endl;
    
}
//////////Ejercicio 10
cout << "ex10 colo que dos numeros separados por un espacio" << endl;
  
	int num1;
	int num2;
	cin >> num1 >> num2;
	if(num1 <= 0 && num2 <= 0){
	   int suma = num1 + num2;
	    int numt = to_string(suma).size();
	    int total = suma*numt;
	    cout << total << endl;
	    
	}else {
	   
	      cout << "0" << endl;
	}


////////////Ejercicio 11

int main()
{
 cout << "ex11 " << endl;
int numco =  11235813;
cout << "coloque el numero del collar" << endl;
int num;
cin>>num;
if(num == numco){
    cout<<"Se encontro a Fibonacci";
}else {
    cout << "No se encontro a Fibonacci";
}
  
///////////Ejercicio 12
cout << "ex12" << endl;
string color1,color2,color3;
int piso1,piso2,piso3;

string testim;
int testpis;

cin >> color1 >> piso1 >> color2 >> piso2 >> color3 >> piso3;
cin >> testim >> testpis;
bool casa1=true,casa2=true,casa3=true;

if(testim != '?' && testim != color1){
    casa1=false;
}
if(testpis != -1 && testpis != piso1){
    casa1=false;
}
if(testim != '?' && testim != color2){
    casa2=false;
}
if(testpis != -1 && testpis != piso2){
    casa2=false;
}
if(testim != '?' && testim != color3){
    casa3=false;
}
if(testpis != -1 && testpis != piso3){
    casa3=false;
}
if(casa1){
    cout << "1" << endl;

if(casa1){
    cout << "2" << endl;
}
if(casa1){
    cout << "3" << endl;
 }
///////////Ejercicio 13
 cout << "ex13" << endl;
int age;
int exper;
cin >> age >> exper;
 
if(age >= 18 && exper>= 5) {
    cout << "director senior" << endl;
}else if(age >= 18 && exper>= 3) {
    cout << "director de proyecto" << endl;
}else{
    cout << "sin rango" << endl;
}
 ///////////Ejercicio 14
 
  cout << "ex14" << endl;
 int docn;
 cin >> docn;
 if(docn == 0){
     cout << "No se encontraron documentos" << endl;
 }else if(docn == 1){
     cout << "Se encontro un documento" << endl;
    
     
 }else if(docn >=2){
     cout << docn << " documentos encontrados" << endl;
     
 }
   ////////////Ejercicio 15 
 cout << "ex15" << endl;
 int xa=51;
 int xb=876;
 int xc=235;
 
 cout << "los valores son: a = "<< xa <<" b = "<< xb<<" c = "<< xc << endl;
 cout << "Permutamos: a→b,b→c,c→a" << endl;
 int tap=xa;
  xa = xc;   
  xc = xb;   
  xb = tap; 
 
 
 cout << "Los valores despues de la permutacion son: a = " <<xa<<" b = "<<xb<<" c = "<<xc;
 
 ////////////Ejercicio 16 
 cout << "ex16" << endl;
 int horas,fin;
 int costo_total;
 cin >> horas >> fin;
 int tuim = 
 int taim = horas-fin;
 if(horas < 0 || horas > 24 || fin < 0 || fin > 24){
     cout << "Las horas deben ser entre 0 y 24" << endl;
 }else if (horas == fin){
     cout << "Que extraño,no has alquilado tu bicicleta por mucho tiempo" << endl;
 }else if (fin < horas){
     cout << "Que extraño,el inicio del alquiler es despues del final..." << endl;
 }
  for (int hora = horas; hora < fin; hora++) {
        if ((hora >= 0 && hora < 7) || (hora >= 17 && hora < 24)) {
            costo_total += 1;   
        } else {
            costo_total += 2;   
        }
    }
    
    cout << "El costo total del alquiler es: " << costo_total << " bs" << endl;
 
 
 
    return 0;
}