#pragma once

#include "Pokeparada.h"
#include "Gimnasio.h"
#include "ArrLugares.h"
#include "ControlPokemon.h"
#include "Pokemon.h"
#include "stdafx.h"
#include <cstdlib>
#include <ctime>


enum Direcciones{ Ninguna, Arriba, Abajo, Izquierda, Derecha };

class CJugador
{
protected:

	int x;
	int y;
	int dx;
	int dy;
	int ancho;
	int alto;
	int indiceXJ;
	bool bicicleta;
	int xMapa;
	int yMapa;
	int dxMapa;
	int dyMapa;
	double AnchoMapa;
	double AltoMapa;
	double xMatriz;
	double yMatriz;
	int incremento;
	bool GeneraPokemon;
	bool EliminarPokemon;

public:

	CJugador();
	~CJugador();
	CJugador(int x, int y);

	Direcciones direccion;
	Direcciones ultima;

	void SetBicicleta(bool value);
	bool GetBicicleta();
	void SetGeneraPokemon(bool value);
	bool GetGeneraPokemon();
	void SetEliminarPokemon(bool value);
	bool GetEliminarPokemon();
	void Dibujar_Jugador(Bitmap ^ImgJugador, BufferedGraphics ^buffer, Bitmap ^imgMapa, CArrLugares *oArreglo, 
		Bitmap ^ImgPParada, Bitmap ^ImgPParadaA, Bitmap ^ImgGimnasio, Bitmap ^ImgGimnasioA, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
		Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
		Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey, Random ^rand);
	void Mover_Jugador(Bitmap ^ImgJugador, BufferedGraphics ^buffer, Bitmap ^imgMapa, CArrLugares *oArreglo, 
		Bitmap ^ImgPParada, Bitmap ^ImgPParadaA, Bitmap ^ImgGimnasio, Bitmap ^ImgGimnasioA, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
		Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
		Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey, Random ^rand);
	void Dibujar_Mapas(BufferedGraphics ^buffer, CArrLugares *oArreglo, Rectangle CJ, Bitmap ^imgMapa, 
		Bitmap ^ImgPParada, Bitmap ^ImgPParadaA, Bitmap ^ImgGimnasio, Bitmap ^ImgGimnasioA, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
		Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
		Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey, Random ^rand);
	void MoverMapa(int AnchoForm, int AltoForm);
};

