#pragma once
#include <ctime>
#include <cstdlib>
#include "Pokemon.h"
#include "Pokemon_Tipo.h"

class CControlPokemon
{
private:

	int x;
	int y;

public:
	CControlPokemon(int x, int y);
	~CControlPokemon();

	CPokemon *Genera_Pokemon(Random ^r);
	void Dibujar_Pokemon(BufferedGraphics ^buffer, CPokemon *oNuevo, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
		Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
		Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey);
};

