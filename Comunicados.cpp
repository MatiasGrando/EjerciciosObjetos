#include "Comunicados.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void mensajeInicioDeJuego()
{
    cout<<"----------------------------------------------------------"<<endl
        <<"---------------Bienvenido al juego AHORCADO---------------"<<endl
        <<"----------------------------------------------------------"<<endl<<endl<<endl
        <<"1- Cuenta con 7 vidas"<<endl<<endl
        <<"2- Debe arriesgar de una letra a la vez por medio del teclado"<<endl<<endl
        <<"3- si adivina la letra se mostrara en pantalla y no perdera ninguna vida"<<endl<<endl
        <<"4- Si adivina las letra antes de que se le acaben las vidas habra ganado"<<endl;
        limpiarPantalla();


};

string inicializarPalabra()
{
    cout<<"ingrese una palabra para adivinar"<<endl;
    string palabra;
    cin>>palabra;
    limpiarPantalla();
    return palabra;
};

void limpiarPantalla()
{
    system("pause");
    system("cls");

};
void mostrarPalabraEscondida(string palabraEscondida,int vidas)
{
    cout<<"        "<<palabraEscondida<<"       TE QUEDAN "<<vidas<<" VIDA"<<endl;
};

char mensajePedirLetra()
{
    char letra;
    cout<<"Ingrese una letra para arriesgar"<<endl;
    cin>>letra;cout<<endl;
    limpiarPantalla();
    return letra;
};
