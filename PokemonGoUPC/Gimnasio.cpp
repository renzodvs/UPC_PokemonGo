#include "Gimnasio.h"


CGimnasio::CGimnasio(int x, int y)
{
	this->x = x;
	this->y = y;
	activar = false;
}


CGimnasio::~CGimnasio()
{
}

int CGimnasio::Get_x(){ return x; }
int CGimnasio::Get_y(){ return y; }
bool CGimnasio::Get_activar(){ return activar; }
void CGimnasio::Set_activar(bool value){ activar = value; }
