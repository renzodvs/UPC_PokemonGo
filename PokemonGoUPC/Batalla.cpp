#include "Batalla.h"
using namespace System::Drawing;
using namespace System::Windows::Forms;
CBatalla::CBatalla()
{
	xPisoEnemigo = 640;
	xMiPiso = -295;

	xCudroEnemigo = -234;
	xMiCuadro = 640;

	xVidaEnemigo = -140;
	xMiVida = 735;

	vidaEnemigo = 110;
	MiVida = 110;

	xEspecialEnemigo = -178;
	xMiEspecial = 695;

	EspecialEnemigo = 0;
	Miespecial = 0;

	PoderEnemigo = 0;
	MiPoder = 0;

	xMiPokemon = -288;
	xPokemonEnemigo = 640;
	Movimientoenemigo = false;
	movPoke = true;
	daño = 5;
	dibujarMiAtaque = false;
	Batalla = true;
}


CBatalla::~CBatalla()
{
}

void CBatalla::Set_MiPoder(int value){ MiPoder = value; }
void CBatalla::Set_PoderEnemigo(int value){ PoderEnemigo = value; }
void CBatalla::Set_Mivida(int value){ MiVida = value; }

int CBatalla::Get_MiVida(){ return MiVida; }
int CBatalla::Get_VidaEnemigo(){ return vidaEnemigo; }

