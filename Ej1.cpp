#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(){
    system("cls");
    SetConsoleOutputCP(CP_UTF8);
    int contador;
    struct empleados {
        string nombre;
        string apellido;
        string apellido2;
        string sexo;
        double sueldo;
    };
    cout<<"Introduzca cuantos empleados tendrá\n";
    cin>>contador;
    
     for(int n=0;n<contador;n++){
         empleados listado[n];
        cout<<"Introduzca el nombre\n";
        cin>>listado[n].nombre;
        cout<<"Introduzca el primer apellido\n";
        cin>>listado[n].apellido;
        cout<<"Introduzca su segundo apellido\n";
        cin>>listado[n].apellido2;
        cout<<"Introduzca su sexo\n";
        cin>>listado[n].sexo;
        cout<<"Introduzca su sueldo\n";
        cin>>listado[n].sueldo;
    }
    
    
}