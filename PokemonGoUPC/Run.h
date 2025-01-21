#pragma once
using namespace System::Drawing;
using namespace System::Windows::Forms;
enum DireccionAD1 { SaltarAD1, SoltarTeclaAD1 };
class CRun
{
private:
	int xMapa1;
	int xMapa2;
	int xMapa3;
	int xMapa4;


	int xMoneda;
	int yMoneda;

	int xBala;
	int yBala;

	int yJugador;
	int dyJugador;

	int xFondo;
	int xFondoD;

	bool colision;

	int xM1;
	int yM1;

	int xM2;
	int yM2;

	int xM3;
	int yM3;

	int xM4;
	int yM4;

	int xM5;
	int yM5;

	int xM6;
	int yM6;

	int nmonedas;

public:
	CRun();
	~CRun();

	void DibujarPiso(BufferedGraphics ^b, Bitmap ^imgPiso1, Bitmap ^imgPiso2, Bitmap ^imgPiso3, Bitmap ^imgPiso4);
	void DibujarPersonaje(BufferedGraphics^b, PictureBox ^GifJugador);
	void Accion(BufferedGraphics ^b, Bitmap ^imgPiso1, Bitmap ^imgPiso2, Bitmap ^imgPiso3, Bitmap ^imgPiso4, PictureBox ^GifJugador, Bitmap ^Fondo, Bitmap ^Monedas);
	void DibjrFondo(BufferedGraphics ^b, Bitmap ^Fondo);
	DireccionAD1 direcciones;
	void DibujarMonedas(BufferedGraphics ^b, Bitmap ^Monedas);
	int Get_NMonedas();
	int Get_YJugador();
};

