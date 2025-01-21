#pragma once
#include "stdafx.h"

class CElemento
{
protected:

	int x;
	int y;
	int alto;
	int ancho;
	string tipo;

public:
	CElemento(int x, int y);
	~CElemento();

	int Get_Ancho();
	int Get_Alto();
	int Get_X();
	int Get_Y();
	string Get_tipo();
	void Dibujar_Elemento(BufferedGraphics ^buffer, Bitmap ^img);
};

