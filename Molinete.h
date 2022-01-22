#ifndef MOLINETE_H_INCLUDED
#define MOLINETE_H_INCLUDED

#define MAXIMA_CAPACIDAD 1000

        /**
         * Un Molinete representa el mecanismo de control de acceso a un lugar,
         * contabilizando las entradas y salidas de personas.
         *
         * La cantidad de personas dentro del lugar es mayor o igual a cero, y
         * menor o igual a MAXIMA_CAPACIDAD.
         *
         */
class Molinete
{
    private:

        int cantidadDePersonasDentro;
        int capacidadMaximaDePersonas;


    public:

        /*
		 * pre : no existen personas dentro del lugar.
		 * post: el Molinete queda habilitado para controlar el acceso de
		 * 		 personas, considerando que no existen aún personas dentro.
		 *       La capacidad maxima de personas es MAXIMA_CAPACIDAD
		 */
		 Molinete();

         /*
		 * pre : no exister personas dentro
		 * post: el Molinete queda habilitado para controlar el acceso de
		 * 		 personas, considerando que no existen aún personas dentro.
		 *       La capacidad maxima de personas es la indicada por el programador
		 */
		 Molinete(int);

		 /*
		 * pre : caben más personas dentro.
		 * post: permite la entrada de una persona.
		 */
		 void IngresarPersona();

         /*
		 * pre : existen personas dentro.
		 * post: permite la salida de una persona.
		 */
		 void SalirPersona();

         /*
		 * post: devuelve la cantidad de personas que ingresaron por el Molinete
         *       pero aun no salieron.
		 */
		 int ObtenerCantidadDePersonasDentro();

		 /*
		 * post: devuelve la cantidad de personas que pueden estar dentro
		 */
		 int ObtenerCapacidadMaximaDePersonas();

		 bool HayLugar();

		 bool HayPersonasDentro();


};

#endif // MOLINETE_H_INCLUDED
