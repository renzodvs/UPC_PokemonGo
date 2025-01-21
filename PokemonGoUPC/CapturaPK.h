#pragma once
#include "PokeballCaptura.h"
#include "Juego.h"
#include "Pokemon.h"

namespace PokemonGoUPC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CapturaPK
	/// </summary>
	public ref class CapturaPK : public System::Windows::Forms::Form
	{
	private:
		CPokeballCaptura *oPokebola = new CPokeballCaptura(600, 550);
		CJuego *oJuegoAux;
		CPokemon *oPokemonAux;
		Random ^r = gcnew Random(DateTime::Now.Ticks);
		SoundPlayer ^musica = gcnew SoundPlayer();

		//////////////////////POKEMON/////////////////////////////
		Bitmap ^ImgPokeball = gcnew Bitmap("Pokeball.png");
		Bitmap ^Img_Pikachu = gcnew Bitmap("Pikachu_GO.png");
		Bitmap ^Img_Bulbasur = gcnew Bitmap("Bulbasaur_GO.png");
		Bitmap ^Img_Charmander = gcnew Bitmap("Charmander_GO.png");
		Bitmap ^Img_Evee = gcnew Bitmap("Evee_GO.png");
		Bitmap ^Img_Abra = gcnew Bitmap("Abra_GO.png");
		Bitmap ^Img_Machop = gcnew Bitmap("Machop_GO.png");
		Bitmap ^Img_Magikarp = gcnew Bitmap("Magikarp_GO.png");
		Bitmap ^Img_Meowth = gcnew Bitmap("Meowth_GO.png");
		Bitmap ^Img_Onix = gcnew Bitmap("Onix_GO.png");
		Bitmap ^Img_Snorlax = gcnew Bitmap("Snorlax_GO.png");
		Bitmap ^Img_Squirtle = gcnew Bitmap("Squirtle_GO.png");
		Bitmap ^Img_Ekans = gcnew Bitmap("Ekans_GO.png");
		Bitmap ^Img_Pidgey = gcnew Bitmap("Pidgey_GO.png");
		Bitmap ^Img_Fondo = gcnew Bitmap("FondoCaptura.png");
		Bitmap ^PokemonD;
		Bitmap ^Fondo_Capturado = gcnew Bitmap("Pokemon_Capturado.png");
	private: System::Windows::Forms::Button^  btnAceptar;
	private: System::Windows::Forms::Label^  lblNombreEne;
	private: System::Windows::Forms::Label^  lblCPEnemigo;

	private: System::Windows::Forms::Timer^  TCapturado;
			 

	public:
		CapturaPK(CJuego *oJuego, CPokemon *oPokemon)
		{
			oJuegoAux = oJuego;
			oPokemonAux = oPokemon;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~CapturaPK()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^  TCaptura;
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
			this->TCaptura = (gcnew System::Windows::Forms::Timer(this->components));
			this->TCapturado = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->lblNombreEne = (gcnew System::Windows::Forms::Label());
			this->lblCPEnemigo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TCaptura
			// 
			this->TCaptura->Enabled = true;
			this->TCaptura->Tick += gcnew System::EventHandler(this, &CapturaPK::TCaptura_Tick);
			// 
			// TCapturado
			// 
			this->TCapturado->Tick += gcnew System::EventHandler(this, &CapturaPK::TCapturado_Tick);
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
			this->btnAceptar->Location = System::Drawing::Point(213, 471);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(160, 44);
			this->btnAceptar->TabIndex = 229;
			this->btnAceptar->Text = L"ACEPTAR";
			this->btnAceptar->UseVisualStyleBackColor = false;
			this->btnAceptar->Visible = false;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &CapturaPK::btnAceptar_Click);
			// 
			// lblNombreEne
			// 
			this->lblNombreEne->BackColor = System::Drawing::Color::White;
			this->lblNombreEne->Font = (gcnew System::Drawing::Font(L"AR CENA", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreEne->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblNombreEne->Location = System::Drawing::Point(73, 312);
			this->lblNombreEne->Name = L"lblNombreEne";
			this->lblNombreEne->Size = System::Drawing::Size(165, 31);
			this->lblNombreEne->TabIndex = 231;
			this->lblNombreEne->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblNombreEne->Visible = false;
			// 
			// lblCPEnemigo
			// 
			this->lblCPEnemigo->BackColor = System::Drawing::Color::White;
			this->lblCPEnemigo->Font = (gcnew System::Drawing::Font(L"AR CENA", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCPEnemigo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblCPEnemigo->Location = System::Drawing::Point(73, 365);
			this->lblCPEnemigo->Name = L"lblCPEnemigo";
			this->lblCPEnemigo->Size = System::Drawing::Size(165, 31);
			this->lblCPEnemigo->TabIndex = 230;
			this->lblCPEnemigo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblCPEnemigo->Visible = false;
			// 
			// CapturaPK
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 550);
			this->Controls->Add(this->lblNombreEne);
			this->Controls->Add(this->lblCPEnemigo);
			this->Controls->Add(this->btnAceptar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CapturaPK";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CapturaPK";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CapturaPK::CapturaPK_KeyDown);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CapturaPK::CapturaPK_MouseClick);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CapturaPK::CapturaPK_MouseMove);
			this->ResumeLayout(false);

		}
#pragma endregion

		int intentos = 3;
		int xPokemon = 100;
		int yPokemon = 100;
		int AnchoPokemon = 150;
		int AltoPokemon = 150;
		int dxPokemon = r->Next(10, 40);
		bool clickPokebola = false;
		bool ActivarMusica = true;
		bool PlayMusica = false;

		public: void SetoJuego(CJuego *oJuego)
		{
			oJuego = oJuegoAux;
		}

		void MusicaCaptura()
		{
			musica->Stop();
			musica->SoundLocation = "MusicaCaptura.wav";
			musica->LoadAsync();
			musica->PlayLooping();
			PlayMusica = true;
		}

		void Capturado()
		{
			musica->Stop();
			musica->SoundLocation = "MusicaCapturado.wav";
			musica->LoadAsync();
			musica->PlayLooping();
			PlayMusica = true;
		}

		void Elige_Imagen(CPokemon *oNuevo)
		{
			if (oNuevo->Get_tipo() == "PIK")
			{
				PokemonD = Img_Pikachu;
			}
			else if (oNuevo->Get_tipo() == "BUL")
			{
				PokemonD = Img_Bulbasur;
			}
			else if (oNuevo->Get_tipo() == "SQU")
			{
				PokemonD = Img_Squirtle;
			}
			else if (oNuevo->Get_tipo() == "CHA")
			{
				PokemonD = Img_Charmander;
			}
			else if (oNuevo->Get_tipo() == "ABR")
			{
				PokemonD = Img_Abra;
			}
			else if (oNuevo->Get_tipo() == "SNO")
			{
				PokemonD = Img_Snorlax;
			}
			else if (oNuevo->Get_tipo() == "EKA")
			{
				PokemonD = Img_Ekans;
			}
			else if (oNuevo->Get_tipo() == "ONI")
			{
				PokemonD = Img_Onix;
			}
			else if (oNuevo->Get_tipo() == "EVE")
			{
				PokemonD = Img_Evee;
			}
			else if (oNuevo->Get_tipo() == "MAG")
			{
				PokemonD = Img_Magikarp;
			}
			else if (oNuevo->Get_tipo() == "MEO")
			{
				PokemonD = Img_Meowth;
			}
			else if (oNuevo->Get_tipo() == "MAC")
			{
				PokemonD = Img_Machop;
			}
			else if (oNuevo->Get_tipo() == "PID")
			{
				PokemonD = Img_Pidgey;
			}
		}

		void IncrementaCaramelos(CPokemon *oNuevo)
		{
			if (oNuevo->Get_tipo() == "PIK")
			{
				oJuegoAux->GetMochila()->Set_CarPikachu(oJuegoAux->GetMochila()->Get_CarPikachu() + 3);
			}
			else if (oNuevo->Get_tipo() == "BUL")
			{
				oJuegoAux->GetMochila()->Set_CarBulbasur(oJuegoAux->GetMochila()->Get_CarBulbasur() + 3);
			}
			else if (oNuevo->Get_tipo() == "SQU")
			{
				oJuegoAux->GetMochila()->Set_CarSquirtle(oJuegoAux->GetMochila()->Get_CarSquirtle() + 3);
			}
			else if (oNuevo->Get_tipo() == "CHA")
			{
				oJuegoAux->GetMochila()->Set_CarCharmander(oJuegoAux->GetMochila()->Get_CarCharmander() + 3);
			}
			else if (oNuevo->Get_tipo() == "ABR")
			{
				oJuegoAux->GetMochila()->Set_CarAbra(oJuegoAux->GetMochila()->Get_CarAbra() + 3);
			}
			else if (oNuevo->Get_tipo() == "SNO")
			{
				oJuegoAux->GetMochila()->Set_CarSnorlax(oJuegoAux->GetMochila()->Get_CarSnorlax() + 3);
			}
			else if (oNuevo->Get_tipo() == "EKA")
			{
				oJuegoAux->GetMochila()->Set_CarEkans(oJuegoAux->GetMochila()->Get_CarEkans() + 3);
			}
			else if (oNuevo->Get_tipo() == "ONI")
			{
				oJuegoAux->GetMochila()->Set_CarOnix(oJuegoAux->GetMochila()->Get_CarOnix() + 3);
			}
			else if (oNuevo->Get_tipo() == "EVE")
			{
				oJuegoAux->GetMochila()->Set_CarEvee(oJuegoAux->GetMochila()->Get_CarEvee() + 3);
			}
			else if (oNuevo->Get_tipo() == "MAG")
			{
				oJuegoAux->GetMochila()->Set_CarMagikarp(oJuegoAux->GetMochila()->Get_CarMagikarp() + 3);
			}
			else if (oNuevo->Get_tipo() == "MEO")
			{
				oJuegoAux->GetMochila()->Set_CarMeowth(oJuegoAux->GetMochila()->Get_CarMeowth() + 3);
			}
			else if (oNuevo->Get_tipo() == "MAC")
			{
				oJuegoAux->GetMochila()->Set_CarMachop(oJuegoAux->GetMochila()->Get_CarMachop() + 3);
			}
			else if (oNuevo->Get_tipo() == "PID")
			{
				oJuegoAux->GetMochila()->Set_CarPidgey(oJuegoAux->GetMochila()->Get_CarPidgey() + 3);
			}
		}

	private: System::Void TCaptura_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
		Pen ^linea = gcnew Pen(SystemBrushes::GradientActiveCaption, 5);
		buffer->Graphics->Clear(Color::Black);

		if (PlayMusica == false && ActivarMusica == true){ MusicaCaptura(); }

		int Y = oPokebola->Get_y();
		int maxY = ((this->ClientRectangle.Height / 2) + 150);

		buffer->Graphics->DrawImage(Img_Fondo, 0, 0, 600, 550);
		buffer->Graphics->DrawLine(linea, 0, maxY, 600, maxY);

		Elige_Imagen(oPokemonAux);
		buffer->Graphics->DrawImage(PokemonD, xPokemon, yPokemon, AnchoPokemon, AltoPokemon);
		/*buffer->Graphics->DrawRectangle(Pens::Red, xPokemon+40, yPokemon+40, 60 , 60);*/

		if (intentos == 0)
		{
			TCaptura->Enabled = false;
			MessageBox::Show("El pokémon escapó :'(", "Mensaje", MessageBoxButtons::OK);
			intentos = 5;
			musica->Stop();
			this->Close();
		}

		if (xPokemon <= 10 || xPokemon + AnchoPokemon >= 570)
		{
			dxPokemon *= -1;
		}

		if (Y < maxY)
		{
			oPokebola->Set_Mover(true);
		}

		if (oPokebola->Get_Mover())
		{
			clickPokebola = false;
			oPokebola->Mover_Pokebola(buffer, ImgPokeball);

			if (oPokebola->Get_x() > xPokemon + 40 && oPokebola->Get_x() < xPokemon + 60 && oPokebola->Get_y() > yPokemon + 40
				&& oPokebola->Get_y() < yPokemon + 60)
			{
				PlayMusica = false;
				if (PlayMusica == false && ActivarMusica == true){ Capturado(); }
				oJuegoAux->GetMochila()->Agregar_Pokemons(oPokemonAux);
				oJuegoAux->GetMochila()->Set_NPokeball(oJuegoAux->GetMochila()->Get_NPokeball() - 1);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);
				oJuegoAux->GetMochila()->Set_NPokemon(oJuegoAux->GetMochila()->Get_NPokemon() + 1);
				oJuegoAux->GetMochila()->Set_PolvoEstelar(oJuegoAux->GetMochila()->Get_PolvoEstelar() + 50);
				oJuegoAux->GetMochila()->Set_Experiencia(oJuegoAux->GetMochila()->Get_Experiencia() + 50);
				IncrementaCaramelos(oPokemonAux);
				TCaptura->Enabled = false; TCapturado->Enabled = true;
			}

			if (oPokebola->Get_ancho() <= 0 && oPokebola->Get_alto() <= 0)
			{
				intentos--;
				oJuegoAux->GetMochila()->Set_NPokeball(oJuegoAux->GetMochila()->Get_NPokeball() - 1);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() - 1);

				if (oJuegoAux->GetMochila()->Get_NPokeball() > 0)
				{
					oPokebola = new CPokeballCaptura(600, 550);
				}
				else
				{
					TCaptura->Enabled = false;
					MessageBox::Show("SIN POKEBALLS D:", "ALERTA", MessageBoxButtons::OK);
					intentos = 5;
					musica->Stop();
					this->Close();
				}
			}
		}
		else
		{
			oPokebola->Dibujar_Pokebola(buffer, ImgPokeball);
		}

		xPokemon += dxPokemon;
		buffer->Render(g);
		delete espacio, buffer, g;
	}
	private: System::Void CapturaPK_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		if (clickPokebola)
		{
			oPokebola->Set_x(e->X - oPokebola->Get_ancho() / 2);
			oPokebola->Set_y(e->Y - oPokebola->Get_alto() / 2);
		}
	}
