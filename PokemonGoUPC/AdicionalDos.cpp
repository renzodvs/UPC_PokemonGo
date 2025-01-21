#include "AdicionalDos.h"
using namespace System;

CAdicionalDos::CAdicionalDos()
{
	xM = 0;
	yM = 0;

	xTuberiaS = 550;
	xTuberiaI = 550;

	yTuberiaS = -600;
	yTuberiaI = yTuberiaS + 700 + 150;


	xTuberiaSdos = 775;
	xTuberiaIdos = 775;

	yTuberiaSdos = -500;
	yTuberiaIdos = yTuberiaSdos + 700 + 150;

	xTuberiaStres = 975;
	xTuberiaItres = 975;

	yTuberiaStres = -400;
	yTuberiaItres = yTuberiaStres + 700 + 150;

	yJ = 100;
	dyJ = -30;
	dxTueberia = 10;

	perdiste = false;
}


CAdicionalDos::~CAdicionalDos()
{
}

void CAdicionalDos::DibujarFondo(BufferedGraphics ^buffer, Bitmap ^imgFondo)
{
	Rectangle PorcionAUsar = Rectangle(0, 0, 1442, 719);
	Rectangle Zoom(xM, yM, 1442, 640);
	buffer->Graphics->DrawImage(imgFondo, Zoom, PorcionAUsar, GraphicsUnit::Pixel);
}
void CAdicionalDos::DibujarPersonaje(BufferedGraphics ^buffer, PictureBox ^imgPersonaje)
{
	Rectangle PorcionAUsar = Rectangle(0, 0, 96, 85);
	Rectangle Zoom(320, yJ, 60, 60);
	buffer->Graphics->DrawImage(imgPersonaje->Image, Zoom, PorcionAUsar, GraphicsUnit::Pixel);
	yJ -= dyJ;
}
void CAdicionalDos::DibujarTuberiaSuperior(BufferedGraphics ^buffer, Bitmap ^imgTuberia)
{
	Rectangle PorcionAusar = Rectangle(0, 0, 200, 700);
	Rectangle ZoomS(xTuberiaS, yTuberiaS, 100, 700);
	buffer->Graphics->DrawImage(imgTuberia, ZoomS, PorcionAusar, GraphicsUnit::Pixel);
	xTuberiaS -= dxTueberia;


	Rectangle PorcionAusardos = Rectangle(0, 0, 200, 700);
	Rectangle ZoomSdos(xTuberiaSdos, yTuberiaSdos, 100, 700);
	buffer->Graphics->DrawImage(imgTuberia, ZoomSdos, PorcionAusardos, GraphicsUnit::Pixel);
	xTuberiaSdos -= dxTueberia;

	Rectangle PorcionAusartres = Rectangle(0, 0, 200, 700);
	Rectangle ZoomStres(xTuberiaStres, yTuberiaStres, 100, 700);
	buffer->Graphics->DrawImage(imgTuberia, ZoomStres, PorcionAusartres, GraphicsUnit::Pixel);
	xTuberiaStres -= dxTueberia;
}
void CAdicionalDos::DibujarTuberiaInferior(BufferedGraphics ^buffer, Bitmap ^imgTuberia)
{
	Rectangle PorcionAusar = Rectangle(0, 0, 200, 700);
	Rectangle ZoomI(xTuberiaI, yTuberiaI, 100, 700);
	buffer->Graphics->DrawImage(imgTuberia, ZoomI, PorcionAusar, GraphicsUnit::Pixel);
	xTuberiaI -= dxTueberia;

	Rectangle PorcionAusardos = Rectangle(0, 0, 200, 700);
	Rectangle ZoomIdos(xTuberiaIdos, yTuberiaIdos, 100, 700);
	buffer->Graphics->DrawImage(imgTuberia, ZoomIdos, PorcionAusardos, GraphicsUnit::Pixel);
	xTuberiaIdos -= dxTueberia;

	Rectangle PorcionAusartres = Rectangle(0, 0, 200, 700);
	Rectangle ZoomItres(xTuberiaItres, yTuberiaItres, 100, 700);
	buffer->Graphics->DrawImage(imgTuberia, ZoomItres, PorcionAusartres, GraphicsUnit::Pixel);
	xTuberiaItres -= dxTueberia;
}
void CAdicionalDos::Colision(BufferedGraphics ^buffer)
{
	Rectangle Personaje(320 + 25, yJ + 25, 25, 25);
/*
	buffer->Graphics->DrawRectangle(Pens::Red, Personaje);*/
	Rectangle TuberiaS(xTuberiaS, yTuberiaS, 100, 700);
	Rectangle TuberiaSdos(xTuberiaSdos, yTuberiaSdos, 100, 700);
	Rectangle TuberiaStres(xTuberiaStres, yTuberiaStres, 100, 700);

	Rectangle TuberiaI(xTuberiaI, yTuberiaI, 100, 700);
	Rectangle TuberiaIdos(xTuberiaIdos, yTuberiaIdos, 100, 700);
	Rectangle Tuberiatres(xTuberiaItres, yTuberiaItres, 100, 700);
	if (Personaje.IntersectsWith(TuberiaS) || Personaje.IntersectsWith(TuberiaSdos) || Personaje.IntersectsWith(TuberiaStres)){ dxTueberia = 0; dyJ = 0; perdiste = true; }
	if (Personaje.IntersectsWith(TuberiaI) || Personaje.IntersectsWith(TuberiaIdos) || Personaje.IntersectsWith(Tuberiatres)){ dxTueberia = 0; dyJ = 0; perdiste = true; }
}
void CAdicionalDos::Juego(BufferedGraphics ^buffe, Bitmap ^imgFondo, PictureBox ^imgPersonaje, Bitmap ^imgTuberiaS, Bitmap ^imgTuberiaI)
{
	switch (tecla)
	{
	case Direccion::Elevarse:
		dyJ = 70;
		tecla = Direccion::SoltarTeclaAD;
		break;
	case Direccion::SoltarTeclaAD:
		dyJ = -10;
		break;
	}
	if (xTuberiaS <= -100){ xTuberiaI = xTuberiaS = 550; Random r; yTuberiaS = r.Next(-600, -300); yTuberiaI = yTuberiaS + 700 + 150; }
	if (xTuberiaSdos <= -100){ xTuberiaIdos = xTuberiaSdos = 550; Random r2; yTuberiaSdos = r2.Next(-600, -300); yTuberiaIdos = yTuberiaSdos + 700 + 150; }
	if (xTuberiaStres <= -100){ xTuberiaItres = xTuberiaStres = 550; Random r3; yTuberiaStres = r3.Next(-600, -300); yTuberiaItres = yTuberiaStres + 700 + 150; }
	DibujarFondo(buffe, imgFondo);
	DibujarPersonaje(buffe, imgPersonaje);
	DibujarTuberiaInferior(buffe, imgTuberiaI);
	DibujarTuberiaSuperior(buffe, imgTuberiaS);
	Colision(buffe);
}

bool CAdicionalDos::GetPerdiste(){ return perdiste; }
int CAdicionalDos::Get_YJugador(){ return yJ; }