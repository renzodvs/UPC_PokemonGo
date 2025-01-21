#pragma once
#include "stdafx.h"
#include "Juego.h"
#include "Pokemon.h"
#include "AdicionalDos1.h"

namespace PokemonGoUPC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormMochila
	/// </summary>
	public ref class FormMochila : public System::Windows::Forms::Form
	{
	private:

		CJuego *oJuegoAux;
		CPokemon *oPokemonAux;

		Bitmap ^FondoObjetos = gcnew Bitmap("FondoObjetos.png");
		Bitmap ^Img_Pokeball = gcnew Bitmap("Pokeball.png");
		Bitmap ^Img_Pocion = gcnew Bitmap("Pocion.png");
		Bitmap ^Img_SuperPocion = gcnew Bitmap("SuperPocion.png");
		Bitmap ^Img_Revivir = gcnew Bitmap("Revivir.png");
		Bitmap ^Fondo = gcnew Bitmap("FondoLabel.png");

		Bitmap ^FondoProgreso = gcnew Bitmap("FondoProgreso.png");
		Bitmap ^Monedas = gcnew Bitmap("Monedas.png");
		Bitmap ^EquipoValor = gcnew Bitmap("Valor.png");
		Bitmap ^EquipoSabiduria = gcnew Bitmap("Sabiduria.png");
		Bitmap ^EquipoInstinto = gcnew Bitmap("Instinto.png");
		Bitmap ^ImgXP = gcnew Bitmap("XP.png");
		Bitmap ^Medallas = gcnew Bitmap("Medallas.png");

		Bitmap ^Caramelo = gcnew Bitmap("Caramelos.png");
		Bitmap ^PolvoEstelar = gcnew Bitmap("PolvoEstelar.png");

		Bitmap ^FondoPokemons = gcnew Bitmap("FondoPokemons.png");
		Bitmap ^ImgPokeball = gcnew Bitmap("Pokeball.png");

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

		Bitmap ^Imagen_Elegida;

	private: System::Windows::Forms::Label^  lblNObjetos;
	private: System::Windows::Forms::Label^  lblPokeballs;
	private: System::Windows::Forms::Label^  lblSPociones;
	private: System::Windows::Forms::Label^  lblRevivir;
	private: System::Windows::Forms::Label^  lblPociones;
	private: System::Windows::Forms::Button^  btnElimina1PK;
	private: System::Windows::Forms::Button^  btnEliTodoPK;
	private: System::Windows::Forms::Button^  btnEliTodoSP;
	private: System::Windows::Forms::Button^  btnElimina1SP;
	private: System::Windows::Forms::Button^  btnEliTodoP;
	private: System::Windows::Forms::Button^  btnElimina1P;
	private: System::Windows::Forms::Button^  btnEliTodoR;
	private: System::Windows::Forms::Button^  btnElimina1R;
	private: System::Windows::Forms::Label^  lblMonedas;
	private: System::Windows::Forms::Label^  lblXP;
	private: System::Windows::Forms::Label^  lblValor;
	private: System::Windows::Forms::Label^  lblInstinto;
	private: System::Windows::Forms::Label^  lblSabiduria;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn11;
	private: System::Windows::Forms::Button^  btn12;
	private: System::Windows::Forms::Button^  btn10;













	private: System::Windows::Forms::Button^  btnAnterior;
	private: System::Windows::Forms::Button^  btnSiguiente;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::Label^  lbl6;
	private: System::Windows::Forms::Label^  lbl5;
	private: System::Windows::Forms::Label^  lbl4;
	private: System::Windows::Forms::Label^  lbl12;
	private: System::Windows::Forms::Label^  lbl11;
	private: System::Windows::Forms::Label^  lbl10;
	private: System::Windows::Forms::Label^  lbl9;
	private: System::Windows::Forms::Label^  lbl8;
	private: System::Windows::Forms::Label^  lbl7;
	private: System::Windows::Forms::Label^  lblNombre;

	private: System::Windows::Forms::Label^  lblNPokemon;
	private: System::Windows::Forms::Label^  lblFondo;
private: System::Windows::Forms::Label^  lblMedallas;
private: System::Windows::Forms::Label^  lblVida;
private: System::Windows::Forms::Label^  lblPoder;
private: System::Windows::Forms::Button^  btnPocion;
private: System::Windows::Forms::Button^  btnSPocion;
private: System::Windows::Forms::Button^  btnRevivir;
private: System::Windows::Forms::Label^  lblPolvoS;
private: System::Windows::Forms::Label^  lblCaramelos;
private: System::Windows::Forms::Button^  btnTransferir;
private: System::Windows::Forms::Button^  btnPotenciar;


private: System::Windows::Forms::Button^  btnRenombrar;
private: System::Windows::Forms::Button^  btnEvolucionar;

private: System::Windows::Forms::TextBox^  txtNombre;

private: System::Windows::Forms::Button^  btnOk;

private: System::Windows::Forms::Button^  btnVolar;
private: System::Windows::Forms::PictureBox^  PokemonElegido;


	private: System::Windows::Forms::Button^  btnRegresar;

	public:
		FormMochila(CJuego *oJuego)
		{
			oJuegoAux = oJuego;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~FormMochila()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnJugador;
	private: System::Windows::Forms::Button^  btnElementos;
	private: System::Windows::Forms::Button^  btnPokemon;
	private: System::Windows::Forms::PictureBox^  pbObjetos;
	private: System::Windows::Forms::PictureBox^  pbProgreso;
	private: System::Windows::Forms::PictureBox^  pbPokemon;

	private: System::Windows::Forms::Timer^  TObjetos;
	private: System::Windows::Forms::Timer^  TProgreso;
	private: System::Windows::Forms::Timer^  TPokemon;
	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMochila::typeid));
			this->btnJugador = (gcnew System::Windows::Forms::Button());
			this->btnElementos = (gcnew System::Windows::Forms::Button());
			this->btnPokemon = (gcnew System::Windows::Forms::Button());
			this->pbObjetos = (gcnew System::Windows::Forms::PictureBox());
			this->pbProgreso = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokemon = (gcnew System::Windows::Forms::PictureBox());
			this->TObjetos = (gcnew System::Windows::Forms::Timer(this->components));
			this->TProgreso = (gcnew System::Windows::Forms::Timer(this->components));
			this->TPokemon = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblNObjetos = (gcnew System::Windows::Forms::Label());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->lblPokeballs = (gcnew System::Windows::Forms::Label());
			this->lblSPociones = (gcnew System::Windows::Forms::Label());
			this->lblRevivir = (gcnew System::Windows::Forms::Label());
			this->lblPociones = (gcnew System::Windows::Forms::Label());
			this->btnElimina1PK = (gcnew System::Windows::Forms::Button());
			this->btnEliTodoPK = (gcnew System::Windows::Forms::Button());
			this->btnEliTodoSP = (gcnew System::Windows::Forms::Button());
			this->btnElimina1SP = (gcnew System::Windows::Forms::Button());
			this->btnEliTodoP = (gcnew System::Windows::Forms::Button());
			this->btnElimina1P = (gcnew System::Windows::Forms::Button());
			this->btnEliTodoR = (gcnew System::Windows::Forms::Button());
			this->btnElimina1R = (gcnew System::Windows::Forms::Button());
			this->lblMonedas = (gcnew System::Windows::Forms::Label());
			this->lblXP = (gcnew System::Windows::Forms::Label());
			this->lblValor = (gcnew System::Windows::Forms::Label());
			this->lblInstinto = (gcnew System::Windows::Forms::Label());
			this->lblSabiduria = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn11 = (gcnew System::Windows::Forms::Button());
			this->btn12 = (gcnew System::Windows::Forms::Button());
			this->btn10 = (gcnew System::Windows::Forms::Button());
			this->btnAnterior = (gcnew System::Windows::Forms::Button());
			this->btnSiguiente = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblNPokemon = (gcnew System::Windows::Forms::Label());
			this->lblFondo = (gcnew System::Windows::Forms::Label());
			this->lblMedallas = (gcnew System::Windows::Forms::Label());
			this->lblVida = (gcnew System::Windows::Forms::Label());
			this->lblPoder = (gcnew System::Windows::Forms::Label());
			this->btnPocion = (gcnew System::Windows::Forms::Button());
			this->btnSPocion = (gcnew System::Windows::Forms::Button());
			this->btnRevivir = (gcnew System::Windows::Forms::Button());
			this->lblPolvoS = (gcnew System::Windows::Forms::Label());
			this->lblCaramelos = (gcnew System::Windows::Forms::Label());
			this->btnTransferir = (gcnew System::Windows::Forms::Button());
			this->btnPotenciar = (gcnew System::Windows::Forms::Button());
			this->btnRenombrar = (gcnew System::Windows::Forms::Button());
			this->btnEvolucionar = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnVolar = (gcnew System::Windows::Forms::Button());
			this->PokemonElegido = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbObjetos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbProgreso))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PokemonElegido))->BeginInit();
			this->SuspendLayout();
			// 
			// btnJugador
			// 
			this->btnJugador->BackColor = System::Drawing::Color::White;
			this->btnJugador->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnJugador.BackgroundImage")));
			this->btnJugador->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnJugador->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnJugador->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnJugador->FlatAppearance->BorderSize = 4;
			this->btnJugador->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnJugador->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnJugador->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnJugador->Location = System::Drawing::Point(768, 124);
			this->btnJugador->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnJugador->Name = L"btnJugador";
			this->btnJugador->Size = System::Drawing::Size(461, 413);
			this->btnJugador->TabIndex = 0;
			this->btnJugador->UseVisualStyleBackColor = false;
			this->btnJugador->Click += gcnew System::EventHandler(this, &FormMochila::btnJugador_Click);
			// 
			// btnElementos
			// 
			this->btnElementos->BackColor = System::Drawing::Color::White;
			this->btnElementos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnElementos.BackgroundImage")));
			this->btnElementos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnElementos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnElementos->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnElementos->FlatAppearance->BorderSize = 4;
			this->btnElementos->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnElementos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnElementos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnElementos->Location = System::Drawing::Point(101, 653);
			this->btnElementos->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnElementos->Name = L"btnElementos";
			this->btnElementos->Size = System::Drawing::Size(461, 413);
			this->btnElementos->TabIndex = 1;
			this->btnElementos->UseVisualStyleBackColor = false;
			this->btnElementos->Click += gcnew System::EventHandler(this, &FormMochila::btnElementos_Click);
			// 
			// btnPokemon
			// 
			this->btnPokemon->BackColor = System::Drawing::Color::White;
			this->btnPokemon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPokemon.BackgroundImage")));
			this->btnPokemon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnPokemon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPokemon->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnPokemon->FlatAppearance->BorderSize = 4;
			this->btnPokemon->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnPokemon->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnPokemon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPokemon->Location = System::Drawing::Point(1456, 653);
			this->btnPokemon->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnPokemon->Name = L"btnPokemon";
			this->btnPokemon->Size = System::Drawing::Size(461, 413);
			this->btnPokemon->TabIndex = 2;
			this->btnPokemon->UseVisualStyleBackColor = false;
			this->btnPokemon->Click += gcnew System::EventHandler(this, &FormMochila::btnPokemon_Click);
			// 
			// pbObjetos
			// 
			this->pbObjetos->BackColor = System::Drawing::Color::Transparent;
			this->pbObjetos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbObjetos.Image")));
			this->pbObjetos->Location = System::Drawing::Point(80, 310);
			this->pbObjetos->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pbObjetos->Name = L"pbObjetos";
			this->pbObjetos->Size = System::Drawing::Size(509, 303);
			this->pbObjetos->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbObjetos->TabIndex = 3;
			this->pbObjetos->TabStop = false;
			// 
			// pbProgreso
			// 
			this->pbProgreso->BackColor = System::Drawing::Color::Transparent;
			this->pbProgreso->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbProgreso.Image")));
			this->pbProgreso->Location = System::Drawing::Point(747, 589);
			this->pbProgreso->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pbProgreso->Name = L"pbProgreso";
			this->pbProgreso->Size = System::Drawing::Size(509, 303);
			this->pbProgreso->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbProgreso->TabIndex = 4;
			this->pbProgreso->TabStop = false;
			// 
			// pbPokemon
			// 
			this->pbPokemon->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokemon.Image")));
			this->pbPokemon->Location = System::Drawing::Point(1432, 310);
			this->pbPokemon->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pbPokemon->Name = L"pbPokemon";
			this->pbPokemon->Size = System::Drawing::Size(509, 303);
			this->pbPokemon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPokemon->TabIndex = 5;
			this->pbPokemon->TabStop = false;
			// 
			// TObjetos
			// 
			this->TObjetos->Tick += gcnew System::EventHandler(this, &FormMochila::TObjetos_Tick);
			// 
			// TProgreso
			// 
			this->TProgreso->Tick += gcnew System::EventHandler(this, &FormMochila::TProgreso_Tick);
			// 
			// TPokemon
			// 
			this->TPokemon->Tick += gcnew System::EventHandler(this, &FormMochila::TPokemon_Tick);
			// 
			// lblNObjetos
			// 
			this->lblNObjetos->BackColor = System::Drawing::Color::White;
			this->lblNObjetos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNObjetos->Location = System::Drawing::Point(224, 69);
			this->lblNObjetos->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblNObjetos->Name = L"lblNObjetos";
			this->lblNObjetos->Size = System::Drawing::Size(1576, 55);
			this->lblNObjetos->TabIndex = 6;
			this->lblNObjetos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblNObjetos->Visible = false;
			// 
			// btnRegresar
			// 
			this->btnRegresar->BackColor = System::Drawing::Color::White;
			this->btnRegresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegresar->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnRegresar->FlatAppearance->BorderSize = 2;
			this->btnRegresar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnRegresar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnRegresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->Location = System::Drawing::Point(72, 67);
			this->btnRegresar->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(205, 62);
			this->btnRegresar->TabIndex = 7;
			this->btnRegresar->Text = L"REGRESAR";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Visible = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &FormMochila::button1_Click);
			// 
			// lblPokeballs
			// 
			this->lblPokeballs->BackColor = System::Drawing::Color::White;
			this->lblPokeballs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPokeballs->Location = System::Drawing::Point(501, 475);
			this->lblPokeballs->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblPokeballs->Name = L"lblPokeballs";
			this->lblPokeballs->Size = System::Drawing::Size(144, 83);
			this->lblPokeballs->TabIndex = 8;
			this->lblPokeballs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPokeballs->Visible = false;
			// 
			// lblSPociones
			// 
			this->lblSPociones->BackColor = System::Drawing::Color::White;
			this->lblSPociones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSPociones->Location = System::Drawing::Point(501, 982);
			this->lblSPociones->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblSPociones->Name = L"lblSPociones";
			this->lblSPociones->Size = System::Drawing::Size(144, 83);
			this->lblSPociones->TabIndex = 9;
			this->lblSPociones->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblSPociones->Visible = false;
			// 
			// lblRevivir
			// 
			this->lblRevivir->BackColor = System::Drawing::Color::White;
			this->lblRevivir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRevivir->Location = System::Drawing::Point(1387, 982);
			this->lblRevivir->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblRevivir->Name = L"lblRevivir";
			this->lblRevivir->Size = System::Drawing::Size(144, 83);
			this->lblRevivir->TabIndex = 11;
			this->lblRevivir->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblRevivir->Visible = false;
			// 
			// lblPociones
			// 
			this->lblPociones->BackColor = System::Drawing::Color::White;
			this->lblPociones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPociones->Location = System::Drawing::Point(1387, 475);
			this->lblPociones->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblPociones->Name = L"lblPociones";
			this->lblPociones->Size = System::Drawing::Size(144, 83);
			this->lblPociones->TabIndex = 10;
			this->lblPociones->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPociones->Visible = false;
			// 
			// btnElimina1PK
			// 
			this->btnElimina1PK->BackColor = System::Drawing::Color::White;
			this->btnElimina1PK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnElimina1PK->FlatAppearance->BorderColor = System::Drawing::Color::SeaGreen;
			this->btnElimina1PK->FlatAppearance->BorderSize = 2;
			this->btnElimina1PK->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnElimina1PK->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnElimina1PK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnElimina1PK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnElimina1PK->Location = System::Drawing::Point(629, 250);
			this->btnElimina1PK->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnElimina1PK->Name = L"btnElimina1PK";
			this->btnElimina1PK->Size = System::Drawing::Size(288, 62);
			this->btnElimina1PK->TabIndex = 12;
			this->btnElimina1PK->Text = L"ELIMINAR x 1";
			this->btnElimina1PK->UseVisualStyleBackColor = false;
			this->btnElimina1PK->Visible = false;
			this->btnElimina1PK->Click += gcnew System::EventHandler(this, &FormMochila::btnElimina1PK_Click);
			// 
			// btnEliTodoPK
			// 
			this->btnEliTodoPK->BackColor = System::Drawing::Color::White;
			this->btnEliTodoPK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEliTodoPK->FlatAppearance->BorderColor = System::Drawing::Color::SeaGreen;
			this->btnEliTodoPK->FlatAppearance->BorderSize = 2;
			this->btnEliTodoPK->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnEliTodoPK->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnEliTodoPK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliTodoPK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliTodoPK->Location = System::Drawing::Point(629, 367);
			this->btnEliTodoPK->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnEliTodoPK->Name = L"btnEliTodoPK";
			this->btnEliTodoPK->Size = System::Drawing::Size(288, 62);
			this->btnEliTodoPK->TabIndex = 13;
			this->btnEliTodoPK->Text = L"ELIMINAR TODO";
			this->btnEliTodoPK->UseVisualStyleBackColor = false;
			this->btnEliTodoPK->Visible = false;
			this->btnEliTodoPK->Click += gcnew System::EventHandler(this, &FormMochila::btnEliTodoPK_Click);
			// 
			// btnEliTodoSP
			// 
			this->btnEliTodoSP->BackColor = System::Drawing::Color::White;
			this->btnEliTodoSP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEliTodoSP->FlatAppearance->BorderColor = System::Drawing::Color::SeaGreen;
			this->btnEliTodoSP->FlatAppearance->BorderSize = 2;
			this->btnEliTodoSP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnEliTodoSP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnEliTodoSP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliTodoSP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliTodoSP->Location = System::Drawing::Point(629, 861);
			this->btnEliTodoSP->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnEliTodoSP->Name = L"btnEliTodoSP";
			this->btnEliTodoSP->Size = System::Drawing::Size(288, 62);
			this->btnEliTodoSP->TabIndex = 15;
			this->btnEliTodoSP->Text = L"ELIMINAR TODO";
			this->btnEliTodoSP->UseVisualStyleBackColor = false;
			this->btnEliTodoSP->Visible = false;
			this->btnEliTodoSP->Click += gcnew System::EventHandler(this, &FormMochila::btnEliTodoSP_Click);
			// 
			// btnElimina1SP
			// 
			this->btnElimina1SP->BackColor = System::Drawing::Color::White;
			this->btnElimina1SP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnElimina1SP->FlatAppearance->BorderColor = System::Drawing::Color::SeaGreen;
			this->btnElimina1SP->FlatAppearance->BorderSize = 2;
			this->btnElimina1SP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnElimina1SP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnElimina1SP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnElimina1SP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnElimina1SP->Location = System::Drawing::Point(629, 744);
			this->btnElimina1SP->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnElimina1SP->Name = L"btnElimina1SP";
			this->btnElimina1SP->Size = System::Drawing::Size(288, 62);
			this->btnElimina1SP->TabIndex = 14;
			this->btnElimina1SP->Text = L"ELIMINAR x 1";
			this->btnElimina1SP->UseVisualStyleBackColor = false;
			this->btnElimina1SP->Visible = false;
			this->btnElimina1SP->Click += gcnew System::EventHandler(this, &FormMochila::btnElimina1SP_Click);
			// 
			// btnEliTodoP
			// 
			this->btnEliTodoP->BackColor = System::Drawing::Color::White;
			this->btnEliTodoP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEliTodoP->FlatAppearance->BorderColor = System::Drawing::Color::SeaGreen;
			this->btnEliTodoP->FlatAppearance->BorderSize = 2;
			this->btnEliTodoP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnEliTodoP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnEliTodoP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliTodoP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliTodoP->Location = System::Drawing::Point(1552, 367);
			this->btnEliTodoP->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnEliTodoP->Name = L"btnEliTodoP";
			this->btnEliTodoP->Size = System::Drawing::Size(288, 62);
			this->btnEliTodoP->TabIndex = 17;
			this->btnEliTodoP->Text = L"ELIMINAR TODO";
			this->btnEliTodoP->UseVisualStyleBackColor = false;
			this->btnEliTodoP->Visible = false;
			this->btnEliTodoP->Click += gcnew System::EventHandler(this, &FormMochila::btnEliTodoP_Click);
			// 
			// btnElimina1P
			// 
			this->btnElimina1P->BackColor = System::Drawing::Color::White;
			this->btnElimina1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnElimina1P->FlatAppearance->BorderColor = System::Drawing::Color::SeaGreen;
			this->btnElimina1P->FlatAppearance->BorderSize = 2;
			this->btnElimina1P->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnElimina1P->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnElimina1P->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnElimina1P->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnElimina1P->Location = System::Drawing::Point(1552, 250);
			this->btnElimina1P->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnElimina1P->Name = L"btnElimina1P";
			this->btnElimina1P->Size = System::Drawing::Size(288, 62);
			this->btnElimina1P->TabIndex = 16;
			this->btnElimina1P->Text = L"ELIMINAR x 1";
			this->btnElimina1P->UseVisualStyleBackColor = false;
			this->btnElimina1P->Visible = false;
			this->btnElimina1P->Click += gcnew System::EventHandler(this, &FormMochila::btnElimina1P_Click);
			// 
			// btnEliTodoR
			// 
			this->btnEliTodoR->BackColor = System::Drawing::Color::White;
			this->btnEliTodoR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEliTodoR->FlatAppearance->BorderColor = System::Drawing::Color::SeaGreen;
			this->btnEliTodoR->FlatAppearance->BorderSize = 2;
			this->btnEliTodoR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnEliTodoR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnEliTodoR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliTodoR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliTodoR->Location = System::Drawing::Point(1552, 861);
			this->btnEliTodoR->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnEliTodoR->Name = L"btnEliTodoR";
			this->btnEliTodoR->Size = System::Drawing::Size(288, 62);
			this->btnEliTodoR->TabIndex = 19;
			this->btnEliTodoR->Text = L"ELIMINAR TODO";
			this->btnEliTodoR->UseVisualStyleBackColor = false;
			this->btnEliTodoR->Visible = false;
			this->btnEliTodoR->Click += gcnew System::EventHandler(this, &FormMochila::btnEliTodoR_Click);
			// 
			// btnElimina1R
			// 
			this->btnElimina1R->BackColor = System::Drawing::Color::White;
			this->btnElimina1R->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnElimina1R->FlatAppearance->BorderColor = System::Drawing::Color::SeaGreen;
			this->btnElimina1R->FlatAppearance->BorderSize = 2;
			this->btnElimina1R->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnElimina1R->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnElimina1R->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnElimina1R->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnElimina1R->Location = System::Drawing::Point(1552, 744);
			this->btnElimina1R->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnElimina1R->Name = L"btnElimina1R";
			this->btnElimina1R->Size = System::Drawing::Size(288, 62);
			this->btnElimina1R->TabIndex = 18;
			this->btnElimina1R->Text = L"ELIMINAR x 1";
			this->btnElimina1R->UseVisualStyleBackColor = false;
			this->btnElimina1R->Visible = false;
			this->btnElimina1R->Click += gcnew System::EventHandler(this, &FormMochila::btnElimina1R_Click);
			// 
			// lblMonedas
			// 
			this->lblMonedas->BackColor = System::Drawing::Color::White;
			this->lblMonedas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMonedas->Location = System::Drawing::Point(1352, 227);
			this->lblMonedas->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblMonedas->Name = L"lblMonedas";
			this->lblMonedas->Size = System::Drawing::Size(437, 55);
			this->lblMonedas->TabIndex = 20;
			this->lblMonedas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblMonedas->Visible = false;
			// 
			// lblXP
			// 
			this->lblXP->BackColor = System::Drawing::Color::White;
			this->lblXP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblXP->Location = System::Drawing::Point(1352, 465);
			this->lblXP->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblXP->Name = L"lblXP";
			this->lblXP->Size = System::Drawing::Size(437, 55);
			this->lblXP->TabIndex = 21;
			this->lblXP->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblXP->Visible = false;
			// 
			// lblValor
			// 
			this->lblValor->BackColor = System::Drawing::Color::White;
			this->lblValor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblValor->ForeColor = System::Drawing::Color::Red;
			this->lblValor->Location = System::Drawing::Point(933, 1028);
			this->lblValor->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblValor->Name = L"lblValor";
			this->lblValor->Size = System::Drawing::Size(533, 60);
			this->lblValor->TabIndex = 22;
			this->lblValor->Text = L"Equipo Valor";
			this->lblValor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblValor->Visible = false;
			// 
			// lblInstinto
			// 
			this->lblInstinto->BackColor = System::Drawing::Color::White;
			this->lblInstinto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInstinto->ForeColor = System::Drawing::Color::Gold;
			this->lblInstinto->Location = System::Drawing::Point(933, 1028);
			this->lblInstinto->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblInstinto->Name = L"lblInstinto";
			this->lblInstinto->Size = System::Drawing::Size(533, 60);
			this->lblInstinto->TabIndex = 23;
			this->lblInstinto->Text = L"Equipo Instinto";
			this->lblInstinto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblInstinto->Visible = false;
			// 
			// lblSabiduria
			// 
			this->lblSabiduria->BackColor = System::Drawing::Color::White;
			this->lblSabiduria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSabiduria->ForeColor = System::Drawing::Color::SteelBlue;
			this->lblSabiduria->Location = System::Drawing::Point(933, 1028);
			this->lblSabiduria->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblSabiduria->Name = L"lblSabiduria";
			this->lblSabiduria->Size = System::Drawing::Size(533, 60);
			this->lblSabiduria->TabIndex = 24;
			this->lblSabiduria->Text = L"Equipo Sabiduría";
			this->lblSabiduria->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblSabiduria->Visible = false;
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
			this->btn1->Location = System::Drawing::Point(112, 148);
			this->btn1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(187, 167);
			this->btn1->TabIndex = 25;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Visible = false;
			this->btn1->Click += gcnew System::EventHandler(this, &FormMochila::btn1_Click);
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
			this->btn3->Location = System::Drawing::Point(715, 148);
			this->btn3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(187, 167);
			this->btn3->TabIndex = 26;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Visible = false;
			this->btn3->Click += gcnew System::EventHandler(this, &FormMochila::btn3_Click);
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
			this->btn2->Location = System::Drawing::Point(413, 148);
			this->btn2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(187, 167);
			this->btn2->TabIndex = 27;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Visible = false;
			this->btn2->Click += gcnew System::EventHandler(this, &FormMochila::btn2_Click);
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
			this->btn5->Location = System::Drawing::Point(413, 377);
			this->btn5->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(187, 167);
			this->btn5->TabIndex = 30;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Visible = false;
			this->btn5->Click += gcnew System::EventHandler(this, &FormMochila::btn5_Click);
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
			this->btn6->Location = System::Drawing::Point(715, 377);
			this->btn6->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(187, 167);
			this->btn6->TabIndex = 29;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Visible = false;
			this->btn6->Click += gcnew System::EventHandler(this, &FormMochila::btn6_Click);
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
			this->btn4->Location = System::Drawing::Point(112, 377);
			this->btn4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(187, 167);
			this->btn4->TabIndex = 28;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Visible = false;
			this->btn4->Click += gcnew System::EventHandler(this, &FormMochila::btn4_Click);
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
			this->btn8->Location = System::Drawing::Point(413, 606);
			this->btn8->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(187, 167);
			this->btn8->TabIndex = 33;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Visible = false;
			this->btn8->Click += gcnew System::EventHandler(this, &FormMochila::btn8_Click);
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
			this->btn9->Location = System::Drawing::Point(715, 606);
			this->btn9->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(187, 167);
			this->btn9->TabIndex = 32;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Visible = false;
			this->btn9->Click += gcnew System::EventHandler(this, &FormMochila::btn9_Click);
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
			this->btn7->Location = System::Drawing::Point(112, 606);
			this->btn7->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(187, 167);
			this->btn7->TabIndex = 31;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Visible = false;
			this->btn7->Click += gcnew System::EventHandler(this, &FormMochila::btn7_Click);
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
			this->btn11->Location = System::Drawing::Point(413, 832);
			this->btn11->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn11->Name = L"btn11";
			this->btn11->Size = System::Drawing::Size(187, 167);
			this->btn11->TabIndex = 36;
			this->btn11->UseVisualStyleBackColor = false;
			this->btn11->Visible = false;
			this->btn11->Click += gcnew System::EventHandler(this, &FormMochila::btn11_Click);
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
			this->btn12->Location = System::Drawing::Point(715, 832);
			this->btn12->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn12->Name = L"btn12";
			this->btn12->Size = System::Drawing::Size(187, 167);
			this->btn12->TabIndex = 35;
			this->btn12->UseVisualStyleBackColor = false;
			this->btn12->Visible = false;
			this->btn12->Click += gcnew System::EventHandler(this, &FormMochila::btn12_Click);
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
			this->btn10->Location = System::Drawing::Point(112, 832);
			this->btn10->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btn10->Name = L"btn10";
			this->btn10->Size = System::Drawing::Size(187, 167);
			this->btn10->TabIndex = 34;
			this->btn10->UseVisualStyleBackColor = false;
			this->btn10->Visible = false;
			this->btn10->Click += gcnew System::EventHandler(this, &FormMochila::btn10_Click);
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
			this->btnAnterior->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnterior->Location = System::Drawing::Point(75, 1033);
			this->btnAnterior->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnAnterior->Name = L"btnAnterior";
			this->btnAnterior->Size = System::Drawing::Size(101, 62);
			this->btnAnterior->TabIndex = 51;
			this->btnAnterior->Text = L"<-";
			this->btnAnterior->UseVisualStyleBackColor = false;
			this->btnAnterior->Visible = false;
			this->btnAnterior->Click += gcnew System::EventHandler(this, &FormMochila::btnAnterior_Click);
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
			this->btnSiguiente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSiguiente->Location = System::Drawing::Point(853, 1033);
			this->btnSiguiente->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnSiguiente->Name = L"btnSiguiente";
			this->btnSiguiente->Size = System::Drawing::Size(101, 62);
			this->btnSiguiente->TabIndex = 52;
			this->btnSiguiente->Text = L"->";
			this->btnSiguiente->UseVisualStyleBackColor = false;
			this->btnSiguiente->Visible = false;
			this->btnSiguiente->Click += gcnew System::EventHandler(this, &FormMochila::btnSiguiente_Click);
			// 
			// lbl1
			// 
			this->lbl1->BackColor = System::Drawing::Color::White;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl1->Location = System::Drawing::Point(85, 310);
			this->lbl1->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(240, 55);
			this->lbl1->TabIndex = 53;
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl1->Visible = false;
			// 
			// lbl2
			// 
			this->lbl2->BackColor = System::Drawing::Color::White;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl2->Location = System::Drawing::Point(387, 310);
			this->lbl2->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(240, 55);
			this->lbl2->TabIndex = 54;
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl2->Visible = false;
			// 
			// lbl3
			// 
			this->lbl3->BackColor = System::Drawing::Color::White;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl3->Location = System::Drawing::Point(688, 310);
			this->lbl3->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(240, 55);
			this->lbl3->TabIndex = 55;
			this->lbl3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl3->Visible = false;
			// 
			// lbl6
			// 
			this->lbl6->BackColor = System::Drawing::Color::White;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl6->Location = System::Drawing::Point(688, 534);
			this->lbl6->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(240, 55);
			this->lbl6->TabIndex = 58;
			this->lbl6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl6->Visible = false;
			// 
			// lbl5
			// 
			this->lbl5->BackColor = System::Drawing::Color::White;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl5->Location = System::Drawing::Point(387, 534);
			this->lbl5->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(240, 55);
			this->lbl5->TabIndex = 57;
			this->lbl5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl5->Visible = false;
			// 
			// lbl4
			// 
			this->lbl4->BackColor = System::Drawing::Color::White;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl4->Location = System::Drawing::Point(85, 534);
			this->lbl4->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(240, 55);
			this->lbl4->TabIndex = 56;
			this->lbl4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl4->Visible = false;
			// 
			// lbl12
			// 
			this->lbl12->BackColor = System::Drawing::Color::White;
			this->lbl12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl12->Location = System::Drawing::Point(688, 990);
			this->lbl12->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(240, 55);
			this->lbl12->TabIndex = 64;
			this->lbl12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl12->Visible = false;
			// 
			// lbl11
			// 
			this->lbl11->BackColor = System::Drawing::Color::White;
			this->lbl11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl11->Location = System::Drawing::Point(387, 990);
			this->lbl11->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(240, 55);
			this->lbl11->TabIndex = 63;
			this->lbl11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl11->Visible = false;
			// 
			// lbl10
			// 
			this->lbl10->BackColor = System::Drawing::Color::White;
			this->lbl10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl10->Location = System::Drawing::Point(85, 990);
			this->lbl10->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(240, 55);
			this->lbl10->TabIndex = 62;
			this->lbl10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl10->Visible = false;
			// 
			// lbl9
			// 
			this->lbl9->BackColor = System::Drawing::Color::White;
			this->lbl9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl9->Location = System::Drawing::Point(688, 763);
			this->lbl9->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(240, 55);
			this->lbl9->TabIndex = 61;
			this->lbl9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl9->Visible = false;
			// 
			// lbl8
			// 
			this->lbl8->BackColor = System::Drawing::Color::White;
			this->lbl8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl8->Location = System::Drawing::Point(387, 763);
			this->lbl8->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(240, 55);
			this->lbl8->TabIndex = 60;
			this->lbl8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl8->Visible = false;
			// 
			// lbl7
			// 
			this->lbl7->BackColor = System::Drawing::Color::White;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl7->Location = System::Drawing::Point(85, 763);
			this->lbl7->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(240, 55);
			this->lbl7->TabIndex = 59;
			this->lbl7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl7->Visible = false;
			// 
			// lblNombre
			// 
			this->lblNombre->BackColor = System::Drawing::Color::White;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(1352, 384);
			this->lblNombre->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(579, 112);
			this->lblNombre->TabIndex = 65;
			this->lblNombre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblNombre->Visible = false;
			// 
			// lblNPokemon
			// 
			this->lblNPokemon->BackColor = System::Drawing::Color::White;
			this->lblNPokemon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNPokemon->Location = System::Drawing::Point(293, 69);
			this->lblNPokemon->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblNPokemon->Name = L"lblNPokemon";
			this->lblNPokemon->Size = System::Drawing::Size(531, 55);
			this->lblNPokemon->TabIndex = 66;
			this->lblNPokemon->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblNPokemon->Visible = false;
			// 
			// lblFondo
			// 
			this->lblFondo->BackColor = System::Drawing::Color::White;
			this->lblFondo->Location = System::Drawing::Point(1424, 67);
			this->lblFondo->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblFondo->Name = L"lblFondo";
			this->lblFondo->Size = System::Drawing::Size(461, 362);
			this->lblFondo->TabIndex = 67;
			this->lblFondo->Text = L" ";
			this->lblFondo->Visible = false;
			// 
			// lblMedallas
			// 
			this->lblMedallas->BackColor = System::Drawing::Color::White;
			this->lblMedallas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMedallas->ForeColor = System::Drawing::Color::Black;
			this->lblMedallas->Location = System::Drawing::Point(1547, 906);
			this->lblMedallas->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblMedallas->Name = L"lblMedallas";
			this->lblMedallas->Size = System::Drawing::Size(267, 60);
			this->lblMedallas->TabIndex = 68;
			this->lblMedallas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblMedallas->Visible = false;
			// 
			// lblVida
			// 
			this->lblVida->BackColor = System::Drawing::Color::White;
			this->lblVida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVida->ForeColor = System::Drawing::Color::Black;
			this->lblVida->Location = System::Drawing::Point(1501, 539);
			this->lblVida->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblVida->Name = L"lblVida";
			this->lblVida->Size = System::Drawing::Size(267, 60);
			this->lblVida->TabIndex = 69;
			this->lblVida->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblVida->Visible = false;
			// 
			// lblPoder
			// 
			this->lblPoder->BackColor = System::Drawing::Color::White;
			this->lblPoder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPoder->ForeColor = System::Drawing::Color::Black;
			this->lblPoder->Location = System::Drawing::Point(1408, 639);
			this->lblPoder->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblPoder->Name = L"lblPoder";
			this->lblPoder->Size = System::Drawing::Size(453, 60);
			this->lblPoder->TabIndex = 70;
			this->lblPoder->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPoder->Visible = false;
			// 
			// btnPocion
			// 
			this->btnPocion->BackColor = System::Drawing::Color::White;
			this->btnPocion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPocion.BackgroundImage")));
			this->btnPocion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnPocion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPocion->FlatAppearance->BorderSize = 0;
			this->btnPocion->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnPocion->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnPocion->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btnPocion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPocion->Location = System::Drawing::Point(1397, 837);
			this->btnPocion->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnPocion->Name = L"btnPocion";
			this->btnPocion->Size = System::Drawing::Size(123, 110);
			this->btnPocion->TabIndex = 71;
			this->btnPocion->UseVisualStyleBackColor = false;
			this->btnPocion->Visible = false;
			this->btnPocion->Click += gcnew System::EventHandler(this, &FormMochila::btnPocion_Click);
			// 
			// btnSPocion
			// 
			this->btnSPocion->BackColor = System::Drawing::Color::White;
			this->btnSPocion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSPocion.BackgroundImage")));
			this->btnSPocion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnSPocion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSPocion->FlatAppearance->BorderSize = 0;
			this->btnSPocion->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnSPocion->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnSPocion->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btnSPocion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSPocion->Location = System::Drawing::Point(1576, 837);
			this->btnSPocion->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnSPocion->Name = L"btnSPocion";
			this->btnSPocion->Size = System::Drawing::Size(123, 110);
			this->btnSPocion->TabIndex = 72;
			this->btnSPocion->UseVisualStyleBackColor = false;
			this->btnSPocion->Visible = false;
			this->btnSPocion->Click += gcnew System::EventHandler(this, &FormMochila::btnSPocion_Click);
			// 
			// btnRevivir
			// 
			this->btnRevivir->BackColor = System::Drawing::Color::White;
			this->btnRevivir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRevivir.BackgroundImage")));
			this->btnRevivir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnRevivir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRevivir->FlatAppearance->BorderSize = 0;
			this->btnRevivir->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnRevivir->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnRevivir->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btnRevivir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRevivir->Location = System::Drawing::Point(1755, 837);
			this->btnRevivir->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnRevivir->Name = L"btnRevivir";
			this->btnRevivir->Size = System::Drawing::Size(123, 110);
			this->btnRevivir->TabIndex = 73;
			this->btnRevivir->UseVisualStyleBackColor = false;
			this->btnRevivir->Visible = false;
			this->btnRevivir->Click += gcnew System::EventHandler(this, &FormMochila::btnRevivir_Click);
			// 
			// lblPolvoS
			// 
			this->lblPolvoS->BackColor = System::Drawing::Color::White;
			this->lblPolvoS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPolvoS->Location = System::Drawing::Point(1443, 725);
			this->lblPolvoS->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblPolvoS->Name = L"lblPolvoS";
			this->lblPolvoS->Size = System::Drawing::Size(165, 83);
			this->lblPolvoS->TabIndex = 74;
			this->lblPolvoS->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPolvoS->Visible = false;
			// 
			// lblCaramelos
			// 
			this->lblCaramelos->BackColor = System::Drawing::Color::White;
			this->lblCaramelos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCaramelos->Location = System::Drawing::Point(1768, 725);
			this->lblCaramelos->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->lblCaramelos->Name = L"lblCaramelos";
			this->lblCaramelos->Size = System::Drawing::Size(144, 83);
			this->lblCaramelos->TabIndex = 75;
			this->lblCaramelos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblCaramelos->Visible = false;
			// 
			// btnTransferir
			// 
			this->btnTransferir->BackColor = System::Drawing::Color::White;
			this->btnTransferir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTransferir->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnTransferir->FlatAppearance->BorderSize = 2;
			this->btnTransferir->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnTransferir->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnTransferir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTransferir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTransferir->Location = System::Drawing::Point(1397, 956);
			this->btnTransferir->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnTransferir->Name = L"btnTransferir";
			this->btnTransferir->Size = System::Drawing::Size(248, 62);
			this->btnTransferir->TabIndex = 76;
			this->btnTransferir->Text = L"Transferir";
			this->btnTransferir->UseVisualStyleBackColor = false;
			this->btnTransferir->Visible = false;
			this->btnTransferir->Click += gcnew System::EventHandler(this, &FormMochila::btnTransferir_Click);
			// 
			// btnPotenciar
			// 
			this->btnPotenciar->BackColor = System::Drawing::Color::White;
			this->btnPotenciar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPotenciar->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnPotenciar->FlatAppearance->BorderSize = 2;
			this->btnPotenciar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnPotenciar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnPotenciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPotenciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPotenciar->Location = System::Drawing::Point(1661, 956);
			this->btnPotenciar->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnPotenciar->Name = L"btnPotenciar";
			this->btnPotenciar->Size = System::Drawing::Size(243, 62);
			this->btnPotenciar->TabIndex = 77;
			this->btnPotenciar->Text = L"Potenciar";
			this->btnPotenciar->UseVisualStyleBackColor = false;
			this->btnPotenciar->Visible = false;
			this->btnPotenciar->Click += gcnew System::EventHandler(this, &FormMochila::btnPotenciar_Click);
			// 
			// btnRenombrar
			// 
			this->btnRenombrar->BackColor = System::Drawing::Color::White;
			this->btnRenombrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRenombrar->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnRenombrar->FlatAppearance->BorderSize = 2;
			this->btnRenombrar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnRenombrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnRenombrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRenombrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRenombrar->Location = System::Drawing::Point(1664, 1030);
			this->btnRenombrar->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnRenombrar->Name = L"btnRenombrar";
			this->btnRenombrar->Size = System::Drawing::Size(240, 62);
			this->btnRenombrar->TabIndex = 79;
			this->btnRenombrar->Text = L"Renombrar";
			this->btnRenombrar->UseVisualStyleBackColor = false;
			this->btnRenombrar->Visible = false;
			this->btnRenombrar->Click += gcnew System::EventHandler(this, &FormMochila::btnRenombrar_Click);
			// 
			// btnEvolucionar
			// 
			this->btnEvolucionar->BackColor = System::Drawing::Color::White;
			this->btnEvolucionar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEvolucionar->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnEvolucionar->FlatAppearance->BorderSize = 2;
			this->btnEvolucionar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnEvolucionar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnEvolucionar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEvolucionar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEvolucionar->Location = System::Drawing::Point(1400, 1030);
			this->btnEvolucionar->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnEvolucionar->Name = L"btnEvolucionar";
			this->btnEvolucionar->Size = System::Drawing::Size(248, 62);
			this->btnEvolucionar->TabIndex = 78;
			this->btnEvolucionar->Text = L"Evolucionar";
			this->btnEvolucionar->UseVisualStyleBackColor = false;
			this->btnEvolucionar->Visible = false;
			this->btnEvolucionar->Click += gcnew System::EventHandler(this, &FormMochila::btnEvolucionar_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->BackColor = System::Drawing::Color::White;
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F));
			this->txtNombre->Location = System::Drawing::Point(1352, 377);
			this->txtNombre->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->txtNombre->MaxLength = 10;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(572, 107);
			this->txtNombre->TabIndex = 80;
			this->txtNombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtNombre->Visible = false;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::White;
			this->btnOk->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOk->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnOk->FlatAppearance->BorderSize = 2;
			this->btnOk->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnOk->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnOk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(1859, 315);
			this->btnOk->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(101, 62);
			this->btnOk->TabIndex = 81;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Visible = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &FormMochila::btnOk_Click);
			// 
			// btnVolar
			// 
			this->btnVolar->BackColor = System::Drawing::Color::White;
			this->btnVolar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnVolar->Enabled = false;
			this->btnVolar->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->btnVolar->FlatAppearance->BorderSize = 2;
			this->btnVolar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnVolar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnVolar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVolar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVolar->Location = System::Drawing::Point(1064, 909);
			this->btnVolar->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnVolar->Name = L"btnVolar";
			this->btnVolar->Size = System::Drawing::Size(171, 62);
			this->btnVolar->TabIndex = 104;
			this->btnVolar->Text = L"VOLAR";
			this->btnVolar->UseVisualStyleBackColor = false;
			this->btnVolar->Visible = false;
			this->btnVolar->Click += gcnew System::EventHandler(this, &FormMochila::btnVolar_Click);
			// 
			// PokemonElegido
			// 
			this->PokemonElegido->BackColor = System::Drawing::Color::White;
			this->PokemonElegido->Location = System::Drawing::Point(1421, 72);
			this->PokemonElegido->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->PokemonElegido->Name = L"PokemonElegido";
			this->PokemonElegido->Size = System::Drawing::Size(421, 300);
			this->PokemonElegido->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PokemonElegido->TabIndex = 105;
			this->PokemonElegido->TabStop = false;
			this->PokemonElegido->Visible = false;
			// 
			// FormMochila
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2005, 1145);
			this->Controls->Add(this->PokemonElegido);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->pbPokemon);
			this->Controls->Add(this->btnVolar);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnRenombrar);
			this->Controls->Add(this->btnEvolucionar);
			this->Controls->Add(this->btnPotenciar);
			this->Controls->Add(this->btnTransferir);
			this->Controls->Add(this->lblCaramelos);
			this->Controls->Add(this->lblPolvoS);
			this->Controls->Add(this->btnRevivir);
			this->Controls->Add(this->btnSPocion);
			this->Controls->Add(this->btnPocion);
			this->Controls->Add(this->lblPoder);
			this->Controls->Add(this->lblVida);
			this->Controls->Add(this->lblMedallas);
			this->Controls->Add(this->lblNPokemon);
			this->Controls->Add(this->lbl12);
			this->Controls->Add(this->lbl11);
			this->Controls->Add(this->lbl10);
			this->Controls->Add(this->lbl9);
			this->Controls->Add(this->lbl8);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->lbl5);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->btnSiguiente);
			this->Controls->Add(this->btnAnterior);
			this->Controls->Add(this->btnPokemon);
			this->Controls->Add(this->btn11);
			this->Controls->Add(this->btn12);
			this->Controls->Add(this->btn10);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->pbProgreso);
			this->Controls->Add(this->pbObjetos);
			this->Controls->Add(this->btnElementos);
			this->Controls->Add(this->btnJugador);
			this->Controls->Add(this->lblRevivir);
			this->Controls->Add(this->lblSPociones);
			this->Controls->Add(this->lblPokeballs);
			this->Controls->Add(this->btnEliTodoR);
			this->Controls->Add(this->btnElimina1R);
			this->Controls->Add(this->btnEliTodoSP);
			this->Controls->Add(this->btnElimina1SP);
			this->Controls->Add(this->btnEliTodoPK);
			this->Controls->Add(this->btnElimina1PK);
			this->Controls->Add(this->lblSabiduria);
			this->Controls->Add(this->lblInstinto);
			this->Controls->Add(this->lblValor);
			this->Controls->Add(this->btnElimina1P);
			this->Controls->Add(this->lblMonedas);
			this->Controls->Add(this->lblNObjetos);
			this->Controls->Add(this->lblXP);
			this->Controls->Add(this->lblPociones);
			this->Controls->Add(this->btnEliTodoP);
			this->Controls->Add(this->lblFondo);
			this->Controls->Add(this->txtNombre);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormMochila";
			this->Text = L"Mochila";
			this->Load += gcnew System::EventHandler(this, &FormMochila::FormMochila_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbObjetos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbProgreso))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PokemonElegido))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int opcion = 0;
		int NObjetos = 0;
		int MaxObjetos = 0;
		double progreso = 0;
		bool cerrar = false;

