#include <bits/stdc++.h> 

using namespace std;
/*Tarea de Recursividad, se debe entregar en un solo men� en aula virtual y en f�sico el d�a de su examen parcial.

Ejercicio . Programar un algoritmo recursivo que permita hacer la divisi�n por restas sucesivas.
Ejercicio . Programar un algoritmo recursivo que permita invertir un n�mero. Ejemplo: Entrada: 123 Salida: 321
Ejercicio . Programar un algoritmo recursivo que permita sumar los d�gitos de un n�mero. Ejemplo: Entrada: 123 
Ejercicio . Programar un algoritmo recursivo que permita sumar los elementos de un vector.
Ejercicio . Programar un algoritmo recursivo que permita multiplicar los elementos de un vector.
Ejercicio. Programar un algoritmo recursivo que calcule el Maximo comun divisor de dos n�meros por el algoritmo de euclides

*/

//  PROTOTIPOS
int division(int a, int b);
void invertir(int a); //esta es void porque en la misma funcion se va a imprimir todo por lo que no regresa valor
int sumatoria(int a);
int sumaV(int V[],int a);
int multiV(int V[],int a);
int MCD(int a, int b);  
void menu();


int main() {
	menu();
	
	
	
	
    
	
	
	return 0;
}

void menu(){
	int opcion, a=4, b=0;
	int V[5]={10,2,5,7,9};
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1.- Division"<<endl;
		cout<<"2.- Invertir"<<endl;
		cout<<"3.- Sumar digitos"<<endl;
		cout<<"4.- Sumar elementos"<<endl;
		cout<<"5.- Multiplicar elementos"<<endl;
		cout<<"6.- MCD de 2 numeros"<<endl;
		cout<<"7.- Salir"<<endl;
		cout<<"opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1: 
					cout << "Introduzca primer numero: ";
                   cin >> a;
                   cout << "Introduzca segundo numero: ";
                   cin >> b;
					cout<<"la division de "<<a<<" entre  "<<b<<" es "<<division(a,b)<<endl;
					system("pause>temp");
					system("cls");
					break;
			case 2:
				   cout << "Introduzca el numero que desea invertir: ";
                   cin >> a;
                   invertir(a);
                   system("pause>temp");
				   system("cls");
				   break;
				  
			case 3:
				   cout << "Introduzca el numero que desea sumar: "<<endl;
                   cin >> a;
                   cout<<sumatoria(a);
                   
                   system("pause>temp");
				   system("cls");
				   break;
					
			case 4:
				cout<<sumaV(V,a);
				 system("pause>temp");
				   system("cls");
				   break;
				    
			case 5:
				cout<<multiV(V,a);
			
			 system("pause>temp");
				   system("cls");
				   break;
			case 6:
				   cout << "Introduzca primer numero: ";
                   cin >> a;
                   cout << "Introduzca segundo numero: ";
                   cin >> b;
                   cout<< "el maximo comun divisor es "<<MCD(a,b);
                   system("pause>temp");
				   system("cls");
				   break;
				   
			case 7: 
			     break;
		}
		
	}while(opcion != 7);
	system("pause>temp");
	
}

int division(int a, int b){
	//Kevin estuvo aqui :)
/*	if (b>a){
		return 0;
	}
	else 
	 return division(a-b, b) +1;
	 
*/
	if(b>a){
		return 0;
	} else {
		return division(a-b, b) + 1;
	}
}
void invertir (int a){
	//Urrix its here xD
	
	
	/*
	cout<<a%10;
	if (a>10)
	invertir(a/10);
	*/

	cout<<a%10;
	if (a>10)
	invertir(a/10);
	
	
int sumatoria (int a){
	//Daniel estuvo aqui
	
	/*
	
	if (a==0)
	{
		return a;
	}
	
	else
	return  a%10 + sumatoria(a/10);
	*/
	if (a==0)
	{
		return a;
	}
	
	else
	return  a%10 + sumatoria(a/10);
}
int sumaV(int V[], int a)
{  /* if(a==0)
 		return V[0];

	else 
		
	return V[a]+sumaV(V,a-1);
	*/

}
int multiV(int V[], int a){
	
//Darien estuvo aqui

 /*  if(a==0)
 		return V[0];

	else 
		
	return (V[a] * multiV(V,a-1));
	*/

	if(a==0){
		return V[0];
	}else{
		return (V[a]*multiV(V,a-1));
	}
	
}
int MCD (int a, int b){
	//Ana Delia estuvo aqui 
	/*
	
	if (b==0)
	{
		return a;
	}
	
	else
	return  MCD(b,a%b);
*/
	
	}
