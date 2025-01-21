#pragma once
#include "stdafx.h"
#include "Gimnasio.h"
#include "Pokemon.h"
#include "Pokemon_Tipo.h"
#include "Pokeparada.h"

class CArrLugares
{
private:

	bool PokeparadaActiva;
	bool GimnasioActivo;
	bool PokemonActivo;

	vector<CPokeparada*> ArrPokeparadas;
	vector<CGimnasio*> ArrGimnasios;
	vector<CPokemon*> ArrPokemon;

public:
	CArrLugares();
	~CArrLugares();

	void Agregar_Pokeparadas(CPokeparada *oNuevo);
	void Agregar_Gimnasios(CGimnasio *oNuevo);
	void Agregar_Pokemon(CPokemon *oNuevo);
	void Eliminar_No_Activadas(); 
	void Eliminar_Activadas();
	void Eliminar_Pokemons();
	CPokeparada *Get_Pokeparada_Activa();
	CGimnasio *Get_Gimnasio_Activo();
	CPokemon *Get_Pokemon_Activo();
	bool GetPActiva();
	void SetPActiva(bool value);
	bool GetGActivo();
	void SetGActivo(bool value);
	bool GetPOActivo();
	void SetPOActivo(bool value);
	vector<CPokemon*> Get_ArrPokemon();
};