#pragma endregion

		public:void SetoJuego(CJuego *oJuego)
		{
			oJuego = oJuegoAux;
		}

private: System::Void btnElementos_Click(System::Object^  sender, System::EventArgs^  e) 
{
	btnElementos->Visible = false; btnJugador->Visible = false; btnPokemon->Visible = false;
	pbObjetos->Visible = false; pbProgreso->Visible = false; pbPokemon->Visible = false;
	opcion = 1; TObjetos->Enabled = true;
}
private: System::Void btnJugador_Click(System::Object^  sender, System::EventArgs^  e) 
{
	btnElementos->Visible = false; btnJugador->Visible = false; btnPokemon->Visible = false;
	pbObjetos->Visible = false; pbProgreso->Visible = false; pbPokemon->Visible = false;
	opcion = 2; TProgreso->Enabled = true;
}
private: System::Void btnPokemon_Click(System::Object^  sender, System::EventArgs^  e) 
{
	btnElementos->Visible = false; btnJugador->Visible = false; btnPokemon->Visible = false;
	pbObjetos->Visible = false; pbProgreso->Visible = false; pbPokemon->Visible = false;
	opcion = 3; TPokemon->Enabled = true;
}
private: System::Void TObjetos_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	Graphics ^g = this->CreateGraphics();
	BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
	BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);

	NObjetos = oJuegoAux->GetMochila()->Get_NObjetos();
	MaxObjetos = oJuegoAux->GetMochila()->Get_NMaxObjetos();

	if (NObjetos == MaxObjetos){ lblNObjetos->ForeColor = Color::Red; }
	else{ lblNObjetos->ForeColor = Color::Black; }

	buffer->Graphics->DrawImage(FondoObjetos, 0, 0, 755, 480);

	btnRegresar->Visible = true; lblNObjetos->Visible = true; lblPociones->Visible = true;
	lblPokeballs->Visible = true; lblSPociones->Visible = true; lblRevivir->Visible = true;
	btnElimina1PK->Visible = true; btnEliTodoPK->Visible = true; btnElimina1P->Visible = true;
	btnEliTodoP->Visible = true; btnElimina1SP->Visible = true; btnEliTodoSP->Visible = true;
	btnElimina1R->Visible = true; btnEliTodoR->Visible = true;

	if (oJuegoAux->GetMochila()->Get_NPokeball() > 0){ btnElimina1PK->Enabled = true; btnEliTodoPK->Enabled = true; }
	else{ btnElimina1PK->Enabled = false; btnEliTodoPK->Enabled = false; }

	if (oJuegoAux->GetMochila()->Get_NPociones() > 0){ btnElimina1P->Enabled = true; btnEliTodoP->Enabled = true; }
	else{ btnElimina1P->Enabled = false; btnEliTodoP->Enabled = false; }

	if (oJuegoAux->GetMochila()->Get_NSuperPociones() > 0){ btnElimina1SP->Enabled = true; btnEliTodoSP->Enabled = true; }
	else{ btnElimina1SP->Enabled = false; btnEliTodoSP->Enabled = false; }

	if (oJuegoAux->GetMochila()->Get_NRevivir() > 0){ btnElimina1R->Enabled = true; btnEliTodoR->Enabled = true; }
	else{ btnElimina1R->Enabled = false; btnEliTodoR->Enabled = false; }

	buffer->Graphics->DrawImage(Img_Pokeball, 40, 60, 180, 180);
	buffer->Graphics->DrawImage(Img_SuperPocion, 40, 270, 180, 180);
	buffer->Graphics->DrawImage(Img_Pocion, 380, 60, 180, 180);
	buffer->Graphics->DrawImage(Img_Revivir, 380, 270, 180, 180);

	lblNObjetos->Text = ("" + NObjetos + " / " + MaxObjetos);
	lblPokeballs->Text = ("x" + oJuegoAux->GetMochila()->Get_NPokeball());
	lblPociones->Text = ("x" + oJuegoAux->GetMochila()->Get_NPociones());
	lblSPociones->Text = ("x" + oJuegoAux->GetMochila()->Get_NSuperPociones());
	lblRevivir->Text = ("x" + oJuegoAux->GetMochila()->Get_NRevivir());

	if (cerrar)
	{
		cerrar = false;

		buffer->Graphics->DrawImage(Fondo, 0, 0, 755, 480);

		btnElementos->Visible = true; btnJugador->Visible = true; btnPokemon->Visible = true;
		pbObjetos->Visible = true; pbProgreso->Visible = true; pbPokemon->Visible = true;
		
		btnRegresar->Visible = false; lblNObjetos->Visible = false; lblPociones->Visible = false;
		lblPokeballs->Visible = false; lblSPociones->Visible = false; lblRevivir->Visible = false;
		btnElimina1PK->Visible = false; btnEliTodoPK->Visible = false; btnElimina1P->Visible = false;
		btnEliTodoP->Visible = false; btnElimina1SP->Visible = false; btnEliTodoSP->Visible = false;
		btnElimina1R->Visible = false; btnEliTodoR->Visible = false;
		
		TObjetos->Enabled = false;
	}

	buffer->Render(g);
	delete buffer, espacio, g;
}
private: System::Void btnElimina1PK_Click(System::Object^  sender, System::EventArgs^  e) 
{
	oJuegoAux->GetMochila()->Set_NPokeball(oJuegoAux->GetMochila()->Get_NPokeball() - 1);
	oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);
}
private: System::Void btnEliTodoPK_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MessageBox::Show("¿Seguro que quieres eliminar todas las pokeball?", "Mensaje", MessageBoxButtons::OKCancel)
		== System::Windows::Forms::DialogResult::OK)
	{
		oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - oJuegoAux->GetMochila()->Get_NPokeball());
		oJuegoAux->GetMochila()->Set_NPokeball(0);
	}
}
private: System::Void btnEliTodoSP_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MessageBox::Show("¿Seguro que quieres eliminar todas las superpociones?", "Mensaje", MessageBoxButtons::OKCancel)
		== System::Windows::Forms::DialogResult::OK)
	{
		oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - oJuegoAux->GetMochila()->Get_NSuperPociones());
		oJuegoAux->GetMochila()->Set_NSuperPociones(0);
	}
}
private: System::Void btnElimina1SP_Click(System::Object^  sender, System::EventArgs^  e) 
{
	oJuegoAux->GetMochila()->Set_NSuperPociones(oJuegoAux->GetMochila()->Get_NSuperPociones() - 1);
	oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);
}
private: System::Void btnElimina1R_Click(System::Object^  sender, System::EventArgs^  e) 
{
	oJuegoAux->GetMochila()->Set_NRevivir(oJuegoAux->GetMochila()->Get_NRevivir() - 1);
	oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);
}
private: System::Void btnEliTodoR_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MessageBox::Show("¿Seguro que quieres eliminar todos los revivir?", "Mensaje", MessageBoxButtons::OKCancel)
		== System::Windows::Forms::DialogResult::OK)
	{
		oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - oJuegoAux->GetMochila()->Get_NRevivir());
		oJuegoAux->GetMochila()->Set_NRevivir(0);
	}
}
private: System::Void btnEliTodoP_Click(System::Object^  sender, System::EventArgs^  e) 
{
	oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - oJuegoAux->GetMochila()->Get_NPociones());
	oJuegoAux->GetMochila()->Set_NPociones(0);
}
private: System::Void btnElimina1P_Click(System::Object^  sender, System::EventArgs^  e) 
{
	oJuegoAux->GetMochila()->Set_NPociones(oJuegoAux->GetMochila()->Get_NPociones() - 1);
	oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);
}

