#pragma once
#include "Elemento.h"

class CPokeball : public CElemento
{
public:
	CPokeball(int x, int y);
	~CPokeball();
};

class CPocion : public CElemento
{
public:
	CPocion(int x, int y);
	~CPocion();
};

class CSuperPocion : public CElemento
{
public:
	CSuperPocion(int x, int y);
	~CSuperPocion();
};

class CRevivir : public CElemento
{
public:
	CRevivir(int x, int y);
	~CRevivir();
};