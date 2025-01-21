#include "Juego.h"


CJuego::CJuego(int x,int y)
{
	oJugador = new CJugador(x, y);
	oArreglo = new CArrLugares();
	oMochila = new CMochila();
}


CJuego::~CJuego()
{
}


CArrLugares *CJuego::GetArrLugares()
{
	return oArreglo;
}

CJugador *CJuego::GetJugador()
{
	return oJugador;
}

CMochila *CJuego::GetMochila()
{
	return oMochila;
}

void CJuego::Mover_Jugador (Bitmap ^ImgJugador, Bitmap ^ImgBicicleta, BufferedGraphics ^buffer, Bitmap ^imgMapa,
	Bitmap ^ImgPParada, Bitmap ^ImgPParadaA, Bitmap ^ImgGimnasio, Bitmap ^ImgGimnasioA, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
	Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
	Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey, Random ^rand)
{
	if (oJugador->GetBicicleta() == true)
	{
		oJugador->Mover_Jugador(ImgBicicleta, buffer, imgMapa, oArreglo, ImgPParada, ImgPParadaA, ImgGimnasio, ImgGimnasioA,  Img_Pikachu, 
			 Img_Bulbasur,  Img_Squirtle, Img_Charmander,  Img_Abra,  Img_Snorlax,  Img_Ekans,  Img_Onix,  Img_Evee, Img_Magikarp, Img_Meowth,  
			 Img_Machop, Img_Pidgey, rand);
	}
	else
	{
		oJugador->Mover_Jugador(ImgJugador, buffer, imgMapa, oArreglo, ImgPParada, ImgPParadaA, ImgGimnasio, ImgGimnasioA, Img_Pikachu,
			Img_Bulbasur, Img_Squirtle, Img_Charmander, Img_Abra, Img_Snorlax, Img_Ekans, Img_Onix, Img_Evee, Img_Magikarp, Img_Meowth, 
			Img_Machop, Img_Pidgey, rand);
	}
}

