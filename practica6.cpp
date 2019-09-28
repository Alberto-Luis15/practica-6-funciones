#include <iostream>
#include <conio.h>

using namespace std;


void Datos();
void suma(int x, int y);

void referencia(int&,int&);
int r, i;

int factorial(int);

int main(){

	
    int opcion, l, a, n;
    while(opcion!=4){
        
    cout<<"\tMENU"<<endl;
	cout<<"1. Paso por valor"<<endl;
	cout<<"2. Paso por referencia"<<endl;
	cout<<"3. Recursividad (Factorial de un numero)"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"¿Que deseas hacer?: ";
    cin>>opcion;
    switch (opcion){
        case 1:
            cout<<"Ingrese los numeros a sumar: "<<endl;
            cin>>r>>i;
            suma(r, i);
        
		break;
        case 2:
           cout<<"Digite dos numeros:  ";
			cin>>l>>a;
			referencia(l,a);
			cout<<"El nuevo valor del primer numero es :"<<l<<endl;
			cout<<"El nuevo valor del segundo numero es:  "<<a<<endl;
            
            break;
            
        case 3:
        	cout<<"Ingresa un numero: "<<endl;
        	cin>>n;
        	cout<<"El factorial es: "<<endl;
        	cout<<factorial(n);
        	cout<<endl;
			break;
		case 4:
			cout<<"Salir del programa: "<<endl;
		default: 
			cout<<".:Bye:. presiona una tecla"<<endl;
			break;	
    	}

    }

	getch ();
    return 0;  
}
void Datos(){

	cout<<"Dos numeros: ";
	cin>>r>>i;
}
void suma(int x, int y){
	int suma = x+y;
	cout<<"La suma es: "<<suma<<endl;
	
	
}
void referencia(int& l, int& a){
	l=l*15;
	a=a+45;
}
int factorial(int n){
	if(n==0){
		n=1;
	}
	else{
		n = n * factorial (n - 1);
	}
	//cout<<"El factorial es: "<<endl;
	//cout<<n<<endl;
	return n;
}
