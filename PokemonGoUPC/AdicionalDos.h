#pragma once
using namespace System::Drawing;
using namespace System::Windows::Forms;
enum Direccion{ Elevarse, SoltarTeclaAD };
class CAdicionalDos
{
private:

	int yJ;
	int dyJ;

	int xM;
	int yM;
	int dxM;
	int dyM;

	int xTuberiaS;
	int yTuberiaS;
	int xTuberiaI;
	int yTuberiaI;

	int xTuberiaSdos;
	int yTuberiaSdos;
	int xTuberiaIdos;
	int yTuberiaIdos;

	int xTuberiaStres;
	int yTuberiaStres;
	int xTuberiaItres;
	int yTuberiaItres;

	int dxTueberia;
	bool perdiste;

public:
	Direccion tecla;
	CAdicionalDos();
	~CAdicionalDos();
	void DibujarFondo(BufferedGraphics ^buffe, Bitmap ^imgFondo);
	void DibujarPersonaje(BufferedGraphics ^buffe, PictureBox ^imgPersonaje);
	void DibujarTuberiaSuperior(BufferedGraphics ^buffer, Bitmap ^imgTuberiaS);
	void DibujarTuberiaInferior(BufferedGraphics ^buffer, Bitmap ^imgTuberiaI);
	void Juego(BufferedGraphics ^buffe, Bitmap ^imgFondo, PictureBox ^imgPersonaje, Bitmap ^imgTuberiaS, Bitmap ^imgTuberiaI);
	void Colision(BufferedGraphics ^b);
	bool GetPerdiste();
	int Get_YJugador();
};

