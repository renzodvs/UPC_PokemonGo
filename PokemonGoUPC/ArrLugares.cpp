#include "ArrLugares.h"


CArrLugares::CArrLugares()
{
	PokeparadaActiva = false;
	GimnasioActivo = false;
	PokemonActivo = false;
}


CArrLugares::~CArrLugares()
{
}

void CArrLugares::Agregar_Pokeparadas(CPokeparada *oNuevo)
{
	ArrPokeparadas.push_back(oNuevo);
}
void CArrLugares::Agregar_Gimnasios(CGimnasio *oNuevo)
{
	ArrGimnasios.push_back(oNuevo);
}
void CArrLugares::Agregar_Pokemon(CPokemon *oNuevo)
{
	ArrPokemon.push_back(oNuevo);
}
void CArrLugares::Eliminar_No_Activadas()
{
	for (int i = 0; i < ArrPokeparadas.size(); i++)
	{
		if (ArrPokeparadas[i]->Get_activar() == false)
		{
			ArrPokeparadas.erase(ArrPokeparadas.begin() + i);
		}
	}

	for (int i = 0; i < ArrGimnasios.size(); i++)
	{
		if (ArrGimnasios[i]->Get_activar() == false)
		{
			ArrGimnasios.erase(ArrGimnasios.begin() + i);
		}
	}
}

void CArrLugares::Eliminar_Activadas()
{
	for (int i = 0; i < ArrPokeparadas.size(); i++)
	{
		if (ArrPokeparadas[i]->Get_activar() == true)
		{
			ArrPokeparadas.erase(ArrPokeparadas.begin() + i);
		}
	}

	for (int i = 0; i < ArrGimnasios.size(); i++)
	{
		if (ArrGimnasios[i]->Get_activar() == true)
		{
			ArrGimnasios.erase(ArrGimnasios.begin() + i);
		}
	}
}
void CArrLugares::Eliminar_Pokemons()
{
	ArrPokemon.empty();
}
CPokeparada *CArrLugares::Get_Pokeparada_Activa()
{
	CPokeparada *oAux;

	for (int i = 0; i < ArrPokeparadas.size(); i++)
	{
		if (ArrPokeparadas[i]->Get_activar() == true)
		{
			oAux = ArrPokeparadas[i];
		}
	}

	return oAux;
}

CGimnasio *CArrLugares::Get_Gimnasio_Activo()
{
	CGimnasio *oAux;

	for (int i = 0; i < ArrGimnasios.size(); i++)
	{
		if (ArrGimnasios[i]->Get_activar() == true)
		{
			oAux = ArrGimnasios[i];
		}
	}

	return oAux;
}

CPokemon *CArrLugares::Get_Pokemon_Activo()
{
	CPokemon *oAux;

	for (int i = 0; i < ArrPokemon.size(); i++)
	{
		if (ArrPokemon[i]->Get_CapturaActivada() == true)
		{
			oAux = ArrPokemon[i];
		}
	}

	return oAux;
}

vector<CPokemon*> CArrLugares::Get_ArrPokemon()
{
	return ArrPokemon;
}

bool CArrLugares::GetPActiva(){ return PokeparadaActiva; }
void CArrLugares::SetPActiva(bool value){ PokeparadaActiva = value; }
bool CArrLugares::GetGActivo(){ return GimnasioActivo; }
void CArrLugares::SetGActivo(bool value){ GimnasioActivo = value; }
bool CArrLugares::GetPOActivo(){ return PokemonActivo; }
void CArrLugares::SetPOActivo(bool value){ PokemonActivo = value; }