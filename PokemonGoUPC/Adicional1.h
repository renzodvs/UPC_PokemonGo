#pragma once
#include "Run.h"
#include "Juego.h"

namespace PokemonGoUPC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Adicional1
	/// </summary>
	public ref class Adicional1 : public System::Windows::Forms::Form
	{
	private:

		CRun *oR = new CRun();
		CJuego *oJuegoAux;
		Bitmap ^piso = gcnew Bitmap("Piso3.png");
		Bitmap ^piso2 = gcnew Bitmap("Piso0.png");
		Bitmap ^piso3 = gcnew Bitmap("Piso1.png");
		Bitmap ^piso4 = gcnew Bitmap("Piso2.png");
		Bitmap ^Fondo = gcnew Bitmap("FondoAD1.png");
	private: System::Windows::Forms::Timer^  timer1;
			 Bitmap ^Monedas = gcnew Bitmap("Monedas.png");

	public:
		Adicional1(CJuego *oJuego)
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
		~Adicional1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Adicional1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(328, 301);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1, 1);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Adicional1::timer1_Tick);
			// 
			// Adicional1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 602);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(673, 641);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(673, 641);
			this->Name = L"Adicional1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pokemon Run";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Adicional1::Adicional1_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Adicional1::Adicional1_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:void SetoJuego(CJuego *oJuego)
	{
		oJuegoAux = oJuego;
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^b = espacio->Allocate(g, this->ClientRectangle);

		oR->Accion(b, piso, piso2, piso3, piso4, pictureBox1, Fondo, Monedas);

		if (oR->Get_YJugador() + 75 >= 640)
		{
			timer1->Enabled = false;
			int monedas_ganadas = oR->Get_NMonedas();
			oJuegoAux->GetMochila()->Set_Monedas(oJuegoAux->GetMochila()->Get_Monedas() + monedas_ganadas);
			MessageBox::Show("Ganaste " + monedas_ganadas + " monedas", "Aviso", MessageBoxButtons::OK);
			this->Close();
		}

		b->Render(g);

		delete b, espacio, g;
	}
	private: System::Void Adicional1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
	{
		if (e->KeyCode == Keys::Space)
		{
			oR->direcciones = DireccionAD1::SaltarAD1;
		}
	}

	private: System::Void Adicional1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
	{
		oR->direcciones = DireccionAD1::SoltarTeclaAD1;
	}
	};
}
