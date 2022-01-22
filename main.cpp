#include <iostream>
#include "Molinete.h"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
   Molinete molineteBar(5);
   int opcion;

   cout<<"-----INICIANDO APERTURA DEL BAR-----"<<endl<<endl<<endl;
   do
   {
        cout<<"Ingrese -1- para permitir el ingreso de una persona"<<endl
            <<"Ingrese -2- para permitir la salida de una persona"<<endl
            <<"Ingrese -3- para saber la cantidad de personas dentro"<<endl
            <<"Ingrese -4- para cerrar el Molinete"<<endl;
        cin>>opcion;

        switch (opcion)
        {
            case 1: {
                molineteBar.IngresarPersona();system("cls");break;}
            case 2: {
                molineteBar.SalirPersona();system("cls");break;}
            case 3: {
                cout<<endl<<"Hay "<<molineteBar.ObtenerCantidadDePersonasDentro()<<" personas"<<endl;system("pause");system("cls");break;}
            case 4: {cout <<"-----------------------------"
                    <<endl<<"------GRACIAS POR VENIR------ "
                    <<endl<<"-----------------------------";break;}
            default:{
                cout<<"Opcion no valida"<<endl;
            }
        }

   }while(opcion!=4);
}
