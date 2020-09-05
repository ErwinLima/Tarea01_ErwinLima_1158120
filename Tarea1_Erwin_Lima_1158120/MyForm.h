#pragma once

namespace Tarea1ErwinLima1158120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;	
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();			
			//
			//TODO: agregar código de constructor aquí
			//
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ txtResulRecursivo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::TextBox^ txtIngreso2;
	private: System::Windows::Forms::TextBox^ txtIngreso1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtCantPalin;


	private: System::Windows::Forms::TextBox^ txtResulIterativo;

	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::TextBox^ txtCantIter;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_TE_E1_IT;

	private: System::Windows::Forms::TextBox^ txt_TE_E1_RE;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtNombreArchivo;
	private: System::Windows::Forms::Button^ btn_E2_IT;



	private: System::Windows::Forms::Button^ btn_E2_RE;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txtNumero;
	private: System::Windows::Forms::TextBox^ txtBaseDestino;
	private: System::Windows::Forms::TextBox^ txtBaseOrigen;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtResul_E4_IT;
	private: System::Windows::Forms::TextBox^ txt_TE_E4_IT;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btn_E4_IT;
	private: System::Windows::Forms::TextBox^ txtResul_E4_RE;
	private: System::Windows::Forms::TextBox^ txt_TE_E4_RE;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btn_E4_RE;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnCargarArchivo;
	private: System::Windows::Forms::DataGridView^ table_Palabras;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_TE_E2_IT;

	private: System::Windows::Forms::TextBox^ txt_TE_E2_RE;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::RichTextBox^ txt_prueba;




	protected:

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_TE_E1_IT = (gcnew System::Windows::Forms::TextBox());
			this->txt_TE_E1_RE = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtResulIterativo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtResulRecursivo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->txtIngreso2 = (gcnew System::Windows::Forms::TextBox());
			this->txtIngreso1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_TE_E2_IT = (gcnew System::Windows::Forms::TextBox());
			this->txt_TE_E2_RE = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->table_Palabras = (gcnew System::Windows::Forms::DataGridView());
			this->btnCargarArchivo = (gcnew System::Windows::Forms::Button());
			this->txtNombreArchivo = (gcnew System::Windows::Forms::TextBox());
			this->btn_E2_IT = (gcnew System::Windows::Forms::Button());
			this->btn_E2_RE = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtCantIter = (gcnew System::Windows::Forms::TextBox());
			this->txtCantPalin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtResul_E4_IT = (gcnew System::Windows::Forms::TextBox());
			this->txt_TE_E4_IT = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btn_E4_IT = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtResul_E4_RE = (gcnew System::Windows::Forms::TextBox());
			this->txt_TE_E4_RE = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btn_E4_RE = (gcnew System::Windows::Forms::Button());
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseDestino = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseOrigen = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txt_prueba = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Palabras))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(462, 468);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->txt_TE_E1_IT);
			this->tabPage1->Controls->Add(this->txt_TE_E1_RE);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->txtResulIterativo);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->txtResulRecursivo);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->btnCalcular);
			this->tabPage1->Controls->Add(this->txtIngreso2);
			this->tabPage1->Controls->Add(this->txtIngreso1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(454, 442);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(111, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(241, 24);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Multiplicación por sumas";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(262, 250);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Tiempo de ejecución";
			// 
			// txt_TE_E1_IT
			// 
			this->txt_TE_E1_IT->Enabled = false;
			this->txt_TE_E1_IT->Location = System::Drawing::Point(335, 279);
			this->txt_TE_E1_IT->Name = L"txt_TE_E1_IT";
			this->txt_TE_E1_IT->Size = System::Drawing::Size(100, 20);
			this->txt_TE_E1_IT->TabIndex = 13;
			// 
			// txt_TE_E1_RE
			// 
			this->txt_TE_E1_RE->Enabled = false;
			this->txt_TE_E1_RE->Location = System::Drawing::Point(94, 279);
			this->txt_TE_E1_RE->Name = L"txt_TE_E1_RE";
			this->txt_TE_E1_RE->Size = System::Drawing::Size(100, 20);
			this->txt_TE_E1_RE->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Tiempo de ejecución";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Calcular Método Iterativo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// txtResulIterativo
			// 
			this->txtResulIterativo->Enabled = false;
			this->txtResulIterativo->Location = System::Drawing::Point(335, 193);
			this->txtResulIterativo->Name = L"txtResulIterativo";
			this->txtResulIterativo->Size = System::Drawing::Size(100, 20);
			this->txtResulIterativo->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(262, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Resultado:";
			// 
			// txtResulRecursivo
			// 
			this->txtResulRecursivo->Enabled = false;
			this->txtResulRecursivo->Location = System::Drawing::Point(94, 193);
			this->txtResulRecursivo->Name = L"txtResulRecursivo";
			this->txtResulRecursivo->Size = System::Drawing::Size(100, 20);
			this->txtResulRecursivo->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Resultado:";
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(26, 158);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(168, 23);
			this->btnCalcular->TabIndex = 4;
			this->btnCalcular->Text = L"Calcular Método Recursivo";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::btnCalcular_Click);
			// 
			// txtIngreso2
			// 
			this->txtIngreso2->Location = System::Drawing::Point(171, 103);
			this->txtIngreso2->Name = L"txtIngreso2";
			this->txtIngreso2->Size = System::Drawing::Size(100, 20);
			this->txtIngreso2->TabIndex = 3;
			// 
			// txtIngreso1
			// 
			this->txtIngreso1->Location = System::Drawing::Point(171, 63);
			this->txtIngreso1->Name = L"txtIngreso1";
			this->txtIngreso1->Size = System::Drawing::Size(100, 20);
			this->txtIngreso1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingreso 2:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(92, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingreso 1:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->txt_prueba);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->txt_TE_E2_IT);
			this->tabPage2->Controls->Add(this->txt_TE_E2_RE);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->table_Palabras);
			this->tabPage2->Controls->Add(this->btnCargarArchivo);
			this->tabPage2->Controls->Add(this->txtNombreArchivo);
			this->tabPage2->Controls->Add(this->btn_E2_IT);
			this->tabPage2->Controls->Add(this->btn_E2_RE);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->txtCantIter);
			this->tabPage2->Controls->Add(this->txtCantPalin);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(454, 442);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(293, 387);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Tiempo de ejecución";
			// 
			// txt_TE_E2_IT
			// 
			this->txt_TE_E2_IT->Enabled = false;
			this->txt_TE_E2_IT->Location = System::Drawing::Point(296, 403);
			this->txt_TE_E2_IT->Name = L"txt_TE_E2_IT";
			this->txt_TE_E2_IT->Size = System::Drawing::Size(100, 20);
			this->txt_TE_E2_IT->TabIndex = 24;
			// 
			// txt_TE_E2_RE
			// 
			this->txt_TE_E2_RE->Enabled = false;
			this->txt_TE_E2_RE->Location = System::Drawing::Point(44, 403);
			this->txt_TE_E2_RE->Name = L"txt_TE_E2_RE";
			this->txt_TE_E2_RE->Size = System::Drawing::Size(100, 20);
			this->txt_TE_E2_RE->TabIndex = 23;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(41, 387);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(106, 13);
			this->label20->TabIndex = 22;
			this->label20->Text = L"Tiempo de ejecución";
			// 
			// table_Palabras
			// 
			this->table_Palabras->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_Palabras->Location = System::Drawing::Point(34, 100);
			this->table_Palabras->Name = L"table_Palabras";
			this->table_Palabras->Size = System::Drawing::Size(169, 183);
			this->table_Palabras->TabIndex = 21;
			// 
			// btnCargarArchivo
			// 
			this->btnCargarArchivo->Location = System::Drawing::Point(34, 70);
			this->btnCargarArchivo->Name = L"btnCargarArchivo";
			this->btnCargarArchivo->Size = System::Drawing::Size(101, 23);
			this->btnCargarArchivo->TabIndex = 20;
			this->btnCargarArchivo->Text = L"Cargar archivo";
			this->btnCargarArchivo->UseVisualStyleBackColor = true;
			this->btnCargarArchivo->Click += gcnew System::EventHandler(this, &MyForm::btnCargarArchivo_Click);
			// 
			// txtNombreArchivo
			// 
			this->txtNombreArchivo->Enabled = false;
			this->txtNombreArchivo->Location = System::Drawing::Point(141, 73);
			this->txtNombreArchivo->Name = L"txtNombreArchivo";
			this->txtNombreArchivo->Size = System::Drawing::Size(278, 20);
			this->txtNombreArchivo->TabIndex = 19;
			// 
			// btn_E2_IT
			// 
			this->btn_E2_IT->Location = System::Drawing::Point(296, 324);
			this->btn_E2_IT->Name = L"btn_E2_IT";
			this->btn_E2_IT->Size = System::Drawing::Size(100, 23);
			this->btn_E2_IT->TabIndex = 18;
			this->btn_E2_IT->Text = L"Método iterativo";
			this->btn_E2_IT->UseVisualStyleBackColor = true;
			this->btn_E2_IT->Click += gcnew System::EventHandler(this, &MyForm::btn_E2_IT_Click);
			// 
			// btn_E2_RE
			// 
			this->btn_E2_RE->Location = System::Drawing::Point(45, 324);
			this->btn_E2_RE->Name = L"btn_E2_RE";
			this->btn_E2_RE->Size = System::Drawing::Size(102, 23);
			this->btn_E2_RE->TabIndex = 17;
			this->btn_E2_RE->Text = L"Método recursivo";
			this->btn_E2_RE->UseVisualStyleBackColor = true;
			this->btn_E2_RE->Click += gcnew System::EventHandler(this, &MyForm::btn_E2_RE_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(123, 19);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(210, 24);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Palabras palíndromas";
			// 
			// txtCantIter
			// 
			this->txtCantIter->Enabled = false;
			this->txtCantIter->Location = System::Drawing::Point(296, 353);
			this->txtCantIter->Name = L"txtCantIter";
			this->txtCantIter->Size = System::Drawing::Size(100, 20);
			this->txtCantIter->TabIndex = 5;
			// 
			// txtCantPalin
			// 
			this->txtCantPalin->Enabled = false;
			this->txtCantPalin->Location = System::Drawing::Point(47, 353);
			this->txtCantPalin->Name = L"txtCantPalin";
			this->txtCantPalin->Size = System::Drawing::Size(100, 20);
			this->txtCantPalin->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(148, 296);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Cantidad de palabras palíndromas";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(454, 442);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ejercicio 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(161, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(101, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(266, 24);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Determinante de una matriz";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->panel2);
			this->tabPage4->Controls->Add(this->panel1);
			this->tabPage4->Controls->Add(this->txtNumero);
			this->tabPage4->Controls->Add(this->txtBaseDestino);
			this->tabPage4->Controls->Add(this->txtBaseOrigen);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(454, 442);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Ejercicio 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel2->Controls->Add(this->txtResul_E4_IT);
			this->panel2->Controls->Add(this->txt_TE_E4_IT);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->btn_E4_IT);
			this->panel2->Location = System::Drawing::Point(247, 197);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(186, 216);
			this->panel2->TabIndex = 24;
			// 
			// txtResul_E4_IT
			// 
			this->txtResul_E4_IT->Enabled = false;
			this->txtResul_E4_IT->Location = System::Drawing::Point(21, 102);
			this->txtResul_E4_IT->Name = L"txtResul_E4_IT";
			this->txtResul_E4_IT->Size = System::Drawing::Size(129, 20);
			this->txtResul_E4_IT->TabIndex = 13;
			// 
			// txt_TE_E4_IT
			// 
			this->txt_TE_E4_IT->Enabled = false;
			this->txt_TE_E4_IT->Location = System::Drawing::Point(21, 171);
			this->txt_TE_E4_IT->Name = L"txt_TE_E4_IT";
			this->txt_TE_E4_IT->Size = System::Drawing::Size(129, 20);
			this->txt_TE_E4_IT->TabIndex = 12;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(18, 142);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 13);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Tiempo de ejecución";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(18, 77);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(58, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Resultado:";
			// 
			// btn_E4_IT
			// 
			this->btn_E4_IT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_E4_IT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_E4_IT->Location = System::Drawing::Point(40, 19);
			this->btn_E4_IT->Name = L"btn_E4_IT";
			this->btn_E4_IT->Size = System::Drawing::Size(110, 23);
			this->btn_E4_IT->TabIndex = 0;
			this->btn_E4_IT->Text = L"Método iterativo";
			this->btn_E4_IT->UseVisualStyleBackColor = false;
			this->btn_E4_IT->Click += gcnew System::EventHandler(this, &MyForm::btn_E4_IT_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->txtResul_E4_RE);
			this->panel1->Controls->Add(this->txt_TE_E4_RE);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->btn_E4_RE);
			this->panel1->Location = System::Drawing::Point(14, 197);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 216);
			this->panel1->TabIndex = 23;
			// 
			// txtResul_E4_RE
			// 
			this->txtResul_E4_RE->Enabled = false;
			this->txtResul_E4_RE->Location = System::Drawing::Point(19, 102);
			this->txtResul_E4_RE->Name = L"txtResul_E4_RE";
			this->txtResul_E4_RE->Size = System::Drawing::Size(125, 20);
			this->txtResul_E4_RE->TabIndex = 13;
			// 
			// txt_TE_E4_RE
			// 
			this->txt_TE_E4_RE->Enabled = false;
			this->txt_TE_E4_RE->Location = System::Drawing::Point(19, 172);
			this->txt_TE_E4_RE->Name = L"txt_TE_E4_RE";
			this->txt_TE_E4_RE->Size = System::Drawing::Size(125, 20);
			this->txt_TE_E4_RE->TabIndex = 12;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(16, 142);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(106, 13);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Tiempo de ejecución";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(16, 77);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(58, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Resultado:";
			// 
			// btn_E4_RE
			// 
			this->btn_E4_RE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_E4_RE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_E4_RE->Location = System::Drawing::Point(33, 19);
			this->btn_E4_RE->Name = L"btn_E4_RE";
			this->btn_E4_RE->Size = System::Drawing::Size(111, 23);
			this->btn_E4_RE->TabIndex = 0;
			this->btn_E4_RE->Text = L"Método recursivo";
			this->btn_E4_RE->UseVisualStyleBackColor = false;
			this->btn_E4_RE->Click += gcnew System::EventHandler(this, &MyForm::btn_E4_RE_Click);
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(113, 131);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(100, 20);
			this->txtNumero->TabIndex = 22;
			// 
			// txtBaseDestino
			// 
			this->txtBaseDestino->Location = System::Drawing::Point(308, 82);
			this->txtBaseDestino->Name = L"txtBaseDestino";
			this->txtBaseDestino->Size = System::Drawing::Size(100, 20);
			this->txtBaseDestino->TabIndex = 21;
			// 
			// txtBaseOrigen
			// 
			this->txtBaseOrigen->Location = System::Drawing::Point(113, 82);
			this->txtBaseOrigen->Name = L"txtBaseOrigen";
			this->txtBaseOrigen->Size = System::Drawing::Size(100, 20);
			this->txtBaseOrigen->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(10, 138);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(97, 13);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Número a convertir";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(237, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Base destino:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(44, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Base origen:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(140, 14);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(172, 24);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Cambio de bases";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// txt_prueba
			// 
			this->txt_prueba->Location = System::Drawing::Point(240, 99);
			this->txt_prueba->Name = L"txt_prueba";
			this->txt_prueba->Size = System::Drawing::Size(179, 184);
			this->txt_prueba->TabIndex = 26;
			this->txt_prueba->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(486, 508);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Palabras))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void MultiplicacionRecursiva(int a, int b, int c, int suma) {
			if (a == 1)
			{
				txtResulRecursivo->Text = Convert::ToString(b);
			}
			else if (b == 1) {
				txtResulRecursivo->Text = Convert::ToString(a);
			}
			else if (a == 0 || b == 0) {
				txtResulRecursivo->Text = Convert::ToString(0);
			}
			else {
				if (c != b) {
					MultiplicacionRecursiva(a, b, c + 1, suma += a);
				}
				else {
					txtResulRecursivo->Text = Convert::ToString(suma);
				}
			}			
		}

		void MultiplicacionIterativa(int a, int b, int suma) {
			if (a==1)
			{
				txtResulIterativo->Text = Convert::ToString(b);
			}
			else if (b==1)
			{
				txtResulIterativo->Text = Convert::ToString(a);
			}
			else if (a==0 || b==0)
			{
				txtResulIterativo->Text = Convert::ToString(0);
			}
			else {
				for (int i = 0; i < b; i++)
				{
					suma += a;
				}
				txtResulIterativo->Text = Convert::ToString(suma);
			}
		}

		String^ PalindromosRecursivo(String^ vector, String^ palabra, int pos) {
			if (pos >= 0) {
				palabra = palabra + vector[pos];
				return palabra + PalindromosRecursivo(vector, palabra, pos - 1);
			}
			else {
				return palabra;
			}

		}

		String^ PalindromosIterativo(String^ vector) {
			String^ palabra = "";
			for (int i = vector->Length-1; i >= 0; i--)
			{
				palabra = palabra + vector[i];
			}
			return palabra;
		}

		bool^ PalabrasIguales(String^ palabra, String^ word) {
			if (palabra->Equals(word) && word->Equals(palabra)) {
				return true;
			}
			else {
				return false;
			}
		}

		int ConversionBaseDecimal(int num, int longitud, int base) {
			int nuevoNumero,div;
			for (int i = longitud; i >= 0; i--)
			{
				nuevoNumero += (num / Math::Pow(10, i)) * (Math::Pow(base, i));
				div = Math::Pow(10, i);
				num = num % div;
			}
			return nuevoNumero;
		}

		bool VerificarDigitos(int num, int longitud, int rango) {
			bool b;
			int divisor;
			for (int i = longitud; i >=0; i--)
			{
				int digito;
				if (i<1) {
					digito = num % 10;
					if (digito >= 0 && digito < rango)
					{
						b = true;
					}
					else
					{
						b = false;
						i = -1;
					}
				}
				else {
					digito = num / (Math::Pow(10, i));
					if (digito >= 0 && digito < rango) {
						divisor = Math::Pow(10, i);
						num = num % divisor;
						b = true;
					}
					else {
						b = false;
						i = -1;
					}
				}
			}
			return b;
		}

		void ConversionDeBasesRecursiva(int b, int c, int r,String^ resul) {// b = base destino; c = numero a convertir
			if (c != 0) {				
				resul = Convert::ToString((c % b)) + resul;
				r = (c - (c % b)) / b;
				c = r;
				ConversionDeBasesRecursiva(b, c, r, resul);
			}
			else {
				txtResul_E4_RE->Text = resul;
			}
		}

		void ConversionDeBasesIterativa(int b, int c) { // b = base destino; c = numero a convertir
			int div=0;
			String^ resul = "";
			do {
				resul = (c % b) + resul;
				div = (c - (c % b)) / b;
				c = div;
			} while (c != 0);

			txtResul_E4_IT->Text = resul;
		}
	private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		Stopwatch^ sw = gcnew Stopwatch();
		sw->Start();
		try {
			int i = 0, s = 0;
			MultiplicacionRecursiva(Convert::ToInt32(txtIngreso1->Text), Convert::ToInt32(txtIngreso2->Text), i, s);			
		}
		catch (Exception^ e) {
			MessageBox::Show("Se detectó un error", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		sw->Stop();
		txt_TE_E1_RE->Text = "" + sw->ElapsedMilliseconds;
	}		   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ sw = gcnew Stopwatch();
	sw->Start();
	try
	{
		int s=0;
		MultiplicacionIterativa(Convert::ToInt32(txtIngreso1->Text), Convert::ToInt32(txtIngreso2->Text), s);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Se detectó un error", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	sw->Stop();
	txt_TE_E1_IT->Text = "" + sw->ElapsedMilliseconds;
}
private: System::Void btn_E4_RE_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ sw = gcnew Stopwatch();
	sw->Start();
	String^ texto = "";
	int x = 0, r=0;
	int num = Convert::ToInt32(txtNumero->Text);
	int baseO = Convert::ToInt32(txtBaseOrigen->Text);
	int baseD = Convert::ToInt32(txtBaseDestino->Text);
	try
	{
		if (baseO > 1 && baseO <= 10) {
			if (baseD > 1 && baseD <= 10) {
				x = Convert::ToString(num)->Length;
				if (VerificarDigitos(num, x - 1, baseO) == true) {
					ConversionDeBasesRecursiva(baseD, ConversionBaseDecimal(num, x - 1, baseO), r, texto);
				}
				else {
					MessageBox::Show("Ingreso de número no válido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}				
			}
			else {
				MessageBox::Show("Ingreso de base destino no válido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {			
			MessageBox::Show("Ingreso de base origen no válido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Se detectó un error", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	sw->Stop();
	txt_TE_E4_RE->Text = "" + sw->ElapsedMilliseconds;
}

private: System::Void btn_E4_IT_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ sw = gcnew Stopwatch();
	sw->Start();
	try
	{		
		int num = Convert::ToInt32(txtNumero->Text);
		int baseO = Convert::ToInt32(txtBaseOrigen->Text);
		int baseD = Convert::ToInt32(txtBaseDestino->Text);
		try
		{
			if (baseO > 1 && baseO <= 10) {
				if (baseD > 1 && baseD <= 10) {
					int x = Convert::ToString(num)->Length;
					if (VerificarDigitos(num, x - 1, baseO) == true) {
						ConversionDeBasesIterativa(baseD, ConversionBaseDecimal(num, x - 1, baseO));
					}
					else
					{
						MessageBox::Show("Ingreso de número no válido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}					
				}
				else {
					MessageBox::Show("Ingreso de base destino no válido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Ingreso de base origen no válido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Se detectó un error", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Se detectó un error", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	sw->Stop();
	txt_TE_E4_IT->Text = "" + sw->ElapsedMilliseconds;
}
private: System::Void btnCargarArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		openFileDialog1->Filter = "Archivos separados por coma(txt) | *.txt";
		openFileDialog1->FileName = "";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtNombreArchivo->Text = openFileDialog1->FileName;

			array<String^>^ filePalabras = File::ReadAllLines(openFileDialog1->FileName);
			if (filePalabras->Length > 0)
			{
				array<String^>^ fileColumna = filePalabras[0]->Split(',');
				if (fileColumna->Length > 0)
				{
					int columnas = fileColumna->Length;
					for (int i = 0; i < columnas; i++)
					{
						DataGridViewColumn^ nuevaColumna = gcnew DataGridViewColumn();
						nuevaColumna->Width = 50;
						DataGridViewCell^ nuevaCelda = gcnew DataGridViewTextBoxCell();
						nuevaColumna->CellTemplate = nuevaCelda;
						table_Palabras->Columns->Add(nuevaColumna);
					}

					for (int i = 0; i < filePalabras->Length; i++)
					{
						table_Palabras->Rows->Add();
					}

					for (int i = 0; i < filePalabras->Length; i++)
					{
						array<String^>^ fila = filePalabras[i]->Split(',');
						int j = 0;
						while ((j < columnas) && (j < fila->Length))
						{
							table_Palabras->Rows[i]->Cells[j]->Value = fila[j];
							j++;
						}
					}
				}
			}
		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo", "Archivo no seleccionado", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	catch(Exception^ e){
		MessageBox::Show("No se pudo cargar el archivo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void btn_E2_IT_Click(System::Object^ sender, System::EventArgs^ e) {
	int cont;
	Stopwatch^ sw = gcnew Stopwatch();
	sw->Start();
	try
	{

		String^ palindromo;
		array<String^>^ filePalabras = File::ReadAllLines(openFileDialog1->FileName);
		if (filePalabras->Length > 0)
		{
			array<String^>^ fileColumna = filePalabras[0]->Split(',');
			if (fileColumna->Length > 0)
			{
				int columnas = fileColumna->Length;
				for (int i = 0; i < filePalabras->Length; i++)
				{
					array<String^>^ fila = filePalabras[i]->Split(',');
					int j = 0;
					while ((j < columnas) && (j < fila->Length))
					{
						if (PalabrasIguales(fila[j], PalindromosIterativo(fila[j]))->Equals(true))
						{
							cont++;
						}
						j++;
					}
				}
			}
		}

		txtCantIter->Text = "" + cont;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Se detecto un error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	
	sw->Stop();
	txt_TE_E2_IT->Text = "" + sw->ElapsedMilliseconds;
}
private: System::Void btn_E2_RE_Click(System::Object^ sender, System::EventArgs^ e) {
	int cont=0;
	Stopwatch^ sw = gcnew Stopwatch();
	sw->Start();
	String^ palindromo;
	array<String^>^ filePalabras = File::ReadAllLines(openFileDialog1->FileName);
	if (filePalabras->Length > 0)
	{
		array<String^>^ fileColumna = filePalabras[0]->Split(',');
		if (fileColumna->Length > 0)
		{
			int columnas = fileColumna->Length;
			for (int i = 0; i < filePalabras->Length; i++)
			{
				array<String^>^ fila = filePalabras[i]->Split(',');
				int j = 0;
				while ((j < columnas) && (j < fila->Length))
				{
					if (PalabrasIguales(fila[j], PalindromosRecursivo(fila[j], palindromo, fila[j]->Length - 1))->Equals(true)) {
						cont++;
					}
					j++;
				}
			}
		}
	}

	txtCantPalin->Text = "" + cont;
	sw->Stop();
	txt_TE_E2_RE->Text = "" + sw->ElapsedMilliseconds;
}
};
}
