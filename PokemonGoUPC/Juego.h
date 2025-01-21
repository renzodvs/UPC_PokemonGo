#pragma once
#include "Jugador.h"
#include "ArrLugares.h"
#include "Mochila.h"
#include "ControlPokemon.h"

class CJuego
{
	CJugador *oJugador;
	CArrLugares *oArreglo;
	CMochila *oMochila;

public:
	CJuego(int x,int y);
	~CJuego();

	CJugador *GetJugador();
	CArrLugares *GetArrLugares();
	CMochila *GetMochila();
	void Mover_Jugador(Bitmap ^ImgJugador,Bitmap ^ImgBicicleta, BufferedGraphics ^buffer, Bitmap ^imgMapa,
		Bitmap ^ImgPParada, Bitmap ^ImgPParadaA, Bitmap ^ImgGimnasio, Bitmap ^ImgGimnasioA, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
		Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
		Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey, Random ^rand);
};

