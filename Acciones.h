#ifndef ACCIONES_H_INCLUDED
#define ACCIONES_H_INCLUDED
#include "Comunicados.h"

//pre
//post inicia el juego enviando los mensajes de bienvenida y mostrando las reglas
void iniciarJuego();

//pre palabra debe estar establecida
//post devuelve la palabra oculta
string ocultarPalabra(string );
/*
 *post devuelve true si se adivino alguna letra
*/
bool arriesgarLetra(char letra,string palabra,string & palabraEscondidita);
/*
 *post devuelve true si se adivino la palabra
 */
bool adivino(string,string);

#endif // ACCIONES_H_INCLUDED
