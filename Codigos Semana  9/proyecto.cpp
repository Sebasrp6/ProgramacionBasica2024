#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
struct Laboratorios
{
    string nombre_de_laboratorio;
    string encargado_del_laboratorio;
};
struct Materiales_delaboratorio
{
    string nombre_del_material;
    int canti1;
};
struct Equipos
{
    string nombre;
    int canti2;
};
void mostrar_laboratorios(vector<Laboratorios> &laboratorios_disponibles)
{

    cout << "\033[1;32m";
    cout << "\n-------------------------------------------------------\n";
    cout << "\n**SELECCIONE CON QUE LABORATORIO DESEA TRABAJAR";
    cout << "\033[0m";
    cout << "\033[1;37m";
    cout << "\nLaboratorios Disponibles:\n";
    for (int i = 0; i < laboratorios_disponibles.size(); ++i)
    {
        cout << i + 1 << ". Nombre: " << laboratorios_disponibles[i].nombre_de_laboratorio << endl
                << "   Encargado: " << laboratorios_disponibles[i].encargado_del_laboratorio << "\n";
    }
    cout << "\033[0m";
}
void Mostrar_insumos(vector<Materiales_delaboratorio> &insumos)
{
    cout << "\033[1;32m";
    cout << "\n*USTED AÑADIO LO SIGUIENTE AL LABORATORIO*\n";
    cout << "\033[0m";
    cout << "\033[1;37m";
    for (const Materiales_delaboratorio &material : insumos)
    {
        cout << "\nMaterial agregado : " << material.nombre_del_material << endl;
        cout << "\nCantidad " << material.nombre_del_material << ": " << material.canti1 << endl;
        cout << "\n**LA OPERACION FUE UN EXITO\n";
    }
    cout << "\033[0m";
}
void Mostrar_equipos(vector<Equipos> &cantidad_de_equipo)
{
cout << "\033[1;32m";
    cout << "\n*USTED AÑADIO LO SIGUIENTE AL LABORATORIO*\n";
    cout << "\033[0m";
    cout << "\033[1;37m";
    for (const Equipos &equipos :cantidad_de_equipo)
    {
        cout << "\nEquipo agregado : " << equipos.nombre << endl;
        cout << "\nCantidad " << equipos.nombre << ": " <<equipos.canti2 << endl;
        cout << "\n**LA OPERACION FUE UN EXITO\n";
    }
    cout << "\033[0m";
}
void agregar_insumos(vector<Materiales_delaboratorio> &insumos)
{
    int x;
    cout << "\033[1;32m";
    cout << "\n-------------------------------------------------------\n";
    cout << "\nIngrese la cantidad de insumos que desea agregar a la base de datos del laboratorio : ";
    cout << "\033[0m";
    cout << "\033[1;37m";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        Materiales_delaboratorio añadir;
        cout << "\nIngrese el nombre del insumo " << i + 1 << ": ";
        cin >> añadir.nombre_del_material;
        cout << "\ncuanto de " << añadir.nombre_del_material << ": ";
        cin >> añadir.canti1;
        insumos.push_back(añadir);
    }
    cout << "\033[0m";
}
void agregar_equipos(vector<Equipos> &canditad_de_eqipos)
{

    int z;
    cout << "\033[1;32m";
    cout << "\n-------------------------------------------------------\n";
    cout << "\nCuantos equipos nuevos desea agregar a la base de datos del laboratorio: ";
    cout << "\033[0m";
    cout << "\033[1;37m";
    cin >> z;

    for (int i = 0; i < z; i++)
    {
        Equipos agregar;
        cout << "\nIngrese el nombre del equipo nuevo numero " << i + 1 << ": ";
        cin >> agregar.nombre;
        cout << "\nIngrese la cantidad de " << agregar.nombre << ": ";
        cin >> agregar.canti2;
        canditad_de_eqipos.push_back(agregar);
    }
    cout << "\033[0m";
}
void agregar_laboratorios(vector<Laboratorios> &laboratorios_disponibles)
{

    int z;
    cout << "\n-------------------------------------------------------\n";
    cout << "\033[1;32m";
    cout << "\nHola bienvenido dime cuantos laboratorios nuevos desea agregar a la base de datos: ";
    cout << "\033[0m";
    cout << "\033[1;37m";
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        Laboratorios nuevos;
        cout << "\nIngrese el nombre del laboratorio numero " << i + 1 << ": ";
        cin >> nuevos.nombre_de_laboratorio;
        cout << "\nDime quien es el encargado del laboratorio " << nuevos.nombre_de_laboratorio << ": ";
        cin >> nuevos.encargado_del_laboratorio;
        laboratorios_disponibles.push_back(nuevos);
    }
    cout << "\033[0m";
}
int main()
{
    vector<Laboratorios> laboratorios_disponibles = {
        {"Laboratorio de carnes", "ING.MARCOS"},
        {"Laboratorio de fisica", "ING.SANTIESTEBAN"}};
    vector<Materiales_delaboratorio> insumos;
    vector<Equipos> cantidad_de_equipos;
    do
    {

        cout << "\033[1;32m";
        cout << "\n-------------------------------------------------------\n";
        cout << "**** BIENVENIDO AL INVENTARIO DE LABORATORIOS DE LA UNAS ****\n";
        cout << "\033[1;37m";
        cout << "\n1.Agregar insumos a un laboratorio" << endl;
        cout << "\n2.Agregar equipos a un laboratorio" << endl;
        cout << "\n3.Agregar un laboratorio nuevo" << endl;
        int option;
        cout << "\nIngrese la opcion: ";
        cout << "\033[0m";
        cin >> option;
        switch (option)
        {
        case 1:
            system("cls");
            mostrar_laboratorios(laboratorios_disponibles);
            cout << "\033[1;32m";
            int option1;
            cout << "\nIngrese la opcion por favor: ";
            cin >> option1;
            cout << "\033[0m";
            switch (option1)
            {
            case 1:
                system("cls");
                cout << "\033[1;37m";
                cout << "\n-------------------------------------------------------\n";
                cout << "\033[0m";
                cout << "\033[1;32m";
                cout << "\n*BIENVENIDO AL LABORATORIO DE CARNES*\n";
                cout << "\033[0m";
                agregar_insumos(insumos);
                break;
            case 2:
                system("cls");
                cout << "\033[1;37m";
                cout << "\n-------------------------------------------------------\n";
                cout << "\033[0m";
                cout << "\033[1;32m";
                cout << "\n\n*BIENVENIDO AL LABORATORIO DE FISICA*\n";
                cout << "\033[0m";
                agregar_insumos(insumos);
                cout << "\nPresione 1 para mostar lo agregado\n";
            }
            break;
        case 2:
            system("cls");
            mostrar_laboratorios(laboratorios_disponibles);
            int option2;
            cout << "\033[1;32m";
            cout << "\nIngrese la opcion por favor: ";
            cout << "\033[0m";
            cin >> option2;
            switch (option2)
            {
            case 1:
                system("cls");
                cout << "\033[1;37m";
                cout << "\n-------------------------------------------------------\n";
                cout << "\033[0m";
                cout << "\033[1;32m";
                cout << "\n*BIENVENIDO AL LABORATORIO DE CARNES*\n";
                cout << "\033[0m";
                agregar_equipos(cantidad_de_equipos);
                break;
            case 2:
                system("cls");
                cout << "\033[1;37m";
                cout << "\n-------------------------------------------------------\n";
                cout << "\033[0m";
                cout << "\033[1;32m";
                cout << "\n*BIENVENIDO AL LABORATORIO DE FISICA*\n";
                cout << "\033[0m";
                agregar_equipos(cantidad_de_equipos);
                break;
            }
            break;
        case 3:
            system("cls");
            agregar_laboratorios(laboratorios_disponibles);
            break;
        default:
            system("cls");
            cout << "\033[1;31m";
            cout << "\n**** Opcion no valida ****\n";
            cout << "\033[0m";
            break;
        }
        system("cls");
    } while (true);
    return 0;
}