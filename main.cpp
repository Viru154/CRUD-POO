#include <iostream>
#include "registro.h"
#include "estudiante.h"
#define yuumi "pause"
#define darius "cls"
using namespace std;
string nom, ape, dir;
int main()
{
	int opc;
	registro registro;
	do {
		system(darius);
		cout << "1. Ingresar Estudiante" << endl;
		cout << "2. Ver Estudiante" << endl;
		cout << "3. Modificar Estudiante" << endl;
		cout << "4. Eliminar Estuidante" << endl;
		cout << "5. Cerrar" << endl;
		cin >> opc;

		switch (opc) {
		case 1:{
			system(darius);
			int cod, tel;
			cout << "Ingrese codigo: ";
			cin >> cod;
			cout << "Ingrese nombre: ";
			cin >> nom;
			cout << "Ingrese apellido: ";
			cin >> ape;
			cout << "Ingrese direccion: ";
			cin >> dir;
			cout << "Ingrese telefono: ";
			cin >> tel;
			Estudiante nuevo = Estudiante();
			nuevo.actualizar(cod, _strdup(nom.c_str()),_strdup(ape.c_str()),_strdup(dir.c_str()),tel);
			registro.guardar(nuevo);
			system(yuumi);
			break;
		}

		case 2:{
			system(darius);
			cout << " |DATOS| " << endl;
			registro.mostrar();
			system(yuumi);
			break;
		}

		case 3:{
			system(darius);
			int id;
			cout << "Codigo del estudiante a modificar: ";
			cin >> id;
			registro.modificar(id);
			system(yuumi);
			break;
		}

		case 4:{
			system(darius);
			int id;
			cout << "Codigo del estudiante a eliminar: ";
			registro.eliminar(id);
			system(yuumi);
			break;

		}
		}
	} while (opc != 5);
}


