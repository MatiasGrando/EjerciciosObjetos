#include "Molinete.h"

Molinete::Molinete()
{
    cantidadDePersonasDentro=0;
    capacidadMaximaDePersonas = MAXIMA_CAPACIDAD;
}

Molinete::Molinete(int capacidadMaxima)
{
    cantidadDePersonasDentro=0;
    capacidadMaximaDePersonas= capacidadMaxima;
}

int Molinete::ObtenerCantidadDePersonasDentro()
{
    return cantidadDePersonasDentro;
}

int Molinete::ObtenerCapacidadMaximaDePersonas()
{
    return capacidadMaximaDePersonas;
}
void Molinete::IngresarPersona()
{
    if(HayLugar())
    {
        cantidadDePersonasDentro++;
    }
}

void Molinete::SalirPersona()
{
    if(HayPersonasDentro())
    {
        cantidadDePersonasDentro--;
    }
}

bool Molinete::HayPersonasDentro()
{
    return(ObtenerCantidadDePersonasDentro()>0);
}

bool Molinete::HayLugar()
{
    return(ObtenerCantidadDePersonasDentro()<ObtenerCapacidadMaximaDePersonas());
}