private: System::Void TProgreso_Tick(System::Object^  sender, System::EventArgs^  e)
{
    Graphics ^g = this->CreateGraphics();
    BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
    BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
	Pen ^lapiz = gcnew Pen(Color::Black, 3);

	buffer->Graphics->DrawImage(FondoProgreso, 0, 0, 755, 480);
	btnRegresar->Visible = true; lblMonedas->Visible = true; lblXP->Visible = true; lblMedallas->Visible = true;

	if (oJuegoAux->GetMochila()->Get_Monedas() < 10000){ progreso = oJuegoAux->GetMochila()->Get_Monedas() * 0.026; }
	else{ progreso = 10000; }
	
	buffer->Graphics->DrawImage(Monedas, 335, 30, 100, 100);
	buffer->Graphics->FillRectangle(Brushes::GreenYellow, 450, 75, progreso, 10);
	buffer->Graphics->DrawRectangle(lapiz, 450, 75, 260, 10);
	lblMonedas->Text = ("" + oJuegoAux->GetMochila()->Get_Monedas() + " / 10000");

	if (oJuegoAux->GetMochila()->Get_Experiencia() < 10000){ progreso = oJuegoAux->GetMochila()->Get_Experiencia() * 0.026; }
	else{ progreso = 10000; }

	buffer->Graphics->DrawImage(ImgXP, 335, 155, 100, 70);
	buffer->Graphics->FillRectangle(Brushes::GreenYellow, 450, 175, progreso, 10);
	buffer->Graphics->DrawRectangle(lapiz, 450, 175, 260, 10);
	lblXP->Text = ("" + oJuegoAux->GetMochila()->Get_Experiencia() + " / 10000");

	string equipo = oJuegoAux->GetMochila()->Get_Equipo();

	if (equipo == "Valor"){ buffer->Graphics->DrawImage(EquipoValor, 350, 230, 200, 200); lblValor->Visible = true; }
	else if (equipo == "Sabiduría"){ buffer->Graphics->DrawImage(EquipoSabiduria, 350, 230, 200, 200); lblSabiduria->Visible = true; }
	else if (equipo == "Instinto"){ buffer->Graphics->DrawImage(EquipoInstinto, 350, 230, 200, 200); lblInstinto->Visible = true; }

	buffer->Graphics->DrawImage(Medallas, 580, 280, 100, 100);
	lblMedallas->Text = ("x" + oJuegoAux->GetMochila()->Get_Medallas());

	if (cerrar)
	{
		cerrar = false;

		buffer->Graphics->DrawImage(Fondo, 0, 0, 755, 480);

		btnElementos->Visible = true; btnJugador->Visible = true; btnPokemon->Visible = true;
		pbObjetos->Visible = true; pbProgreso->Visible = true; pbPokemon->Visible = true;

		btnRegresar->Visible = false; lblMonedas->Visible = false; lblXP->Visible = false;
		lblValor->Visible = false; lblInstinto->Visible = false; lblSabiduria->Visible = false;
		lblMedallas->Visible = false;

		TProgreso->Enabled = false;
	}
    
    buffer->Render(g);
    delete lapiz, buffer, espacio, g;
}

		 int paginas = 0;
		 int Npagina = 1;
		 int IndicePagina = 0;
		 int MaximoPokemon = 150;
		 int IndicePokemon = 0;
		 bool MuestraPokemon = false;
		 bool aumentarpoder = false;
		 bool transferir = false;
		 bool Evolucionar = false;

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

		 void FalseATodo()
		 {
			 PokemonElegido->Visible = false;
		 }

		 void Incrementa_Disminuye_Caramelos(string tipo, int incremento)
		 {
			 if (tipo == "PIK" || tipo == "RAI")
			 {
				 oJuegoAux->GetMochila()->Set_CarPikachu(oJuegoAux->GetMochila()->Get_CarPikachu() + incremento);
			 }
			 else if (tipo == "BUL" || tipo == "IVY" || tipo == "VEN")
			 {
				 oJuegoAux->GetMochila()->Set_CarBulbasur(oJuegoAux->GetMochila()->Get_CarBulbasur() + incremento);
			 }
			 else if (tipo == "SQU" || tipo == "BLA" || tipo == "WAR")
			 {
				 oJuegoAux->GetMochila()->Set_CarSquirtle(oJuegoAux->GetMochila()->Get_CarSquirtle() + incremento);
			 }
			 else if (tipo == "CHA" || tipo == "CHAR" || tipo == "CHARI")
			 {
				 oJuegoAux->GetMochila()->Set_CarCharmander(oJuegoAux->GetMochila()->Get_CarCharmander() + incremento);
			 }
			 else if (tipo == "ABR" || tipo == "KAD" || tipo == "ALA")
			 {
				 oJuegoAux->GetMochila()->Set_CarAbra(oJuegoAux->GetMochila()->Get_CarAbra() + incremento);
			 }
			 else if (tipo == "SNO")
			 {
				 oJuegoAux->GetMochila()->Set_CarSnorlax(oJuegoAux->GetMochila()->Get_CarSnorlax() + incremento);
			 }
			 else if (tipo == "EKA" || tipo == "ARB")
			 {
				 oJuegoAux->GetMochila()->Set_CarEkans(oJuegoAux->GetMochila()->Get_CarEkans() + incremento);
			 }
			 else if (tipo == "ONI")
			 {
				 oJuegoAux->GetMochila()->Set_CarOnix(oJuegoAux->GetMochila()->Get_CarOnix() + incremento);
			 }
			 else if (tipo == "EVE" || tipo == "VAP" || tipo == "JOL" || tipo == "FLA")
			 {
				 oJuegoAux->GetMochila()->Set_CarEvee(oJuegoAux->GetMochila()->Get_CarEvee() + incremento);
			 }
			 else if (tipo == "MAG" || tipo == "GYA")
			 {
				 oJuegoAux->GetMochila()->Set_CarMagikarp(oJuegoAux->GetMochila()->Get_CarMagikarp() + incremento);
			 }
			 else if (tipo == "MEO" || tipo == "PER")
			 {
				 oJuegoAux->GetMochila()->Set_CarMeowth(oJuegoAux->GetMochila()->Get_CarMeowth() + incremento);
			 }
			 else if (tipo == "MAC" || tipo == "MACH" || tipo == "MACHA")
			 {
				 oJuegoAux->GetMochila()->Set_CarMachop(oJuegoAux->GetMochila()->Get_CarMachop() + incremento);
			 }
			 else if (tipo == "PID" || tipo == "PIDG" || tipo == "PIDGE")
			 {
				 oJuegoAux->GetMochila()->Set_CarPidgey(oJuegoAux->GetMochila()->Get_CarPidgey() + incremento);
			 }
		 }

		 int Get_Caramelos(string tipo)
		 {
			 int num;

			 if (tipo == "PIK" || tipo == "RAI")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarPikachu();
			 }
			 else if (tipo == "BUL" || tipo == "IVY" || tipo == "VEN")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarBulbasur();
			 }
			 else if (tipo == "SQU" || tipo == "BLA" || tipo == "WAR")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarSquirtle();
			 }
			 else if (tipo == "CHA" || tipo == "CHAR" || tipo == "CHARI")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarCharmander();
			 }
			 else if (tipo == "ABR" || tipo == "KAD" || tipo == "ALA")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarAbra();
			 }
			 else if (tipo == "SNO")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarSnorlax();
			 }
			 else if (tipo == "EKA" || tipo == "ARB")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarEkans();
			 }
			 else if (tipo == "ONI")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarOnix();
			 }
			 else if (tipo == "EVE" || tipo == "VAP" || tipo == "JOL" || tipo == "FLA")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarEvee();
			 }
			 else if (tipo == "MAG" || tipo == "GYA")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarMagikarp();
			 }
			 else if (tipo == "MEO" || tipo == "PER")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarMeowth();
			 }
			 else if (tipo == "MAC" || tipo == "MACH" || tipo == "MACHA")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarMachop();
			 }
			 else if (tipo == "PID" || tipo == "PIDG" || tipo == "PIDGE")
			 {
				 num = oJuegoAux->GetMochila()->Get_CarPidgey();
			 }

			 return num;
		 }

		 void Dibuja_Pokemon(string tipo)
		 {
			 if (tipo == "PIK")
			 {
				 PokemonElegido->Image = Image::FromFile("Pikachu_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "BUL")
			 {
				 PokemonElegido->Image = Image::FromFile("Bulbasaur_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "SQU")
			 {
				 PokemonElegido->Image = Image::FromFile("Squirtle_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "CHA")
			 {
				 PokemonElegido->Image = Image::FromFile("Charmander_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "ABR")
			 {
				 PokemonElegido->Image = Image::FromFile("Abra_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "SNO")
			 {
				 PokemonElegido->Image = Image::FromFile("Snorlax_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "EKA")
			 {
				 PokemonElegido->Image = Image::FromFile("Ekans_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "ONI")
			 {
				 PokemonElegido->Image = Image::FromFile("Onix_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "EVE")
			 {
				 PokemonElegido->Image = Image::FromFile("Eevee_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "MAG")
			 {
				 PokemonElegido->Image = Image::FromFile("Magikarp_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "MEO")
			 {
				 PokemonElegido->Image = Image::FromFile("Meowth_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "MAC")
			 {
				 PokemonElegido->Image = Image::FromFile("Machop_XY.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "PID")
			 {
				 PokemonElegido->Image = Image::FromFile("pidgey.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "RAI")
			 {
				 PokemonElegido->Image = Image::FromFile("raichu.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "IVY")
			 {
				 PokemonElegido->Image = Image::FromFile("ivysaur.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "VEN")
			 {
				 PokemonElegido->Image = Image::FromFile("venusaur.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "WAR")
			 {
				 PokemonElegido->Image = Image::FromFile("wartortle.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "BLA")
			 {
				 PokemonElegido->Image = Image::FromFile("blastoise.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "CHAR")
			 {
				 PokemonElegido->Image = Image::FromFile("charmeleon.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "CHARI")
			 {
				 PokemonElegido->Image = Image::FromFile("charizard.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "KAD")
			 {
				 PokemonElegido->Image = Image::FromFile("kadabra.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "ALA")
			 {
				 PokemonElegido->Image = Image::FromFile("alakazam.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "ARB")
			 {
				 PokemonElegido->Image = Image::FromFile("arbok.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "VAP")
			 {
				 PokemonElegido->Image = Image::FromFile("vaporeon.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "JOL")
			 {
				 PokemonElegido->Image = Image::FromFile("jolteon.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "FLA")
			 {
				 PokemonElegido->Image = Image::FromFile("flareon.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "GYA")
			 {
				 PokemonElegido->Image = Image::FromFile("gyarados.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "PER")
			 {
				 PokemonElegido->Image = Image::FromFile("persian.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "MACH")
			 {
				 PokemonElegido->Image = Image::FromFile("machoke.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "MACHA")
			 {
				 PokemonElegido->Image = Image::FromFile("machamp.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "PIDG")
			 {
				 PokemonElegido->Image = Image::FromFile("pidgeotto.gif");
				 PokemonElegido->Visible = true;
			 }
			 else if (tipo == "PIDGE")
			 {
				 PokemonElegido->Image = Image::FromFile("pidgeot.gif");
				 PokemonElegido->Visible = true;
			 }

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
				 btn1->Visible = true; lbl1->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(0 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(0 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn1->BackgroundImage = Imagen_Elegida; lbl1->Text = (Nombre);
			 }
			 else{ btn1->Visible = false; lbl1->Visible = false; }

			 if ((2 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn2->Visible = true; lbl2->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(1 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(1 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn2->BackgroundImage = Imagen_Elegida; lbl2->Text = (Nombre);
			 }
			 else{ btn2->Visible = false; lbl2->Visible = false; }

			 if ((3 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn3->Visible = true; lbl3->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(2 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(2 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn3->BackgroundImage = Imagen_Elegida; lbl3->Text = (Nombre);
			 }
			 else{ btn3->Visible = false; lbl3->Visible = false; }

			 if ((4 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn4->Visible = true; lbl4->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(3 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(3 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn4->BackgroundImage = Imagen_Elegida; lbl4->Text = (Nombre);
			 }
			 else{ btn4->Visible = false; lbl4->Visible = false; }

			 if ((5 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn5->Visible = true; lbl5->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(4 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(4 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn5->BackgroundImage = Imagen_Elegida; lbl5->Text = (Nombre);
			 }
			 else{ btn5->Visible = false; lbl5->Visible = false; }

			 if ((6 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn6->Visible = true; lbl6->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(5 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(5 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn6->BackgroundImage = Imagen_Elegida; lbl6->Text = (Nombre);
			 }
			 else{ btn6->Visible = false; lbl6->Visible = false; }

			 if ((7 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn7->Visible = true; lbl7->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(6 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(6 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn7->BackgroundImage = Imagen_Elegida; lbl7->Text = (Nombre);
			 }
			 else{ btn7->Visible = false; lbl7->Visible = false; }

			 if ((8 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn8->Visible = true; lbl8->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(7 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(7 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn8->BackgroundImage = Imagen_Elegida; lbl8->Text = (Nombre);
			 }
			 else{ btn8->Visible = false; lbl8->Visible = false; }

			 if ((9 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn9->Visible = true; lbl9->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(8 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(8 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn9->BackgroundImage = Imagen_Elegida; lbl9->Text = (Nombre);
			 }
			 else{ btn9->Visible = false; lbl9->Visible = false; }

			 if ((10 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn10->Visible = true; lbl10->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(9 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(9 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn10->BackgroundImage = Imagen_Elegida; lbl10->Text = (Nombre);
			 }
			 else{ btn10->Visible = false; lbl10->Visible = false; }

			 if ((11 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn11->Visible = true; lbl11->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(10 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(10 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn11->BackgroundImage = Imagen_Elegida; lbl11->Text = (Nombre);
			 }
			 else{ btn11->Visible = false; lbl11->Visible = false; }

			 if ((12 + (IndicePagina * 12)) <= oJuegoAux->GetMochila()->Get_NPokemon())
			 {
				 btn12->Visible = true; lbl12->Visible = true;
				 string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[(11 + (IndicePagina * 12))]->Get_tipo();
				 String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[(11 + (IndicePagina * 12))]->Get_Nombre().c_str());
				 Elige_Imagen(tipo);
				 btn12->BackgroundImage = Imagen_Elegida; lbl12->Text = (Nombre);
			 }
			 else{ btn12->Visible = false; lbl12->Visible = false; }
		 }

		 double Barravida = 0;
		 double BarraCP = 0;
		 bool Renombrar = false;
		 bool Dibujado = false;

private: System::Void TPokemon_Tick(System::Object^  sender, System::EventArgs^  e)
{
	Graphics ^g = this->CreateGraphics();
	BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
	BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
	Pen ^lapiz = gcnew Pen(Color::Black, 3);
	buffer->Graphics->Clear(Color::Black);

	buffer->Graphics->DrawImage(FondoPokemons, 0, 0, 755, 480);
	btnRegresar->Visible = true; btnSiguiente->Visible = true; btnAnterior->Visible = true;
	lblNPokemon->Visible = true;

	int NPokemon = oJuegoAux->GetMochila()->Get_NPokemon();
	int MaxPokemon = oJuegoAux->GetMochila()->Get_NMaxPokemon();

	if (NPokemon == MaxPokemon){ lblNPokemon->ForeColor = Color::Red; }
	else{ lblNPokemon->ForeColor = Color::Black; }

	lblNPokemon->Text = (NPokemon + " / " + MaxPokemon);

	if (oJuegoAux->GetMochila()->Get_NPokemon() > 0)
	{
		paginas = CalculaNPaginas(oJuegoAux->GetMochila()->Get_NPokemon());
		
		if (paginas > 1)
		{
			if (Npagina + 1 > paginas) {btnSiguiente->Enabled = false;	}
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
	}
	else
	{
		btn1->Visible = false; btn2->Visible = false; btn3->Visible = false; btn4->Visible = false;
		btn5->Visible = false; btn6->Visible = false; btn7->Visible = false; btn8->Visible = false;
		btn9->Visible = false; btn10->Visible = false; btn11->Visible = false; btn12->Visible = false;

		lbl1->Visible = false; lbl2->Visible = false; lbl3->Visible = false; lbl4->Visible = false;
		lbl5->Visible = false; lbl6->Visible = false; lbl7->Visible = false; lbl8->Visible = false;
		lbl9->Visible = false; lbl10->Visible = false; lbl11->Visible = false; lbl12->Visible = false;

		FalseATodo();
	}

	if (MuestraPokemon)
	{
		string Tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_tipo();
		String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre().c_str());
		String ^TipoP = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_TipoP().c_str());
		int PoderMax = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_MaxPoder();
		int Poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder();
		int VidaMAx = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax();
		int Vida = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida();
		int NCaramelosNe = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion();
		int NCaramelosAc = Get_Caramelos(Tipo);
		int NPolvosEstelares = oJuegoAux->GetMochila()->Get_PolvoEstelar();

		if (Renombrar == true) { lblNombre->Visible = false; txtNombre->Visible = true; btnOk->Visible = true; }
		else{ lblNombre->Visible = true; txtNombre->Visible = false; btnOk->Visible = false; }

		lblFondo->Visible = true; lblVida->Visible = true; lblPoder->Visible = true; lblCaramelos->Visible = true;
		lblPolvoS->Visible = true; btnPocion->Visible = true; btnSPocion->Visible = true; btnTransferir->Visible = true;
		btnRevivir->Visible = true; btnRenombrar->Visible = true; btnEvolucionar->Visible = true; btnPotenciar->Visible = true;

		if (Tipo == "PID" || Tipo == "PIDG" || Tipo == "PIDGE")
		{
			btnVolar->Visible = true;

			if (oJuegoAux->GetMochila()->Get_Monedas() > 5)
			{
				btnVolar->Enabled = true;
			}
			else
			{
				btnVolar->Enabled = false;
			}
		}
		else
		{
			btnVolar->Visible = false;
		}

		if (Dibujado == false){ Dibuja_Pokemon(Tipo); Dibujado = true; }
		lblNombre->Text = (Nombre);

		Barravida = Vida * (215 / (VidaMAx * 1.0));
		buffer->Graphics->FillRectangle(Brushes::GreenYellow, 505, 213, Barravida, 10);
		buffer->Graphics->DrawRectangle(lapiz, 505, 213, 215, 10);
		if (Vida >= 0 && Vida <= 15){ lblVida->ForeColor = Color::Red; }
		else{ lblVida->ForeColor = Color::Black; }
		lblVida->Text = (Vida + " / " + VidaMAx);

		BarraCP = Poder * (215 / (PoderMax * 1.0));
		buffer->Graphics->FillRectangle(Brushes::SteelBlue, 505, 253, BarraCP, 10);
		buffer->Graphics->DrawRectangle(lapiz, 505, 253, 215, 10);
		lblPoder->Text = ("CP: " + Poder + " / " + PoderMax);

		buffer->Graphics->DrawImage(PolvoEstelar, 505, 295, 50, 50);
		buffer->Graphics->DrawImage(Caramelo, 615, 295, 50, 50);
		lblCaramelos->Text = ("x" + NCaramelosAc); lblPolvoS->Text = ("x" + NPolvosEstelares);

		if (NCaramelosAc >= NCaramelosNe && NCaramelosNe != -1){ btnEvolucionar->Enabled = true; }
		else { btnEvolucionar->Enabled = false; }	

		if (NPolvosEstelares >= 100 && NCaramelosAc >= 3 && Poder < PoderMax){ btnPotenciar->Enabled = true; }
		else{ btnPotenciar->Enabled = false; }
	}

	if (cerrar)
	{
		cerrar = false;

		buffer->Graphics->DrawImage(Fondo, 0, 0, 755, 480);

		btnElementos->Visible = true; btnJugador->Visible = true; btnPokemon->Visible = true;
		pbObjetos->Visible = true; pbProgreso->Visible = true; pbPokemon->Visible = true;

		btn1->Visible = false; btn2->Visible = false; btn3->Visible = false; btn4->Visible = false;
		btn5->Visible = false; btn6->Visible = false; btn7->Visible = false; btn8->Visible = false;
		btn9->Visible = false; btn10->Visible = false; btn11->Visible = false; btn12->Visible = false;

		lbl1->Visible = false; lbl2->Visible = false; lbl3->Visible = false; lbl4->Visible = false;
		lbl5->Visible = false; lbl6->Visible = false; lbl7->Visible = false; lbl8->Visible = false;
		lbl9->Visible = false; lbl10->Visible = false; lbl11->Visible = false; lbl12->Visible = false;

		btnRegresar->Visible = false; btnSiguiente->Visible = false; btnAnterior->Visible = false; lblNPokemon->Visible = false;
		lblFondo->Visible = false; lblNombre->Visible = false; lblVida->Visible = false; lblPoder->Visible = false;
		lblCaramelos->Visible = false; lblPolvoS->Visible = false; btnPocion->Visible = false; btnSPocion->Visible = false;
		btnRevivir->Visible = false; btnRenombrar->Visible = false; btnPotenciar->Visible = false; btnEvolucionar->Visible = false;
		btnTransferir->Visible = false; Renombrar = false; txtNombre->Visible = false; btnOk->Visible = false;

		FalseATodo();

		MuestraPokemon = false; IndicePokemon = 0; IndicePagina = 0; Npagina = 0; paginas = 0;

		TPokemon->Enabled = false;
	}

	buffer->Render(g);
	delete buffer, espacio, g;
}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (opcion == 1)
	{
		opcion = 0; cerrar = true;
	}
	else if (opcion == 2)
	{
		opcion = 0; cerrar = true;
	}
	else if (opcion == 3)
	{
		opcion = 0; cerrar = true;
	}
}

private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 0 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 1 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 2 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 3 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 4 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 5 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 6 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 7 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 8 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 9 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn11_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 10 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btn12_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IndicePokemon = 11 + (IndicePagina * 12);
	MuestraPokemon = true; Renombrar = false; Dibujado = false;
}
private: System::Void btnSiguiente_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Renombrar = false; MuestraPokemon = false;
	IndicePokemon = 0; Npagina++; IndicePagina++;
}
private: System::Void btnAnterior_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Renombrar = false; MuestraPokemon = false;
	IndicePokemon = 0; Npagina--; IndicePagina--;
}
private: System::Void btnOk_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Renombrar = false;
	String ^NuevoNombre = gcnew String(txtNombre->Text);
	char *A = new char[NuevoNombre->Length];
	sprintf(A, "%s", NuevoNombre);

	oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre(A);

	txtNombre->Visible = false; btnOk->Visible = false;
}
private: System::Void btnRenombrar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Renombrar = true;
	btnOk->Visible = true; lblNombre->Visible = false; txtNombre->Visible = true; 
	String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre().c_str());
	txtNombre->Text = (Nombre);
}
private: System::Void btnEvolucionar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_tipo();
	String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre().c_str());
	int NCaramelos = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion();

	if (MessageBox::Show("¿Seguro que quieres evolucionar a " + Nombre + " por " + NCaramelos + " caramelos?", "Mensaje", MessageBoxButtons::OKCancel) 
		== System::Windows::Forms::DialogResult::OK)
	{
		if (tipo == "PIK")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("RAI");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Pikachu")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Raichu");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2028);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "BUL")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("IVY");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Bulbasaur")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Ivysaur");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(100);
			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax() < 90)
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(90);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(90);
			}
			else
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax());
			}
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1632);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "IVY")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("VEN");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Ivysaur")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Venusaur");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2580);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "SQU")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("WAR");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Squirtle")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Wartortle");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(100);
			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax() < 90)
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(90);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(90);
			}
			else
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax());
			}
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1582);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "WAR")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("BLA");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Wartortle")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Blastoise");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2542);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "CHA")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("CHAR");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Charmander")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Charmeleon");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(100);
			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax() < 90)
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(90);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(90);
			}
			else
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax());
			}
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1557);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "CHAR")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("CHARI");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Charmeleon")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Charizard");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2602);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "ABR")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("KAD");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Abra")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Kadabra");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(100);
			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax() < 90)
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(90);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(90);
			}
			else
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax());
			}
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1131);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "KAD")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("ALA");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Kadabra")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Alakazam");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1813);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "EKA")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("ARB");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Ekans")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Arbok");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1767);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "EVE")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			Random r; int num = r.Next(1, 4);
			if (num == 1 || oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Rainer")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("VAP");

				if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Evee")
				{
					oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Vaporeon");
				}

				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2816);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_TipoP("Agua");
				num = 0;
			}
			if (num == 2 || oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Pyro")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("FLA");

				if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Evee")
				{
					oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Flareon");
				}

				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2140);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_TipoP("Fuego");
				num = 0;
			}
			if (num == 3 || oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Sparky")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("JOL");

				if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Evee")
				{
					oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Jolteon");
				}

				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2643);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_TipoP("Electrico");
				num = 0;
			}
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "MAG")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("GYA");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Magikarp")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Gyarados");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2688);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "MEO")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("PER");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Meowth")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Persian");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1631);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "MAC")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("MACH");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Machop")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Machoke");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(100);
			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax() < 90)
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(90);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(90);
			}
			else
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax());
			}
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1760);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "MACH")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("MACHA");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Machoke")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Machamp");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2594);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "PID")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("PIDG");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Pidgey")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Pidgeotto");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(50);
			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax() < 90)
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(90);
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(90);
			}
			else
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax());
			}
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(1223);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
		else if (tipo == "PIDG")
		{
			Incrementa_Disminuye_Caramelos(tipo, (-1 * oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Carevolucion()));
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_tipo("PIDGE");

			if (oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre() == "Pidgeotto")
			{
				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Nombre("Pidgeot");
			}

			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_Carevolucion(-1);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_VidaMax(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(100);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_PoderMax(2091);
			oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 300);
		}
	}
}
private: System::Void btnTransferir_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string Tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_tipo();
	String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre().c_str());

	if (MessageBox::Show("¿Seguro que quieres transferir a " + Nombre + " por 1 caramelo?", "Mensaje", MessageBoxButtons::OKCancel)
		== System::Windows::Forms::DialogResult::OK)
	{
		Incrementa_Disminuye_Caramelos(Tipo, +1);

		MessageBox::Show("¡ " + Nombre + " transferido !" + " +1 Caramelo");

		MuestraPokemon = false; lblNombre->Visible = false; lblVida->Visible = false; lblPoder->Visible = false;
		lblCaramelos->Visible = false; lblPolvoS->Visible = false; btnPocion->Visible = false; btnSPocion->Visible = false;
		btnRevivir->Visible = false; btnRenombrar->Visible = false; btnPotenciar->Visible = false; btnEvolucionar->Visible = false;
		btnTransferir->Visible = false; Renombrar = false; txtNombre->Visible = false; btnOk->Visible = false; FalseATodo();

		oJuegoAux->GetMochila()->Set_NPokemon(oJuegoAux->GetMochila()->Get_NPokemon() - 1);

		oJuegoAux->GetMochila()->Elimina_Pokemon(IndicePokemon);
		IndicePokemon = 0;
	}
	
}
private: System::Void btnPotenciar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int Poder = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder();
	int Podermax = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_MaxPoder();
	string tipo = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_tipo();

	if (Poder >= Podermax)
	{
		MessageBox::Show("CP al máximo", "Aviso", MessageBoxButtons::OK);
	}
	else
	{
		String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre().c_str());

		if (MessageBox::Show("¿Seguro que quieres potenciar a " + Nombre + " por 100 PolvoEstelares y 3 caramelos?", "Mensaje", MessageBoxButtons::OKCancel)
			== System::Windows::Forms::DialogResult::OK)
		{
			oJuegoAux->GetMochila()->Set_PolvoEstelar(oJuegoAux->GetMochila()->Get_PolvoEstelar() - 100);
			Incrementa_Disminuye_Caramelos(tipo, -3);

			if (Poder + 100 >= Podermax){ oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(Podermax); }
			else { oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_poder(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_poder() + 100); }
			MessageBox::Show("CP +100  \n  -100 PolvoEstelares  \n  -3 Caramelos", "Aviso", MessageBoxButtons::OK);
		}
	}
}
private: System::Void btnPocion_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int vida = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida();
	int vidamax = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax();

	if (vida >= vidamax)
	{
		MessageBox::Show("Vida al máximo", "Aviso", MessageBoxButtons::OK);
	}
	else
	{
		if (oJuegoAux->GetMochila()->Get_NPociones() > 0)
		{
			String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre().c_str());

			if (MessageBox::Show("¿Seguro que quieres darle una poción a " + Nombre + "?", "Mensaje", MessageBoxButtons::OKCancel)
				== System::Windows::Forms::DialogResult::OK)
			{
				oJuegoAux->GetMochila()->Set_NPociones(oJuegoAux->GetMochila()->Get_NPociones() - 1);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);

				if (vida + 25 >= vidamax){ oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(vidamax); }
				else { oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() + 25); }
				MessageBox::Show("Vida +25  \n  -1 poción", "Aviso", MessageBoxButtons::OK);
			}
		}
		else
		{
			MessageBox::Show("Sin pociones :(", "Aviso", MessageBoxButtons::OK);
		}
	}
}
private: System::Void btnSPocion_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int vida = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida();
	int vidamax = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax();

	if (vida >= vidamax)
	{
		MessageBox::Show("Vida al máximo", "Aviso", MessageBoxButtons::OK);
	}
	else
	{
		if (oJuegoAux->GetMochila()->Get_NSuperPociones() > 0)
		{
			String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre().c_str());

			if (MessageBox::Show("¿Seguro que quieres darle una superpoción a " + Nombre + "?", "Mensaje", MessageBoxButtons::OKCancel)
				== System::Windows::Forms::DialogResult::OK)
			{
				oJuegoAux->GetMochila()->Set_NPociones(oJuegoAux->GetMochila()->Get_NSuperPociones() - 1);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);

				if (vida + 50 >= vidamax){ oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(vidamax); }
				else { oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida() + 50); }
				MessageBox::Show("Vida +50  \n  -1 superpoción", "Aviso", MessageBoxButtons::OK);
			}
		}
		else
		{
			MessageBox::Show("Sin súperpociones :(", "Aviso", MessageBoxButtons::OK);
		}
	}
}
private: System::Void btnRevivir_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int vida = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_vida();
	int vidamax = oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_VidaMax();

	if (vida >= vidamax)
	{
		MessageBox::Show("Vida al máximo", "Aviso", MessageBoxButtons::OK);
	}
	else
	{
		if (oJuegoAux->GetMochila()->Get_NRevivir() > 0)
		{
			String ^Nombre = gcnew String(oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Get_Nombre().c_str());

			if (MessageBox::Show("¿Seguro que quieres darle un revivir a " + Nombre + "?", "Mensaje", MessageBoxButtons::OKCancel)
				== System::Windows::Forms::DialogResult::OK)
			{
				oJuegoAux->GetMochila()->Set_NPociones(oJuegoAux->GetMochila()->Get_NRevivir() - 1);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);

				oJuegoAux->GetMochila()->Get_ArrPokemons()[IndicePokemon]->Set_vida(vidamax);
				MessageBox::Show("Vida regenerada  \n  -1 revivir", "Aviso", MessageBoxButtons::OK);
			}
		}
		else
		{
			MessageBox::Show("Sin revivir :(", "Aviso", MessageBoxButtons::OK);
		}
	}
}
private: System::Void btnVolar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MessageBox::Show("¿Seguro que quieres jugar por 5 monedas?", "Aviso", MessageBoxButtons::YesNo) ==
		System::Windows::Forms::DialogResult::Yes)
	{
		oJuegoAux->GetMochila()->Set_Monedas(oJuegoAux->GetMochila()->Get_Monedas() - 5);
		AdicionalDos ^FlappyBird = gcnew AdicionalDos();
		this->Hide();
		FlappyBird->ShowDialog();
		this->Show();
		delete FlappyBird;
	}
}
private: System::Void FormMochila_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}