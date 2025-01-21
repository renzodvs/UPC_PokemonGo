#include "Elementos_Tipo.h"

CPokeball::CPokeball(int x, int y) :CElemento(x, y)
{
	tipo = "PB";
}
CPokeball::~CPokeball(){}

CPocion::CPocion(int x, int y) :CElemento(x, y)
{
	tipo = "P";
}
CPocion::~CPocion(){}

CSuperPocion::CSuperPocion(int x, int y) :CElemento(x, y)
{
	tipo = "SP";
}
CSuperPocion::~CSuperPocion(){}

CRevivir::CRevivir(int x, int y) :CElemento(x, y)
{
	tipo = "R";
}
CRevivir::~CRevivir(){}