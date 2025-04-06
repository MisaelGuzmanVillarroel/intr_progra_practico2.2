/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   ///////PRACTICO 2
    //EJERCICIO 1
 cout << "ex 1\n"; 
    double ex1_num1,ex1_num2;
    
    cin >> ex1_num1;
    cin >> ex1_num2;
    
    int numtotal =  ex1_num1 +  ex1_num2;
    cout<< numtotal << endl;
    
     
/////////////////////////////////////////////////////////////////
    ////EJERCICIO 2
 cout << "ex 2\n";
 
 double ex2_num1;
 double ex2_num2;
 cin >> ex2_num1;
 cin >> ex2_num2;
 double cociente =   ex2_num1/ ex2_num2;
 cout << cociente << endl;
    
/////////////////////////////////////////////////////////////////////
    ///EJERCICIO 3
cout << "ex 3\n";
 
int width;
int height;
cout << "Enter rectangle width" << endl;
cin >> width;
cout << "Enter rectangle height" << endl;
cin >> height;

cout << " Rectangle area is " << width * height << endl;
/////////////////////////////////////////////////////////////////////
    ///EJERCICIO 4
cout << "ex 4\n";

int x1; 
int y1;
cin>>x1;
cin>>y1;
int z1 = 1;
cout << "your answer is:\n";
cout << x1 + y1 + z1 << endl; 


 
////////////////////////////////////////////////////////////////////
    ////EJERCICIO 5
cout << "ex 5\n";
    double x2,y2;
    cin >> x2 >> y2;
    cout << x2 + y2 << endl;
//////////////////////////////////////////////////////////////////////
    ////EJERCICIO 6 
cout << "ex 6\n";
    string nombre;
    string apellido;
    string esp = ", ";
    cout << "ingresa nombre" << endl;
    cin >> nombre;
    cout << "ingresa apellido" << endl;
    cin >> apellido;
    
    cout << apellido + esp + nombre << endl;
    
/////////////////////////////////////////////////////////////////////////
    ///EJERCICIO 7
cout << "ex 7\n";
cout << "ESCRIBE NOMBRE DE LIBROS\n";
    string lib1;
    string lib2;
    string lib3;
    cout << "lib1\n";
    getline(cin, lib1);
    cout << "lib2\n";
    getline(cin, lib2);
    cout << "lib3\n";
    getline(cin, lib3);
    cout << "libros:\n";
    cout << lib3 << endl;
    cout << lib2 << endl;
    cout << lib1 << endl;
//////////////////////////////////////////////////////////////////////
    
    
    
    
    return 0;
}