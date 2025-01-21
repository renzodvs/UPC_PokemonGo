#pragma once
#include "stdafx.h"

using namespace System::Drawing;
using namespace System::Windows::Forms;
enum Interaccion{ IzquierdaB, DerechaB, SoltarClick, Atacar, EspecialB, SoltarTecla };
class CBatalla
{
private:
	int xPisoEnemigo;
	int xMiPiso;

	int xCudroEnemigo;
	int xMiCuadro;

	int xVidaEnemigo;
	int xMiVida;

	int vidaEnemigo;
	int MiVida;

	int xEspecialEnemigo;
	int xMiEspecial;

	int EspecialEnemigo;
	int Miespecial;

	int xMiPokemon;
	int xPokemonEnemigo;

	int MiPoder;
	int PoderEnemigo;

	int daño;
	int dx;
	bool Movimientoenemigo;
	bool movPoke;
	bool MiAtaque;
	bool dibujarMiAtaque;
	bool Batalla;
	bool AcctivaEspecial;
	bool aumentarEspecial;

public:

	int get_XPokemonEnemigo();
	CBatalla();
	~CBatalla();

	void Set_MiPoder(int value);
	void Set_PoderEnemigo(int value);
	void Set_Mivida(int value);

	int Get_MiVida();
	int Get_VidaEnemigo();

	void DibujarFondoBatalla(BufferedGraphics ^buffer, Bitmap ^imgFondo);
	void DibujarPiso(BufferedGraphics ^buffer, Bitmap ^imgPE, Bitmap ^imgMP);
	void DibujarPokemon(BufferedGraphics ^buffer, PictureBox ^imgMiPokemon, PictureBox ^imgPokemonEnemigo);
	void DibujarCuadrosVida(BufferedGraphics ^buffer, Bitmap ^imgCE, Bitmap ^MC, Bitmap ^MiBarraVida, Bitmap ^BarraVidaEnemiga, Bitmap ^MiEspecial, Bitmap ^EspecialEnemigo);
	Interaccion Accion;
	void Interaccion(BufferedGraphics ^buffer, Bitmap ^imgFondo, Bitmap ^imgPE, Bitmap ^imgMP,
		PictureBox ^imgMiPokemon, PictureBox ^imgPokemonEnemigo, Bitmap ^imgCE, Bitmap ^MC, Bitmap ^MiBarraVida,
		Bitmap ^BarraVidaEnemiga, Bitmap ^MiEspecial, Bitmap ^EspecialEnemigo
		, PictureBox ^imgMiAataque, PictureBox ^imgAtaqueEnemigo, Bitmap ^imgFondoEspecial);
	void movimientoEnemigo();
	void DañoEnemigo();
	void DibujarMiAtaque(BufferedGraphics ^buffer, PictureBox ^imgMiAataque);
	void DibujarAtaqueEnemigo(BufferedGraphics ^buffer, PictureBox ^imgAtaqueEnemigo);
	void DibujarFondoEspecial(BufferedGraphics ^buffer, Bitmap ^imgFondoEspecial);

};