void CBatalla::DibujarFondoBatalla(BufferedGraphics ^buffer, Bitmap ^imgFondo)
{
	Rectangle PorconAUsar = Rectangle(0, 0, 548, 548);
	Rectangle Zoom(0, 0, 640, 735);
	buffer->Graphics->DrawImage(imgFondo, Zoom, PorconAUsar, GraphicsUnit::Pixel);
}
void CBatalla::DibujarPiso(BufferedGraphics ^buffer, Bitmap ^imgPE, Bitmap ^imgMP)
{
	Rectangle PosicionAUsarPE = Rectangle(0, 0, 295, 95);
	Rectangle ZoomPE(xPisoEnemigo, 150, 295, 95);
	buffer->Graphics->DrawImage(imgPE, ZoomPE, PosicionAUsarPE, GraphicsUnit::Pixel);

	Rectangle PosicionAUsarMP = Rectangle(0, 0, 295, 95);
	Rectangle ZoomMP(xMiPiso, 500, 295, 95);
	buffer->Graphics->DrawImage(imgMP, ZoomMP, PosicionAUsarMP, GraphicsUnit::Pixel);

	if (xPisoEnemigo > xMiPiso + 295)
	{
		xPisoEnemigo -= 20;
		xMiPiso += 20;

		xMiPokemon += 20;
		xPokemonEnemigo -= 20;

		MiAtaque = false;
	}
	else{ Movimientoenemigo = true; }
}
void CBatalla::DibujarPokemon(BufferedGraphics ^buffer, PictureBox ^imgMiPokemon, PictureBox ^imgPokemonEnemigo)
{
	imgPokemonEnemigo->Visible = true;
	if (imgPokemonEnemigo->Image->Height > 100)
	{
		Rectangle PorcionUsarPE = Rectangle(0, 0, 180, 161);
		Rectangle ZoomPE(xPokemonEnemigo, 70, 180 + 50, 161 + 50);
		buffer->Graphics->DrawImage(imgPokemonEnemigo->Image, ZoomPE, PorcionUsarPE, GraphicsUnit::Pixel);
	}
	else
	{
		Rectangle PorcionUsarPE = Rectangle(0, 0, 180, 161);
		Rectangle ZoomPE(xPokemonEnemigo, 70, 180 * 2, 161 * 2);
		buffer->Graphics->DrawImage(imgPokemonEnemigo->Image, ZoomPE, PorcionUsarPE, GraphicsUnit::Pixel);
	}

	imgMiPokemon->Visible = true;
	if (imgMiPokemon->Image->Height > 100)
	{
		Rectangle PorcionUsarMP = Rectangle(0, 0, 180, 161);
		Rectangle ZoomMP(xMiPokemon, 425, 180 + 50, 161 +50);
		buffer->Graphics->DrawImage(imgMiPokemon->Image, ZoomMP, PorcionUsarMP, GraphicsUnit::Pixel);
	}
	else
	{
		Rectangle PorcionUsarMP = Rectangle(0, 0, 180, 161);
		Rectangle ZoomMP(xMiPokemon, 425, 180 * 2, 161 * 2);
		buffer->Graphics->DrawImage(imgMiPokemon->Image, ZoomMP, PorcionUsarMP, GraphicsUnit::Pixel);
	}
	
}
void CBatalla::DibujarCuadrosVida(BufferedGraphics ^buffer, Bitmap ^imgCE, Bitmap ^MC, Bitmap ^MiBarraVida, Bitmap ^BarraVidaEnemiga, Bitmap ^MiEsp, Bitmap ^EsEne)
{

	Rectangle PorcionUsarCE = Rectangle(0, 0, 234, 83);
	Rectangle ZoomCE(xCudroEnemigo, 50, 234, 83);
	buffer->Graphics->DrawImage(imgCE, ZoomCE, PorcionUsarCE, GraphicsUnit::Pixel);
	if (xCudroEnemigo + 234 < xPisoEnemigo){ xCudroEnemigo += 20; xVidaEnemigo += 20; xEspecialEnemigo += 20; }

	Rectangle PorcionUsarMC = Rectangle(0, 0, 234, 83);
	Rectangle ZoomMC(xMiCuadro, 400, 234, 83);
	buffer->Graphics->DrawImage(MC, ZoomMC, PorcionUsarMC, GraphicsUnit::Pixel);
	if (xMiPiso + 295 < xMiCuadro){ xMiCuadro -= 20; xMiVida -= 20; xMiEspecial -= 20; }

	Rectangle PorcionUsarVE = Rectangle(0, 0, 110, 7);
	Rectangle ZoomVE(xVidaEnemigo, 100, vidaEnemigo, 7);
	buffer->Graphics->DrawImage(BarraVidaEnemiga, ZoomVE, PorcionUsarVE, GraphicsUnit::Pixel);

	Rectangle PorcionUsarMV = Rectangle(0, 0, 110, 7);
	Rectangle ZoomMV(xMiVida, 450, MiVida, 7);
	buffer->Graphics->DrawImage(MiBarraVida, ZoomMV, PorcionUsarMV, GraphicsUnit::Pixel);

	Rectangle PorcioUsarEE = Rectangle(0, 0, 148, 8);
	Rectangle ZoomEE(xEspecialEnemigo, 123, EspecialEnemigo, 8);
	buffer->Graphics->DrawImage(EsEne, ZoomEE, PorcioUsarEE, GraphicsUnit::Pixel);

	Rectangle PorcionUsarME = Rectangle(0, 0, 148, 8);
	Rectangle ZoomME(xMiEspecial, 473, Miespecial, 8);
	buffer->Graphics->DrawImage(MiEsp, ZoomME, PorcionUsarME, GraphicsUnit::Pixel);

}