private: System::Void CapturaPK_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (oPokebola->Click_Pokeball(e->X, e->Y))
	{
		clickPokebola = true;
	}
}
private: System::Void TCapturado_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	Graphics ^g = this->CreateGraphics();
	BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
	BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);

	lblNombreEne->Visible = true; lblCPEnemigo->Visible = true;	btnAceptar->Visible = true;

	String ^Nombre = gcnew String(oPokemonAux->Get_Nombre().c_str());
	int CP = oPokemonAux->Get_poder();

	lblCPEnemigo->Text = ("CP: " + CP);
	lblNombreEne->Text = (Nombre);

	buffer->Graphics->DrawImage(Fondo_Capturado, 0, 0, 600, 550);
	buffer->Graphics->DrawImage(PokemonD, 80, 120, 200, 200);

	buffer->Render(g);
	delete espacio, buffer, g;
}
private: System::Void CapturaPK_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
{
	if (TCaptura->Enabled == true)
	{
		if (e->KeyCode == Keys::Escape)
		{
			if (MessageBox::Show("¿Seguro que quieres abandonar la captura?", "Aviso", MessageBoxButtons::YesNo)
				== System::Windows::Forms::DialogResult::Yes)
			{
				musica->Stop();
				this->Close();
			}
		}
	}
}
private: System::Void btnAceptar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	musica->Stop();
	this->Close();
}
};
}
