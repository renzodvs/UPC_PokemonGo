#pragma once
class CGimnasio
{
private:

	int x;
	int y;
	bool activar;

public:
	CGimnasio(int x, int y);
	~CGimnasio();

	int Get_x();
	int Get_y();
	bool Get_activar();
	void Set_activar(bool value);
};