void CBatalla::DibujarMiAtaque(BufferedGraphics ^buffer, PictureBox ^imgMiAataque)
{
	Rectangle PorcionUsar = Rectangle(0, 0, 32, 31);
	Rectangle ZoomMIa(xPokemonEnemigo, 100, 32 * 2, 31 * 2);
	buffer->Graphics->DrawImage(imgMiAataque->Image, ZoomMIa, PorcionUsar, GraphicsUnit::Pixel);
}
void CBatalla::DibujarAtaqueEnemigo(BufferedGraphics ^buffer, PictureBox ^imgAtaqueEnemigo)
{
	Rectangle PorcionUsarAE = Rectangle(0, 0, 32, 32);
	Rectangle ZoomAE(xMiPokemon, 350, 32 * 3, 32 * 3);
	buffer->Graphics->DrawImage(imgAtaqueEnemigo->Image, ZoomAE, PorcionUsarAE, GraphicsUnit::Pixel);
}
void CBatalla::movimientoEnemigo()
{
	int dir = 20;
	if (Movimientoenemigo&&Batalla)
	{
		if (xPokemonEnemigo < xPisoEnemigo + 200 && movPoke)
		{
			xPokemonEnemigo += dir;
		}
		else
		{
			movPoke = false;
			xPokemonEnemigo -= dir;
			if (xPokemonEnemigo < xPisoEnemigo)
			{
				movPoke = true;
			}
		}

	}
}
void CBatalla::DañoEnemigo()
{
	if (MiAtaque&&Movimientoenemigo)
	{
		daño = 2;
		if (MiVida > 0){ MiVida -= PoderEnemigo; EspecialEnemigo += daño; }
		if (EspecialEnemigo >= 140)
		{
			EspecialEnemigo = 0;
			MiVida -= 50;
		}
	}
}
void CBatalla::DibujarFondoEspecial(BufferedGraphics ^buffer, Bitmap ^imgFondoEspecial)
{
	Rectangle PorcionAusar = Rectangle(0, 0, 128, 128);
	Rectangle ZoomFE(0, 0, 640, 735);
	buffer->Graphics->DrawImage(imgFondoEspecial, ZoomFE, PorcionAusar, GraphicsUnit::Pixel);
}
void CBatalla::Interaccion(BufferedGraphics ^buffer, Bitmap ^imgFondo, Bitmap ^imgPE, Bitmap ^imgMP, PictureBox ^imgMiPokemon, PictureBox ^imgPokemonEnemigo, Bitmap ^imgCE, Bitmap ^MC, Bitmap ^MiBarraVida, Bitmap ^BarraVidaEnemiga, Bitmap ^MiEspecial, Bitmap ^EspecialEnemigo, PictureBox ^imgMiAataque, PictureBox ^imgAtaqueEnemigo, Bitmap ^imgFondoEspecial)
{
	switch (Accion)
	{
	case IzquierdaB:
		MiAtaque = false;
		dx = 20;
		if (xMiPiso - 70 < xMiPokemon)
			xMiPokemon -= dx;
		break;
	case DerechaB:
		MiAtaque = false;
		dx = 20;
		if (xMiPiso + 70 > xMiPokemon)
			xMiPokemon += dx;
		break;
	case Atacar:
		if (Batalla)
		{
			MiAtaque = false;
			dibujarMiAtaque = true;
			if (Miespecial >= 142)
			{

				aumentarEspecial = false;
			}
			else{ aumentarEspecial = true; AcctivaEspecial = false; }
			if (vidaEnemigo > 0)
			{
				vidaEnemigo -= MiPoder;
				if (aumentarEspecial){ Miespecial += daño + 5; }
			}
		}
		Accion = Interaccion::SoltarClick;
		break;
	case EspecialB:
		if (aumentarEspecial == false)
		{
			vidaEnemigo -= 50;
			AcctivaEspecial = true;
		}
		Accion = Interaccion::SoltarTecla;
		break;
	case SoltarClick:
		if (Batalla){
			dibujarMiAtaque = false;
			MiAtaque = true;
		}
		daño = 0;
		break;
	case SoltarTecla:
		if (Batalla){
			MiAtaque = true;
		}
		dx = 0;

		break;
	}

	if (MiVida < 0){ MiVida = 0; }
	if (vidaEnemigo < 0){ vidaEnemigo = 0; }
	if (vidaEnemigo == 0 || MiVida == 0){
		Batalla = false; dibujarMiAtaque = false;  Movimientoenemigo = false; MiAtaque = false;
	}

	movimientoEnemigo();
	DañoEnemigo();
	DibujarFondoBatalla(buffer, imgFondo);

	DibujarPiso(buffer, imgPE, imgMP);
	if (AcctivaEspecial == true)
	{
		DibujarFondoEspecial(buffer, imgFondoEspecial);
		Miespecial = 0;
		aumentarEspecial = true;
		AcctivaEspecial = false;
	}
	DibujarPokemon(buffer, imgMiPokemon, imgPokemonEnemigo);
	DibujarCuadrosVida(buffer, imgCE, MC, MiBarraVida, BarraVidaEnemiga, MiEspecial, EspecialEnemigo);
	if (dibujarMiAtaque){ DibujarMiAtaque(buffer, imgMiAataque); }
	if (MiAtaque){ DibujarAtaqueEnemigo(buffer, imgAtaqueEnemigo); }
}
int CBatalla::get_XPokemonEnemigo()
{
	return xPokemonEnemigo;
}