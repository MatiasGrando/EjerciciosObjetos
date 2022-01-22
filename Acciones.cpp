#include "Acciones.h"
#include <iostream>
#include <string>
#define VIDAS 7
using namespace std;

string ocultarPalabra(string palabra)
{
 string palabraEscondida= "";
    for (int i=0; i< palabra.length() ;i++)
        {
            palabraEscondida=palabraEscondida+"-";
        }
    return palabraEscondida;
};
bool arriesgarLetra(char letra, string palabra, std::string & palabraEscondidita)
{
    int adivinoLetra=0;
    for (int i=0; i<palabra.length();i++)
    {
        if(palabra[i] == letra)
        {
            palabraEscondidita[i]=letra;
            adivinoLetra++;
        }
    }
    return (adivinoLetra>0);
}
bool adivino(string palabra, string palabraOculta)
{
    return (palabra == palabraOculta);
}


void iniciarJuego()
{
    int intentosFallidos =0;
    int vidasRestantes = VIDAS;
    mensajeInicioDeJuego();
    string palabra = inicializarPalabra();
    string palabraEscondida = "";
    palabraEscondida = ocultarPalabra(palabra);
    mostrarPalabraEscondida(palabraEscondida,(vidasRestantes));
    while((VIDAS>intentosFallidos) && (adivino(palabra,palabraEscondida)==false))
    {
        char letra = mensajePedirLetra();
        if (arriesgarLetra(letra,palabra,palabraEscondida) == false)
        {
            intentosFallidos++;
            vidasRestantes--;
        }
        mostrarPalabraEscondida(palabraEscondida, vidasRestantes);
    }
   if(intentosFallidos<VIDAS)
   {
       cout<<"Ganaste";
   }
   else
   {
       cout<<"Perdiste";
   }
}
