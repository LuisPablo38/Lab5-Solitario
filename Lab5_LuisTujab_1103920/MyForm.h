#pragma once
#include"Lista.h"
#include"Pila.h"
#include<time.h>
#include<stdlib.h>
#include<iostream>

namespace Lab5LuisTujab1103920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Lista* miLista;
		Pila* miPila; 
		Pila* miPila1;
		Pila* miPila2;
		Pila* miPila3;
		Pila* miPila4;
		Pila* miPila5;
		Pila* miPila6;
		Pila* miPila7;
	private: System::Windows::Forms::Button^ bt_juegoNuevo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbl_m;
	private: System::Windows::Forms::Label^ lbl_Movimientos_Totales;
	private: System::Windows::Forms::Label^ lbl_p;
	private: System::Windows::Forms::Label^ lbl_puntaje;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lab_movimientos;
	private: System::Windows::Forms::Label^ lab_puntos;
	public:
		Lista* miPilaTotal; 
		MyForm(void)
		{
			InitializeComponent();
			miLista = new Lista();
			miLista->conta = 0;
			miLista->inicio = nullptr;
			miLista->end = nullptr;
			miPila = new Pila(); 
			miPila1 = new Pila();
			miPila2 = new Pila();
			miPila3 = new Pila();
			miPila4 = new Pila();
			miPila5 = new Pila();
			miPila6 = new Pila();
			miPila7 = new Pila();
			miPilaTotal = new Lista(); 
			miPilaTotal->conta = 0; 
			miPilaTotal->inicio = nullptr;
			miPilaTotal->end = nullptr; 
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label1;
	protected:
	private: System::Windows::Forms::Label^ Label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListBox^ lisB1;
	private: System::Windows::Forms::ListBox^ lisB2;
	private: System::Windows::Forms::ListBox^ lisB3;
	private: System::Windows::Forms::ListBox^ lisB4;
	private: System::Windows::Forms::ListBox^ lisB5;
	private: System::Windows::Forms::ListBox^ lisB6;
	private: System::Windows::Forms::ListBox^ lisB7;



	//private: System::Windows::Forms::Button^ bt_juegoNuevo;

	private: System::Windows::Forms::Button^ bt_ayuda;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ lis_baraja;

	private: System::Windows::Forms::Button^ bt_mostrarCar;
	private: System::Windows::Forms::Button^ bt_QuitarCar;
	private: System::Windows::Forms::Button^ bt_ColocarCar;
	private: System::Windows::Forms::TextBox^ tex_sacar;
	private: System::Windows::Forms::TextBox^ tex_agre;


	private: System::Windows::Forms::Label^ label11;

	protected:



	//protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lisB1 = (gcnew System::Windows::Forms::ListBox());
			this->lisB2 = (gcnew System::Windows::Forms::ListBox());
			this->lisB3 = (gcnew System::Windows::Forms::ListBox());
			this->lisB4 = (gcnew System::Windows::Forms::ListBox());
			this->lisB5 = (gcnew System::Windows::Forms::ListBox());
			this->lisB6 = (gcnew System::Windows::Forms::ListBox());
			this->lisB7 = (gcnew System::Windows::Forms::ListBox());
			this->bt_juegoNuevo = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lis_baraja = (gcnew System::Windows::Forms::ListBox());
			this->bt_mostrarCar = (gcnew System::Windows::Forms::Button());
			this->bt_QuitarCar = (gcnew System::Windows::Forms::Button());
			this->bt_ColocarCar = (gcnew System::Windows::Forms::Button());
			this->tex_sacar = (gcnew System::Windows::Forms::TextBox());
			this->tex_agre = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lab_movimientos = (gcnew System::Windows::Forms::Label());
			this->lab_puntos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Label1->Location = System::Drawing::Point(81, 9);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(63, 20);
			this->Label1->TabIndex = 0;
			this->Label1->Text = L"Grupo1";
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Label2->Location = System::Drawing::Point(191, 9);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(63, 20);
			this->Label2->TabIndex = 1;
			this->Label2->Text = L"Grupo2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(305, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Grupo 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(413, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Grupo 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(527, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Grupo 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(642, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Grupo 6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(761, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Grupo 7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(870, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Numero de movimientos";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(870, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Puntuaion: ";
			// 
			// lisB1
			// 
			this->lisB1->FormattingEnabled = true;
			this->lisB1->Location = System::Drawing::Point(76, 33);
			this->lisB1->Name = L"lisB1";
			this->lisB1->Size = System::Drawing::Size(87, 225);
			this->lisB1->TabIndex = 9;
			// 
			// lisB2
			// 
			this->lisB2->FormattingEnabled = true;
			this->lisB2->Location = System::Drawing::Point(183, 33);
			this->lisB2->Name = L"lisB2";
			this->lisB2->Size = System::Drawing::Size(87, 225);
			this->lisB2->TabIndex = 10;
			this->lisB2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// lisB3
			// 
			this->lisB3->FormattingEnabled = true;
			this->lisB3->Location = System::Drawing::Point(296, 33);
			this->lisB3->Name = L"lisB3";
			this->lisB3->Size = System::Drawing::Size(87, 225);
			this->lisB3->TabIndex = 11;
			// 
			// lisB4
			// 
			this->lisB4->FormattingEnabled = true;
			this->lisB4->Location = System::Drawing::Point(407, 33);
			this->lisB4->Name = L"lisB4";
			this->lisB4->Size = System::Drawing::Size(87, 225);
			this->lisB4->TabIndex = 12;
			// 
			// lisB5
			// 
			this->lisB5->FormattingEnabled = true;
			this->lisB5->Location = System::Drawing::Point(518, 33);
			this->lisB5->Name = L"lisB5";
			this->lisB5->Size = System::Drawing::Size(87, 225);
			this->lisB5->TabIndex = 13;
			// 
			// lisB6
			// 
			this->lisB6->FormattingEnabled = true;
			this->lisB6->Location = System::Drawing::Point(633, 32);
			this->lisB6->Name = L"lisB6";
			this->lisB6->Size = System::Drawing::Size(87, 225);
			this->lisB6->TabIndex = 14;
			// 
			// lisB7
			// 
			this->lisB7->FormattingEnabled = true;
			this->lisB7->Location = System::Drawing::Point(750, 33);
			this->lisB7->Name = L"lisB7";
			this->lisB7->Size = System::Drawing::Size(89, 225);
			this->lisB7->TabIndex = 15;
			// 
			// bt_juegoNuevo
			// 
			this->bt_juegoNuevo->Location = System::Drawing::Point(936, 324);
			this->bt_juegoNuevo->Name = L"bt_juegoNuevo";
			this->bt_juegoNuevo->Size = System::Drawing::Size(120, 34);
			this->bt_juegoNuevo->TabIndex = 16;
			this->bt_juegoNuevo->Text = L"Juego Nuevo";
			this->bt_juegoNuevo->UseVisualStyleBackColor = true;
			this->bt_juegoNuevo->Click += gcnew System::EventHandler(this, &MyForm::bt_juegoNuevo_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label10->Location = System::Drawing::Point(39, 261);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 24);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Baraja";
			// 
			// lis_baraja
			// 
			this->lis_baraja->FormattingEnabled = true;
			this->lis_baraja->Location = System::Drawing::Point(12, 288);
			this->lis_baraja->Name = L"lis_baraja";
			this->lis_baraja->Size = System::Drawing::Size(120, 56);
			this->lis_baraja->TabIndex = 19;
			// 
			// bt_mostrarCar
			// 
			this->bt_mostrarCar->Location = System::Drawing::Point(26, 349);
			this->bt_mostrarCar->Name = L"bt_mostrarCar";
			this->bt_mostrarCar->Size = System::Drawing::Size(88, 22);
			this->bt_mostrarCar->TabIndex = 20;
			this->bt_mostrarCar->Text = L"Siguiente Carta";
			this->bt_mostrarCar->UseVisualStyleBackColor = true;
			this->bt_mostrarCar->Click += gcnew System::EventHandler(this, &MyForm::bt_mostrarCar_Click);
			// 
			// bt_QuitarCar
			// 
			this->bt_QuitarCar->Location = System::Drawing::Point(233, 296);
			this->bt_QuitarCar->Name = L"bt_QuitarCar";
			this->bt_QuitarCar->Size = System::Drawing::Size(130, 22);
			this->bt_QuitarCar->TabIndex = 21;
			this->bt_QuitarCar->Text = L"Sacar carta del grupo: ";
			this->bt_QuitarCar->UseVisualStyleBackColor = true;
			this->bt_QuitarCar->Click += gcnew System::EventHandler(this, &MyForm::bt_QuitarCar_Click);
			// 
			// bt_ColocarCar
			// 
			this->bt_ColocarCar->Location = System::Drawing::Point(429, 296);
			this->bt_ColocarCar->Name = L"bt_ColocarCar";
			this->bt_ColocarCar->Size = System::Drawing::Size(144, 22);
			this->bt_ColocarCar->TabIndex = 22;
			this->bt_ColocarCar->Text = L"Colocar carta en el grupo:";
			this->bt_ColocarCar->UseVisualStyleBackColor = true;
			this->bt_ColocarCar->Click += gcnew System::EventHandler(this, &MyForm::bt_ColocarCar_Click);
			// 
			// tex_sacar
			// 
			this->tex_sacar->Location = System::Drawing::Point(253, 324);
			this->tex_sacar->Name = L"tex_sacar";
			this->tex_sacar->Size = System::Drawing::Size(100, 20);
			this->tex_sacar->TabIndex = 23;
			// 
			// tex_agre
			// 
			this->tex_agre->Location = System::Drawing::Point(451, 324);
			this->tex_agre->Name = L"tex_agre";
			this->tex_agre->Size = System::Drawing::Size(100, 20);
			this->tex_agre->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label11->Location = System::Drawing::Point(883, 288);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(242, 20);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Pulse \"R\" para repartir las cartas ";
			// 
			// lab_movimientos
			// 
			this->lab_movimientos->AutoSize = true;
			this->lab_movimientos->Location = System::Drawing::Point(1034, 63);
			this->lab_movimientos->Name = L"lab_movimientos";
			this->lab_movimientos->Size = System::Drawing::Size(41, 13);
			this->lab_movimientos->TabIndex = 26;
			this->lab_movimientos->Text = L"label12";
			// 
			// lab_puntos
			// 
			this->lab_puntos->AutoSize = true;
			this->lab_puntos->Location = System::Drawing::Point(960, 94);
			this->lab_puntos->Name = L"lab_puntos";
			this->lab_puntos->Size = System::Drawing::Size(41, 13);
			this->lab_puntos->TabIndex = 27;
			this->lab_puntos->Text = L"label12";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(1137, 395);
			this->Controls->Add(this->lab_puntos);
			this->Controls->Add(this->lab_movimientos);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tex_agre);
			this->Controls->Add(this->tex_sacar);
			this->Controls->Add(this->bt_ColocarCar);
			this->Controls->Add(this->bt_QuitarCar);
			this->Controls->Add(this->bt_mostrarCar);
			this->Controls->Add(this->lis_baraja);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->bt_juegoNuevo);
			this->Controls->Add(this->lisB7);
			this->Controls->Add(this->lisB6);
			this->Controls->Add(this->lisB5);
			this->Controls->Add(this->lisB4);
			this->Controls->Add(this->lisB3);
			this->Controls->Add(this->lisB2);
			this->Controls->Add(this->lisB1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->Label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<String^>^ baraja = gcnew array<String^>(52); 
		array<String^>^ baraja_desorden = gcnew array<String^>(52); 
		array<String^>^ baraja_desorden_letras = gcnew array<String^>(52);
		array<String^>^ baraja1 = gcnew array<String^>(20);
		array<String^>^ baraja2 = gcnew array<String^>(20);
		array<String^>^ baraja3 = gcnew array<String^>(20);
		array<String^>^ baraja4 = gcnew array<String^>(20);
		array<String^>^ baraja5 = gcnew array<String^>(20);
		array<String^>^ baraja6 = gcnew array<String^>(20);
		array<String^>^ baraja7 = gcnew array<String^>(20);
		array<String^>^ barajaTot = gcnew array<String^>(40);
		int guard_num;
		int quit_num; 
		int agre_num; 
		int movimientos = 0; 
		int puntos = 0; 
		int contador1 = 0; 
		int contador2 = 0;
		int contador3 = 0;
		int contador4 = 0;
		int contador5 = 0;
		int contador6 = 0;
		int contador7 = 0;

		void crear_baraja()
		{
			try
			{
				for (int i = 0; i < 52; i++)
				{
					if (i>=0 && i<=12)
					{
						baraja[i] = "N";
						miLista->InsertarInicio(i + 1);
					}
					else if (i >= 13 && i <= 25)
					{
						baraja[i] = "N";
						miLista->InsertarInicio(i - 12);
					}
					else if (i >= 26 && i <= 38)
					{
						baraja[i] = "R";
						miLista->InsertarInicio(i - 25);
					}
					else if (i >= 39 || i <= 52)
					{
						baraja[i] = "R";
						miLista->InsertarInicio(i - 38);
					}
				}
				revolver_baraja(); 

			}
			catch (Exception^ e)
			{

			}
		}
		void revolver_baraja()
		{
			int random;
			int valor; 
			try
			{
				for (int i = 0; i < 51; i++)
				{
					srand(time(NULL));
					random = rand() % baraja->Length; 
					valor = miLista->TenerValor(random); 
					miPila->Insertar(valor); 
					miLista->QuitarPosi(random);
					baraja_desorden[i] = Convert::ToString(miPila->Valor(i)) + baraja[random]; 
					baraja_desorden_letras[i] = baraja[random]; 
					for (int r = random; r<baraja->Length-1; r++)
					{
						baraja[r] = baraja[r + 1]; 
					}
					baraja->Resize(baraja, baraja->Length - 1); 
				}
				repartir_cartas(baraja_desorden); 
			}
			catch (Exception^e)
			{

			}

		}
		void repartir_cartas(array<String^>^ BarajaA)
		{
			String^ carta; 
			array<Int32^>^ numeros = gcnew array<Int32^>(52); 
			for (int i = 0; i < BarajaA->Length; i++)
			{
				if (i<1)
				{
					carta = BarajaA[i];
					numeros[i] = est_numero(carta);
					miPila->Insertar(Convert::ToInt32(numeros[i])); 
					baraja1[i] = baraja_desorden_letras[i];
					lisB1->Items->Add(BarajaA[i]); 
				}
				else if (i > 0 && i < 3)
				{
					carta = BarajaA[i];
					numeros[i] = est_numero(carta);
					miPila2->Insertar(Convert::ToInt32(numeros[i]));
					baraja2[i - 1] = BarajaA[i];
					lisB2->Items->Add(BarajaA[i]);
				}
				else if (i > 2 && i < 6) 
				{
					carta = BarajaA[i];
					numeros[i] = est_numero(carta);
					miPila3->Insertar(Convert::ToInt32(numeros[i]));
					baraja3[i - 3] = baraja_desorden_letras[i];
					lisB3->Items->Add(BarajaA[i]);
				}
				else if (i>5 && i<10)
				{
					carta = BarajaA[i];
					numeros[i] = est_numero(carta); 
					baraja4[i - 6] = baraja_desorden_letras[i]; 
					miPila4->Insertar(Convert::ToInt32(numeros[i]));
					lisB4->Items->Add(BarajaA[i]); 
				}
				else if (i > 9 && i < 15)
				{
					carta = BarajaA[i];
					numeros[i] = est_numero(carta);
					baraja5[i - 10] = baraja_desorden_letras[i];
					miPila5->Insertar(Convert::ToInt32(numeros[i]));
					lisB5->Items->Add(BarajaA[i]);
				}
				else if (i > 14 && i < 21)
				{
					carta = BarajaA[i];
					numeros[i] = est_numero(carta);
					baraja6[i - 15] = baraja_desorden_letras[i];
					miPila6->Insertar(Convert::ToInt32(numeros[i]));
					lisB6->Items->Add(BarajaA[i]);
				}
				else if (i > 20 && i < 28)
				{
					carta = BarajaA[i];
					numeros[i] = est_numero(carta);
					baraja7[i - 21] = baraja_desorden_letras[i];
					miPila7->Insertar(Convert::ToInt32(numeros[i]));
					lisB7->Items->Add(BarajaA[i]);
				}
				else if (i > 27 && i < 51)
				{
					carta = BarajaA[i];
					numeros[i] = est_numero(carta);
					baraja6[i - 28] = baraja_desorden_letras[i];
					miPilaTotal->InsertarFinal(Convert::ToInt32(numeros[i]));
				}
			}
			lis_baraja->Items->Add(miPilaTotal->TenerValorFinal() + barajaTot[0]); 
		}
		int est_numero(String^ carta)
		{
			int numero; 
			if (carta->Length>2)
			{
				numero = Convert::ToInt32(carta->Substring(0, 2)); 
				return numero; 
			}
			else
			{
				numero = Convert::ToInt32(carta->Substring(0, 1)); 
				return numero; 
			}
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->KeyCode == Keys::R)
		{
			crear_baraja(); 
			bt_ColocarCar->Enabled = true; 
			bt_QuitarCar->Enabled = true; 
			bt_mostrarCar->Enabled = true; 

		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bt_juegoNuevo_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Restart(); 
}
    private: System::Void bt_mostrarCar_Click(System::Object^ sender, System::EventArgs^ e)
    {
	lis_baraja->Items->Clear(); 
	int contador = 0; 
	contador++;
	if (contador<20)
	{
		miPilaTotal->InsertarInicio(miPilaTotal->TenerValorFinal()); 
		miPilaTotal->QuitarFinal(); 
		lis_baraja->Items->Add(miPilaTotal->TenerValorFinal() + barajaTot[contador]); 
	}
	else
	{
		contador = 0; 
	}

}

    private: System::Void bt_QuitarCar_Click(System::Object^ sender, System::EventArgs^ e)
    {
		try
		{
			quit_num = Convert::ToInt32(tex_sacar->Text); 
			if (quit_num==0)
			{
				if (miPilaTotal->EsVacio())
				{
					MessageBox::Show("La lista esta vacia", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information); 
				}
				else
				{
					guard_num = miPilaTotal->TenerValorFinal(); 
				}

			}
			else if (quit_num == 1)
			{
				if (miPila1->EsVacio())
				{
					MessageBox::Show("La Lista está vacía", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					guard_num = miPila1->Valor_Elegir(); 
				}
			}
			else if (quit_num == 2)
			{
				if (miPila2->EsVacio())
				{
					MessageBox::Show("La Lista está vacía", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					guard_num = miPila2->Valor_Elegir();
				}
			}
			else if (quit_num == 3)
			{
				if (miPila3->EsVacio())
				{
					MessageBox::Show("La Lista está vacía", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					guard_num = miPila3->Valor_Elegir();
				}
			}
			else if (quit_num == 4)
			{
				if (miPila4->EsVacio())
				{
					MessageBox::Show("La Lista está vacía", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					guard_num = miPila4->Valor_Elegir();
				}
			}
			else if (quit_num == 5)
			{
				if (miPila5->EsVacio())
				{
					MessageBox::Show("La Lista está vacía", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					guard_num = miPila5->Valor_Elegir();
				}
			}
			else if (quit_num == 6)
			{
				if (miPila6->EsVacio())
				{
					MessageBox::Show("La Lista está vacía", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					guard_num = miPila6->Valor_Elegir();
				}
			}
			else if (quit_num == 7)
			{
				if (miPila7->EsVacio())
				{
					MessageBox::Show("La Lista está vacía", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					guard_num = miPila7->Valor_Elegir();
				}
			}
			else
			{
				MessageBox::Show("El valor ingresado no es correcto", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception ^e)
		{
			MessageBox::Show("Ingreso un valor no valido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
private: System::Void bt_ColocarCar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		agre_num = Convert::ToInt32(tex_agre->Text); 
	}
	catch (Exception ^e)
	{
		MessageBox::Show("Ingresó un valor no valido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	if (agre_num == 1)
	{
		if (miPila1->EsVacio())
		{
			miPila1->Insertar(guard_num); 
			lisB1->Items->Add(guard_num + def_letra(quit_num)); 
			def_Pila(quit_num); 
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos); 
			puntos = puntos + 5; 
			lab_puntos->Text = Convert::ToString(puntos); 
			ganador(); 
		}
		else
		{
			MessageBox::Show("No puede ingresar la carta en este espacio", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else if (agre_num == 2)
	{
		if (miPila2->EsVacio())
		{
			miPila2->Insertar(guard_num);
			lisB2->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
		}
		else if (guard_num == (miPila2->Valor_Elegir()-1))
		{
			miPila2->Insertar(guard_num); 
			lisB2->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
			puntos = puntos + 5;
			lab_puntos->Text = Convert::ToString(puntos);
			ganador();
		}
		else
		{
			MessageBox::Show("No puede ingresar la carta en este espacio", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}	
	}
	else if (agre_num == 3)
	{
		if (miPila3->EsVacio())
		{
			miPila3->Insertar(guard_num);
			lisB3->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
		}
		if (guard_num == (miPila3->Valor_Elegir() - 1))
		{
			miPila3->Insertar(guard_num);
			lisB3->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
			puntos = puntos + 5;
			lab_puntos->Text = Convert::ToString(puntos);
			ganador();
		}
		else
		{
			MessageBox::Show("No puede ingresar la carta en este espacio", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else if (agre_num==4)
	{
		if (miPila4->EsVacio())
		{
			miPila4->Insertar(guard_num);
			lisB4->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
		}
		if (guard_num == (miPila4->Valor_Elegir() - 1))
		{
			miPila4->Insertar(guard_num);
			lisB4->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
			puntos = puntos + 5;
			lab_puntos->Text = Convert::ToString(puntos);
			ganador();
		}
		else
		{
			MessageBox::Show("No puede ingresar la carta en este espacio", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else if (agre_num == 5)
	{
		if (miPila5->EsVacio())
		{
			miPila5->Insertar(guard_num);
			lisB5->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
		}
		if (guard_num == (miPila5->Valor_Elegir() - 1))
		{
			miPila5->Insertar(guard_num);
			lisB5->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
			puntos = puntos + 5;
			lab_puntos->Text = Convert::ToString(puntos);
			ganador();
		}
		else
		{
			MessageBox::Show("No puede ingresar la carta en este espacio", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else if (agre_num == 6)
	{
	   if (miPila6->EsVacio())
	   {
		miPila6->Insertar(guard_num);
		lisB6->Items->Add(guard_num + def_letra(quit_num));
		def_Pila(quit_num);
		movimientos++;
		lab_movimientos->Text = Convert::ToString(movimientos);
	   }
	   if (guard_num == (miPila6->Valor_Elegir() - 1))
	   {
		miPila6->Insertar(guard_num);
		lisB6->Items->Add(guard_num + def_letra(quit_num));
		def_Pila(quit_num);
		movimientos++;
		lab_movimientos->Text = Convert::ToString(movimientos);
		puntos = puntos + 5;
		lab_puntos->Text = Convert::ToString(puntos);
		ganador();
	    }
	   else
	   {
		MessageBox::Show("No puede ingresar la carta en este espacio", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	   }
	}
	else if (agre_num == 7)
	{

	    if (miPila7->EsVacio())
	    {
		miPila7->Insertar(guard_num);
		lisB7->Items->Add(guard_num + def_letra(quit_num));
		def_Pila(quit_num);
		movimientos++;
		lab_movimientos->Text = Convert::ToString(movimientos);
	    }
		else if (guard_num == (miPila7->Valor_Elegir() - 1))
		{
			miPila7->Insertar(guard_num);
			lisB7->Items->Add(guard_num + def_letra(quit_num));
			def_Pila(quit_num);
			movimientos++;
			lab_movimientos->Text = Convert::ToString(movimientos);
			puntos = puntos + 5;
			lab_puntos->Text = Convert::ToString(puntos);
			ganador();
		}
		else
		{
			MessageBox::Show("No puede ingresar la carta en este espacio", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
    }
	else
	{
	   MessageBox::Show("El número que ingresó no está dentro de los parámetros", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}

}
    String^ def_letra(int numero)
    {
		if (quit_num == 0)
		{
			return barajaTot[lis_baraja->Items->Count - 1]; 

		}
		if (quit_num == 1)
		{
			return baraja1[lisB1->Items->Count - 1];
		}
		if (quit_num == 2)
		{
			return baraja2[lisB2->Items->Count - 1];
		}
		if (quit_num == 3)
		{
			return baraja3[lisB3->Items->Count - 1];
		}
		if (quit_num == 4)
		{
			return baraja4[lisB4->Items->Count - 1];
		}
		if (quit_num == 5)
		{
			return baraja5[lisB5->Items->Count - 1];
		}
		if (quit_num == 6)
		{
			return baraja6[lisB6->Items->Count - 1];
		}
		if (quit_num == 7)
		{
			return baraja7[lisB7->Items->Count - 1];
		}
    }
	Void def_Pila(int numero)
	{
		if (quit_num == 0)
		{
			miPilaTotal->QuitarFinal(); 
			lis_baraja->Items->RemoveAt(lis_baraja->Items->Count - 1); 
			lis_baraja->Items->Add(miPilaTotal->TenerValorFinal() + barajaTot[0]); 
		}
		if (quit_num == 1)
		{
			miPila1->Elegir(); 
			lisB1->Items->RemoveAt(lisB1->Items->Count - 1); 
		}
		if (quit_num == 2)
		{
			miPila2->Elegir();
			lisB2->Items->RemoveAt(lisB2->Items->Count - 1);
		}
		if (quit_num == 3)
		{
			miPila3->Elegir();
			lisB3->Items->RemoveAt(lisB3->Items->Count - 1);
		}
		if (quit_num == 4)
		{
			miPila4->Elegir();
			lisB4->Items->RemoveAt(lisB4->Items->Count - 1);
		}
		if (quit_num == 5)
		{
			miPila5->Elegir();
			lisB5->Items->RemoveAt(lisB5->Items->Count - 1);
		}
		if (quit_num == 6)
		{
			miPila6->Elegir();
			lisB6->Items->RemoveAt(lisB6->Items->Count - 1);
		}
		if (quit_num == 7)
		{
			miPila7->Elegir();
			lisB7->Items->RemoveAt(lisB7->Items->Count - 1);
		}	
	}
	void ganador()
	{
		if (agre_num == 1)
		{
			contador1;
			contador1++;
			if (contador1 > 3)
			{
				MessageBox::Show("Ha ganado", "Felicidad", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		if (agre_num == 2)
		{
			contador2;
			contador2++;
			if (contador2 > 3)
			{
				MessageBox::Show("Ha ganado", "Felicidad", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		if (agre_num == 3)
		{
			contador3;
			contador3++;
			if (contador3 > 3)
			{
				MessageBox::Show("Ha ganado", "Felicidad", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		if (agre_num == 4)
		{
			contador4;
			contador4++;
			if (contador4 > 3)
			{
				MessageBox::Show("Ha ganado", "Felicidad", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		if (agre_num == 5)
		{
			contador5;
			contador5++;
			if (contador5 > 3)
			{
				MessageBox::Show("Ha ganado", "Felicidad", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		if (agre_num == 6)
		{
			contador6;
			contador6++;
			if (contador6 > 3)
			{
				MessageBox::Show("Ha ganado", "Felicidad", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		if (agre_num == 7)
		{
			contador7;
			contador7++;
			if (contador1 > 7)
			{
				MessageBox::Show("Ha ganado", "Felicidad", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}

    };
}