#include "Jugador.h"


CJugador::CJugador()
{
}


CJugador::~CJugador()
{
}

CJugador::CJugador(int x,int y)
{
	this->x = x;
	this->y = y;
	dx = 0;
	dy = 0;
	ultima = Direcciones::Abajo;
	direccion = Direcciones::Ninguna;
	ancho = 216 / 12;
	alto = 21;
	indiceXJ = 0;
	bicicleta = false;
	incremento = 1;
	GeneraPokemon = true;
	EliminarPokemon = false;

	xMapa = -1705;
	yMapa = -864;
	dxMapa = 10;
	dyMapa = 10;
	AnchoMapa = 1968 * 1.7;
	AltoMapa = 1110 * 1.7;

	xMatriz = -250;
	yMatriz = -250;
}

int Mapa[22][38] =
{
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 5, 5, 5, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 5, 5, 5, 1, 1, 5, 5, 5, 1, 1, 1, 0 },
	{ 0, 5, 2, 5, 1, 1, 1, 5, 3, 5, 1, 1, 1, 1, 5, 5, 5, 1, 5, 5, 5, 5, 3, 5, 1, 1, 5, 2, 5, 1, 1, 5, 2, 5, 1, 1, 1, 0 },
	{ 0, 5, 5, 5, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 5, 2, 5, 1, 5, 2, 5, 5, 5, 5, 1, 1, 5, 5, 5, 1, 1, 5, 5, 5, 1, 1, 1, 0 },
	{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 5, 5, 5, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 5, 5, 5, 0 },
	{ 0, 1, 5, 5, 5, 1, 1, 1, 1, 5, 2, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 3, 5, 1, 1, 1, 1, 5, 3, 5, 0 },
	{ 0, 1, 5, 3, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 5, 5, 5, 1, 5, 5, 5, 1, 5, 5, 5, 1, 1, 1, 1, 5, 5, 5, 0 },
	{ 0, 1, 5, 5, 5, 5, 2, 5, 1, 5, 5, 5, 5, 2, 5, 1, 5, 5, 5, 5, 2, 5, 1, 5, 2, 5, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 0 },
	{ 0, 1, 1, 1, 1, 5, 5, 5, 1, 5, 3, 5, 5, 5, 5, 1, 5, 3, 5, 5, 5, 5, 1, 5, 5, 5, 1, 1, 1, 5, 2, 5, 1, 1, 5, 5, 5, 0 },
	{ 0, 5, 5, 5, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 5, 2, 5, 0 },
	{ 0, 5, 2, 5, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 5, 5, 5, 0 },
	{ 0, 5, 5, 5, 1, 1, 1, 1, 1, 5, 2, 5, 1, 1, 1, 1, 1, 5, 2, 5, 1, 1, 1, 5, 5, 5, 5, 3, 5, 5, 5, 5, 1, 1, 1, 1, 1, 0 },
	{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 5, 2, 5, 5, 5, 5, 5, 2, 5, 1, 1, 1, 1, 1, 0 },
	{ 0, 1, 1, 5, 5, 5, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 1, 1, 1, 5, 5, 5, 1, 5, 5, 5, 1, 1, 1, 5, 5, 5, 1, 5, 5, 5, 1, 0 },
	{ 0, 1, 1, 5, 2, 5, 1, 1, 1, 1, 5, 3, 5, 5, 2, 5, 1, 1, 1, 5, 3, 5, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 5, 2, 5, 1, 0 },
	{ 0, 1, 1, 5, 5, 5, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 1, 1, 1, 5, 5, 5, 1, 1, 1, 5, 2, 5, 1, 1, 1, 1, 1, 5, 5, 5, 1, 0 },
	{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
	{ 0, 1, 1, 1, 1, 5, 5, 5, 1, 5, 5, 5, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 0 },
	{ 0, 1, 5, 5, 5, 5, 3, 5, 1, 5, 2, 5, 1, 5, 5, 5, 1, 5, 2, 5, 1, 1, 1, 5, 2, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 3, 5, 0 },
	{ 0, 1, 5, 2, 5, 5, 5, 5, 1, 5, 5, 5, 1, 5, 3, 5, 1, 5, 5, 5, 1, 1, 1, 5, 5, 5, 5, 3, 5, 1, 1, 5, 2, 5, 5, 5, 5, 0 },
	{ 0, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 1, 1, 5, 5, 5, 1, 1, 1, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};

int adentro = 0;
int adentro2 = 0;
int adentro3 = 0;
int ContGen = 0;
int numpok = 0;


void CJugador::SetBicicleta(bool value){ bicicleta = value; }
bool CJugador::GetBicicleta(){ return bicicleta; }
void CJugador::SetGeneraPokemon(bool value){ GeneraPokemon = value; }
bool CJugador::GetGeneraPokemon(){ return GeneraPokemon; }
void CJugador::SetEliminarPokemon(bool value){ EliminarPokemon = value; }
bool CJugador::GetEliminarPokemon(){ return EliminarPokemon; }
void CJugador::Dibujar_Mapas(BufferedGraphics ^buffer, CArrLugares *oArreglo, Rectangle CJ, Bitmap ^imgMapa,
	Bitmap ^ImgPParada, Bitmap ^ImgPParadaA, Bitmap ^ImgGimnasio, Bitmap ^ImgGimnasioA, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
	Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
	Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey, Random ^rand)
{
	xMatriz = xMapa - 92.9;
	yMatriz = yMapa - 94.3;
	CPokeparada *oNuevo;
	CGimnasio *oNuevo2;
	CPokemon *oNuevo3;
	CControlPokemon *oAux;

	Rectangle PorcionUsarMapa(0, 0, 1968, 1110);
	Rectangle AumentoMapa(xMapa, yMapa, AnchoMapa, AltoMapa);
	buffer->Graphics->DrawImage(imgMapa, AumentoMapa, PorcionUsarMapa, GraphicsUnit::Pixel);

	if (EliminarPokemon)
	{
		oArreglo->Eliminar_Pokemons();
	}

	if (GeneraPokemon)
	{
		ContGen = 0;
		oArreglo->Eliminar_Pokemons();

		for (int m = 0; m < 9; m++)
		{
			int i = rand->Next(1,20);
			int j = rand->Next(1,33);

			if (Mapa[i][j] == 1)
			{
				Mapa[i][j] = 4;
				oAux = new CControlPokemon(0, 0);
				oNuevo3 = oAux->Genera_Pokemon(rand);
				oArreglo->Agregar_Pokemon(oNuevo3);
			}
			else
			{
				m--;
			}
		}

		GeneraPokemon = false;
	}

	for (int i = 0; i < 22; i++)
	{
		xMatriz = xMapa - 92.9;

		for (int j = 0; j < 38; j++)
		{
			if (Mapa[i][j] == 0)
			{
				Rectangle Alto = Rectangle(xMatriz, yMatriz, 92.9, 94.3);
				if (CJ.IntersectsWith(Alto)){ dx = 0; dy = 0; }
			}
			if (Mapa[i][j] == 1 || Mapa[i][j] == 5)
			{
				Rectangle Paso = Rectangle(xMatriz, yMatriz, 92.9, 94.3);
				/*buffer->Graphics->DrawRectangle(Pens::Blue, Paso);*/
			}
			if (Mapa[i][j] == 2)
			{
				Rectangle PParada = Rectangle(xMatriz, yMatriz, 92.9, 94.3);
				Rectangle AreaPParada = Rectangle(xMatriz - 46, yMatriz - 47, 185, 188);
				oNuevo = new CPokeparada(xMatriz, yMatriz);

				/*buffer->Graphics->DrawRectangle(Pens::Green, PParada);
				buffer->Graphics->DrawRectangle(Pens::Red, AreaPParada);*/

				if (CJ.IntersectsWith(PParada)){ dx = 0; dy = 0; }
				if (CJ.IntersectsWith(AreaPParada))
				{
					adentro++;
					oNuevo->Set_activar(true);
					buffer->Graphics->DrawImage(ImgPParadaA, PParada);
					oArreglo->Eliminar_Activadas();
				}
				else
				{
					oNuevo->Set_activar(false);
					buffer->Graphics->DrawImage(ImgPParada, PParada);
				}

				oArreglo->Agregar_Pokeparadas(oNuevo);
			}
			if (Mapa[i][j] == 3)
			{
				Rectangle Gimnasio = Rectangle(xMatriz, yMatriz, 92.9, 94.3);
				Rectangle AreaGimnasio = Rectangle(xMatriz - 46, yMatriz - 47, 185, 188);
				oNuevo2 = new CGimnasio(xMatriz, yMatriz);

				/*buffer->Graphics->DrawRectangle(Pens::Blue, Gimnasio);
				buffer->Graphics->DrawRectangle(Pens::Red, AreaGimnasio);*/

				if (CJ.IntersectsWith(Gimnasio)){ dx = 0; dy = 0; }
				if (CJ.IntersectsWith(AreaGimnasio))
				{
					adentro2++;
					oNuevo2->Set_activar(true);
					buffer->Graphics->DrawImage(ImgGimnasioA, Gimnasio);
					oArreglo->Eliminar_Activadas();
				}
				else
				{
					oNuevo2->Set_activar(false);
					buffer->Graphics->DrawImage(ImgGimnasio, Gimnasio);
				}
				oArreglo->Agregar_Gimnasios(oNuevo2);
			}

			if (Mapa[i][j] == 4 && EliminarPokemon == false)
			{
				Rectangle Pokemon = Rectangle(xMatriz + 30, yMatriz + 31, 30, 31);
				Rectangle AreaPokemon = Rectangle(xMatriz, yMatriz, 92.9, 94.3);
				CPokemon *oAuxPok = oArreglo->Get_ArrPokemon()[numpok];

				oAuxPok->Set_x(xMatriz + 20);
				oAuxPok->Set_y(yMatriz + 21);

				/*buffer->Graphics->DrawRectangle(Pens::Blue, Pokemon);
				buffer->Graphics->DrawRectangle(Pens::Red, AreaPokemon);*/

				if (CJ.IntersectsWith(Pokemon)){ dx = 0; dy = 0; }
				if (CJ.IntersectsWith(AreaPokemon))
				{
					adentro3++;
					oAuxPok->Set_CapturaActivada(true);
					oAux->Dibujar_Pokemon(buffer, oAuxPok, Img_Pikachu, Img_Bulbasur, Img_Squirtle, Img_Charmander, Img_Abra, 
						Img_Snorlax, Img_Ekans, Img_Onix, Img_Evee, Img_Magikarp, Img_Meowth, Img_Machop, Img_Pidgey );
					oArreglo->Eliminar_Activadas();
					oArreglo->Get_ArrPokemon()[numpok] = oAuxPok;
				}
				else
				{
					oAuxPok->Set_CapturaActivada(false);
					oAux->Dibujar_Pokemon(buffer, oAuxPok, Img_Pikachu, Img_Bulbasur, Img_Squirtle, Img_Charmander, Img_Abra, 
						Img_Snorlax, Img_Ekans, Img_Onix, Img_Evee, Img_Magikarp, Img_Meowth, Img_Machop, Img_Pidgey);
					oArreglo->Get_ArrPokemon()[numpok] = oAuxPok;
				}
				oAuxPok = NULL;
				delete oAuxPok;
				numpok++;
			}

			xMatriz += 92.9;
		}
		yMatriz += 94.3;
	}
	numpok = 0;

	if (adentro != 0){ oArreglo->SetPActiva(true); }
	else { oArreglo->SetPActiva(false);  }

	if (adentro2 != 0){ oArreglo->SetGActivo(true); }
	else { oArreglo->SetGActivo(false); }

	if (adentro3 != 0){ oArreglo->SetPOActivo(true); }
	else { oArreglo->SetPOActivo(false); }

	oArreglo->Eliminar_No_Activadas();
	adentro = 0;
	adentro2 = 0;
	adentro3 = 0;
	ContGen++;

	if (ContGen == 300)
	{
		ContGen = 0;
		for (int i = 0; i < 22; i++)
		{
			for (int j = 0; j < 38; j++)
			{
				if (Mapa[i][j] == 4)
				{
					Mapa[i][j] = 1;
				}
			}
		}
		EliminarPokemon = false;
		GeneraPokemon = true;
	}
}
void CJugador::Dibujar_Jugador(Bitmap ^ImgJugador, BufferedGraphics ^buffer, Bitmap ^imgMapa, CArrLugares *oArreglo,
	Bitmap ^ImgPParada, Bitmap ^ImgPParadaA, Bitmap ^ImgGimnasio, Bitmap ^ImgGimnasioA, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
	Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
	Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey, Random ^rand)
{
	Rectangle CJ;

	if (bicicleta)
	{
		ancho = 264 / 12;
		alto = 24;
	}
	else
	{
		ancho = 216 / 12;
		alto = 21;
	}

	if (incremento == 1)
	{
		int dxf, dyf;

		if (bicicleta)
		{
			dxf = dx * 12;
			dyf = dy * 12;
		}
		else
		{
			dxf = dx * 6;
			dyf = dy * 6;
		}
		
		CJ = Rectangle(x + 10 + dxf, y + 20 + dyf, (ancho - 10) * 2, (alto - 16) * 2);
	}
	else
	{
		CJ = Rectangle(x + 10 + dx, y + 20 + dy, (ancho - 10) * 2, (alto - 16) * 2);
	}
	
	Dibujar_Mapas(buffer, oArreglo, CJ, imgMapa, ImgPParada, ImgPParadaA, ImgGimnasio, ImgGimnasioA, Img_Pikachu, Img_Bulbasur, Img_Squirtle,
		Img_Charmander, Img_Abra, Img_Snorlax, Img_Ekans, Img_Onix, Img_Evee, Img_Magikarp, Img_Meowth, Img_Machop, Img_Pidgey, rand);
	Rectangle porcionAUsar = Rectangle(ancho*indiceXJ, 0, ancho, alto);
	Rectangle Aumento(x, y, (ancho - 2) * 2, (alto - 5) * 2);
	buffer->Graphics->DrawImage(ImgJugador, Aumento, porcionAUsar, GraphicsUnit::Pixel);
	/*buffer->Graphics->DrawRectangle(Pens::Red, CJ);*/

	if (bicicleta)
	{
		x += 2 * dx;
		y += 2 * dy;
	}
	else
	{
		x += dx;
		y += dy;
	}
}
void CJugador::Mover_Jugador(Bitmap ^ImgJugador, BufferedGraphics ^buffer, Bitmap ^imgMapa, CArrLugares *oArreglo,
	Bitmap ^ImgPParada, Bitmap ^ImgPParadaA, Bitmap ^ImgGimnasio, Bitmap ^ImgGimnasioA, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
	Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
	Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey, Random ^rand)
{
	switch (direccion)
	{
	case Direcciones::Arriba:
		
		if (indiceXJ >= 6 && indiceXJ < 8){ indiceXJ++; }
		else{ indiceXJ = 6; }

		dx = 0;
		dy = -1 * incremento;
		
		ultima = Arriba;

		break;

	case Direcciones::Abajo:
	
		if (indiceXJ >= 0 && indiceXJ < 2){ indiceXJ++; }
		else { indiceXJ = 0; }

		dx = 0;
		dy = incremento;
		
		ultima = Abajo;
		
		break;
		
	case Direcciones::Izquierda:
		
		if (indiceXJ >= 3 && indiceXJ < 5){ indiceXJ++; }
		else{ indiceXJ = 3; }

		dx = -1 * incremento;
		dy = 0;

		ultima = Izquierda;

		break;
		

	case Direcciones::Derecha:

		if (indiceXJ >= 9 && indiceXJ < 11){ indiceXJ++; }
		else{ indiceXJ = 9; }
			
		dx = incremento;
		dy = 0;

		ultima = Derecha;

		break;

	case Direcciones::Ninguna:

		dx = dy = 0;

		switch (ultima)
		{
		case Direcciones::Abajo:

			indiceXJ = 0;
			break;

		case Direcciones::Izquierda:

			indiceXJ = 3;
			break;

		case Direcciones::Arriba:

			indiceXJ = 6;
			break;

		case Direcciones::Derecha:

			indiceXJ = 9;
			break;
		}
		break;
	}

	Dibujar_Jugador(ImgJugador, buffer, imgMapa, oArreglo, ImgPParada, ImgPParadaA, ImgGimnasio, ImgGimnasioA, Img_Pikachu,Img_Bulbasur,Img_Squirtle,
		Img_Charmander, Img_Abra, Img_Snorlax, Img_Ekans, Img_Onix, Img_Evee, Img_Magikarp, Img_Meowth, Img_Machop, Img_Pidgey, rand);
}
void CJugador::MoverMapa(int AnchoForm, int AltoForm)
{
	if (dx < 0)
	{
		if (bicicleta && xMapa < -15)
		{
			incremento = 1;
			xMapa += 2 * dxMapa;
		}
		else if (xMapa < -5)
		{
			incremento = 1;
			xMapa += dxMapa;
		}
		else
		{
			incremento = 5;
		}
	}
	else if (dx > 0)
	{
		if (bicicleta && ((-1 * xMapa) <= (AnchoMapa - AnchoForm - 15)))
		{
			incremento = 1;
			xMapa -= 2 * dxMapa;
		}
		else if ((-1 * xMapa) <= (AnchoMapa - AnchoForm -5))
		{
			incremento = 1;
			xMapa -= dxMapa;
		}
		else
		{
			incremento = 5;
		}
	}

	if (dy < 0)
	{
		if (bicicleta && yMapa < -15)
		{
			incremento = 1;
			yMapa += 2 * dyMapa;
		}
		else if (yMapa < -5)
		{
			incremento = 1;
			yMapa += dyMapa;
		}
		else
		{
			incremento = 5;
		}
	}
	else if (dy > 0)
	{
		if (bicicleta && ((-1 * yMapa) <= (AltoMapa - AltoForm - 15)))
		{
			incremento = 1;
			yMapa -= 2 * dyMapa;
		}
		else if ((-1 * yMapa) <= (AltoMapa - AltoForm -5))
		{
			incremento = 1;
			yMapa -= dyMapa;
		}
		else
		{
			incremento = 5;
		}
			
	}
}