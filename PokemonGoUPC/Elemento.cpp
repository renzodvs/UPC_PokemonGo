#include "Elemento.h"

using namespace System;

CElemento::CElemento(int x, int y)
{
	Random rand;
	this->x = x;
	this->y = y;
	alto = 0;
	ancho = 0;
	tipo = " ";
}


CElemento::~CElemento()
{
}

int CElemento::Get_Ancho(){ return ancho; }
int CElemento::Get_Alto(){ return alto; }
int CElemento::Get_X(){ return x; }
int CElemento::Get_Y(){ return y; }
string CElemento::Get_tipo(){ return tipo; }
void CElemento::Dibujar_Elemento(BufferedGraphics ^buffer, Bitmap ^img)
{
	alto = img->Height;
	ancho = img->Width;

	Rectangle porcionausar = Rectangle(0, 0, ancho, alto);
	Rectangle reducir = Rectangle(x, y, ancho / 2, alto / 2);
	buffer->Graphics->DrawImage(img, reducir, porcionausar, GraphicsUnit::Pixel);
}