#include "ControlPokemon.h"


CControlPokemon::CControlPokemon(int x,int y)
{
	this->x = x;
	this->y = y;
}


CControlPokemon::~CControlPokemon()
{
}

CPokemon *CControlPokemon::Genera_Pokemon(Random ^r)
{
	CPokemon *oNuevo;

	int tipo = r->Next(1, 66);
	if (tipo > 0 && tipo <= 5){ oNuevo = new CPikachu(x, y); }
	else if (tipo > 5 && tipo <= 10){ oNuevo = new CEvee(x, y); }
	else if (tipo > 10 && tipo <= 15){ oNuevo = new CSquirtle(x, y); }
	else if (tipo > 15 && tipo <= 20){ oNuevo = new CCharmander(x, y); }
	else if (tipo > 20 && tipo <= 25){ oNuevo = new CBulbasur(x, y); }
	else if (tipo > 25 && tipo <= 30){ oNuevo = new CMeowth(x, y); }
	else if (tipo > 30 && tipo <= 35){ oNuevo = new CSnorlax(x, y); }
	else if (tipo > 35 && tipo <= 40){ oNuevo = new CAbra(x, y); }
	else if (tipo > 40 && tipo <= 45){ oNuevo = new CMagikarp(x, y); }
	else if (tipo > 45 && tipo <= 50){ oNuevo = new CEkans(x, y); }
	else if (tipo > 50 && tipo <= 55){ oNuevo = new COnix(x, y); }
	else if (tipo > 55 && tipo <= 60){ oNuevo = new CMachop(x, y); }
	else if (tipo > 60 && tipo <= 65){ oNuevo = new CPidgey(x, y); }

	return oNuevo;
}

void CControlPokemon::Dibujar_Pokemon(BufferedGraphics ^buffer, CPokemon *oNuevo, Bitmap ^Img_Pikachu, Bitmap ^Img_Bulbasur, Bitmap ^Img_Squirtle,
	Bitmap ^Img_Charmander, Bitmap ^Img_Abra, Bitmap ^Img_Snorlax, Bitmap ^Img_Ekans, Bitmap ^Img_Onix, Bitmap ^Img_Evee,
	Bitmap ^Img_Magikarp, Bitmap ^Img_Meowth, Bitmap ^Img_Machop, Bitmap ^Img_Pidgey)
{
	if (oNuevo->Get_tipo() == "PIK")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Pikachu);
	}
	else if (oNuevo->Get_tipo() == "BUL")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Bulbasur);
	}
	else if (oNuevo->Get_tipo() == "SQU")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Squirtle);
	}
	else if (oNuevo->Get_tipo() == "CHA")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Charmander);
	}
	else if (oNuevo->Get_tipo() == "ABR")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Abra);
	}
	else if (oNuevo->Get_tipo() == "SNO")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Snorlax);
	}
	else if (oNuevo->Get_tipo() == "EKA")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Ekans);
	}
	else if (oNuevo->Get_tipo() == "ONI")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Onix);
	}
	else if (oNuevo->Get_tipo() == "EVE")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Evee);
	}
	else if (oNuevo->Get_tipo() == "MAG")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Magikarp);
	}
	else if (oNuevo->Get_tipo() == "MEO")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Meowth);
	}
	else if (oNuevo->Get_tipo() == "MAC")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Machop);
	}
	else if (oNuevo->Get_tipo() == "PID")
	{
		oNuevo->Dibuja_Pokemon(buffer, Img_Pidgey);
	}
}