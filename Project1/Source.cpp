// Equ2Gado.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//
//Victor Gomez
#include <iostream>
#include "BibliotecaEcu2Grado.h"


using namespace std;

//variables globales

double a, b, c;
double x1, x2;
int numSols;
void tarea1(double&, double&, double&);
void tarea3(double, double, double, int, double&, double&);
int main()
{
	tarea1(a, b, c);
	numSols = calcularresultado(a, b, c, x1, x2);
	tarea3(a, b, c, numSols, x1, x2);

	//cout << "El numero de soluciones es:" << numSols << "\n";

	//cout << "El valor de la soluci�n x1 es:" << x1 << "\n";
	/*
	cout << "El valor del coeficiente a es" << a <<"\n";
	cout << "El valor del coeficiente a es" << b <<"\n";
	cout << "El valor del coeficiente a es" << c <<"\n";
	*/
}

void tarea1(double& oa, double& ob, double& oc)
{
	setlocale(LC_ALL, "en_US");
	do {
		cout << "Introduzca el valor del coeficiente a:";
		std::cin >> oa;
		if (a == 0) {
			cout << "ERROR, el coeficiente a no puede ser 0" << "\n";
		}
	} while (a == 0);

	cout << "Introduzca el valor del coeficiente b:";
	std::cin >> ob;
	cout << "Introduzca el valor del coeficiente c:";
	std::cin >> oc;



}

void tarea3(double ia, double ib, double ic, int inumSols, double& ox1, double& ox2) {
	cout << "La ecuacion con coeficienes a = " << ia << " b= " << ib << " c= " << ic << endl;
	if (inumSols == 0) {
		cout << "No tiene solucion";
	}
	else if (inumSols == 1) {
		cout << "Esta ecuacion tiene una solucion y es x1= " << ox1 << "\n";
	}
	else {
		cout << "Esta ecuacion tiene dos soluciones y son: " << "x1= " << ox1 << " y x2= " << ox2 << "\n";
	}
}

// Ejecutar programa: Ctrl + F5 o men� Depurar > Iniciar sin depurar
// Depurar programa: F5 o men� Depurar > Iniciar depuraci�n

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de c�digo fuente
//   3. Use la ventana de salida para ver la salida de compilaci�n y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de c�digo, o a Proyecto > Agregar elemento existente para agregar archivos de c�digo existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
