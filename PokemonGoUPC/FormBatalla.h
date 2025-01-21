#pragma once
#include "stdafx.h"
#include "Pokemon_Tipo.h"
#include "Pokemon.h"
#include "ControlPokemon.h"
#include "Batalla.h"
#include "Juego.h"

namespace PokemonGoUPC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormBatalla
	/// </summary>
	public ref class FormBatalla : public System::Windows::Forms::Form
	{
	private:

		CJuego *oJuegoAux;
		CPokemon *Mi_Pokemon;
		CPokemon *Pokemon_Enemigo;
		CBatalla *oBP = new CBatalla();
		Random ^rand = gcnew Random(DateTime::Now.Ticks);

		Bitmap ^imgFondoMapa = gcnew Bitmap("fondo batalla.png");
		Bitmap ^imgPiso = gcnew Bitmap("Piso.png");
		Bitmap ^imgCajaVida = gcnew Bitmap("CajaVida.png");
		Bitmap ^imgVida = gcnew Bitmap("VidaLLena.png");
		Bitmap ^Especial = gcnew Bitmap("BarraEspecial.png");

		Bitmap ^Especial_Fuego = gcnew Bitmap("Especial Fuego.png");
		Bitmap ^Especial_Agua = gcnew Bitmap("Especial Agua.png");
		Bitmap ^Especial_Electrico = gcnew Bitmap("Especial Electrico.png");
		Bitmap ^Especial_Normal = gcnew Bitmap("Especial Normal.png");
		Bitmap ^Especial_Tierra = gcnew Bitmap("Especial Tierra.png");
		Bitmap ^Especial_Psico = gcnew Bitmap("Especial Psicologico.png");

		Bitmap ^Img_Fondo_Eleccion = gcnew Bitmap("Fondo_Batalla_Eleccion.png");
		Bitmap ^Img_Fondo_Ganaste = gcnew Bitmap("GanasteBatalla.png");

		/////////////////////POKEMON//////////////////////

		Bitmap ^Img_Pikachu = gcnew Bitmap("Pikachu_GO.png");
		Bitmap ^Img_Raichu = gcnew Bitmap("Raichu.png");

		Bitmap ^Img_Bulbasur = gcnew Bitmap("Bulbasaur_GO.png");
		Bitmap ^Img_Ivysaur = gcnew Bitmap("Ivysaur.png");
		Bitmap ^Img_Venusaur = gcnew Bitmap("Venusaur.png");

		Bitmap ^Img_Charmander = gcnew Bitmap("Charmander_GO.png");
		Bitmap ^Img_Charmeleon = gcnew Bitmap("Charmeleon.png");
		Bitmap ^Img_Charizard = gcnew Bitmap("Charizard.png");

		Bitmap ^Img_Evee = gcnew Bitmap("Evee_GO.png");
		Bitmap ^Img_Flareon = gcnew Bitmap("Flareon.png");
		Bitmap ^Img_Jolteon = gcnew Bitmap("Jolteon.png");
		Bitmap ^Img_Vaporeon = gcnew Bitmap("Vaporeon.png");

		Bitmap ^Img_Abra = gcnew Bitmap("Abra_GO.png");
		Bitmap ^Img_Kadabra = gcnew Bitmap("Kadabra.png");
		Bitmap ^Img_Alakazam = gcnew Bitmap("Alakazam.png");

		Bitmap ^Img_Machop = gcnew Bitmap("Machop_GO.png");
		Bitmap ^Img_Machoke = gcnew Bitmap("Machoke.png");
		Bitmap ^Img_Machamp = gcnew Bitmap("Machamp.png");

		Bitmap ^Img_Magikarp = gcnew Bitmap("Magikarp_GO.png");
		Bitmap ^Img_Gyarados = gcnew Bitmap("Gyarados.png");

		Bitmap ^Img_Meowth = gcnew Bitmap("Meowth_GO.png");
		Bitmap ^Img_Persian = gcnew Bitmap("Persian.png");

		Bitmap ^Img_Onix = gcnew Bitmap("Onix_GO.png");
		Bitmap ^Img_Snorlax = gcnew Bitmap("Snorlax_GO.png");

		Bitmap ^Img_Squirtle = gcnew Bitmap("Squirtle_GO.png");
		Bitmap ^Img_Wartortle = gcnew Bitmap("Wartortle.png");
		Bitmap ^Img_Blastoise = gcnew Bitmap("Blastoise.png");

		Bitmap ^Img_Ekans = gcnew Bitmap("Ekans_GO.png");
		Bitmap ^Img_Arbok = gcnew Bitmap("Arbok.png");

		Bitmap ^Img_Pidgey = gcnew Bitmap("Pidgey_GO.png");
		Bitmap ^Img_Pidgeotto = gcnew Bitmap("Pidgeotto.png");
		Bitmap ^Img_Pidgeot = gcnew Bitmap("Pidgeot.png");

		SoundPlayer ^musica = gcnew SoundPlayer();

		Bitmap ^Imagen_Elegida2;
		Bitmap ^Imagen_Elegida;
		Bitmap ^AtaqueEspecial;
		

	private: System::Windows::Forms::Button^  btnAbandonar;

private: System::Windows::Forms::Label^  lbl12;
private: System::Windows::Forms::Label^  lbl11;
private: System::Windows::Forms::Label^  lbl10;
private: System::Windows::Forms::Label^  lbl9;
private: System::Windows::Forms::Label^  lbl8;
private: System::Windows::Forms::Label^  lbl7;
private: System::Windows::Forms::Label^  lbl6;
private: System::Windows::Forms::Label^  lbl5;
private: System::Windows::Forms::Label^  lbl4;
private: System::Windows::Forms::Label^  lbl3;
private: System::Windows::Forms::Label^  lbl2;
private: System::Windows::Forms::Label^  lbl1;
private: System::Windows::Forms::Button^  btnSiguiente;
private: System::Windows::Forms::Button^  btnAnterior;
private: System::Windows::Forms::Button^  btn11;
private: System::Windows::Forms::Button^  btn12;
private: System::Windows::Forms::Button^  btn10;
private: System::Windows::Forms::Button^  btn8;
private: System::Windows::Forms::Button^  btn9;
private: System::Windows::Forms::Button^  btn7;
private: System::Windows::Forms::Button^  btn5;
private: System::Windows::Forms::Button^  btn6;
private: System::Windows::Forms::Button^  btn4;
private: System::Windows::Forms::Button^  btn2;
private: System::Windows::Forms::Button^  btn3;
private: System::Windows::Forms::Button^  btn1;
private: System::Windows::Forms::Label^  lbln3;
private: System::Windows::Forms::Label^  lbln2;
private: System::Windows::Forms::Label^  lbln1;
private: System::Windows::Forms::Label^  lbln6;
private: System::Windows::Forms::Label^  lbln5;
private: System::Windows::Forms::Label^  lbln4;
private: System::Windows::Forms::Label^  lbln9;
private: System::Windows::Forms::Label^  lbln8;
private: System::Windows::Forms::Label^  lbln7;
private: System::Windows::Forms::Label^  lbln12;
private: System::Windows::Forms::Label^  lbln11;
private: System::Windows::Forms::Label^  lbln10;
private: System::Windows::Forms::Button^  btnLuchar;
private: System::Windows::Forms::Label^  lblBanner;
private: System::Windows::Forms::PictureBox^  MiPokemon;
private: System::Windows::Forms::PictureBox^  AtaqueEnemigo;

private: System::Windows::Forms::PictureBox^  MiAtaque;

private: System::Windows::Forms::PictureBox^  Enemigo;
private: System::Windows::Forms::Label^  lblBanner2;
private: System::Windows::Forms::Label^  lblCPEnemigo;
private: System::Windows::Forms::Label^  lblNombreEne;
private: System::Windows::Forms::Timer^  TGanaste;
private: System::Windows::Forms::Button^  btnAceptar;



private: System::Windows::Forms::Timer^  TEleccion;

	public:
		FormBatalla(CJuego *oJuego)
		{
			oJuegoAux = oJuego;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~FormBatalla()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  TBatalla;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->TBatalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnAbandonar = (gcnew System::Windows::Forms::Button());
			this->TEleccion = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->btnSiguiente = (gcnew System::Windows::Forms::Button());
			this->btnAnterior = (gcnew System::Windows::Forms::Button());
			this->btn11 = (gcnew System::Windows::Forms::Button());
			this->btn12 = (gcnew System::Windows::Forms::Button());
			this->btn10 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->lbln3 = (gcnew System::Windows::Forms::Label());
			this->lbln2 = (gcnew System::Windows::Forms::Label());
			this->lbln1 = (gcnew System::Windows::Forms::Label());
			this->lbln6 = (gcnew System::Windows::Forms::Label());
			this->lbln5 = (gcnew System::Windows::Forms::Label());
			this->lbln4 = (gcnew System::Windows::Forms::Label());
			this->lbln9 = (gcnew System::Windows::Forms::Label());
			this->lbln8 = (gcnew System::Windows::Forms::Label());
			this->lbln7 = (gcnew System::Windows::Forms::Label());
			this->lbln12 = (gcnew System::Windows::Forms::Label());
			this->lbln11 = (gcnew System::Windows::Forms::Label());
			this->lbln10 = (gcnew System::Windows::Forms::Label());
			this->btnLuchar = (gcnew System::Windows::Forms::Button());
			this->lblBanner = (gcnew System::Windows::Forms::Label());
			this->MiPokemon = (gcnew System::Windows::Forms::PictureBox());
			this->AtaqueEnemigo = (gcnew System::Windows::Forms::PictureBox());
			this->MiAtaque = (gcnew System::Windows::Forms::PictureBox());
			this->Enemigo = (gcnew System::Windows::Forms::PictureBox());
			this->lblBanner2 = (gcnew System::Windows::Forms::Label());
			this->lblCPEnemigo = (gcnew System::Windows::Forms::Label());
			this->lblNombreEne = (gcnew System::Windows::Forms::Label());
			this->TGanaste = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MiPokemon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AtaqueEnemigo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MiAtaque))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Enemigo))->BeginInit();
			this->SuspendLayout();
			// 
			// TBatalla
			// 
			this->TBatalla->Tick += gcnew System::EventHandler(this, &FormBatalla::TBatalla_Tick);
			// 
			// btnAbandonar
			// 
			this->btnAbandonar->BackColor = System::Drawing::Color::White;
			this->btnAbandonar->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnAbandonar->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnAbandonar->FlatAppearance->BorderSize = 3;
			this->btnAbandonar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnAbandonar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnAbandonar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbandonar->Font = (gcnew System::Drawing::Font(L"AR CENA", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbandonar->Location = System::Drawing::Point(428, 487);
			this->btnAbandonar->Name = L"btnAbandonar";
			this->btnAbandonar->Size = System::Drawing::Size(160, 44);
			this->btnAbandonar->TabIndex = 4;
			this->btnAbandonar->Text = L"ABANDONAR";
			this->btnAbandonar->UseVisualStyleBackColor = false;
			this->btnAbandonar->Click += gcnew System::EventHandler(this, &FormBatalla::btnSalir_Click);
			// 
			// TEleccion
			// 
			this->TEleccion->Enabled = true;
			this->TEleccion->Tick += gcnew System::EventHandler(this, &FormBatalla::TEleccion_Tick);
			// 
			// lbl12
			// 
			this->lbl12->BackColor = System::Drawing::Color::White;
			this->lbl12->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl12->Location = System::Drawing::Point(264, 490);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(90, 23);
			this->lbl12->TabIndex = 206;
			this->lbl12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl12->Visible = false;
			// 
			// lbl11
			// 
			this->lbl11->BackColor = System::Drawing::Color::White;
			this->lbl11->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl11->Location = System::Drawing::Point(151, 489);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(90, 23);
			this->lbl11->TabIndex = 205;
			this->lbl11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl11->Visible = false;
			// 
			// lbl10
			// 
			this->lbl10->BackColor = System::Drawing::Color::White;
			this->lbl10->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl10->Location = System::Drawing::Point(38, 488);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(90, 23);
			this->lbl10->TabIndex = 204;
			this->lbl10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl10->Visible = false;
			// 
			// lbl9
			// 
			this->lbl9->BackColor = System::Drawing::Color::White;
			this->lbl9->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl9->Location = System::Drawing::Point(264, 374);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(90, 23);
			this->lbl9->TabIndex = 203;
			this->lbl9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl9->Visible = false;
			// 
			// lbl8
			// 
			this->lbl8->BackColor = System::Drawing::Color::White;
			this->lbl8->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl8->Location = System::Drawing::Point(151, 373);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(90, 23);
			this->lbl8->TabIndex = 202;
			this->lbl8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl8->Visible = false;
			// 
			// lbl7
			// 
			this->lbl7->BackColor = System::Drawing::Color::White;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl7->Location = System::Drawing::Point(38, 373);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(90, 23);
			this->lbl7->TabIndex = 201;
			this->lbl7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl7->Visible = false;
			// 
			// lbl6
			// 
			this->lbl6->BackColor = System::Drawing::Color::White;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl6->Location = System::Drawing::Point(264, 258);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(90, 23);
			this->lbl6->TabIndex = 200;
			this->lbl6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl6->Visible = false;
			// 
			// lbl5
			// 
			this->lbl5->BackColor = System::Drawing::Color::White;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl5->Location = System::Drawing::Point(151, 258);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(90, 23);
			this->lbl5->TabIndex = 199;
			this->lbl5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl5->Visible = false;
			// 
			// lbl4
			// 
			this->lbl4->BackColor = System::Drawing::Color::White;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl4->Location = System::Drawing::Point(38, 258);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(90, 23);
			this->lbl4->TabIndex = 198;
			this->lbl4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl4->Visible = false;
			// 
			// lbl3
			// 
			this->lbl3->BackColor = System::Drawing::Color::White;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl3->Location = System::Drawing::Point(264, 145);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(90, 23);
			this->lbl3->TabIndex = 197;
			this->lbl3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl3->Visible = false;
			// 
			// lbl2
			// 
			this->lbl2->BackColor = System::Drawing::Color::White;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl2->Location = System::Drawing::Point(151, 145);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(90, 23);
			this->lbl2->TabIndex = 196;
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl2->Visible = false;
			// 
			// lbl1
			// 
			this->lbl1->BackColor = System::Drawing::Color::White;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl1->Location = System::Drawing::Point(38, 145);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(90, 23);
			this->lbl1->TabIndex = 195;
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl1->Visible = false;
			// 
			// btnSiguiente
			// 
			this->btnSiguiente->BackColor = System::Drawing::Color::White;
			this->btnSiguiente->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSiguiente->Enabled = false;
			this->btnSiguiente->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnSiguiente->FlatAppearance->BorderSize = 2;
			this->btnSiguiente->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnSiguiente->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnSiguiente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSiguiente->Font = (gcnew System::Drawing::Font(L"AR CENA", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSiguiente->Location = System::Drawing::Point(316, 518);
			this->btnSiguiente->Name = L"btnSiguiente";
			this->btnSiguiente->Size = System::Drawing::Size(38, 26);
			this->btnSiguiente->TabIndex = 194;
			this->btnSiguiente->Text = L"->";
			this->btnSiguiente->UseVisualStyleBackColor = false;
			this->btnSiguiente->Visible = false;
			this->btnSiguiente->Click += gcnew System::EventHandler(this, &FormBatalla::btnSiguiente_Click);
			// 
			// btnAnterior
			// 
			this->btnAnterior->BackColor = System::Drawing::Color::White;
			this->btnAnterior->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAnterior->Enabled = false;
			this->btnAnterior->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnAnterior->FlatAppearance->BorderSize = 2;
			this->btnAnterior->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnAnterior->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnAnterior->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnterior->Font = (gcnew System::Drawing::Font(L"AR CENA", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnterior->Location = System::Drawing::Point(38, 518);
			this->btnAnterior->Name = L"btnAnterior";
			this->btnAnterior->Size = System::Drawing::Size(38, 26);
			this->btnAnterior->TabIndex = 193;
			this->btnAnterior->Text = L"<-";
			this->btnAnterior->UseVisualStyleBackColor = false;
			this->btnAnterior->Visible = false;
			this->btnAnterior->Click += gcnew System::EventHandler(this, &FormBatalla::btnAnterior_Click);
			// 
			// btn11
			// 
			this->btn11->BackColor = System::Drawing::Color::White;
			this->btn11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn11->FlatAppearance->BorderSize = 0;
			this->btn11->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn11->Location = System::Drawing::Point(161, 417);
			this->btn11->Name = L"btn11";
			this->btn11->Size = System::Drawing::Size(70, 70);
			this->btn11->TabIndex = 192;
			this->btn11->UseVisualStyleBackColor = false;
			this->btn11->Visible = false;
			this->btn11->Click += gcnew System::EventHandler(this, &FormBatalla::btn11_Click);
			// 
			// btn12
			// 
			this->btn12->BackColor = System::Drawing::Color::White;
			this->btn12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn12->FlatAppearance->BorderSize = 0;
			this->btn12->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn12->Location = System::Drawing::Point(274, 419);
			this->btn12->Name = L"btn12";
			this->btn12->Size = System::Drawing::Size(70, 70);
			this->btn12->TabIndex = 191;
			this->btn12->UseVisualStyleBackColor = false;
			this->btn12->Visible = false;
			this->btn12->Click += gcnew System::EventHandler(this, &FormBatalla::btn12_Click);
			// 
			// btn10
			// 
			this->btn10->BackColor = System::Drawing::Color::White;
			this->btn10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn10->FlatAppearance->BorderSize = 0;
			this->btn10->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn10->Location = System::Drawing::Point(48, 417);
			this->btn10->Name = L"btn10";
			this->btn10->Size = System::Drawing::Size(70, 70);
			this->btn10->TabIndex = 190;
			this->btn10->UseVisualStyleBackColor = false;
			this->btn10->Visible = false;
			this->btn10->Click += gcnew System::EventHandler(this, &FormBatalla::btn10_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Location = System::Drawing::Point(161, 302);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(70, 70);
			this->btn8->TabIndex = 189;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Visible = false;
			this->btn8->Click += gcnew System::EventHandler(this, &FormBatalla::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Location = System::Drawing::Point(274, 303);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(70, 70);
			this->btn9->TabIndex = 188;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Visible = false;
			this->btn9->Click += gcnew System::EventHandler(this, &FormBatalla::btn9_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Location = System::Drawing::Point(48, 302);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(70, 70);
			this->btn7->TabIndex = 187;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Visible = false;
			this->btn7->Click += gcnew System::EventHandler(this, &FormBatalla::btn7_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Location = System::Drawing::Point(161, 188);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(70, 70);
			this->btn5->TabIndex = 186;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Visible = false;
			this->btn5->Click += gcnew System::EventHandler(this, &FormBatalla::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Location = System::Drawing::Point(274, 188);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(70, 70);
			this->btn6->TabIndex = 185;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Visible = false;
			this->btn6->Click += gcnew System::EventHandler(this, &FormBatalla::btn6_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Location = System::Drawing::Point(48, 188);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(70, 70);
			this->btn4->TabIndex = 184;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Visible = false;
			this->btn4->Click += gcnew System::EventHandler(this, &FormBatalla::btn4_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Location = System::Drawing::Point(161, 74);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(70, 70);
			this->btn2->TabIndex = 183;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Visible = false;
			this->btn2->Click += gcnew System::EventHandler(this, &FormBatalla::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Location = System::Drawing::Point(274, 74);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(70, 70);
			this->btn3->TabIndex = 182;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Visible = false;
			this->btn3->Click += gcnew System::EventHandler(this, &FormBatalla::btn3_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Location = System::Drawing::Point(48, 74);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(70, 70);
			this->btn1->TabIndex = 181;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Visible = false;
			this->btn1->Click += gcnew System::EventHandler(this, &FormBatalla::btn1_Click);
			// 
			// lbln3
			// 
			this->lbln3->BackColor = System::Drawing::Color::White;
			this->lbln3->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln3->Location = System::Drawing::Point(264, 54);
			this->lbln3->Name = L"lbln3";
			this->lbln3->Size = System::Drawing::Size(90, 23);
			this->lbln3->TabIndex = 209;
			this->lbln3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln3->Visible = false;
			// 
			// lbln2
			// 
			this->lbln2->BackColor = System::Drawing::Color::White;
			this->lbln2->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln2->Location = System::Drawing::Point(151, 54);
			this->lbln2->Name = L"lbln2";
			this->lbln2->Size = System::Drawing::Size(90, 23);
			this->lbln2->TabIndex = 208;
			this->lbln2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln2->Visible = false;
			// 
			// lbln1
			// 
			this->lbln1->BackColor = System::Drawing::Color::White;
			this->lbln1->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln1->Location = System::Drawing::Point(38, 54);
			this->lbln1->Name = L"lbln1";
			this->lbln1->Size = System::Drawing::Size(90, 23);
			this->lbln1->TabIndex = 207;
			this->lbln1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln1->Visible = false;
			// 
			// lbln6
			// 
			this->lbln6->BackColor = System::Drawing::Color::White;
			this->lbln6->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln6->Location = System::Drawing::Point(264, 168);
			this->lbln6->Name = L"lbln6";
			this->lbln6->Size = System::Drawing::Size(90, 23);
			this->lbln6->TabIndex = 212;
			this->lbln6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln6->Visible = false;
			// 
			// lbln5
			// 
			this->lbln5->BackColor = System::Drawing::Color::White;
			this->lbln5->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln5->Location = System::Drawing::Point(151, 168);
			this->lbln5->Name = L"lbln5";
			this->lbln5->Size = System::Drawing::Size(90, 23);
			this->lbln5->TabIndex = 211;
			this->lbln5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln5->Visible = false;
			// 
			// lbln4
			// 
			this->lbln4->BackColor = System::Drawing::Color::White;
			this->lbln4->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln4->Location = System::Drawing::Point(38, 168);
			this->lbln4->Name = L"lbln4";
			this->lbln4->Size = System::Drawing::Size(90, 23);
			this->lbln4->TabIndex = 210;
			this->lbln4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln4->Visible = false;
			// 
			// lbln9
			// 
			this->lbln9->BackColor = System::Drawing::Color::White;
			this->lbln9->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln9->Location = System::Drawing::Point(264, 283);
			this->lbln9->Name = L"lbln9";
			this->lbln9->Size = System::Drawing::Size(90, 23);
			this->lbln9->TabIndex = 215;
			this->lbln9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln9->Visible = false;
			// 
			// lbln8
			// 
			this->lbln8->BackColor = System::Drawing::Color::White;
			this->lbln8->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln8->Location = System::Drawing::Point(151, 283);
			this->lbln8->Name = L"lbln8";
			this->lbln8->Size = System::Drawing::Size(90, 23);
			this->lbln8->TabIndex = 214;
			this->lbln8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln8->Visible = false;
			// 
			// lbln7
			// 
			this->lbln7->BackColor = System::Drawing::Color::White;
			this->lbln7->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln7->Location = System::Drawing::Point(38, 283);
			this->lbln7->Name = L"lbln7";
			this->lbln7->Size = System::Drawing::Size(90, 23);
			this->lbln7->TabIndex = 213;
			this->lbln7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln7->Visible = false;
			// 
			// lbln12
			// 
			this->lbln12->BackColor = System::Drawing::Color::White;
			this->lbln12->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln12->Location = System::Drawing::Point(264, 399);
			this->lbln12->Name = L"lbln12";
			this->lbln12->Size = System::Drawing::Size(90, 23);
			this->lbln12->TabIndex = 218;
			this->lbln12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln12->Visible = false;
			// 
			// lbln11
			// 
			this->lbln11->BackColor = System::Drawing::Color::White;
			this->lbln11->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln11->Location = System::Drawing::Point(151, 397);
			this->lbln11->Name = L"lbln11";
			this->lbln11->Size = System::Drawing::Size(90, 23);
			this->lbln11->TabIndex = 217;
			this->lbln11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln11->Visible = false;
			// 
			// lbln10
			// 
			this->lbln10->BackColor = System::Drawing::Color::White;
			this->lbln10->Font = (gcnew System::Drawing::Font(L"AR CENA", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbln10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbln10->Location = System::Drawing::Point(38, 397);
			this->lbln10->Name = L"lbln10";
			this->lbln10->Size = System::Drawing::Size(90, 23);
			this->lbln10->TabIndex = 216;
			this->lbln10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbln10->Visible = false;
			// 
			// btnLuchar
			// 
			this->btnLuchar->BackColor = System::Drawing::Color::White;
			this->btnLuchar->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnLuchar->Enabled = false;
			this->btnLuchar->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnLuchar->FlatAppearance->BorderSize = 3;
			this->btnLuchar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnLuchar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnLuchar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLuchar->Font = (gcnew System::Drawing::Font(L"AR CENA", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLuchar->Location = System::Drawing::Point(428, 420);
			this->btnLuchar->Name = L"btnLuchar";
			this->btnLuchar->Size = System::Drawing::Size(160, 44);
			this->btnLuchar->TabIndex = 219;
			this->btnLuchar->Text = L"¡A LUCHAR!";
			this->btnLuchar->UseVisualStyleBackColor = false;
			this->btnLuchar->Click += gcnew System::EventHandler(this, &FormBatalla::btnLuchar_Click);
			// 
			// lblBanner
			// 
			this->lblBanner->BackColor = System::Drawing::Color::White;
			this->lblBanner->Font = (gcnew System::Drawing::Font(L"AR CENA", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBanner->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblBanner->Location = System::Drawing::Point(124, 27);
			this->lblBanner->Name = L"lblBanner";
			this->lblBanner->Size = System::Drawing::Size(165, 31);
			this->lblBanner->TabIndex = 220;
			this->lblBanner->Text = L"Elije tu pokemon";
			this->lblBanner->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblBanner->Visible = false;
			// 
			// MiPokemon
			// 
			this->MiPokemon->BackColor = System::Drawing::Color::Transparent;
			this->MiPokemon->Location = System::Drawing::Point(532, 318);
			this->MiPokemon->Name = L"MiPokemon";
			this->MiPokemon->Size = System::Drawing::Size(1, 1);
			this->MiPokemon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->MiPokemon->TabIndex = 221;
			this->MiPokemon->TabStop = false;
			this->MiPokemon->Visible = false;
			// 
			// AtaqueEnemigo
			// 
			this->AtaqueEnemigo->Location = System::Drawing::Point(539, 303);
			this->AtaqueEnemigo->Name = L"AtaqueEnemigo";
			this->AtaqueEnemigo->Size = System::Drawing::Size(1, 1);
			this->AtaqueEnemigo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->AtaqueEnemigo->TabIndex = 222;
			this->AtaqueEnemigo->TabStop = false;
			// 
			// MiAtaque
			// 
			this->MiAtaque->Location = System::Drawing::Point(557, 303);
			this->MiAtaque->Name = L"MiAtaque";
			this->MiAtaque->Size = System::Drawing::Size(1, 1);
			this->MiAtaque->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->MiAtaque->TabIndex = 223;
			this->MiAtaque->TabStop = false;
			// 
			// Enemigo
			// 
			this->Enemigo->BackColor = System::Drawing::Color::Transparent;
			this->Enemigo->Location = System::Drawing::Point(557, 318);
			this->Enemigo->Name = L"Enemigo";
			this->Enemigo->Size = System::Drawing::Size(1, 1);
			this->Enemigo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Enemigo->TabIndex = 224;
			this->Enemigo->TabStop = false;
			this->Enemigo->Visible = false;
			// 
			// lblBanner2
			// 
			this->lblBanner2->BackColor = System::Drawing::Color::White;
			this->lblBanner2->Font = (gcnew System::Drawing::Font(L"AR CENA", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBanner2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblBanner2->Location = System::Drawing::Point(439, 64);
			this->lblBanner2->Name = L"lblBanner2";
			this->lblBanner2->Size = System::Drawing::Size(165, 31);
			this->lblBanner2->TabIndex = 225;
			this->lblBanner2->Text = L"Tu Enemigo";
			this->lblBanner2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblBanner2->Visible = false;
			// 
			// lblCPEnemigo
			// 
			this->lblCPEnemigo->BackColor = System::Drawing::Color::White;
			this->lblCPEnemigo->Font = (gcnew System::Drawing::Font(L"AR CENA", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCPEnemigo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblCPEnemigo->Location = System::Drawing::Point(439, 320);
			this->lblCPEnemigo->Name = L"lblCPEnemigo";
			this->lblCPEnemigo->Size = System::Drawing::Size(165, 31);
			this->lblCPEnemigo->TabIndex = 226;
			this->lblCPEnemigo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblCPEnemigo->Visible = false;
			// 
			// lblNombreEne
			// 
			this->lblNombreEne->BackColor = System::Drawing::Color::White;
			this->lblNombreEne->Font = (gcnew System::Drawing::Font(L"AR CENA", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreEne->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblNombreEne->Location = System::Drawing::Point(439, 267);
			this->lblNombreEne->Name = L"lblNombreEne";
			this->lblNombreEne->Size = System::Drawing::Size(165, 31);
			this->lblNombreEne->TabIndex = 227;
			this->lblNombreEne->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblNombreEne->Visible = false;
			// 
			// TGanaste
			// 
			this->TGanaste->Tick += gcnew System::EventHandler(this, &FormBatalla::TGanaste_Tick);
			// 
			// btnAceptar
			// 
			this->btnAceptar->BackColor = System::Drawing::Color::White;
			this->btnAceptar->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnAceptar->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnAceptar->FlatAppearance->BorderSize = 3;
			this->btnAceptar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnAceptar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnAceptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAceptar->Font = (gcnew System::Drawing::Font(L"AR CENA", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAceptar->Location = System::Drawing::Point(247, 501);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(160, 44);
			this->btnAceptar->TabIndex = 228;
			this->btnAceptar->Text = L"ACEPTAR";
			this->btnAceptar->UseVisualStyleBackColor = false;
			this->btnAceptar->Visible = false;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &FormBatalla::btnAceptar_Click);
			// 
			// FormBatalla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 580);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->lblNombreEne);
			this->Controls->Add(this->lblCPEnemigo);
			this->Controls->Add(this->lblBanner2);
			this->Controls->Add(this->Enemigo);
			this->Controls->Add(this->MiAtaque);
			this->Controls->Add(this->AtaqueEnemigo);
			this->Controls->Add(this->MiPokemon);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->lbln1);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->lbln3);
			this->Controls->Add(this->lbln2);
			this->Controls->Add(this->lblBanner);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn12);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->lbl5);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl12);
			this->Controls->Add(this->lbl11);
			this->Controls->Add(this->lbl10);
			this->Controls->Add(this->lbl9);
			this->Controls->Add(this->lbl8);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->lbln12);
			this->Controls->Add(this->lbln11);
			this->Controls->Add(this->lbln10);
			this->Controls->Add(this->lbln9);
			this->Controls->Add(this->lbln8);
			this->Controls->Add(this->lbln7);
			this->Controls->Add(this->lbln6);
			this->Controls->Add(this->lbln5);
			this->Controls->Add(this->lbln4);
			this->Controls->Add(this->btn11);
			this->Controls->Add(this->btn10);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnSiguiente);
			this->Controls->Add(this->btnAnterior);
			this->Controls->Add(this->btnAbandonar);
			this->Controls->Add(this->btnLuchar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(640, 580);
			this->MinimumSize = System::Drawing::Size(640, 580);
			this->Name = L"FormBatalla";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormBatalla";
			this->Load += gcnew System::EventHandler(this, &FormBatalla::FormBatalla_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormBatalla::Esquivar);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &FormBatalla::SoltarTecla);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FormBatalla::Atacar);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MiPokemon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AtaqueEnemigo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MiAtaque))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Enemigo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		public: void SetoJuego(CJuego *oJuego)
		{
			oJuego = oJuegoAux;
		}


		 int paginas = 0;
		 int Npagina = 1;
		 int IndicePagina = 0;
		 int IndicePokemon = 0;
		 bool luchar = false;
		 bool ActivarMusica = true;
		 bool PlayMusica = false;

		 void MusicaBatalla()
		 {
			 musica->Stop();
			 musica->SoundLocation = "BATALLA.wav";
			 musica->LoadAsync();
			 musica->PlayLooping();
			 PlayMusica = true;
		 }

		 void Ganaste()
		 {
			 musica->Stop();
			 musica->SoundLocation = "MusicaCapturado.wav";
			 musica->LoadAsync();
			 musica->PlayLooping();
			 PlayMusica = true;
		 }

		 int CalculaNPaginas(int cantidad)
		 {
			 double calculo = (cantidad / (12 * 1.0));
			 int num;

			 if (calculo <= 1.0){ num = 1; }
			 else if (calculo > 1.0 && calculo <= 2.0){ num = 2; }
			 else if (calculo > 2.0 && calculo <= 3.0){ num = 3; }
			 else if (calculo > 3.0 && calculo <= 4.0){ num = 4; }
			 else if (calculo > 4.0 && calculo <= 5.0){ num = 5; }
			 else if (calculo > 5.0 && calculo <= 6.0){ num = 6; }
			 else if (calculo > 6.0 && calculo <= 7.0){ num = 7; }
			 else if (calculo > 7.0 && calculo <= 8.0){ num = 8; }
			 else if (calculo > 8.0 && calculo <= 9.0){ num = 9; }
			 else if (calculo > 9.0 && calculo <= 10.0){ num = 10; }
			 else if (calculo > 10.0 && calculo <= 11.0){ num = 11; }
			 else if (calculo > 11.0 && calculo <= 12.0){ num = 12; }
			 else if (calculo > 12.0 && calculo <= 13.0){ num = 13; }

			 return num;
		 }

		 void Set_Ataque_Especial(string tipo)
		 {
			 if (tipo == "PIK") { AtaqueEspecial = Especial_Electrico; }
			 else if (tipo == "RAI"){ AtaqueEspecial = Especial_Electrico; }
			 else if (tipo == "BUL"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "IVY"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "VEN"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "SQU"){ AtaqueEspecial = Especial_Agua; }
			 else if (tipo == "WAR"){ AtaqueEspecial = Especial_Agua; }
			 else if (tipo == "BLA"){ AtaqueEspecial = Especial_Agua; }
			 else if (tipo == "CHA"){ AtaqueEspecial = Especial_Fuego; }
			 else if (tipo == "CHAR"){ AtaqueEspecial = Especial_Fuego; }
			 else if (tipo == "CHARI"){ AtaqueEspecial = Especial_Fuego; }
			 else if (tipo == "ABR"){ AtaqueEspecial = Especial_Psico; }
			 else if (tipo == "KAD"){ AtaqueEspecial = Especial_Psico; }
			 else if (tipo == "ALA"){ AtaqueEspecial = Especial_Psico; }
			 else if (tipo == "SNO"){ AtaqueEspecial = Especial_Tierra; }
			 else if (tipo == "EKA"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "ARB"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "ONI"){ AtaqueEspecial = Especial_Tierra; }
			 else if (tipo == "EVE"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "VAP"){ AtaqueEspecial = Especial_Agua; }
			 else if (tipo == "JOL"){ AtaqueEspecial = Especial_Electrico; }
			 else if (tipo == "FLA"){ AtaqueEspecial = Especial_Fuego; }
			 else if (tipo == "MAG"){ AtaqueEspecial = Especial_Agua; }
			 else if (tipo == "GYA"){ AtaqueEspecial = Especial_Agua; }
			 else if (tipo == "MEO"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "PER"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "MAC"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "MACH"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "MACHA"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "PID"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "PIDG"){ AtaqueEspecial = Especial_Normal; }
			 else if (tipo == "PIDGE"){ AtaqueEspecial = Especial_Normal; }
		 }

		void Set_Imagen_Enemigo(string tipo)
		 {
			 if (tipo == "PIK") { Enemigo->Image = Image::FromFile("Pikachu_XY.gif"); }
			 else if (tipo == "RAI"){ Enemigo->Image = Image::FromFile("raichu.gif"); }
			 else if (tipo == "BUL"){ Enemigo->Image = Image::FromFile("Bulbasaur_XY.gif"); }
			 else if (tipo == "IVY"){ Enemigo->Image = Image::FromFile("ivysaur.gif"); }
			 else if (tipo == "VEN"){ Enemigo->Image = Image::FromFile("venusaur.gif"); }
			 else if (tipo == "SQU"){ Enemigo->Image = Image::FromFile("Squirtle_XY.gif"); }
			 else if (tipo == "WAR"){ Enemigo->Image = Image::FromFile("wartortle.gif"); }
			 else if (tipo == "BLA"){ Enemigo->Image = Image::FromFile("blastoise.gif"); }
			 else if (tipo == "CHA"){ Enemigo->Image = Image::FromFile("Charmander_XY.gif"); }
			 else if (tipo == "CHAR"){ Enemigo->Image = Image::FromFile("charmeleon.gif"); }
			 else if (tipo == "CHARI"){ Enemigo->Image = Image::FromFile("charizard.gif"); }
			 else if (tipo == "ABR"){ Enemigo->Image = Image::FromFile("Abra_XY.gif"); }
			 else if (tipo == "KAD"){ Enemigo->Image = Image::FromFile("kadabra.gif"); }
			 else if (tipo == "ALA"){ Enemigo->Image = Image::FromFile("alakazam.gif"); }
			 else if (tipo == "SNO"){ Enemigo->Image = Image::FromFile("Snorlax_XY.gif"); }
			 else if (tipo == "EKA"){ Enemigo->Image = Image::FromFile("Ekans_XY.gif"); }
			 else if (tipo == "ARB"){ Enemigo->Image = Image::FromFile("arbok.gif"); }
			 else if (tipo == "ONI"){ Enemigo->Image = Image::FromFile("Onix_XY.gif"); }
			 else if (tipo == "EVE"){ Enemigo->Image = Image::FromFile("Eevee_XY.gif"); }
			 else if (tipo == "VAP"){ Enemigo->Image = Image::FromFile("vaporeon.gif"); }
			 else if (tipo == "JOL"){ Enemigo->Image = Image::FromFile("jolteon.gif"); }
			 else if (tipo == "FLA"){ Enemigo->Image = Image::FromFile("flareon.gif"); }
			 else if (tipo == "MAG"){ Enemigo->Image = Image::FromFile("Magikarp_XY.gif"); }
			 else if (tipo == "GYA"){ Enemigo->Image = Image::FromFile("gyarados.gif"); }
			 else if (tipo == "MEO"){ Enemigo->Image = Image::FromFile("Meowth_XY.gif"); }
			 else if (tipo == "PER"){ Enemigo->Image = Image::FromFile("persian.gif"); }
			 else if (tipo == "MAC"){ Enemigo->Image = Image::FromFile("Machop_XY.gif"); }
			 else if (tipo == "MACH"){ Enemigo->Image = Image::FromFile("machoke.gif"); }
			 else if (tipo == "MACHA"){ Enemigo->Image = Image::FromFile("machamp.gif"); }
			 else if (tipo == "PID"){ Enemigo->Image = Image::FromFile("pidgey.gif"); }
			 else if (tipo == "PIDG"){ Enemigo->Image = Image::FromFile("pidgeotto.gif"); }
			 else if (tipo == "PIDGE"){ Enemigo->Image = Image::FromFile("pidgeot.gif"); }
		 }

		void Set_Mi_Imagen(string tipo)
		 {
			 MiPokemon->Image = Image::FromFile("M" + gcnew String(tipo.c_str()) + ".gif");
		 }

		 void Set_Mi_Ataque(string tipo)
		 {
			 if (tipo == "PIK") { MiAtaque->Image = Image::FromFile("Ataque-Electrico2.gif"); }
			 else if (tipo == "RAI"){ MiAtaque->Image = Image::FromFile("Ataque-Electrico.gif"); }
			 else if (tipo == "BUL"){ MiAtaque->Image = Image::FromFile("Ataque-planta.gif"); }
			 else if (tipo == "IVY"){ MiAtaque->Image = Image::FromFile("Ataque-planta.gif"); }
			 else if (tipo == "VEN"){ MiAtaque->Image = Image::FromFile("Ataque-planta.gif"); }
			 else if (tipo == "SQU"){ MiAtaque->Image = Image::FromFile("Ataque-Agua.gif"); }
			 else if (tipo == "WAR"){ MiAtaque->Image = Image::FromFile("Ataque-Agua2.gif"); }
			 else if (tipo == "BLA"){ MiAtaque->Image = Image::FromFile("Ataque-Agua2.gif"); }
			 else if (tipo == "CHA"){ MiAtaque->Image = Image::FromFile("Ataque-Fuego2.gif"); }
			 else if (tipo == "CHAR"){ MiAtaque->Image = Image::FromFile("Ataque-Fuego2.gif"); }
			 else if (tipo == "CHARI"){ MiAtaque->Image = Image::FromFile("Ataque-Fuego.gif"); }
			 else if (tipo == "ABR"){ MiAtaque->Image = Image::FromFile("Ataque-psicologico.gif"); }
			 else if (tipo == "KAD"){ MiAtaque->Image = Image::FromFile("Ataque-psicologico.gif"); }
			 else if (tipo == "ALA"){ MiAtaque->Image = Image::FromFile("Ataque-psicologico.gif"); }
			 else if (tipo == "SNO"){ MiAtaque->Image = Image::FromFile("Ataque-Roca.gif"); }
			 else if (tipo == "EKA"){ MiAtaque->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "ARB"){ MiAtaque->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "ONI"){ MiAtaque->Image = Image::FromFile("Ataque-Roca2.gif"); }
			 else if (tipo == "EVE"){ MiAtaque->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "VAP"){ MiAtaque->Image = Image::FromFile("Ataque-Agua.gif"); }
			 else if (tipo == "JOL"){ MiAtaque->Image = Image::FromFile("Ataque-Electrico2.gif"); }
			 else if (tipo == "FLA"){ MiAtaque->Image = Image::FromFile("Ataque-Fuego2.gif"); }
			 else if (tipo == "MAG"){ MiAtaque->Image = Image::FromFile("Ataque-Agua2.gif"); }
			 else if (tipo == "GYA"){ MiAtaque->Image = Image::FromFile("Ataque-Agua.gif"); }
			 else if (tipo == "MEO"){ MiAtaque->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "PER"){ MiAtaque->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "MAC"){ MiAtaque->Image = Image::FromFile("Ataque-normal2.gif"); }
			 else if (tipo == "MACH"){ MiAtaque->Image = Image::FromFile("Ataque-normal2.gif"); }
			 else if (tipo == "MACHA"){ MiAtaque->Image = Image::FromFile("Ataque-normal2.gif"); }
			 else if (tipo == "PID"){ MiAtaque->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "PIDG"){ MiAtaque->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "PIDGE"){ MiAtaque->Image = Image::FromFile("Ataque-Normal.gif"); }
		 }

		 void Set_Ataque_Enemigo(string tipo)
		 {
			 if (tipo == "PIK") { AtaqueEnemigo->Image = Image::FromFile("Ataque-Electrico2.gif"); }
			 else if (tipo == "RAI"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Electrico.gif"); }
			 else if (tipo == "BUL"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-planta.gif"); }
			 else if (tipo == "IVY"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-planta.gif"); }
			 else if (tipo == "VEN"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-planta.gif"); }
			 else if (tipo == "SQU"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Agua.gif"); }
			 else if (tipo == "WAR"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Agua2.gif"); }
			 else if (tipo == "BLA"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Agua2.gif"); }
			 else if (tipo == "CHA"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Fuego2.gif"); }
			 else if (tipo == "CHAR"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Fuego2.gif"); }
			 else if (tipo == "CHARI"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Fuego.gif"); }
			 else if (tipo == "ABR"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-psicologico.gif"); }
			 else if (tipo == "KAD"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-psicologico.gif"); }
			 else if (tipo == "ALA"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-psicologico.gif"); }
			 else if (tipo == "SNO"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Roca.gif"); }
			 else if (tipo == "EKA"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "ARB"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "ONI"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Roca2.gif"); }
			 else if (tipo == "EVE"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "VAP"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Agua.gif"); }
			 else if (tipo == "JOL"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Electrico2.gif"); }
			 else if (tipo == "FLA"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Fuego2.gif"); }
			 else if (tipo == "MAG"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Agua2.gif"); }
			 else if (tipo == "GYA"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Agua.gif"); }
			 else if (tipo == "MEO"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "PER"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "MAC"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-normal2.gif"); }
			 else if (tipo == "MACH"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-normal2.gif"); }
			 else if (tipo == "MACHA"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-normal2.gif"); }
			 else if (tipo == "PID"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "PIDG"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Normal.gif"); }
			 else if (tipo == "PIDGE"){ AtaqueEnemigo->Image = Image::FromFile("Ataque-Normal.gif"); }
		 }

		 void Elige_Imagen2(string tipo)
		 {
			 if (tipo == "PIK") { Imagen_Elegida2 = Img_Pikachu; }
			 else if (tipo == "RAI"){ Imagen_Elegida2 = Img_Raichu; }
			 else if (tipo == "BUL"){ Imagen_Elegida2 = Img_Bulbasur; }
			 else if (tipo == "IVY"){ Imagen_Elegida2 = Img_Bulbasur; }
			 else if (tipo == "VEN"){ Imagen_Elegida2 = Img_Venusaur; }
			 else if (tipo == "SQU"){ Imagen_Elegida2 = Img_Squirtle; }
			 else if (tipo == "WAR"){ Imagen_Elegida2 = Img_Wartortle; }
			 else if (tipo == "BLA"){ Imagen_Elegida2 = Img_Blastoise; }
			 else if (tipo == "CHA"){ Imagen_Elegida2 = Img_Charmander; }
			 else if (tipo == "CHAR"){ Imagen_Elegida2 = Img_Charmeleon; }
			 else if (tipo == "CHARI"){ Imagen_Elegida2 = Img_Charizard; }
			 else if (tipo == "ABR"){ Imagen_Elegida2 = Img_Abra; }
			 else if (tipo == "KAD"){ Imagen_Elegida2 = Img_Kadabra; }
			 else if (tipo == "ALA"){ Imagen_Elegida2 = Img_Alakazam; }
			 else if (tipo == "SNO"){ Imagen_Elegida2 = Img_Snorlax; }
			 else if (tipo == "EKA"){ Imagen_Elegida2 = Img_Ekans; }
			 else if (tipo == "ARB"){ Imagen_Elegida2 = Img_Arbok; }
			 else if (tipo == "ONI"){ Imagen_Elegida2 = Img_Onix; }
			 else if (tipo == "EVE"){ Imagen_Elegida2 = Img_Evee; }
			 else if (tipo == "VAP"){ Imagen_Elegida2 = Img_Vaporeon; }
			 else if (tipo == "JOL"){ Imagen_Elegida2 = Img_Jolteon; }
			 else if (tipo == "FLA"){ Imagen_Elegida2 = Img_Flareon; }
			 else if (tipo == "MAG"){ Imagen_Elegida2 = Img_Magikarp; }
			 else if (tipo == "GYA"){ Imagen_Elegida2 = Img_Gyarados; }
			 else if (tipo == "MEO"){ Imagen_Elegida2 = Img_Meowth; }
			 else if (tipo == "PER"){ Imagen_Elegida2 = Img_Persian; }
			 else if (tipo == "MAC"){ Imagen_Elegida2 = Img_Machop; }
			 else if (tipo == "MACH"){ Imagen_Elegida2 = Img_Machoke; }
			 else if (tipo == "MACHA"){ Imagen_Elegida2 = Img_Machamp; }
			 else if (tipo == "PID"){ Imagen_Elegida2 = Img_Pidgey; }
			 else if (tipo == "PIDG"){ Imagen_Elegida2 = Img_Pidgeotto; }
			 else if (tipo == "PIDGE"){ Imagen_Elegida2 = Img_Pidgeot; }
		 }

		 void Elige_Imagen(string tipo)
		 {
			 if (tipo == "PIK") { Imagen_Elegida = Img_Pikachu; }
			 else if (tipo == "RAI"){ Imagen_Elegida = Img_Raichu; }
			 else if (tipo == "BUL"){ Imagen_Elegida = Img_Bulbasur; }
			 else if (tipo == "IVY"){ Imagen_Elegida = Img_Bulbasur; }
			 else if (tipo == "VEN"){ Imagen_Elegida = Img_Venusaur; }
			 else if (tipo == "SQU"){ Imagen_Elegida = Img_Squirtle; }
			 else if (tipo == "WAR"){ Imagen_Elegida = Img_Wartortle; }
			 else if (tipo == "BLA"){ Imagen_Elegida = Img_Blastoise; }
			 else if (tipo == "CHA"){ Imagen_Elegida = Img_Charmander; }
			 else if (tipo == "CHAR"){ Imagen_Elegida = Img_Charmeleon; }
			 else if (tipo == "CHARI"){ Imagen_Elegida = Img_Charizard; }
			 else if (tipo == "ABR"){ Imagen_Elegida = Img_Abra; }
			 else if (tipo == "KAD"){ Imagen_Elegida = Img_Kadabra; }
			 else if (tipo == "ALA"){ Imagen_Elegida = Img_Alakazam; }
			 else if (tipo == "SNO"){ Imagen_Elegida = Img_Snorlax; }
			 else if (tipo == "EKA"){ Imagen_Elegida = Img_Ekans; }
			 else if (tipo == "ARB"){ Imagen_Elegida = Img_Arbok; }
			 else if (tipo == "ONI"){ Imagen_Elegida = Img_Onix; }
			 else if (tipo == "EVE"){ Imagen_Elegida = Img_Evee; }
			 else if (tipo == "VAP"){ Imagen_Elegida = Img_Vaporeon; }
			 else if (tipo == "JOL"){ Imagen_Elegida = Img_Jolteon; }
			 else if (tipo == "FLA"){ Imagen_Elegida = Img_Flareon; }
			 else if (tipo == "MAG"){ Imagen_Elegida = Img_Magikarp; }
			 else if (tipo == "GYA"){ Imagen_Elegida = Img_Gyarados; }
			 else if (tipo == "MEO"){ Imagen_Elegida = Img_Meowth; }
			 else if (tipo == "PER"){ Imagen_Elegida = Img_Persian; }
			 else if (tipo == "MAC"){ Imagen_Elegida = Img_Machop; }
			 else if (tipo == "MACH"){ Imagen_Elegida = Img_Machoke; }
			 else if (tipo == "MACHA"){ Imagen_Elegida = Img_Machamp; }
			 else if (tipo == "PID"){ Imagen_Elegida = Img_Pidgey; }
			 else if (tipo == "PIDG"){ Imagen_Elegida = Img_Pidgeotto; }
			 else if (tipo == "PIDGE"){ Imagen_Elegida = Img_Pidgeot; }
		 }

		 void AsignaBotones()
		 {
			 if ((1 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn1->Visible = true; lbl1->Visible = true; lbln1->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(0 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(0 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(0 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn1->BackgroundImage = Imagen_Elegida; lbl1->Text = (Nombre); lbln1->Text = ("CP " + poder);
			 }
			 else{ btn1->Visible = false; lbl1->Visible = false; lbln1->Visible = false; }

			 if ((2 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn2->Visible = true; lbl2->Visible = true; lbln2->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(1 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(1 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(1 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn2->BackgroundImage = Imagen_Elegida; lbl2->Text = (Nombre); lbln2->Text = ("CP " + poder);
			 }
			 else{ btn2->Visible = false; lbl2->Visible = false; lbln2->Visible = false; }

			 if ((3 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn3->Visible = true; lbl3->Visible = true; lbln3->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(2 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(2 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(2 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn3->BackgroundImage = Imagen_Elegida; lbl3->Text = (Nombre); lbln3->Text = ("CP " + poder);
			 }
			 else{ btn3->Visible = false; lbl3->Visible = false; lbln3->Visible = false; }

			 if ((4 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn4->Visible = true; lbl4->Visible = true; lbln4->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(3 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(3 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(3 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn4->BackgroundImage = Imagen_Elegida; lbl4->Text = (Nombre); lbln4->Text = ("CP " + poder);
			 }
			 else{ btn4->Visible = false; lbl4->Visible = false; lbln4->Visible = false; }

			 if ((5 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn5->Visible = true; lbl5->Visible = true; lbln5->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(4 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(4 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(4 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn5->BackgroundImage = Imagen_Elegida; lbl5->Text = (Nombre); lbln5->Text = ("CP " + poder);
			 }
			 else{ btn5->Visible = false; lbl5->Visible = false; lbl5->Visible = false; }

			 if ((6 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn6->Visible = true; lbl6->Visible = true; lbln6->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(5 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(5 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(5 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn6->BackgroundImage = Imagen_Elegida; lbl6->Text = (Nombre); lbln6->Text = ("CP " + poder);
			 }
			 else{ btn6->Visible = false; lbl6->Visible = false; lbln6->Visible = false; }

			 if ((7 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn7->Visible = true; lbl7->Visible = true; lbln7->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(6 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(6 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(6 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn7->BackgroundImage = Imagen_Elegida; lbl7->Text = (Nombre); lbln7->Text = ("CP " + poder);
			 }
			 else{ btn7->Visible = false; lbl7->Visible = false; lbln7->Visible = false; }

			 if ((8 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn8->Visible = true; lbl8->Visible = true; lbln8->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(7 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(7 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(7 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn8->BackgroundImage = Imagen_Elegida; lbl8->Text = (Nombre); lbln8->Text = ("CP " + poder);
			 }
			 else{ btn8->Visible = false; lbl8->Visible = false; lbln8->Visible = false; }

			 if ((9 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn9->Visible = true; lbl9->Visible = true; lbln9->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(8 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(8 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(8 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn9->BackgroundImage = Imagen_Elegida; lbl9->Text = (Nombre); lbln9->Text = ("CP " + poder);
			 }
			 else{ btn9->Visible = false; lbl9->Visible = false; lbln9->Visible = false; }

			 if ((10 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn10->Visible = true; lbl10->Visible = true; lbln10->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(9 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(9 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(9 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn10->BackgroundImage = Imagen_Elegida; lbl10->Text = (Nombre); lbln10->Text = ("CP " + poder);
			 }
			 else{ btn10->Visible = false; lbl10->Visible = false; lbln10->Visible = false; }

			 if ((11 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn11->Visible = true; lbl11->Visible = true; lbln11->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(10 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(10 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(10 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn11->BackgroundImage = Imagen_Elegida; lbl11->Text = (Nombre); lbln11->Text = ("CP " + poder);
			 }
			 else{ btn11->Visible = false; lbl11->Visible = false; lbln11->Visible = false; }

			 if ((12 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn12->Visible = true; lbl12->Visible = true; lbln12->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(11 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(11 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 int poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[(11 + (IndicePagina * 12))]->Get_poder();
				 Elige_Imagen(tipo);
				 btn12->BackgroundImage = Imagen_Elegida; lbl12->Text = (Nombre); lbln12->Text = ("CP " + poder);
			 }
			 else{ btn12->Visible = false; lbl12->Visible = false; lbln12->Visible = false; }
		 }


private: System::Void FormBatalla_Load(System::Object^  sender, System::EventArgs^  e) 
{
	CControlPokemon *oControl = new CControlPokemon(0,0);
	Pokemon_Enemigo = oControl->Genera_Pokemon(rand);
	string tipo = Pokemon_Enemigo->Get_tipo();
	String ^Nombre = gcnew String(Pokemon_Enemigo->Get_Nombre().c_str());
	int num;

	if (tipo == "PIK") { num = rand->Next(1, 3); if (num == 1){ tipo = "PIK"; } else{ tipo = "RAI"; } }
	else if (tipo == "BUL"){ num = rand->Next(1, 4); if (num == 1){ tipo = "BUL"; } else if (num == 2){ tipo = "IVY"; } else{ tipo = "VEN"; } }
	else if (tipo == "SQU"){ num = rand->Next(1, 4); if (num == 1){ tipo = "SQU"; } else if (num == 2){ tipo = "WAR"; } else{ tipo = "BLA"; } }
	else if (tipo == "CHA"){ num = rand->Next(1, 4); if (num == 1){ tipo = "CHA"; } else if (num == 2){ tipo = "CHAR"; } else{ tipo = "CHARI"; } }
	else if (tipo == "ABR"){ num = rand->Next(1, 4); if (num == 1){ tipo = "ABR"; } else if (num == 2){ tipo = "KAD"; } else{ tipo = "ALA"; } }
	else if (tipo == "SNO"){ tipo = "SNO"; }
	else if (tipo == "EKA"){ num = rand->Next(1, 3); if (num == 1){ tipo = "EKA"; } else{ tipo = "ARB"; } }
	else if (tipo == "ONI"){ tipo = "ONI"; }
	else if (tipo == "EVE"){ num = rand->Next(1, 5); if (num == 1){ tipo = "EVE"; } else if (num == 2){ tipo = "VAP"; } else if (num == 3){ tipo = "JOL"; } else{ tipo = "FLA"; } }
	else if (tipo == "MAG"){ num = rand->Next(1, 3); if (num == 1){ tipo = "MAG"; } else{ tipo = "GYA"; } }
	else if (tipo == "MEO"){ num = rand->Next(1, 3); if (num == 1){ tipo = "MEO"; } else{ tipo = "PER"; } }
	else if (tipo == "MAC"){ num = rand->Next(1, 4); if (num == 1){ tipo = "MAC"; } else if (num == 2){ tipo = "MACH"; } else{ tipo = "MACHA"; } }
	else if (tipo == "PID"){ num = rand->Next(1, 4); if (num == 1){ tipo = "PID"; } else if (num == 2){ tipo = "PIDG"; } else{ tipo = "PIDGE"; } }

	Pokemon_Enemigo->Set_tipo(tipo);
	Set_Ataque_Enemigo(tipo);
	Set_Imagen_Enemigo(tipo);
	Elige_Imagen2(tipo);

	int Poder = rand->Next(500, 2500);
	Pokemon_Enemigo->Set_poder(Poder);

	lblNombreEne->Text = (Nombre);
	lblCPEnemigo->Text = ("CP: " + Poder);

	if (Poder > 0 && Poder <= 100){ Poder = 1; }
	else if (Poder > 100 && Poder <= 500){ Poder = 2; }
	else if (Poder > 500 && Poder <= 700){ Poder = 3; }
	else if (Poder > 700 && Poder <= 1300){ Poder = 4; }
	else if (Poder > 1300 && Poder <= 2000){ Poder = 5; }
	else if (Poder > 2000){ Poder = 6; }

	oBP->Set_PoderEnemigo(Poder);
}

private: System::Void TEleccion_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	Graphics ^g = this->CreateGraphics();
	BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
	BufferedGraphics  ^buffer = espacio->Allocate(g, this->ClientRectangle);

	if (PlayMusica == false && ActivarMusica == true){ MusicaBatalla(); }

	buffer->Graphics->DrawImage(Img_Fondo_Eleccion, 0, 0, 640, 580);
	btnSiguiente->Visible = true; btnAnterior->Visible = true; btnLuchar->Visible = true; btnAbandonar->Visible = true;
	lblBanner->Visible = true; lblBanner2->Visible = true; lblNombreEne->Visible = true; lblCPEnemigo->Visible = true;

	buffer->Graphics->DrawImage(Imagen_Elegida2, 440, 90, 150, 150);
	paginas = CalculaNPaginas(oJuegoAux->GetMochila()->Get_NPokemon());

	if (paginas > 1)
	{
		if (Npagina + 1 > paginas) { btnSiguiente->Enabled = false; }
		else{ btnSiguiente->Enabled = true; }

		if (Npagina - 1 <= 0){ btnAnterior->Enabled = false; }
		else{ btnAnterior->Enabled = true; }
	}
	else
	{
		btnSiguiente->Enabled = false;
		btnAnterior->Enabled = false;
		Npagina = 1; IndicePagina = 0;
	}

	AsignaBotones();
	
	if (luchar)
	{
		luchar = false;

		btn1->Visible = false; btn2->Visible = false; btn3->Visible = false; btn4->Visible = false;
		btn5->Visible = false; btn6->Visible = false; btn7->Visible = false; btn8->Visible = false;
		btn9->Visible = false; btn10->Visible = false; btn11->Visible = false; btn12->Visible = false;

		lbl1->Visible = false; lbl2->Visible = false; lbl3->Visible = false; lbl4->Visible = false;
		lbl5->Visible = false; lbl6->Visible = false; lbl7->Visible = false; lbl8->Visible = false;
		lbl9->Visible = false; lbl10->Visible = false; lbl11->Visible = false; lbl12->Visible = false;

		lbln1->Visible = false; lbln2->Visible = false; lbln3->Visible = false; lbln4->Visible = false;
		lbln5->Visible = false; lbln6->Visible = false; lbln7->Visible = false; lbln8->Visible = false;
		lbln9->Visible = false; lbln10->Visible = false; lbln11->Visible = false; lbln12->Visible = false;

		btnSiguiente->Visible = false; btnAnterior->Visible = false; btnLuchar->Visible = false; btnAbandonar->Visible = false;
		btnSiguiente->Enabled = false; btnAnterior->Enabled = false; btnLuchar->Enabled = false; btnAbandonar->Enabled = false;
		lblBanner->Visible = false; lblBanner2->Visible = false; lblNombreEne->Visible = false; lblCPEnemigo->Visible = false;

		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		
		IndicePagina = 0; Npagina = 0; paginas = 0;

		TEleccion->Enabled = false; TBatalla->Enabled = true;
	}

	buffer->Render(g);
	delete buffer, espacio, g;
}
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 0 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::Silver; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 1 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::Silver; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 2 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::Silver; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 3 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::Silver;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 4 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::Silver; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 5 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::Silver; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 6 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::Silver; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 7 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::Silver;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 8 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::Silver; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 9 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::Silver; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn11_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 10 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::Silver; lbl12->BackColor = Color::White;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btn12_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 11 + (IndicePagina * 12);

	if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() == 0)
	{
		MessageBox::Show("Tu pokemon no esta en condiciones para luchar", "Alerta", MessageBoxButtons::OK);
		btnLuchar->Enabled = false; IndicePokemon = 0;
	}
	else
	{
		lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
		lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
		lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::Silver;
		btnLuchar->Enabled = true;
	}
}
private: System::Void btnAnterior_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 0; Npagina--; IndicePagina--;
	lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
	lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
	lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
	btnLuchar->Enabled = false;
}
private: System::Void btnSiguiente_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 0; Npagina++; IndicePagina++;
	lbl1->BackColor = Color::White; lbl2->BackColor = Color::White; lbl3->BackColor = Color::White; lbl4->BackColor = Color::White;
	lbl5->BackColor = Color::White; lbl6->BackColor = Color::White; lbl7->BackColor = Color::White; lbl8->BackColor = Color::White;
	lbl9->BackColor = Color::White; lbl10->BackColor = Color::White; lbl11->BackColor = Color::White; lbl12->BackColor = Color::White;
	btnLuchar->Enabled = false;
}
private: System::Void btnLuchar_Click(System::Object^  sender, System::EventArgs^  e)
{
	luchar = true;

	Mi_Pokemon = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon];
	string tipo = Mi_Pokemon->Get_tipo();
	Set_Ataque_Especial(tipo); Set_Mi_Ataque(tipo); Set_Mi_Imagen(tipo);
	int Vida = (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() * (110 / (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax()*1.0)));
	int Poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder();

	if (Poder > 0 && Poder <= 100){ Poder = 1; }
	else if (Poder > 100 && Poder <= 500){ Poder = 2; }
	else if (Poder > 500 && Poder <= 700){ Poder = 3; }
	else if (Poder > 700 && Poder <= 1300){ Poder = 4; }
	else if (Poder > 1300 && Poder <= 2000){ Poder = 5; }
	else if (Poder > 2000){ Poder = 6; }

	oBP->Set_MiPoder(Poder);
	oBP->Set_Mivida(Vida);

}
private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e)
{
	TEleccion->Enabled = false;
	this->Close();
}

private: System::Void TBatalla_Tick(System::Object^  sender, System::EventArgs^  e)
{
    Graphics ^g = this->CreateGraphics();
    BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
    BufferedGraphics  ^buffer = espacio->Allocate(g, this->ClientRectangle);

	oBP->Interaccion(buffer, imgFondoMapa, imgPiso, imgPiso, MiPokemon, Enemigo, imgCajaVida, imgCajaVida, imgVida, imgVida, Especial, Especial, MiAtaque, AtaqueEnemigo, AtaqueEspecial);
    
    if (oBP->Get_MiVida() <= 0)
    {
		oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(0);
    	TBatalla->Enabled = false;
		MessageBox::Show("Tu pokemon no puede continuar :'(", "Aviso", MessageBoxButtons::OK);
		musica->Stop();
		this->Close();
    }
	else if (oBP->Get_VidaEnemigo() <= 0)
	{
		PlayMusica = false;
		if (PlayMusica == false && ActivarMusica == true){ Ganaste(); }
		int VidaN = (oBP->Get_MiVida() * (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax() / (110 * 1.0)));
		oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(VidaN);
		oJuegoAux->GetMochila()->Set_PolvoEstelar(oJuegoAux->GetMochila()->Get_PolvoEstelar() + 50);
		oJuegoAux->GetMochila()->Set_Experiencia(oJuegoAux->GetMochila()->Get_Experiencia() + 100);
		oJuegoAux->GetMochila()->Set_Monedas(oJuegoAux->GetMochila()->Get_Monedas() + 100);
		oJuegoAux->GetMochila()->Set_Medallas(oJuegoAux->GetMochila()->Get_Medallas() + 1);
		TBatalla->Enabled = false; TGanaste->Enabled = true;
	}
    
    buffer->Render(g);
    delete buffer, espacio, g;
}

private: System::Void Esquivar(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
{
	switch (e->KeyCode)
	{
	case Keys::Left:
		oBP->Accion = Interaccion::IzquierdaB;
		break;
	case Keys::Right:
		oBP->Accion = Interaccion::DerechaB;
		break;
	case Keys::A:
		oBP->Accion = Interaccion::EspecialB;
		break;
	}
}
private: System::Void SoltarTecla(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
{
	oBP->Accion = Interaccion::SoltarTecla;
}
private: System::Void Atacar(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	if (e->X > oBP->get_XPokemonEnemigo() && e->X <oBP->get_XPokemonEnemigo() + 200)
	{
		oBP->Accion = Interaccion::Atacar;
	}
}
private: System::Void TGanaste_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	Graphics ^g = this->CreateGraphics();
	BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
	BufferedGraphics  ^buffer = espacio->Allocate(g, this->ClientRectangle);

	btnAceptar->Visible = true;
	buffer->Graphics->DrawImage(Img_Fondo_Ganaste, 0, 0, 640, 580);

	buffer->Render(g);
	delete buffer, espacio, g;
}
private: System::Void btnAceptar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	musica->Stop();
	this->Close();
}
};
}
