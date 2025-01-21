#include "Run.h"

using namespace System;
CRun::CRun()
{
	yJugador = 425;
	dyJugador = 32;
	xMapa1 = 0;
	xFondo = 0;
	xFondoD = 1290 - 640;

	xMapa2 = xMapa1 + 1219 + 200;
	xMapa3 = xMapa2 + 3000 + 200;
	xMapa4 = xMapa3 + 560 + 300;
	colision = true;

	xM1 = 640;
	yM1 = 300;

	xM2 = 640 + 50;
	yM2 = yM1 + 10;

	xM3 = xM2 + 50;
	yM3 = yM2 + 10;

	xM4;
	yM4;

	xM5;
	yM5;

	xM6;
	yM6;

	nmonedas = 0;
}


CRun::~CRun()
{
}


void CRun::DibujarPiso(BufferedGraphics ^b, Bitmap ^imgPiso1, Bitmap ^imgPiso2, Bitmap ^imgPiso3, Bitmap ^imgPiso4)
{
	Rectangle p(320, yJugador + dyJugador, 75, 75);/*
	b->Graphics->DrawRectangle(Pens::Blue, p);*/

	Rectangle Mapa1 = Rectangle(0, 0, 1219, 300);
	Rectangle Zoom1(xMapa1, 500, 1219, 300);
	b->Graphics->DrawImage(imgPiso1, Zoom1, Mapa1, GraphicsUnit::Pixel);
	xMapa1 -= 30;

	Rectangle Mapa2 = Rectangle(0, 0, 3000, 300);
	Rectangle Zoom2(xMapa2, 500, 3000, 300);
	b->Graphics->DrawImage(imgPiso2, Zoom2, Mapa2, GraphicsUnit::Pixel);
	xMapa2 -= 30;


	Rectangle Mapa3 = Rectangle(0, 0, 560, 300);
	Rectangle Zoom3(xMapa3, 500, 560, 300);
	b->Graphics->DrawImage(imgPiso3, Zoom3, Mapa3, GraphicsUnit::Pixel);
	xMapa3 -= 30;

	Rectangle Mapa4 = Rectangle(0, 0, 214, 300);
	Rectangle Zoom4(xMapa4, 500, 214, 300);
	b->Graphics->DrawImage(imgPiso4, Zoom4, Mapa4, GraphicsUnit::Pixel);
	xMapa4 -= 30;

	/*if (xMapa4 + 214 <= 0){ xMapa1 = 640; xMapa4 = xMapa3 + 560 + 300; }*/
	if (xMapa1 + 1219 <= 0){ xMapa1 = xMapa4 + 214 + 300; }
	if (xMapa2 + 3000 <= 0){ xMapa2 = xMapa1 + 1219 + 300; }
	if (xMapa3 + 560 <= 0){ xMapa3 = xMapa2 + 3000 + 300; }
	if (xMapa4 + 214 <= 0){ xMapa4 = xMapa3 + 560 + 300; }

	if (p.IntersectsWith(Zoom1) || p.IntersectsWith(Zoom2) || p.IntersectsWith(Zoom3) || p.IntersectsWith(Zoom4) && colision){ dyJugador = 0; }




}
void CRun::DibujarPersonaje(BufferedGraphics^b, PictureBox ^GifJugador)
{
	Rectangle Jugador = Rectangle(0, 0, 95, 108);
	Rectangle Zoom(320, yJugador, 75, 75);
	b->Graphics->DrawImage(GifJugador->Image, Zoom, Jugador, GraphicsUnit::Pixel);
	yJugador += dyJugador;
}
void CRun::DibjrFondo(BufferedGraphics ^b, Bitmap ^Fondo)
{

	Rectangle FondoUno = Rectangle(0, 0, 1280, 846);
	Rectangle ZoomUno(xFondo, 0, 1280, 846);
	b->Graphics->DrawImage(Fondo, ZoomUno, FondoUno, GraphicsUnit::Pixel);
	xFondo -= 30;
	if (xFondo + 1280 <= 0)
	{
		xFondo = 640;
	}


	Rectangle FondoDos = Rectangle(0, 0, 1280, 846);
	Rectangle ZoomDos(xFondoD, 0, 1280, 846);
	b->Graphics->DrawImage(Fondo, ZoomDos, FondoDos, GraphicsUnit::Pixel);
	xFondoD -= 30;
	if (xFondoD + 1280 <= 0)
	{
		xFondoD = xFondo + 1280;
	}

}

void CRun::DibujarMonedas(BufferedGraphics ^b, Bitmap ^M)
{

	Rectangle Personaje(320, yJugador, 75, 75);


	Rectangle Moneda1 = Rectangle(0, 0, 234, 234);
	Rectangle ZoomM1(xM1, yM1, 30, 30);
	b->Graphics->DrawImage(M, ZoomM1, Moneda1, GraphicsUnit::Pixel);

	xM1 -= 30;
	Random r;
	if (xM1 <= 0){ xM1 = 640 + 80; yM1 = r.Next(100, 400); }
	if (Personaje.IntersectsWith(ZoomM1)){ xM1 = 640 + 80; yM1 = r.Next(100, 400); nmonedas++; }

	Rectangle Moneda2 = Rectangle(0, 0, 234, 234);
	Rectangle ZoomM2(xM2, yM2, 30, 30);
	b->Graphics->DrawImage(M, ZoomM2, Moneda2, GraphicsUnit::Pixel);
	xM2 -= 30;

	if (xM2 <= 0){ xM2 = 640 + 80; yM2 = r.Next(100, 400); }
	if (Personaje.IntersectsWith(ZoomM2)){ xM2 = 640 + 80; yM2 = r.Next(100, 400); nmonedas++; }

	Rectangle Moneda3 = Rectangle(0, 0, 234, 234);
	Rectangle ZoomM3(xM3, yM3, 30, 30);
	b->Graphics->DrawImage(M, ZoomM3, Moneda3, GraphicsUnit::Pixel);
	xM3 -= 30;

	if (xM3 <= 0){ xM3 = 640 + 80; yM3 = r.Next(100, 400); }
	if (Personaje.IntersectsWith(ZoomM3)){ xM3 = 640 + 80; yM3 = r.Next(100, 400); nmonedas++; }
}

void CRun::Accion(BufferedGraphics ^b, Bitmap ^imgPiso1, Bitmap ^imgPiso2, Bitmap ^imgPiso3, Bitmap ^imgPiso4, PictureBox ^GifJugador, Bitmap ^Fondo, Bitmap ^Monedas)
{
	switch (direcciones)
	{
	case DireccionAD1::SaltarAD1:


		dyJugador = -40;

		break;
	case DireccionAD1::SoltarTeclaAD1:

		dyJugador = 40;
		break;
	}
	DibjrFondo(b, Fondo);
	DibujarPiso(b, imgPiso1, imgPiso2, imgPiso3, imgPiso4);
	DibujarPersonaje(b, GifJugador);
	DibujarMonedas(b, Monedas);

}

int CRun::Get_NMonedas(){ return nmonedas; }
int CRun::Get_YJugador(){ return yJugador; }