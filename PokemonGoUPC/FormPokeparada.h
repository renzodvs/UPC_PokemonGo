#pragma once
#include "Juego.h"

namespace PokemonGoUPC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormPokeparada
	/// </summary>
	public ref class FormPokeparada : public System::Windows::Forms::Form
	{
	private:

		CJuego *oJuegoAux;
		CElemento *oElemento1;
		CElemento *oElemento2;
		CElemento *oElemento3;
		CElemento *oElemento4;

	private: System::Windows::Forms::Button^  btnCerrar;
	private: System::Windows::Forms::Button^  btnRTodo;

	 //////////////////////POKEPARADA/////////////////////////////
	 Bitmap ^Img_Fondo = gcnew Bitmap("FondoPokeP.jpg");
	 Bitmap ^Img_Pokeball = gcnew Bitmap("Pokeball.png");
	 Bitmap ^Img_Pocion = gcnew Bitmap("Pocion.png");
	 Bitmap ^Img_SuperPocion = gcnew Bitmap("SuperPocion.png");
	 Bitmap ^Img_Revivir = gcnew Bitmap("Revivir.png");
			

	public:
		FormPokeparada(CJuego *oJuego)
		{
			oJuegoAux = oJuego;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~FormPokeparada()
		{

		}

	private: System::Windows::Forms::Timer^  PParada;
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
			this->PParada = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnCerrar = (gcnew System::Windows::Forms::Button());
			this->btnRTodo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// PParada
			// 
			this->PParada->Enabled = true;
			this->PParada->Tick += gcnew System::EventHandler(this, &FormPokeparada::PParada_Tick);
			// 
			// btnCerrar
			// 
			this->btnCerrar->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnCerrar->Font = (gcnew System::Drawing::Font(L"AR CENA", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCerrar->Location = System::Drawing::Point(516, 420);
			this->btnCerrar->Name = L"btnCerrar";
			this->btnCerrar->Size = System::Drawing::Size(75, 23);
			this->btnCerrar->TabIndex = 0;
			this->btnCerrar->Text = L"SALIR";
			this->btnCerrar->UseVisualStyleBackColor = true;
			this->btnCerrar->Click += gcnew System::EventHandler(this, &FormPokeparada::btnCerrar_Click);
			// 
			// btnRTodo
			// 
			this->btnRTodo->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnRTodo->Font = (gcnew System::Drawing::Font(L"AR CENA", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRTodo->Location = System::Drawing::Point(232, 420);
			this->btnRTodo->Name = L"btnRTodo";
			this->btnRTodo->Size = System::Drawing::Size(111, 23);
			this->btnRTodo->TabIndex = 1;
			this->btnRTodo->Text = L"RECOGER TODO";
			this->btnRTodo->UseVisualStyleBackColor = true;
			this->btnRTodo->Click += gcnew System::EventHandler(this, &FormPokeparada::btnRTodo_Click);
			// 
			// FormPokeparada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 455);
			this->Controls->Add(this->btnRTodo);
			this->Controls->Add(this->btnCerrar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(603, 455);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(603, 455);
			this->Name = L"FormPokeparada";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PokeParada";
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FormPokeparada::FormPokeparada_MouseClick);
			this->ResumeLayout(false);

		}
#pragma endregion

		bool activar_generar = true;
		bool Elem1 = true;
		bool Elem2 = true;
		bool Elem3 = true;
		bool Elem4 = true;
		int contador = 0;
		int MaxObjetos = 250;

		public : void SetoJuego(CJuego *oJuego)
		{
			oJuego = oJuegoAux;
		}

		void Incrementar_Contadores(CElemento *oNuevo)
		{
			if (oNuevo->Get_tipo() == "PB"){ oJuegoAux->GetMochila()->Set_NPokeball(oJuegoAux->GetMochila()->Get_NPokeball() + 1); }
			else if (oNuevo->Get_tipo() == "P"){ oJuegoAux->GetMochila()->Set_NPociones(oJuegoAux->GetMochila()->Get_NPociones() + 1); }
			else if (oNuevo->Get_tipo() == "SP"){ oJuegoAux->GetMochila()->Set_NSuperPociones(oJuegoAux->GetMochila()->Get_NSuperPociones() + 1); }
			else if (oNuevo->Get_tipo() == "R"){ oJuegoAux->GetMochila()->Set_NRevivir(oJuegoAux->GetMochila()->Get_NRevivir() + 1); }
		}
		
	private: System::Void PParada_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio =  BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
		buffer->Graphics->Clear(Color::Black);

		Rectangle porcionausar = Rectangle(0, 0, 603, 455);
		buffer->Graphics->DrawImage(Img_Fondo, porcionausar);

		if (activar_generar)
		{
			oElemento1 = oJuegoAux->GetArrLugares()->Get_Pokeparada_Activa()->Generar_Elemento(15, 40);
			oElemento2 = oJuegoAux->GetArrLugares()->Get_Pokeparada_Activa()->Generar_Elemento(15, 240);
			oElemento3 = oJuegoAux->GetArrLugares()->Get_Pokeparada_Activa()->Generar_Elemento(460, 40);
			oElemento4 = oJuegoAux->GetArrLugares()->Get_Pokeparada_Activa()->Generar_Elemento(460, 240);
			activar_generar = false;
		}
	
		if (Elem1)
		{
			oJuegoAux->GetArrLugares()->Get_Pokeparada_Activa()->Dibujar_Elemento(buffer, oElemento1,
				Img_Pokeball, Img_Pocion, Img_SuperPocion, Img_Revivir);
		}
		if (Elem2)
		{
			oJuegoAux->GetArrLugares()->Get_Pokeparada_Activa()->Dibujar_Elemento(buffer, oElemento2,
				Img_Pokeball, Img_Pocion, Img_SuperPocion, Img_Revivir);
		}
		if (Elem3)
		{
			oJuegoAux->GetArrLugares()->Get_Pokeparada_Activa()->Dibujar_Elemento(buffer, oElemento3,
				Img_Pokeball, Img_Pocion, Img_SuperPocion, Img_Revivir);
		}
		if (Elem4)
		{
			oJuegoAux->GetArrLugares()->Get_Pokeparada_Activa()->Dibujar_Elemento(buffer, oElemento4,
				Img_Pokeball, Img_Pocion, Img_SuperPocion, Img_Revivir);
		}

		if (contador == 4)
		{
			PParada->Enabled = false;
		}

		buffer->Render(g);
		delete buffer, espacio, g;
	}
	private: System::Void FormPokeparada_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		if (oJuegoAux->GetMochila()->Get_NObjetos() <= MaxObjetos)
		{
			if (e->X > 15 && e->X < 125 && e->Y > 40 && e->Y < 160 && Elem1 == true)
			{
				contador++;
				Incrementar_Contadores(oElemento1);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() + 1);
				Elem1 = false;
				delete oElemento1;
			}
			if (e->X > 15 && e->X < 125 && e->Y > 240 && e->Y < 360 && Elem2 == true)
			{
				contador++;
				Incrementar_Contadores(oElemento2);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() + 1);
				Elem2 = false;
				delete oElemento2;
			}
			if (e->X > 460 && e->X < 580 && e->Y > 40 && e->Y < 160 && Elem3 == true)
			{
				contador++;
				Incrementar_Contadores(oElemento3);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() + 1);
				Elem3 = false;
				delete oElemento3;
			}
			if (e->X > 460 && e->X < 580 && e->Y > 240 && e->Y < 360 && Elem4 == true)
			{
				contador++;
				Incrementar_Contadores(oElemento4);
				oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() + 1);
				Elem4 = false;
				delete oElemento4;
			}
		}
		else
		{
			MessageBox::Show("Mochila llena. No se pueden añadir más objetos", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
private: System::Void btnCerrar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	PParada->Enabled = false;
	if (Elem1){ delete oElemento1; }
	if (Elem2){ delete oElemento2; }
	if (Elem3){ delete oElemento3; }
	if (Elem4){ delete oElemento4; }

	this->Close();
}
private: System::Void btnRTodo_Click(System::Object^  sender, System::EventArgs^  e) 
{
	contador = 4;

	if (oJuegoAux->GetMochila()->Get_NObjetos() <= MaxObjetos)
	{
		if (Elem1)
		{
			Incrementar_Contadores(oElemento1);
			oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() + 1);
			Elem1 = false;
			delete oElemento1;
		}
	}
	else
	{
		MessageBox::Show("Mochila llena. No se pueden añadir más objetos", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		PParada->Enabled = false;
	}

	if (oJuegoAux->GetMochila()->Get_NObjetos() <= MaxObjetos)
	{
		if (Elem2 && oJuegoAux->GetMochila()->Get_NObjetos() <= MaxObjetos)
		{
			Incrementar_Contadores(oElemento2);
			oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() + 1);
			Elem2 = false;
			delete oElemento2;
		}
	}
	else
	{
		MessageBox::Show("Mochila llena. No se pueden añadir más objetos", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		PParada->Enabled = false;
	}

	if (oJuegoAux->GetMochila()->Get_NObjetos() <= MaxObjetos)
	{
		if (Elem3 && oJuegoAux->GetMochila()->Get_NObjetos() <= MaxObjetos)
		{
			Incrementar_Contadores(oElemento3);
			oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() + 1);
			Elem3 = false;
			delete oElemento3;
		}
	}
	else
	{
		MessageBox::Show("Mochila llena. No se pueden añadir más objetos", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		PParada->Enabled = false;
	}

	if (oJuegoAux->GetMochila()->Get_NObjetos() <= MaxObjetos)
	{
		if (Elem4 && oJuegoAux->GetMochila()->Get_NObjetos() <= MaxObjetos)
		{
			Incrementar_Contadores(oElemento4);
			oJuegoAux->GetMochila()->Set_NObjetos(oJuegoAux->GetMochila()->Get_NObjetos() + 1);
			Elem4 = false;
			delete oElemento4;
		}
	}
	else
	{
		MessageBox::Show("Mochila llena. No se pueden añadir más objetos", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		PParada->Enabled = false;
	}

}
};
}
