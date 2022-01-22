#ifndef COMUNICADOS_H_INCLUDED
#define COMUNICADOS_H_INCLUDED
#include <iostream>
using namespace std;

//pre
//post: envia un mensaje en pantalla señalando el inicio de juego
void mensajeInicioDeJuego();

//pre recibe la direccion de  un string
//post devuelve la palabra a adivinar
string inicializarPalabra();
//pre
//post limpia la pantalla
void limpiarPantalla();
/*
 *post: muestra la palabra escondida
 */
void mostrarPalabraEscondida(string, int);
/*
 *post: envia un mensaje pidiendo ingresar una letra
 *y guarda el dato recibido
 */
char mensajePedirLetra();
#endif // COMUNICADOS_H_INCLUDED
