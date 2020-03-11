//
// Created by FF_Cesar on 3/11/20.
//

#include "Menu.h"
#include <iostream>
using namespace std;
#include <iomanip>

void Menu::toString() {
        cout <<"--------------------------------------------------"<<endl;
        cout<<"|";
        cout<<setw(30)  << "Menu Principal" <<setw(19) << "|" <<endl;
        cout <<"--------------------------------------------------"<<endl;
        cout<<"|";
        cout << "1 - Seguridad y administración de roles";
        cout<<"|"<<endl;
        cout <<"--------------------------------------------------"<<endl;
        cout<<"|";
        cout << "2 - Mantenimiento General a Nivel de Registro";
        cout<<"|"<<endl;
        cout <<"--------------------------------------------------"<<endl;
        cout<<"|";
        cout << "3 - Mantenimiento por Escuela";
        cout<<"|"<<endl;
        cout <<"--------------------------------------------------"<<endl;
        cout<<"|";
        cout << "4 - Matricula e historiales";
        cout<<"|"<<endl;
        cout <<"--------------------------------------------------"<<endl;
        cout<<"|";
        cout << "5 - Registro de Actas";
        cout<<"|"<<endl;
        cout <<"--------------------------------------------------"<<endl;
        cout<<"|";
        cout << "6 - Salir";
        cout<<"|"<<endl;
        cout <<"--------------------------------------------------"<<endl;
}