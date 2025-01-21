#pragma once
#include "AdicionalDos.h"

namespace PokemonGoUPC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdicionalDos
	/// </summary>
	public ref class AdicionalDos : public System::Windows::Forms::Form
	{
	private:

		CAdicionalDos *oAD = new CAdicionalDos();
		Bitmap ^imgFondo = gcnew Bitmap("Fondo.jpg");
		Bitmap ^imgTuberiaS = gcnew Bitmap("TuberiaSuperior.png");
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
		Bitmap ^imgTuberiaI = gcnew Bitmap("TuberiaInferior.png");

	public:
		AdicionalDos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~AdicionalDos()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdicionalDos::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &AdicionalDos::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(289, 113);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1, 1);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// AdicionalDos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 602);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(640, 641);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(640, 641);
			this->Name = L"AdicionalDos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flappy Pokemon";
			this->Load += gcnew System::EventHandler(this, &AdicionalDos::AdicionalDos_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdicionalDos::AdicionalDos_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);

		oAD->Juego(buffer, imgFondo, pictureBox1, imgTuberiaS, imgTuberiaI);

		if (oAD->Get_YJugador() >= 640)
		{
			timer1->Enabled = false;
			MessageBox::Show("Perdiste :(", "Aviso", MessageBoxButtons::OK);
			this->Close();
		}

		buffer->Render(g);
		delete buffer, espacio, g;
	}
	private: System::Void AdicionalDos_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
	{
		if (oAD->GetPerdiste() == false)
		{
			if (e->KeyCode == Keys::Space)
			{
				oAD->tecla = Direccion::Elevarse;
			}
		}
	}
	private: System::Void AdicionalDos_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		pictureBox1->Image = Image::FromFile("PIDAD2.gif");
	}
};
}
