#pragma once
#include <fstream>
#include <cmath>
#include <string>
#include <cstdio>
#include <conio.h>
#include <cmath>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ resA;
	private: System::Windows::Forms::Button^ resB;
	private: System::Windows::Forms::TextBox^ txtR;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtN;




	private: System::Windows::Forms::Button^ input;
	private: System::Windows::Forms::TextBox^ txtmin;
	private: System::Windows::Forms::TextBox^ txtmax;
	private: System::Windows::Forms::Button^ random;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ Matrix1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ manrixRan;
	private: System::Windows::Forms::Button^ matrixIn;
	private: System::Windows::Forms::TextBox^ matrixN;
	private: System::Windows::Forms::TextBox^ matrixMin;
	private: System::Windows::Forms::TextBox^ matrixMax;
	private: System::Windows::Forms::Button^ matrixHelp;
	private: System::Windows::Forms::Button^ matrixSave;
	private: System::Windows::Forms::TextBox^ matrixSavetxt;
	private: System::Windows::Forms::TextBox^ manrixIntxt;

	private: System::Windows::Forms::Button^ Marixbutton;
	private: System::Windows::Forms::RichTextBox^ digitOut;
	private: System::Windows::Forms::RichTextBox^ digitIn;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ digitHelp;
	private: System::Windows::Forms::TextBox^ digitIP;
	private: System::Windows::Forms::TextBox^ digitOP;
	private: System::Windows::Forms::Button^ digitInput;
	private: System::Windows::Forms::Button^ digitOutput;
	private: System::Windows::Forms::Button^ digitButton;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::GroupBox^  groupBoxMatrix;
	private: System::Windows::Forms::GroupBox^  groupBoxButtons;
	private: System::Windows::Forms::RichTextBox^ Matrix2;

	private: System::Windows::Forms::GroupBox^  groupBoxResults;
	private: System::Windows::Forms::GroupBox^  groupBoxStrings;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::RichTextBox^ txtB;
	private: System::Windows::Forms::RichTextBox^ txtA;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RichTextBox^ Drob1;
	private: System::Windows::Forms::RadioButton^ rbstepen;
	private: System::Windows::Forms::RichTextBox^ RESULTdrobi;





	private: System::Windows::Forms::Button^ Help4;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ Drobinfile;
	private: System::Windows::Forms::TextBox^ txtdrobinfile;




	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ rbmnog;
	private: System::Windows::Forms::RichTextBox^ Drob2;



	private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::Button^ RANDOM4;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ maxzn;

private: System::Windows::Forms::TextBox^ minzn;

private: System::Windows::Forms::TextBox^ maxch;

private: System::Windows::Forms::TextBox^ minch;

private: System::Windows::Forms::Button^ RESULT4;

private: System::Windows::Forms::RadioButton^ rbdel;

private: System::Windows::Forms::RadioButton^ rbadd;
private: System::Windows::Forms::RadioButton^ rbmin;
private: System::Windows::Forms::RadioButton^ rbsravnit;
private: System::Windows::Forms::RichTextBox^ sokr2;






	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Button^ SOKR;

private: System::Windows::Forms::RichTextBox^ sokr1;
private: System::Windows::Forms::RadioButton^ D3;

private: System::Windows::Forms::RadioButton^ D1;
private: System::Windows::Forms::RadioButton^ D2;
private: System::Windows::Forms::OpenFileDialog^ SAVE3;

private: System::Windows::Forms::OpenFileDialog^ OPEN1;
private: System::Windows::Forms::OpenFileDialog^ SAVE1;
private: System::Windows::Forms::OpenFileDialog^ OPEN2;
private: System::Windows::Forms::OpenFileDialog^ SAVE2;
private: System::Windows::Forms::OpenFileDialog^ OPEN4;
private: System::Windows::Forms::OpenFileDialog^ SAVE4;








	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtB = (gcnew System::Windows::Forms::RichTextBox());
			this->txtA = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtmin = (gcnew System::Windows::Forms::TextBox());
			this->txtmax = (gcnew System::Windows::Forms::TextBox());
			this->random = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->resA = (gcnew System::Windows::Forms::Button());
			this->resB = (gcnew System::Windows::Forms::Button());
			this->txtR = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxButtons = (gcnew System::Windows::Forms::GroupBox());
			this->Marixbutton = (gcnew System::Windows::Forms::Button());
			this->matrixHelp = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBoxMatrix = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->matrixN = (gcnew System::Windows::Forms::TextBox());
			this->matrixMax = (gcnew System::Windows::Forms::TextBox());
			this->matrixSavetxt = (gcnew System::Windows::Forms::TextBox());
			this->matrixSave = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->matrixMin = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->manrixIntxt = (gcnew System::Windows::Forms::TextBox());
			this->manrixRan = (gcnew System::Windows::Forms::Button());
			this->matrixIn = (gcnew System::Windows::Forms::Button());
			this->Matrix1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBoxResults = (gcnew System::Windows::Forms::GroupBox());
			this->Matrix2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->rbstepen = (gcnew System::Windows::Forms::RadioButton());
			this->RESULTdrobi = (gcnew System::Windows::Forms::RichTextBox());
			this->Help4 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Drobinfile = (gcnew System::Windows::Forms::Button());
			this->txtdrobinfile = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->rbmnog = (gcnew System::Windows::Forms::RadioButton());
			this->Drob2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->D2 = (gcnew System::Windows::Forms::RadioButton());
			this->D3 = (gcnew System::Windows::Forms::RadioButton());
			this->D1 = (gcnew System::Windows::Forms::RadioButton());
			this->RANDOM4 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->maxzn = (gcnew System::Windows::Forms::TextBox());
			this->minzn = (gcnew System::Windows::Forms::TextBox());
			this->maxch = (gcnew System::Windows::Forms::TextBox());
			this->minch = (gcnew System::Windows::Forms::TextBox());
			this->RESULT4 = (gcnew System::Windows::Forms::Button());
			this->rbdel = (gcnew System::Windows::Forms::RadioButton());
			this->rbadd = (gcnew System::Windows::Forms::RadioButton());
			this->rbmin = (gcnew System::Windows::Forms::RadioButton());
			this->rbsravnit = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->sokr2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->SOKR = (gcnew System::Windows::Forms::Button());
			this->sokr1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Drob1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->digitOut = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBoxStrings = (gcnew System::Windows::Forms::GroupBox());
			this->digitInput = (gcnew System::Windows::Forms::Button());
			this->digitOP = (gcnew System::Windows::Forms::TextBox());
			this->digitHelp = (gcnew System::Windows::Forms::Button());
			this->digitOutput = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->digitIP = (gcnew System::Windows::Forms::TextBox());
			this->digitButton = (gcnew System::Windows::Forms::Button());
			this->digitIn = (gcnew System::Windows::Forms::RichTextBox());
			this->SAVE3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->OPEN1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SAVE1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->OPEN2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SAVE2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->OPEN4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SAVE4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBoxButtons->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBoxMatrix->SuspendLayout();
			this->groupBoxResults->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBoxStrings->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(414, 428);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Honeydew;
			this->tabPage1->Controls->Add(this->txtB);
			this->tabPage1->Controls->Add(this->txtA);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->input);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->txtmin);
			this->tabPage1->Controls->Add(this->txtmax);
			this->tabPage1->Controls->Add(this->random);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->resA);
			this->tabPage1->Controls->Add(this->resB);
			this->tabPage1->Controls->Add(this->txtR);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->txtN);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->txt);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(406, 402);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Задание 1";
			// 
			// txtB
			// 
			this->txtB->Location = System::Drawing::Point(208, 304);
			this->txtB->Name = L"txtB";
			this->txtB->ReadOnly = true;
			this->txtB->Size = System::Drawing::Size(185, 96);
			this->txtB->TabIndex = 27;
			this->txtB->Text = L"";
			// 
			// txtA
			// 
			this->txtA->Location = System::Drawing::Point(12, 304);
			this->txtA->Name = L"txtA";
			this->txtA->ReadOnly = true;
			this->txtA->Size = System::Drawing::Size(190, 96);
			this->txtA->TabIndex = 26;
			this->txtA->Text = L"";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(270, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 23);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Задание";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(270, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Запись в файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(270, 8);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(119, 23);
			this->input->TabIndex = 20;
			this->input->Text = L"Ввести из файла";
			this->input->UseVisualStyleBackColor = true;
			this->input->Click += gcnew System::EventHandler(this, &MyForm::input_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(19, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(121, 16);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Верхняя граница:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(20, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 16);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Нижняя граница:";
			// 
			// txtmin
			// 
			this->txtmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtmin->Location = System::Drawing::Point(142, 35);
			this->txtmin->Name = L"txtmin";
			this->txtmin->Size = System::Drawing::Size(100, 20);
			this->txtmin->TabIndex = 19;
			this->txtmin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtmin_KeyPress);
			// 
			// txtmax
			// 
			this->txtmax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtmax->Location = System::Drawing::Point(142, 62);
			this->txtmax->Name = L"txtmax";
			this->txtmax->Size = System::Drawing::Size(100, 20);
			this->txtmax->TabIndex = 18;
			this->txtmax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtmax_KeyPress);
			// 
			// random
			// 
			this->random->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->random->Location = System::Drawing::Point(270, 58);
			this->random->Name = L"random";
			this->random->Size = System::Drawing::Size(119, 23);
			this->random->TabIndex = 17;
			this->random->Text = L"Генерация";
			this->random->UseVisualStyleBackColor = true;
			this->random->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 78);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Выводит количесвто \r\nтреугольников, построенных\r\nна указанных точках,\r\nкоторые пе"
				L"ресекаются с \r\nокружностью, указанного\r\nрадиуса\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(220, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 78);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Выводит количесвто\r\nтреугольников, построенных\r\nна указанных точках,\r\nкоторые нах"
				L"одятся внутри \r\nокружности с указанным\r\nрадиусом\r\n";
			// 
			// resA
			// 
			this->resA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resA->Location = System::Drawing::Point(10, 179);
			this->resA->Name = L"resA";
			this->resA->Size = System::Drawing::Size(192, 23);
			this->resA->TabIndex = 8;
			this->resA->Text = L"Расчет А";
			this->resA->UseVisualStyleBackColor = true;
			this->resA->Click += gcnew System::EventHandler(this, &MyForm::resA_Click);
			// 
			// resB
			// 
			this->resB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resB->Location = System::Drawing::Point(208, 179);
			this->resB->Name = L"resB";
			this->resB->Size = System::Drawing::Size(185, 23);
			this->resB->TabIndex = 7;
			this->resB->Text = L"Расчет Б";
			this->resB->UseVisualStyleBackColor = true;
			this->resB->Click += gcnew System::EventHandler(this, &MyForm::resB_Click);
			// 
			// txtR
			// 
			this->txtR->Location = System::Drawing::Point(142, 89);
			this->txtR->Multiline = true;
			this->txtR->Name = L"txtR";
			this->txtR->Size = System::Drawing::Size(100, 20);
			this->txtR->TabIndex = 6;
			this->txtR->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtR_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(79, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Радиус:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Количесвто точек:";
			// 
			// txtN
			// 
			this->txtN->Location = System::Drawing::Point(142, 9);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(100, 20);
			this->txtN->TabIndex = 3;
			this->txtN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtN_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Вводите координаты точек через пробел,\r\n соблюдая слудеющую последовательность: х"
				L"1 у1 х2 у2...";
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(10, 153);
			this->txt->Multiline = true;
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(383, 20);
			this->txt->TabIndex = 1;
			this->txt->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_KeyPress);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::SeaShell;
			this->tabPage2->Controls->Add(this->groupBoxButtons);
			this->tabPage2->Controls->Add(this->tableLayoutPanel1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(406, 402);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задание 2";
			// 
			// groupBoxButtons
			// 
			this->groupBoxButtons->Controls->Add(this->Marixbutton);
			this->groupBoxButtons->Controls->Add(this->matrixHelp);
			this->groupBoxButtons->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBoxButtons->Location = System::Drawing::Point(3, 308);
			this->groupBoxButtons->Name = L"groupBoxButtons";
			this->groupBoxButtons->Size = System::Drawing::Size(400, 91);
			this->groupBoxButtons->TabIndex = 18;
			this->groupBoxButtons->TabStop = false;
			// 
			// Marixbutton
			// 
			this->Marixbutton->Dock = System::Windows::Forms::DockStyle::Top;
			this->Marixbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Marixbutton->Location = System::Drawing::Point(3, 16);
			this->Marixbutton->Name = L"Marixbutton";
			this->Marixbutton->Size = System::Drawing::Size(394, 42);
			this->Marixbutton->TabIndex = 13;
			this->Marixbutton->Text = L"Преобразовать матрицу";
			this->Marixbutton->UseVisualStyleBackColor = true;
			this->Marixbutton->Click += gcnew System::EventHandler(this, &MyForm::Marixbutton_Click);
			// 
			// matrixHelp
			// 
			this->matrixHelp->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->matrixHelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixHelp->Location = System::Drawing::Point(3, 60);
			this->matrixHelp->Name = L"matrixHelp";
			this->matrixHelp->Size = System::Drawing::Size(394, 28);
			this->matrixHelp->TabIndex = 16;
			this->matrixHelp->Text = L"Задание";
			this->matrixHelp->UseVisualStyleBackColor = true;
			this->matrixHelp->Click += gcnew System::EventHandler(this, &MyForm::matrixHelp_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->groupBoxMatrix, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->Matrix1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->groupBoxResults, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(403, 299);
			this->tableLayoutPanel1->TabIndex = 17;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// groupBoxMatrix
			// 
			this->groupBoxMatrix->Controls->Add(this->label8);
			this->groupBoxMatrix->Controls->Add(this->matrixN);
			this->groupBoxMatrix->Controls->Add(this->matrixMax);
			this->groupBoxMatrix->Controls->Add(this->matrixSavetxt);
			this->groupBoxMatrix->Controls->Add(this->matrixSave);
			this->groupBoxMatrix->Controls->Add(this->label12);
			this->groupBoxMatrix->Controls->Add(this->matrixMin);
			this->groupBoxMatrix->Controls->Add(this->label11);
			this->groupBoxMatrix->Controls->Add(this->manrixIntxt);
			this->groupBoxMatrix->Controls->Add(this->manrixRan);
			this->groupBoxMatrix->Controls->Add(this->matrixIn);
			this->groupBoxMatrix->Location = System::Drawing::Point(3, 3);
			this->groupBoxMatrix->Name = L"groupBoxMatrix";
			this->groupBoxMatrix->Size = System::Drawing::Size(182, 293);
			this->groupBoxMatrix->TabIndex = 18;
			this->groupBoxMatrix->TabStop = false;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(15, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Размер матрицы:";
			// 
			// matrixN
			// 
			this->matrixN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->matrixN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixN->Location = System::Drawing::Point(125, 13);
			this->matrixN->MaximumSize = System::Drawing::Size(300, 60);
			this->matrixN->Name = L"matrixN";
			this->matrixN->Size = System::Drawing::Size(51, 20);
			this->matrixN->TabIndex = 3;
			this->matrixN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::matrixN_KeyPress);
			// 
			// matrixMax
			// 
			this->matrixMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->matrixMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixMax->Location = System::Drawing::Point(125, 69);
			this->matrixMax->Name = L"matrixMax";
			this->matrixMax->Size = System::Drawing::Size(51, 20);
			this->matrixMax->TabIndex = 1;
			this->matrixMax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::matrixMax_KeyPress);
			// 
			// matrixSavetxt
			// 
			this->matrixSavetxt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->matrixSavetxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixSavetxt->Location = System::Drawing::Point(16, 245);
			this->matrixSavetxt->MaximumSize = System::Drawing::Size(426, 42);
			this->matrixSavetxt->Name = L"matrixSavetxt";
			this->matrixSavetxt->ReadOnly = true;
			this->matrixSavetxt->Size = System::Drawing::Size(158, 20);
			this->matrixSavetxt->TabIndex = 14;
			// 
			// matrixSave
			// 
			this->matrixSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->matrixSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixSave->Location = System::Drawing::Point(16, 198);
			this->matrixSave->Name = L"matrixSave";
			this->matrixSave->Size = System::Drawing::Size(158, 41);
			this->matrixSave->TabIndex = 15;
			this->matrixSave->Text = L"Сохранить результат в файл";
			this->matrixSave->UseVisualStyleBackColor = true;
			this->matrixSave->Click += gcnew System::EventHandler(this, &MyForm::matrixSave_Click);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(15, 45);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Нижняя граница:";
			// 
			// matrixMin
			// 
			this->matrixMin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->matrixMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixMin->Location = System::Drawing::Point(125, 42);
			this->matrixMin->Name = L"matrixMin";
			this->matrixMin->Size = System::Drawing::Size(51, 20);
			this->matrixMin->TabIndex = 2;
			this->matrixMin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::matrixMin_KeyPress);
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(15, 74);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Верхняя граница:";
			// 
			// manrixIntxt
			// 
			this->manrixIntxt->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->manrixIntxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->manrixIntxt->Location = System::Drawing::Point(18, 166);
			this->manrixIntxt->MaximumSize = System::Drawing::Size(200, 42);
			this->manrixIntxt->Name = L"manrixIntxt";
			this->manrixIntxt->ReadOnly = true;
			this->manrixIntxt->Size = System::Drawing::Size(156, 20);
			this->manrixIntxt->TabIndex = 11;
			// 
			// manrixRan
			// 
			this->manrixRan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->manrixRan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->manrixRan->Location = System::Drawing::Point(18, 96);
			this->manrixRan->Name = L"manrixRan";
			this->manrixRan->Size = System::Drawing::Size(158, 25);
			this->manrixRan->TabIndex = 6;
			this->manrixRan->Text = L"Сгенерировать матрицу";
			this->manrixRan->UseVisualStyleBackColor = true;
			this->manrixRan->Click += gcnew System::EventHandler(this, &MyForm::manrixRan_Click);
			// 
			// matrixIn
			// 
			this->matrixIn->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->matrixIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixIn->Location = System::Drawing::Point(18, 132);
			this->matrixIn->Name = L"matrixIn";
			this->matrixIn->Size = System::Drawing::Size(156, 28);
			this->matrixIn->TabIndex = 5;
			this->matrixIn->Text = L"Ввод из файла";
			this->matrixIn->UseVisualStyleBackColor = true;
			this->matrixIn->Click += gcnew System::EventHandler(this, &MyForm::matrixIn_Click);
			// 
			// Matrix1
			// 
			this->Matrix1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Matrix1->Font = (gcnew System::Drawing::Font(L"Courier New", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix1->Location = System::Drawing::Point(191, 3);
			this->Matrix1->Name = L"Matrix1";
			this->Matrix1->Size = System::Drawing::Size(100, 293);
			this->Matrix1->TabIndex = 0;
			this->Matrix1->Text = L"";
			this->Matrix1->WordWrap = false;
			this->Matrix1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Matrix1_KeyPress);
			// 
			// groupBoxResults
			// 
			this->groupBoxResults->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxResults->Controls->Add(this->Matrix2);
			this->groupBoxResults->Location = System::Drawing::Point(298, 3);
			this->groupBoxResults->Name = L"groupBoxResults";
			this->groupBoxResults->Size = System::Drawing::Size(100, 296);
			this->groupBoxResults->TabIndex = 19;
			this->groupBoxResults->TabStop = false;
			this->groupBoxResults->Text = L"Результаты";
			this->groupBoxResults->Enter += gcnew System::EventHandler(this, &MyForm::groupBoxResults_Enter);
			// 
			// Matrix2
			// 
			this->Matrix2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Matrix2->Font = (gcnew System::Drawing::Font(L"Courier New", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix2->Location = System::Drawing::Point(3, 16);
			this->Matrix2->Name = L"Matrix2";
			this->Matrix2->ReadOnly = true;
			this->Matrix2->Size = System::Drawing::Size(94, 277);
			this->Matrix2->TabIndex = 19;
			this->Matrix2->Text = L"";
			this->Matrix2->WordWrap = false;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::LightCyan;
			this->tabPage3->Controls->Add(this->rbstepen);
			this->tabPage3->Controls->Add(this->RESULTdrobi);
			this->tabPage3->Controls->Add(this->Help4);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->rbmnog);
			this->tabPage3->Controls->Add(this->Drob2);
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Controls->Add(this->RESULT4);
			this->tabPage3->Controls->Add(this->rbdel);
			this->tabPage3->Controls->Add(this->rbadd);
			this->tabPage3->Controls->Add(this->rbmin);
			this->tabPage3->Controls->Add(this->rbsravnit);
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Controls->Add(this->Drob1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(406, 402);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Задание 3";
			// 
			// rbstepen
			// 
			this->rbstepen->AutoSize = true;
			this->rbstepen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbstepen->Location = System::Drawing::Point(179, 4);
			this->rbstepen->Name = L"rbstepen";
			this->rbstepen->Size = System::Drawing::Size(199, 19);
			this->rbstepen->TabIndex = 26;
			this->rbstepen->Text = L"Возвести \"Дробь 1\" в степень";
			this->rbstepen->UseVisualStyleBackColor = true;
			this->rbstepen->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbstepen_CheckedChanged);
			// 
			// RESULTdrobi
			// 
			this->RESULTdrobi->BackColor = System::Drawing::SystemColors::Info;
			this->RESULTdrobi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->RESULTdrobi->Location = System::Drawing::Point(105, 309);
			this->RESULTdrobi->Name = L"RESULTdrobi";
			this->RESULTdrobi->ReadOnly = true;
			this->RESULTdrobi->Size = System::Drawing::Size(135, 85);
			this->RESULTdrobi->TabIndex = 25;
			this->RESULTdrobi->Text = L"";
			// 
			// Help4
			// 
			this->Help4->Location = System::Drawing::Point(258, 203);
			this->Help4->Name = L"Help4";
			this->Help4->Size = System::Drawing::Size(127, 52);
			this->Help4->TabIndex = 24;
			this->Help4->Text = L"Задание";
			this->Help4->UseVisualStyleBackColor = true;
			this->Help4->Click += gcnew System::EventHandler(this, &MyForm::Help4_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->Drobinfile);
			this->groupBox3->Controls->Add(this->txtdrobinfile);
			this->groupBox3->Location = System::Drawing::Point(252, 130);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(141, 66);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			// 
			// Drobinfile
			// 
			this->Drobinfile->Location = System::Drawing::Point(6, 13);
			this->Drobinfile->Name = L"Drobinfile";
			this->Drobinfile->Size = System::Drawing::Size(127, 23);
			this->Drobinfile->TabIndex = 18;
			this->Drobinfile->Text = L"Записать в файл";
			this->Drobinfile->UseVisualStyleBackColor = true;
			this->Drobinfile->Click += gcnew System::EventHandler(this, &MyForm::Drobinfile_Click);
			// 
			// txtdrobinfile
			// 
			this->txtdrobinfile->Location = System::Drawing::Point(6, 40);
			this->txtdrobinfile->Name = L"txtdrobinfile";
			this->txtdrobinfile->ReadOnly = true;
			this->txtdrobinfile->Size = System::Drawing::Size(127, 20);
			this->txtdrobinfile->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(12, 330);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(91, 32);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Результат \r\nоперации:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(100, 6);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 15);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Дробь 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 15);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Дробь 1";
			// 
			// rbmnog
			// 
			this->rbmnog->AutoSize = true;
			this->rbmnog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbmnog->Location = System::Drawing::Point(303, 54);
			this->rbmnog->Name = L"rbmnog";
			this->rbmnog->Size = System::Drawing::Size(86, 19);
			this->rbmnog->TabIndex = 5;
			this->rbmnog->Text = L"Умножить";
			this->rbmnog->UseVisualStyleBackColor = true;
			this->rbmnog->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbmnog_CheckedChanged);
			// 
			// Drob2
			// 
			this->Drob2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Drob2->Location = System::Drawing::Point(103, 26);
			this->Drob2->Name = L"Drob2";
			this->Drob2->Size = System::Drawing::Size(70, 70);
			this->Drob2->TabIndex = 13;
			this->Drob2->Text = L"";
			this->Drob2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Drob2_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->D2);
			this->groupBox2->Controls->Add(this->D3);
			this->groupBox2->Controls->Add(this->D1);
			this->groupBox2->Controls->Add(this->RANDOM4);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->maxzn);
			this->groupBox2->Controls->Add(this->minzn);
			this->groupBox2->Controls->Add(this->maxch);
			this->groupBox2->Controls->Add(this->minch);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(9, 130);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(237, 173);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Генерация дробей";
			// 
			// D2
			// 
			this->D2->AutoSize = true;
			this->D2->Location = System::Drawing::Point(69, 148);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(69, 19);
			this->D2->TabIndex = 25;
			this->D2->Text = L"Дробь2";
			this->D2->UseVisualStyleBackColor = true;
			// 
			// D3
			// 
			this->D3->AutoSize = true;
			this->D3->Location = System::Drawing::Point(140, 150);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(97, 19);
			this->D3->TabIndex = 27;
			this->D3->Text = L"Сокращение";
			this->D3->UseVisualStyleBackColor = true;
			// 
			// D1
			// 
			this->D1->AutoSize = true;
			this->D1->Checked = true;
			this->D1->Location = System::Drawing::Point(3, 148);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(69, 19);
			this->D1->TabIndex = 26;
			this->D1->TabStop = true;
			this->D1->Text = L"Дробь1";
			this->D1->UseVisualStyleBackColor = true;
			// 
			// RANDOM4
			// 
			this->RANDOM4->Location = System::Drawing::Point(11, 120);
			this->RANDOM4->Name = L"RANDOM4";
			this->RANDOM4->Size = System::Drawing::Size(220, 23);
			this->RANDOM4->TabIndex = 24;
			this->RANDOM4->Text = L"Сгенерировать";
			this->RANDOM4->UseVisualStyleBackColor = true;
			this->RANDOM4->Click += gcnew System::EventHandler(this, &MyForm::RANDOM4_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(10, 76);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(167, 13);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Нижняя граница знаменателей";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(8, 102);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(169, 13);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Верхняя граница знаменателей";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(23, 50);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(154, 13);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Верхняя граница числителей";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(25, 24);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(152, 13);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Нижняя граница числителей";
			// 
			// maxzn
			// 
			this->maxzn->Location = System::Drawing::Point(183, 97);
			this->maxzn->Name = L"maxzn";
			this->maxzn->Size = System::Drawing::Size(48, 21);
			this->maxzn->TabIndex = 3;
			this->maxzn->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::maxzn_KeyPress);
			// 
			// minzn
			// 
			this->minzn->Location = System::Drawing::Point(183, 71);
			this->minzn->Name = L"minzn";
			this->minzn->Size = System::Drawing::Size(48, 21);
			this->minzn->TabIndex = 2;
			this->minzn->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::minzn_KeyPress);
			// 
			// maxch
			// 
			this->maxch->Location = System::Drawing::Point(183, 45);
			this->maxch->Name = L"maxch";
			this->maxch->Size = System::Drawing::Size(48, 21);
			this->maxch->TabIndex = 1;
			this->maxch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::maxch_KeyPress);
			// 
			// minch
			// 
			this->minch->Location = System::Drawing::Point(183, 19);
			this->minch->Name = L"minch";
			this->minch->Size = System::Drawing::Size(48, 21);
			this->minch->TabIndex = 0;
			this->minch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::minch_KeyPress);
			// 
			// RESULT4
			// 
			this->RESULT4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RESULT4->Location = System::Drawing::Point(9, 101);
			this->RESULT4->Name = L"RESULT4";
			this->RESULT4->Size = System::Drawing::Size(384, 23);
			this->RESULT4->TabIndex = 11;
			this->RESULT4->Text = L"Выполнить";
			this->RESULT4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->RESULT4->UseVisualStyleBackColor = true;
			this->RESULT4->Click += gcnew System::EventHandler(this, &MyForm::RESULT4_Click);
			// 
			// rbdel
			// 
			this->rbdel->AutoSize = true;
			this->rbdel->Checked = true;
			this->rbdel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbdel->Location = System::Drawing::Point(179, 26);
			this->rbdel->Name = L"rbdel";
			this->rbdel->Size = System::Drawing::Size(88, 19);
			this->rbdel->TabIndex = 10;
			this->rbdel->TabStop = true;
			this->rbdel->Text = L"Разделить";
			this->rbdel->UseVisualStyleBackColor = true;
			this->rbdel->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbdel_CheckedChanged);
			// 
			// rbadd
			// 
			this->rbadd->AutoSize = true;
			this->rbadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbadd->Location = System::Drawing::Point(179, 51);
			this->rbadd->Name = L"rbadd";
			this->rbadd->Size = System::Drawing::Size(77, 19);
			this->rbadd->TabIndex = 9;
			this->rbadd->Text = L"Сложить";
			this->rbadd->UseVisualStyleBackColor = true;
			this->rbadd->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbadd_CheckedChanged);
			// 
			// rbmin
			// 
			this->rbmin->AutoSize = true;
			this->rbmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbmin->Location = System::Drawing::Point(179, 76);
			this->rbmin->Name = L"rbmin";
			this->rbmin->Size = System::Drawing::Size(75, 19);
			this->rbmin->TabIndex = 8;
			this->rbmin->Text = L"Вычесть";
			this->rbmin->UseVisualStyleBackColor = true;
			this->rbmin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbmin_CheckedChanged);
			// 
			// rbsravnit
			// 
			this->rbsravnit->AutoSize = true;
			this->rbsravnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbsravnit->Location = System::Drawing::Point(303, 29);
			this->rbsravnit->Name = L"rbsravnit";
			this->rbsravnit->Size = System::Drawing::Size(82, 19);
			this->rbsravnit->TabIndex = 6;
			this->rbsravnit->Text = L"Сравнить";
			this->rbsravnit->UseVisualStyleBackColor = true;
			this->rbsravnit->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbsravnit_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->sokr2);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->SOKR);
			this->groupBox1->Controls->Add(this->sokr1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(252, 261);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(141, 133);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Сокращение дроби";
			// 
			// sokr2
			// 
			this->sokr2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sokr2->Location = System::Drawing::Point(82, 19);
			this->sokr2->Name = L"sokr2";
			this->sokr2->ReadOnly = true;
			this->sokr2->Size = System::Drawing::Size(51, 70);
			this->sokr2->TabIndex = 23;
			this->sokr2->Text = L"";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(63, 48);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(15, 16);
			this->label19->TabIndex = 22;
			this->label19->Text = L"=";
			// 
			// SOKR
			// 
			this->SOKR->Location = System::Drawing::Point(6, 95);
			this->SOKR->Name = L"SOKR";
			this->SOKR->Size = System::Drawing::Size(130, 32);
			this->SOKR->TabIndex = 4;
			this->SOKR->Text = L"Сократить";
			this->SOKR->UseVisualStyleBackColor = true;
			this->SOKR->Click += gcnew System::EventHandler(this, &MyForm::SOKR_Click);
			// 
			// sokr1
			// 
			this->sokr1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sokr1->Location = System::Drawing::Point(6, 19);
			this->sokr1->Name = L"sokr1";
			this->sokr1->Size = System::Drawing::Size(51, 70);
			this->sokr1->TabIndex = 14;
			this->sokr1->Text = L"";
			this->sokr1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::sokr1_KeyPress);
			// 
			// Drob1
			// 
			this->Drob1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Drob1->Location = System::Drawing::Point(15, 26);
			this->Drob1->Name = L"Drob1";
			this->Drob1->Size = System::Drawing::Size(70, 70);
			this->Drob1->TabIndex = 2;
			this->Drob1->Text = L"";
			this->Drob1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Drob1_KeyPress);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::LavenderBlush;
			this->tabPage4->Controls->Add(this->tableLayoutPanel2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(406, 402);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Задание 4";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->digitOut, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->groupBoxStrings, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->digitIn, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(406, 402);
			this->tableLayoutPanel2->TabIndex = 10;
			// 
			// digitOut
			// 
			this->digitOut->AutoWordSelection = true;
			this->digitOut->Dock = System::Windows::Forms::DockStyle::Fill;
			this->digitOut->Location = System::Drawing::Point(3, 282);
			this->digitOut->Name = L"digitOut";
			this->digitOut->ReadOnly = true;
			this->digitOut->Size = System::Drawing::Size(400, 117);
			this->digitOut->TabIndex = 1;
			this->digitOut->Text = L"";
			this->digitOut->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::digitOut_KeyPress);
			// 
			// groupBoxStrings
			// 
			this->groupBoxStrings->Controls->Add(this->digitInput);
			this->groupBoxStrings->Controls->Add(this->digitOP);
			this->groupBoxStrings->Controls->Add(this->digitHelp);
			this->groupBoxStrings->Controls->Add(this->digitOutput);
			this->groupBoxStrings->Controls->Add(this->label13);
			this->groupBoxStrings->Controls->Add(this->digitIP);
			this->groupBoxStrings->Controls->Add(this->digitButton);
			this->groupBoxStrings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBoxStrings->Location = System::Drawing::Point(3, 125);
			this->groupBoxStrings->Name = L"groupBoxStrings";
			this->groupBoxStrings->Size = System::Drawing::Size(400, 151);
			this->groupBoxStrings->TabIndex = 9;
			this->groupBoxStrings->TabStop = false;
			// 
			// digitInput
			// 
			this->digitInput->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->digitInput->AutoSize = true;
			this->digitInput->Location = System::Drawing::Point(6, 24);
			this->digitInput->MaximumSize = System::Drawing::Size(98, 23);
			this->digitInput->MinimumSize = System::Drawing::Size(98, 23);
			this->digitInput->Name = L"digitInput";
			this->digitInput->Size = System::Drawing::Size(98, 23);
			this->digitInput->TabIndex = 4;
			this->digitInput->Text = L"Ввод из файла";
			this->digitInput->UseVisualStyleBackColor = true;
			this->digitInput->Click += gcnew System::EventHandler(this, &MyForm::digitInput_Click);
			// 
			// digitOP
			// 
			this->digitOP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->digitOP->Location = System::Drawing::Point(110, 112);
			this->digitOP->MaximumSize = System::Drawing::Size(2000, 200);
			this->digitOP->MinimumSize = System::Drawing::Size(288, 20);
			this->digitOP->Name = L"digitOP";
			this->digitOP->ReadOnly = true;
			this->digitOP->Size = System::Drawing::Size(288, 20);
			this->digitOP->TabIndex = 5;
			this->digitOP->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::digitOP_KeyPress);
			// 
			// digitHelp
			// 
			this->digitHelp->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->digitHelp->AutoSize = true;
			this->digitHelp->Location = System::Drawing::Point(285, 53);
			this->digitHelp->MaximumSize = System::Drawing::Size(98, 51);
			this->digitHelp->MinimumSize = System::Drawing::Size(98, 51);
			this->digitHelp->Name = L"digitHelp";
			this->digitHelp->Size = System::Drawing::Size(98, 51);
			this->digitHelp->TabIndex = 7;
			this->digitHelp->Text = L"Задание";
			this->digitHelp->UseVisualStyleBackColor = true;
			this->digitHelp->Click += gcnew System::EventHandler(this, &MyForm::digitHelp_Click);
			// 
			// digitOutput
			// 
			this->digitOutput->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->digitOutput->AutoSize = true;
			this->digitOutput->Location = System::Drawing::Point(6, 110);
			this->digitOutput->MaximumSize = System::Drawing::Size(98, 23);
			this->digitOutput->MinimumSize = System::Drawing::Size(98, 23);
			this->digitOutput->Name = L"digitOutput";
			this->digitOutput->Size = System::Drawing::Size(98, 23);
			this->digitOutput->TabIndex = 3;
			this->digitOutput->Text = L"Запись в файл";
			this->digitOutput->UseVisualStyleBackColor = true;
			this->digitOutput->Click += gcnew System::EventHandler(this, &MyForm::digitOutput_Click);
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Pink;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(110, 53);
			this->label13->MaximumSize = System::Drawing::Size(450, 200);
			this->label13->MinimumSize = System::Drawing::Size(157, 51);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(165, 51);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Не забудьте заключить\r\nнеобходимую часть \r\nтекста в скобки!\r\n";
			// 
			// digitIP
			// 
			this->digitIP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->digitIP->Location = System::Drawing::Point(110, 26);
			this->digitIP->MaximumSize = System::Drawing::Size(2000, 200);
			this->digitIP->MinimumSize = System::Drawing::Size(288, 20);
			this->digitIP->Name = L"digitIP";
			this->digitIP->ReadOnly = true;
			this->digitIP->Size = System::Drawing::Size(288, 20);
			this->digitIP->TabIndex = 6;
			this->digitIP->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::digitIP_KeyPress);
			// 
			// digitButton
			// 
			this->digitButton->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->digitButton->AutoSize = true;
			this->digitButton->Location = System::Drawing::Point(6, 53);
			this->digitButton->MaximumSize = System::Drawing::Size(98, 51);
			this->digitButton->MinimumSize = System::Drawing::Size(98, 51);
			this->digitButton->Name = L"digitButton";
			this->digitButton->Size = System::Drawing::Size(98, 51);
			this->digitButton->TabIndex = 2;
			this->digitButton->Text = L"Выполнить";
			this->digitButton->UseVisualStyleBackColor = true;
			this->digitButton->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// digitIn
			// 
			this->digitIn->AutoWordSelection = true;
			this->digitIn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->digitIn->Location = System::Drawing::Point(3, 3);
			this->digitIn->Name = L"digitIn";
			this->digitIn->Size = System::Drawing::Size(400, 116);
			this->digitIn->TabIndex = 0;
			this->digitIn->Text = L"";
			this->digitIn->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::digitIn_KeyPress);
			// 
			// SAVE3
			// 
			this->SAVE3->FileName = L"SAVE3";
			// 
			// OPEN1
			// 
			this->OPEN1->FileName = L"OPEN1";
			// 
			// SAVE1
			// 
			this->SAVE1->FileName = L"SAVE1";
			// 
			// OPEN2
			// 
			this->OPEN2->FileName = L"OPEN2";
			// 
			// SAVE2
			// 
			this->SAVE2->FileName = L"SAVE2";
			// 
			// OPEN4
			// 
			this->OPEN4->FileName = L"OPEN4";
			// 
			// SAVE4
			// 
			this->SAVE4->FileName = L"SAVE4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(414, 428);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(430, 414);
			this->Name = L"MyForm";
			this->Text = L"Персональные задания";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBoxButtons->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBoxMatrix->ResumeLayout(false);
			this->groupBoxMatrix->PerformLayout();
			this->groupBoxResults->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->groupBoxStrings->ResumeLayout(false);
			this->groupBoxStrings->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	//Функция, которая разрешает разворачиваться и сворачиваться программе
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Начальный size формы 430; 467
		int a = tabControl1->SelectedIndex;
		switch (a) {
		case 0:
			this->Width = 430;
			this->Height = 467;
			this->MaximizeBox = false;
			if (this->WindowState == FormWindowState::Maximized) {
				this->WindowState = FormWindowState::Normal;
			}
			break;
		case 1:
			this->Width = 609;
			this->Height = 460;
			this->MaximizeBox = true;
			break;
		case 2:
			this->Width = 430;
			this->Height = 467;
			this->MaximizeBox = false;
			if (this->WindowState == FormWindowState::Maximized) {
				this->WindowState = FormWindowState::Normal;
			}
			break;
		case 3:
			this->Width = 536;
			this->Height = 487;
			this->MaximizeBox = true;
			break;
		}
	}
	/////////////	
	//Programm1//
	////////////
	private://глобальные переменные для первой проги
		int n=0, r, count=0, x1,x2,x3,y1,y2,y3;
		int* arr = new int[n];
		bool A = 0, B = 0;
		int u;

		//количество точек
private: System::Void txtN_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//обработка ввода количесвта точек
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')|| e->KeyChar==8) {
		e->Handled = false;
	}
	else { e->Handled = true; }
}
	   //радиус
private: System::Void txtR_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//обработка ввода радиуса
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')||e->KeyChar == 8) {
		e->Handled = false;
	}
	else { e->Handled = true; }
}
	   //текстовое поле
private: System::Void txt_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//обработка ввода координат
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-'||e->KeyChar==' '||e->KeyChar == 8) {
		txtN->Clear();
		txtmin->Clear();
		txtmax->Clear();
		txtA->Clear();
		txtB->Clear();
		e->Handled = false;
	}
	else { e->Handled = true; }
}
	   //ответ А
private: System::Void txtA_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//запрет ввода А
	e->Handled = true;
}
	   //ответ В
private: System::Void txtB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//запрет ввода Б
	e->Handled = true;
}
	   //вычисление А
private: System::Void resA_Click(System::Object^ sender, System::EventArgs^ e) {//обработка пересечений
	if (txtR->Text == "" || txtR->Text == " " || txt->Text == "" || txt->Text == " ") {
		MessageBox::Show(this, "Поля не заполнены!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int count = 0, count1 = 0;
		String^ R = Convert::ToString(txt->Text);
		R = R->Trim();
		int C = R->Length;
		for (int i = 1; i < C; i++) {
			if ((R[i - 1] == ' ') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '-') || (R[i - 1] == '-') && (R[i] == ' ')) {
				R = R->Remove((i - 1), 1);
				i--; C--;
			}

		}
		txt->Clear();
		txt->Text = Convert::ToString(R);
		array<String^>^ sNums = txt->Text->Split(' ');
		n = sNums->Length;
		if (n % 2 != 0) {
			MessageBox::Show(this, "Указаны не все координаты для точек!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			r = Convert::ToInt32(txtR->Text);
			A = 1;
			for (int i = 0; i < n; i++) {
				arr[i] = Int32::Parse(sNums[i]);
			}
			for (int i = 0; i < n - 5; i += 2) {
				int x1 = arr[i];
				int y1 = arr[i + 1];
				for (int j = (i + 2); j < n - 3; j += 2) {
					int x2 = arr[j];
					int y2 = arr[j + 1];
					for (int k = (j + 2); k < n - 1; k += 2) {
						int x3 = arr[k];
						int y3 = arr[k + 1];
						if ((y2 != y1) && (x2 != x1)) {
							if (((y3 - y1) / (y2 - y1)) != ((x3 - x1) / (x2 - x1))) {
								if (((sqrt(x1 ^ 2 + y1 ^ 2) <= r) || (sqrt(x2 ^ 2 + y2 ^ 2) <= r) || (sqrt(x3 ^ 2 + y3 ^ 2) <= r)) & !((sqrt(x1 ^ 2 + y1 ^ 2) <= r) && (sqrt(x2 ^ 2 + y2 ^ 2) <= r) && (sqrt(x3 ^ 2 + y3 ^ 2) <= r))) {
									count++;
								}
							}
						}

					}
				}
			}
			//if (count == 0) { count++; }
			txtA->Text = "Количество треугольников: " + Convert::ToString(count);
			for (int i = 0; i < n - 5; i += 2) {
				int x1 = arr[i];
				int y1 = arr[i + 1];
				for (int j = (i + 2); j < n - 3; j += 2) {
					int x2 = arr[j];
					int y2 = arr[j + 1];
					for (int k = (j + 2); k < n - 1; k += 2) {
						int x3 = arr[k];
						int y3 = arr[k + 1];
						if ((y2 != y1) && (x2 != x1)) {
							if (((y3 - y1) / (y2 - y1)) != ((x3 - x1) / (x2 - x1))) {
								if (((sqrt(x1 ^ 2 + y1 ^ 2) <= r) || (sqrt(x2 ^ 2 + y2 ^ 2) <= r) || (sqrt(x3 ^ 2 + y3 ^ 2) <= r))&!((sqrt(x1 ^ 2 + y1 ^ 2) <= r) && (sqrt(x2 ^ 2 + y2 ^ 2) <= r) && (sqrt(x3 ^ 2 + y3 ^ 2) <= r))) {
									count1++;
									txtA->Text = txtA->Text + "\n" + "Треугольник " + Convert::ToString(count1) + ": " + "Первая точка: " + Convert::ToString(x1) + ", " + Convert::ToString(y1) + " Вторая точка: " + Convert::ToString(x2) + ", " + Convert::ToString(y2) + " Третья точка: " + Convert::ToString(x3) + ", " + Convert::ToString(y3);

								}
							}
						}

					}
				}
			}
		}
	}
}		//Вычисление В
private: System::Void resB_Click(System::Object^ sender, System::EventArgs^ e) {//обработка принадлежности
	if (txtR->Text == "" || txtR->Text == " " || txt->Text == "" || txt->Text == " ") {
		MessageBox::Show(this, "Поля не заполнены!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int count = 0, count1 = 0;
		String^ R = Convert::ToString(txt->Text);
		R = R->Trim();
		int C = R->Length;
		for (int i = 1; i < C; i++) {
			if ((R[i - 1] == ' ') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '-') || (R[i - 1] == '-') && (R[i] == ' ')) {
				R = R->Remove((i - 1), 1);
				i--; C--;
			}

		}
		txt->Clear();
		txt->Text = Convert::ToString(R);
		array<String^>^ sNums = txt->Text->Split(' ');
		n = sNums->Length;
		if (n % 2 != 0) {
			MessageBox::Show(this, "Указаны не все координаты для точек!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			r = Convert::ToInt32(txtR->Text);
			B = 1;
			for (int i = 0; i < n; i++) {
				arr[i] = Int32::Parse(sNums[i]);
			}
			for (int i = 0; i < n- 5; i += 2) {
				int x1 = arr[i];
				int y1 = arr[i + 1];
				for (int j = (i+2); j < n - 3; j+=2) {
					int x2 = arr[j];
					int y2 = arr[j + 1];
					for(int k=(j+2);k<n-1;k+=2){
					int x3 = arr[k];
					int y3 = arr[k+1];
						if ((y2 != y1) && (x2 != x1)) {
							if (((y3 - y1) / (y2 - y1)) != ((x3 - x1) / (x2 - x1))) {
								if ((sqrt(x1 ^ 2 + y1 ^ 2) <= r) && (sqrt(x2 ^ 2 + y2 ^ 2) <= r) && (sqrt(x3 ^ 2 + y3 ^ 2) <= r)) {
								count++;
								}
							}
						}

					}
				}
			}
				//if (count == 0) { count++; }
				txtB->Text = "Количество треугольников: " + Convert::ToString(count);
				for (int i = 0; i < n - 5; i += 2) {
					int x1 = arr[i];
					int y1 = arr[i + 1];
					for (int j = (i + 2); j < n - 3; j += 2) {
						int x2 = arr[j];
						int y2 = arr[j + 1];
						for (int k = (j + 2); k < n - 1; k += 2) {
							int x3 = arr[k];
							int y3 = arr[k + 1];
							if ((y2 != y1) && (x2 != x1)) {
								if (((y3 - y1) / (y2 - y1)) != ((x3 - x1) / (x2 - x1))) {
									if ((sqrt(x1 ^ 2 + y1 ^ 2) <= r) && (sqrt(x2 ^ 2 + y2 ^ 2) <= r) && (sqrt(x3 ^ 2 + y3 ^ 2) <= r)) {
										count1++;
										txtB->Text = txtB->Text + "\n" + "Треугольник " + Convert::ToString(count1) + ": " + "Первая точка: " + Convert::ToString(x1) + ", " + Convert::ToString(y1) + " Вторая точка: " + Convert::ToString(x2) + ", " + Convert::ToString(y2) + " Третья точка: " + Convert::ToString(x3) + ", " + Convert::ToString(y3);

									}
								}
							}

						}
					}
				}
		}
	}
}//Ввод ИЗ файла
private: System::Void input_Click(System::Object^ sender, System::EventArgs^ e) {//Ввод из файла
	String^ FileName = "";
	OPEN1->Filter =

		"txt files (*.txt)|*.txt|All files (*.*)|*.*";

	OPEN1->FilterIndex = 1;

	OPEN1->ShowReadOnly = true;

	OPEN1->RestoreDirectory = true;
	if (OPEN1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = OPEN1->FileName;
		txtN->Clear();
		txtmin->Clear();
		txtmax->Clear();
		txtA->Clear();
		txtB->Clear();
		txt->Clear();
		
	}
	try {
		StreamReader^ file = File::OpenText(FileName);
		txt->Text = file->ReadToEnd();

	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Файл не был открыт.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}String^ R = Convert::ToString(txt->Text);

	int p = R->Length;
	for (int i = 0; i < p; i++) {
		if ((R[i] != '0') && (R[i] != '1') && (R[i] != '2') && (R[i] != '3') && (R[i] != '4') && (R[i] != '5') && (R[i] != '6') && (R[i] != '7') && (R[i] != '8') && (R[i] != '9') && (R[i] != '-') && (R[i] != ' ')) {
			R = R->Replace(R[i], ' ');

		}
	}
	R = R->Trim();
	int C = R->Length;
	for (int i = 1; i < C; i++) {
		if ((R[i - 1] == ' ') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '-') || (R[i - 1] == '-') && (R[i] == ' ')) {
			R = R->Remove((i - 1), 1);
			i--; C--;
		}

	}
	txt->Clear();
	txt->Text = Convert::ToString(R);
	array<String^>^ T = txt->Text->Split(' ');
	int z = 0;
	for (int i = 0; i < T->Length; i++) {
		if (T[i] == "-") {
			z++;
		}
	}
	u = T->Length;
	u = u - z;
	u = u / 2;
	n = u;
	
}
	   //Рандомазер 
private: System::Void random_Click(System::Object^ sender, System::EventArgs^ e) {//Генерация
	int m, M;
	if ((txtmin->Text == "") || (txtmin->Text == "-") || (txtmax->Text == "") || (txtmax->Text == "-") || (txtN->Text == "") || (txtN->Text == "-")) {
		MessageBox::Show(this, "Заполните всеполя для генерации.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		txt->Clear();
		
		txt->Clear();
		m = Convert::ToInt32(txtmin->Text);

		M = Convert::ToInt32(txtmax->Text);
		if (m > M) {
			MessageBox::Show(this, "Неверный диапозон значений.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			int Count = Convert::ToInt32(txtN->Text)*2;
			int S=0;
			for (int i = 0; i < Count; i++) {
				S = M - m + 1;
				arr[i] = m + rand() % S;
				txt->Text = txt->Text + Convert::ToString(arr[i]) + " ";

			}S = 0;
		}
	}
}

	   //минимальное значение для точки
private: System::Void txtmin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Нижняя граница генерации
	int x1;
	if (((txtmin->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
		txtmin->Text = "";
		txtmin->Text = txtmin->Text->Insert(x1, "-0,");
		(txtmin->SelectionStart = x1 + 3);
	}if (e->KeyChar == '-' && txtmin->Text->IndexOf('-') == -1)
		txtmin->SelectionStart = 0;

	if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && txtmin->Text->IndexOf('-') == -1) {
		e->Handled = false;
	}
	else { e->Handled = true; }

}
	   //максимальное значение для точки
private: System::Void txtmax_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Верхняя граница генерации
	int x1;
	if (((txtmax->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
		txtmax->Text = "";
		txtmax->Text = txtmax->Text->Insert(x1, "-0,");
		(txtmax->SelectionStart = x1 + 3);
	}if (e->KeyChar == '-' && txtmax->Text->IndexOf('-') == -1)
		txtmax->SelectionStart = 0;

	if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && txtmax->Text->IndexOf('-') == -1) {
		e->Handled = false;
	}
	else { e->Handled = true; }

}
	  //Вывод В файл
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//Ввод файл
	String^ FileName = "";
	SAVE1->Filter =

		"txt files (*.txt)|*.txt|All files (*.*)|*.*";

	SAVE1->FilterIndex = 1;

	SAVE1->ShowReadOnly = true;

	SAVE1->RestoreDirectory = true;
	if (SAVE1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = SAVE1->FileName;
		
	}
	try {
		StreamWriter^ file = File::AppendText(FileName);
		
		if (A == 1) {
			file->WriteLine(" *** ");
			file->WriteLine("Количество точек: " + txtN->Text);
			file->WriteLine("Радиус окружности: " + txtR->Text);
			file->WriteLine("Указанные координаты: " + txt->Text);
			array<String^>^ AA = txtA->Text->Split('\n');
			for (int i = 0; i < txtA->Lines->Length;i++) {
				file->WriteLine(AA[i]);
			}
		}
		if (B == 1) {
			file->WriteLine(" *** ");
			file->WriteLine("Количество точек: " + txtN->Text);
			file->WriteLine("Радиус окружности: " + txtR->Text);
			file->WriteLine("Указанные координаты: " + txt->Text);
			array<String^>^ BB = txtB->Text->Split('\n');
			for (int i = 0; i < txtB->Lines->Length;i++) {
				file->WriteLine(BB[i]);
			}
		}
		if (A == 0 && B == 0) {
			file->Close();
		}
		file->Close();
		A = 0;
		B = 0;
		
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Файл не был открыт.", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
} 

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//Задание1
	MessageBox::Show(this, "На плоскости n точекзаданы своими координатами и также дана окружность радиуса R с центром в начале координат. Укахать множество всех треугольников с вершинами в заданных точках, пересекающихся с окружностью; множество всех треугольников, содержащихся внутри окружности.", "Подсказка.", MessageBoxButtons::OK, MessageBoxIcon::Question);
}
	   /////////////
	   //Programm2//
	   /////////////
	   //Глобальные переменные для второй программы
	   int mN, mMin, mMax;
	   double** a = NULL;
	   bool gen = 0;
	  //вывод  задания для второй лабы
private: System::Void matrixHelp_Click(System::Object^ sender, System::EventArgs^ e) {//Задание2
	MessageBox::Show(this, "Дана действительная квадратная матрица порядка n. преобразовать матрицу по правилу: строку с номером n сделать столбцом с номером n, а столбец с номером n - строкой с номером n.", "Подсказка.", MessageBoxButtons::OK, MessageBoxIcon::Question);

}
	   // размер матрицы
private: System::Void matrixN_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Размемр матрицы
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == 8) {
		e->Handled = false;
		Matrix2->Clear();
		Matrix1->Clear();

	}
	else { e->Handled = true; }
}
	   //минимальное значение для матрицы
private: System::Void matrixMin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Нижняя граница
	int x1;
	if (((matrixMin->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
		matrixMin->Text = "";
		matrixMin->Text = matrixMin->Text->Insert(x1, "-0,");
		(matrixMin->SelectionStart = x1 + 3);
	}if (e->KeyChar == '-' && matrixMin->Text->IndexOf('-') == -1)
		matrixMin->SelectionStart = 0;

	if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && matrixMin->Text->IndexOf('-') == -1) {
		e->Handled = false;
		Matrix2->Clear();
		Matrix1->Clear();
	}
	else { e->Handled = true; }
}
	   //максимальное значение для матрицы
private: System::Void matrixMax_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Верхняя граница
	int x1;
	if (((matrixMax->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
		matrixMax->Text = "";
		matrixMax->Text = matrixMax->Text->Insert(x1, "-0,");
		(matrixMax->SelectionStart = x1 + 3);
	}if (e->KeyChar == '-' && matrixMax->Text->IndexOf('-') == -1)
		matrixMax->SelectionStart = 0;

	if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && matrixMax->Text->IndexOf('-') == -1) {
		e->Handled = false;
		Matrix2->Clear();
		Matrix1->Clear();
	}
	else { e->Handled = true; }
}
	   //текстовое поле для вывода матрицы
private: System::Void Matrix2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Матрица-результат
	e->Handled = true;
}
	   //текстовое поледля воода матрицы
private: System::Void Matrix1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Матрица - Ввод
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' || e->KeyChar == ' ' || e->KeyChar == ',' || e->KeyChar == 8 || e->KeyChar == (char)Keys::Enter) {
		e->Handled = false;
		matrixN->Clear();
		matrixMin->Clear();
		matrixMax->Clear();
		Matrix2->Clear();
		gen = 0;
	}
	else { e->Handled = true; }
}
	   //рандомайзер матрицы
private: System::Void manrixRan_Click(System::Object^ sender, System::EventArgs^ e) {//создать рандомную матрицу
	if ((matrixN->Text == "") || (matrixN->Text == "-") || (matrixMin->Text == "") || (matrixMin->Text == "-") || (matrixMax->Text == "") || (matrixMax->Text == "-")) {
		MessageBox::Show(this, "Заполните всеполя для генерации.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		mN = Convert::ToInt32(matrixN->Text);
		if (mN < 2) {
			MessageBox::Show(this, "Минимальный размер матрицы 2х2.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			mMin = Convert::ToInt32(matrixMin->Text) * 100;
			mMax = Convert::ToInt32(matrixMax->Text) * 100;
			if (mMax < mMin) {
				MessageBox::Show(this, "Неверный диапозон значений.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				a = new double* [mN];
				for (int i = 0; i < mN; i++) {
					a[i] = new double[mN];
				}
				int S = 0;
				for (int i = 0; i < mN; i++) {
					for (int j = 0; j < mN; j++) {
						S = mMax - mMin + 1;
						a[i][j] = (double)(mMin + rand() % S) / 100;
						Matrix1->Text = Matrix1->Text + String::Format("{0:f2}", a[i][j]) + " ";

					}
					Matrix1->Text = Matrix1->Text + "\n";
				}
				S = 0; 
				Matrix1->Text = Matrix1->Text->Remove(Matrix1->Text->Length - 1);
				gen = 1;
				Matrix1->Text = "";
				int length_max1 = 0;
				int length_temp1 = 0;
				int count_of_probels1 = 0;
				String^ temp_member1 = "";
				int rows1 = mN;
				int columns1 = mN;
				for (int i = 0; i < rows1; i++) {
					for (int j = 0; j < columns1; j++) {
						temp_member1 = Convert::ToString(this->a[i][j]);
						length_temp1 = temp_member1->Length;
						if (length_temp1 > length_max1) length_max1 = length_temp1;
					}
				}
				for (int i = 0; i < rows1; i++) {
					for (int j = 0; j < columns1; j++) {
						temp_member1 = Convert::ToString(a[i][j]);
						length_temp1 = temp_member1->Length;
						count_of_probels1 = length_max1 - length_temp1;
						for (int k = 0; k < count_of_probels1; k++) {
							temp_member1 = " " + temp_member1;
						}
						Matrix1->Text = Matrix1->Text + temp_member1 + "  ";
					}
					Matrix1->Text = Matrix1->Text + "\n";
				}
				Matrix1->Text = Matrix1->Text->Remove(Matrix1->Text->Length - 1);
				Matrix2->Clear();
			}
		}
	}
}
//}
	   //ввод ИЗ файла
private: System::Void matrixIn_Click(System::Object^ sender, System::EventArgs^ e) {//Считать матрицу из файл
	String^ FileName = "";
	OPEN2->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	OPEN2->FilterIndex = 1;
	OPEN2->ShowReadOnly = true;
	OPEN2->RestoreDirectory = true;
	if (OPEN2->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = OPEN2->FileName;
		manrixIntxt->Text = OPEN2->FileName;
		Matrix1->Clear();
		matrixN->Clear();
		matrixMin->Clear();
		matrixMax->Clear();
		gen = 0;
		Matrix2->Clear();
	}
	try {
		StreamReader^ file = File::OpenText(FileName);
		Matrix1->Text = file->ReadToEnd();
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Файл не был открыт.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	String^ R = Convert::ToString(Matrix1->Text);
	int p = R->Length;
	for (int i = 0; i < p; i++) {
		if ((R[i] != '0') && (R[i] != '1') && (R[i] != '2') && (R[i] != '3') && (R[i] != '4') && (R[i] != '5') && (R[i] != '6') && (R[i] != '7') && (R[i] != '8') && (R[i] != '9') && (R[i] != '-') && (R[i] != ' ')&& (R[i] != '\n') && (R[i] != ',')) {
			R = R->Replace(R[i], ' ');
		}
	}
	R = R->Trim();
	int C = R->Length;
	for (int i = 1; i < C; i++) {
		if ((R[i - 1] == ' ') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '-') || (R[i - 1] == '-') && (R[i] == ' ')) {
			R = R->Remove((i - 1), 1);
			i--; C--;
		}//if ((R[i - 1] == ' ') && (R[i] == ',')) {
			//R = R->Remove((i-1), 1);
			//R = R->Insert((i - 1), Convert::ToString(0));
			//i--; C--;
		//}

	}
	Matrix1->Text =Convert::ToString(R) + "  ";
	Matrix1->Text = Matrix1->Text->Replace("\n\n", "\n")->Replace("\n \n", "\n");
	Matrix1->Text = Matrix1->Text + " ";
	Matrix2->Clear();

}
	   //Сохраниене В файл
private: System::Void matrixSave_Click(System::Object^ sender, System::EventArgs^ e) {//Записать результат в файл
	String^ FileName = "";
	SAVE2->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	SAVE2->FilterIndex = 1;
	SAVE2->ShowReadOnly = true;
	SAVE2->RestoreDirectory = true;
	if (SAVE2->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = SAVE2->FileName;
		matrixSavetxt->Text = SAVE2->FileName;
	}
	try {
		array<String^>^ str1 = Matrix1->Text->Split('\n');
		array<String^>^ str2 = Matrix2->Text->Split('\n');
		StreamWriter^ file = File::AppendText(FileName);
			file->WriteLine(" *** ");
			file->WriteLine("Исходная матрица: ");
			for (int i = 0; i < Matrix1->Lines->Length; i++) {
				file->WriteLine(str1[i]);
			}
			file->WriteLine("Транспонированная матрица: ");
			for (int i = 0; i < Matrix2->Lines->Length; i++) {
				file->WriteLine(str2[i]);
			}
			//file->WriteLine("Преобразованная матрица:" + Matrix2->Text);
			file->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Файл не был открыт.", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

//private: System::Void Marixbutton_Click(System::Object^ sender, System::EventArgs^ e) {//функция-болванка
//}

//Обработка матрицы
private: System::Void Marixbutton_Click(System::Object^ sender, System::EventArgs^ e) {//Обработка матрицы
	if (gen == 0) {
		String^ R = Convert::ToString(Matrix1->Text);
		R = R->Trim();

		for (int i = 1; i < (R->Length); i++) {
			if ((R[i - 1] == ' ') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '-') || (R[i - 1] == '-') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '\n') || (R[i - 1] == ' ') && (R[i] == '\n')) {
				R = R->Remove((i - 1), 1);
				i--;
			}
			if ((R[i - 1] == ' ') && (R[i] == ',')) {
				R = R->Remove((i), 1);
				i--;
			}
			if (R[(R->Length) - 1] == '\n') {
				R = R->Remove(((R->Length) - 1), 1);
			}

		}
		
		Matrix1->Text = Convert::ToString(R);
		Matrix1->Text = Matrix1->Text->Replace("\n\n", "\n")->Replace("\n \n", "\n");

		for (int i = 0; i < Matrix1->Lines->Length; i++) {
			array<String^>^ S1 = Matrix1->Lines[i]->Split(' ');
			for (int j = i + 1; j < Matrix1->Lines->Length; j++) {
				array<String^>^ S2 = Matrix1->Lines[j]->Split(' ');
			}
		}
		int Lh = Matrix1->Lines->Length;
		array<String^>^ as;
		a = new double* [Matrix1->Lines->Length];
		for (int i = 0; i < Matrix1->Lines->Length; i++) {//mass
			a[i] = new double[Matrix1->Lines->Length];

		}
		for (int i = 0; i < Matrix1->Lines->Length; i++) {
			for (int j = 0; j < Matrix1->Lines->Length; j++) {
				a[i][j] = 0;
			}
		}
		for (int i = 0; i < Matrix1->Lines->Length; i++) {//count Lines
			as = Matrix1->Lines[i]->Split(' ', '\n');
			int f = 0;
			for (int j = 0; j < Matrix1->Lines->Length; j++) {
				for (int w = f; w < as->Length; w++) {
					if (as[w] != " " && as[w] != "\n" && as[w] != "") {
						a[i][j] = Double::Parse(as[w]);
						w = as->Length;

					}
				}
				f++;
			}
		}		


		Matrix1->Text = "";
		int length_max = 0;
		int length_temp = 0;
		int count_of_probels = 0;
		String^ temp_member = "";
		int rows = Lh;
		int columns = Lh;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				temp_member = Convert::ToString(a[i][j]);
				length_temp = temp_member->Length;
				if (length_temp > length_max) { 
					length_max = length_temp; 
				}
			}
		}

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				temp_member = Convert::ToString(a[i][j]);
				length_temp = temp_member->Length;
				count_of_probels = length_max - length_temp;
				for (int k = 0; k < count_of_probels; k++) {
					temp_member = " " + temp_member;
				}
				Matrix1->Text = Matrix1->Text + temp_member + "  ";
			}
			Matrix1->Text = Matrix1->Text + "\n";
		}
		gen = 1;
		for (int i = 0; i < Matrix1->Lines->Length; i++) {//код самого задания
			for (int j = i; j < Matrix1->Lines->Length-1; j++) {
				double temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
		Matrix2->Text = "";
		int length_max1 = 0;
		int length_temp1 = 0;
		int count_of_probels1 = 0;
		String^ temp_member1 = "";
		int rows1 = Matrix1->Lines->Length-1;
		int columns1 = Matrix1->Lines->Length-1;
		for (int i = 0; i < rows1; i++) {
			for (int j = 0; j < columns1; j++) {
				temp_member1 = Convert::ToString(this->a[i][j]);
				length_temp1 = temp_member1->Length;
				if (length_temp1 > length_max1) length_max1 = length_temp1;
			}
		}
		for (int i = 0; i < rows1; i++) {
			for (int j = 0; j < columns1; j++) {
				temp_member1 = Convert::ToString(a[i][j]);
				length_temp1 = temp_member1->Length;
				count_of_probels1 = length_max1 - length_temp1;
				for (int k = 0; k < count_of_probels1; k++) {
					temp_member1 = " " + temp_member1;
				}
				Matrix2->Text = Matrix2->Text + temp_member1 + "  ";
			}
			Matrix2->Text = Matrix2->Text + "\n";
		}


	}/////////////////////
	else {
		for (int i = 0; i < mN; i++) {//код самого задания
			for (int j = i; j < mN; j++) {
				double temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
		Matrix2->Text = "";
		int length_max1 = 0;
		int length_temp1 = 0;
		int count_of_probels1 = 0;
		String^ temp_member1 = "";
		int rows1 = mN;
		int columns1 = mN;
		for (int i = 0; i < rows1; i++) {
			for (int j = 0; j < columns1; j++) {
				temp_member1 = Convert::ToString(a[i][j]);
				length_temp1 = temp_member1->Length;
				if (length_temp1 > length_max1) length_max1 = length_temp1;
			}
		}
		for (int i = 0; i < rows1; i++) {
			for (int j = 0; j < columns1; j++) {
				temp_member1 = Convert::ToString(a[i][j]);
				length_temp1 = temp_member1->Length;
				count_of_probels1 = length_max1 - length_temp1;
				for (int k = 0; k < count_of_probels1; k++) {
					temp_member1 = " " + temp_member1;
				}
				Matrix2->Text = Matrix2->Text + temp_member1 + "  ";
			}
			Matrix2->Text = Matrix2->Text + "\n";
		}

	}
}

	//////////////
   ///zadanie 4//
  //////////////
//обработка текста
	private: System::Void digitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (digitIn->Text == "" || digitIn->Text == " " || digitIn->Text == "\n") {
			MessageBox::Show(this, "Текстовое поле пусто! Введите текст!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			String^ R = digitIn->Text;
			int leftcount = 0;
			int rightcount = 0;
			int digitcount = 0;
			for (int i = 0; i < R->Length; i++) {
				if (R[i] == '[') leftcount++;
				if (R[i] == ']') rightcount++;
				//if (Char::IsDigit(R[i])) digitcount++;
			}
			if (leftcount != rightcount) {
				MessageBox::Show(this, "Не все квадратные скобки закрыты!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			//else if (digitcount==0){
				//MessageBox::Show(this, "В указанных подстроках нет чисел", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			//}
			else if (leftcount == 0|| rightcount==0) {
				MessageBox::Show(this, "Cкобок не найдено!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				
				int* mass = new int[digitcount];
				String^ R1=" ";
				//for (int i = 0; i < R->Length; i++) {
					//if (Char::IsDigit(R[i])) R1=R1+R[i]+" ";
				//}
				for (int i = 0; i < R->Length; i++) {
					if (R[i] == '[') {
						for (int j = i; j < R->Length; j++) {
							if (R[j] != ']') {
								if (Char::IsDigit(R[j])) {
									R1 = R1 + R[j] + " ";
									digitcount++;
								}
							}
						}
					}
				}
				R1 = R1->Trim();
				digitIn->Clear();
				digitIn->Text = R1;
				array<String^>^ sNums = digitIn->Text->Split(' ');
				
				for (int i = 0; i < digitcount; i++) {
					mass[i] = Int32::Parse(sNums[i]);
				}digitIn->Clear();
				digitIn->Text = R;
				for (int k1 = 0; k1 < digitcount; k1++) {
					for (int k2 = 0; k2 < (digitcount - k1 - 1); k2++) {
						int temp;
						if (mass[k2] > mass[k2 + 1]) {
							temp = mass[k2];
							mass[k2] = mass[k2 + 1];
							mass[k2 + 1] = temp;
						}
					}
				}
				int O = 0;
				for (int i = 0; i < R->Length; i++) {
					if (R[i] == '[') {
						for (int j = i; j < R->Length; j++) {
							if (R[j] != ']') {
								if (Char::IsDigit(R[j])) {
									for (int o = O; o < digitcount; o++) {
										R = R->Remove(j, 1);
										R = R->Insert(j, Convert::ToString(mass[o]));

										o = digitcount;
										O++;
									}
								}
							}
						}
					}
				}
				digitOut->Text = R;
			}
		}
		
	}

private: System::Void digitIP_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true;
}

private: System::Void digitOut_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true;
}

private: System::Void digitOP_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true;
}

private: System::Void digitHelp_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this, "Дана строка символов. В каждой подстроке, заключенной в квадратные скобки поменять местами только цифры так, чтобы они стали упорядоченными по возрастанию.Остальные символы оставить на своихместах.", "Подсказка.", MessageBoxButtons::OK, MessageBoxIcon::Question);
}

private: System::Void digitInput_Click(System::Object^ sender, System::EventArgs^ e) {//!!!!!!!!!!!!!!!!!!!!!!!!!
	String^ FileName4 = "";
	OPEN4->Filter =

		"txt files (*.txt)|*.txt|All files (*.*)|*.*";

	OPEN4->FilterIndex = 1;

	OPEN4->ShowReadOnly = true;

	OPEN4->RestoreDirectory = true;
	if (OPEN4->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName4 = OPEN4->FileName;
		digitIP->Text = OPEN4->FileName;
		digitIn->Clear();
	}
	try {
		StreamReader^ file = File::OpenText(FileName4);
		digitIn->Text = file->ReadToEnd();
		digitOut->Clear();
		String^ Eng = digitIn->Text;
		for (int i = 0; i < Eng->Length; i++) {
			if ((Eng[i] < 'z' && Eng[i]>'a') || (Eng[i] < 'Z' && Eng[i]>'A')) {
				Eng=Eng->Remove(i, 1);
				i--;
			}
		}
		digitIn->Text = Eng;
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Файл не был открыт", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void digitOutput_Click(System::Object^ sender, System::EventArgs^ e) {//!!!!!!!!!!!!!!!!!!!!!!!!
	String^ FileName = "";
	SAVE4->Filter =

		"txt files (*.txt)|*.txt|All files (*.*)|*.*";

	SAVE4->FilterIndex = 1;

	SAVE4->ShowReadOnly = true;

	SAVE4->RestoreDirectory = true;
	if (SAVE4->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = SAVE4->FileName;
		digitOP->Text = SAVE4->FileName;
	}
	try {
		StreamWriter^ file = File::AppendText(FileName);
		{
			//file->WriteLine("Задание №4");
			file->WriteLine("Исходный текст: " + digitIn->Text);
			file->WriteLine("Измененный текст: " + digitOut->Text);
			file->WriteLine("***");

		}
		file->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Файл не был сохранен", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}

//private: System::Void Matrix1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//matrixN->Clear();
	//matrixMin->Clear();
	//matrixMax->Clear();
//}
private: System::Void digitIn_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar > 'a' && e->KeyChar < 'z') || (e->KeyChar > 'A' && e->KeyChar < 'Z')) {
		e->Handled = true;
	}
	else {
		e->Handled = false;
	}

}
	   ///////////////
	   //ПРОГРАММА 3//
	   ///////////////
//private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//}
	   int chislitel1, chislitel2, chislitel3;
	   int znam1, znam2, znam3;
	   int znamMIN, znamMAX;
	   int chislMIN, chislMAX;
	   bool two = 0, one = 0;
	  String^ stepen1;
	  String^ stepen2;
	  // String^ vtoraydrob;
	  // String^ tretyadrob;
	   int stepen;
	   int cs = 0;
	   array<String^>^ pervaydrob1;
	   array<String^>^ vtoraydrob1;
	   array<String^>^ tretyadrob1;
	   bool bl1 = 0, bl2 = 0, bl3 = 0;
	   bool dr1 = 0, dr2 = 0, dr3 = 0;


private: System::Void RESULT4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Drob1->Text == "" || Drob2->Text == "" ) {
		MessageBox::Show(this, "Поля не заполнены!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		//MessageBox::Show(this, "Внимание! Операции производятся следующим образом: 'Дробь1' ОПЕРАЦИЯ 'Дробь2'", "Подсказка.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

		if (rbstepen->Checked == false) {
			pervaydrob1 = Drob1->Text->Split('/');
			vtoraydrob1 = Drob2->Text->Split('/');
			chislitel1 = Double::Parse(pervaydrob1[0]);
			znam1 = Int32::Parse(pervaydrob1[1]);
			chislitel2 = Double::Parse(vtoraydrob1[0]);
			znam2 = Int32::Parse(vtoraydrob1[1]);
			//Деление дробей
			if (rbdel->Checked == true) {
				two = 1;
				chislitel1 = chislitel1 * znam2;
				znam1 = chislitel2 * znam1;
				RESULTdrobi->Text = Convert::ToString(chislitel1) + "/" + Convert::ToString(znam1);
				
			}//Сложение дробей
			if (rbadd->Checked == true) {
				two = 1;
				int z1, z2;
				z1 = znam1;
				z2 = znam2;
				chislitel1 *= z2;
				znam1 *= z2;
				chislitel2 *= z1;
				chislitel1 += chislitel2;
				RESULTdrobi->Text = Convert::ToString(chislitel1) + "/" + Convert::ToString(znam1);
				
			}//Вычитание дробей
			if (rbmin->Checked == true) {
				two = 1;
				int z1,  z2;
				z1 = znam1;
				z2 = znam2;
				chislitel1 *= z2;
				znam1 *= z2;
				chislitel2 *= z1;
				chislitel1 -= chislitel2;
				RESULTdrobi->Text = Convert::ToString(chislitel1) + "/" + Convert::ToString(znam1);
				
			}//Умножение дробей
			if (rbmnog->Checked == true) {
				two = 1;
				chislitel1 = chislitel1 * chislitel2;
				znam1 = znam1 * znam2;
				RESULTdrobi->Text = Convert::ToString(chislitel1) + "/" + Convert::ToString(znam1);
				
			}//Сравнение дробей
			if (rbsravnit->Checked == true) {
				two = 1;
				//Если знаменатели одинаковые
				if (znam1 == znam2) {
					if (chislitel1 > chislitel2) {
						RESULTdrobi->Text ="Первая дробь БОЛЬШЕ, чем вторая.";
					}
					if(chislitel1 < chislitel2) {
						RESULTdrobi->Text = "Первая дробь МЕНЬШЕ, чем вторая.";
					}
					if (chislitel1 == chislitel2) {
						RESULTdrobi->Text = "Дроби равны.";
					}
				}
				//Если числители одинаковые
				else if (chislitel1 == chislitel2) {
					if (znam1 < znam2) {
						RESULTdrobi->Text = "Первая дробь БОЛЬШЕ, чем вторая.";
					}
					if (znam1 > znam2) {
						RESULTdrobi->Text = "Первая дробь МЕНЬШЕ, чем вторая.";
					}
					if (znam1 == znam2) {
						RESULTdrobi->Text = "Дроби равны.";
					}
				}
				//Если все различно
				else {
					int z1, z2;
					z1 = znam1;
					z2 = znam2;
					chislitel1 *= z2;
					chislitel2 *= z1;
					if (chislitel1 > chislitel2) {
						RESULTdrobi->Text = "Первая дробь БОЛЬШЕ, чем вторая.";
					}
					if (chislitel1 < chislitel2) {
						RESULTdrobi->Text = "Первая дробь МЕНЬШЕ, чем вторая.";
					}
					if (chislitel1 == chislitel2) {
						RESULTdrobi->Text = "Дроби равны.";
					}
				}

			}
		}
		else {//Возведение в степень
			two = 1;
			pervaydrob1 = Drob1->Text->Split('/');
			chislitel1 = Double::Parse(pervaydrob1[0]);
			znam1 = Int32::Parse(pervaydrob1[1]);
			stepen1 = Drob2->Text;
			stepen2 = stepen1;
			for (int i = 0; i < stepen1->Length; i++) {
				if (stepen1[i] == '.' || stepen1[i] == ',' || stepen1[i] == '/') {
					stepen1 = stepen1->Remove(i, 1);
					cs++;
				}
			}
			if (cs > 0) {
				MessageBox::Show(this, "Внимание! Ваше число " + stepen2 + " было изменено!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error); cs = 0;
			}
			Drob2->Text = stepen1;
			stepen = Convert::ToInt32(Drob2->Text);
			if (stepen < 0) {
				MessageBox::Show(this, "Степень может быть только положительной!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				chislitel1 = pow(chislitel1, stepen);
				znam1 = pow(znam1, stepen);
				RESULTdrobi->Text = Convert::ToString(chislitel1) + "/" + Convert::ToString(znam1);
				
				}
			}
		}
		if (rbsravnit->Checked == false) {
			if (RESULTdrobi->Text == "") {
				//MessageBox::Show(this, "Внимание! Ваше число было изменено!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				one = 1;
				tretyadrob1 = RESULTdrobi->Text->Split('/');
				znam3 = Int32::Parse(tretyadrob1[1]);
				chislitel3 = Int32::Parse(tretyadrob1[0]);
				int z = znam3, ch = chislitel3;

				for (int i = 2; i <= znam3; i++) {
					if (!(chislitel3 % i) && !(znam3 % i)) {
						z = znam3 / i;
						ch = chislitel3 / i;
					}
				}

				if (z == 1) {
					RESULTdrobi->Text = Convert::ToString(ch);
				}
				else {
					RESULTdrobi->Text = Convert::ToString(ch) + "/" + Convert::ToString(z);
				}
					
			
			}

		}
	}	//Ярлычки для радиоботтон
private: System::Void rbstepen_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Степень";
}
private: System::Void rbdel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Дробь2";
}
private: System::Void rbadd_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Дробь2";
}
private: System::Void rbmin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Дробь2";
}
private: System::Void rbsravnit_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Дробь2";
}
private: System::Void rbmnog_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Дробь2";
}
	   //Сокращение дроби
private: System::Void SOKR_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sokr1->Text == "") {
		MessageBox::Show(this, "Внимание! Ваше число было изменено!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		one = 1;
		tretyadrob1 = sokr1->Text->Split('/');
		znam3 = Int32::Parse(tretyadrob1[1]);
		chislitel3 =Int32::Parse(tretyadrob1[0]);
		int z = znam3, ch = chislitel3;

		for (int i = 2; i <= znam3; i++) {
			if (!(chislitel3 %i)&& !(znam3%i)) {
				z = znam3 / i;
				ch = chislitel3 / i;
			}
		}
		
			if (z == 1) {
				sokr2->Text = Convert::ToString(ch);
			}
			else {
				sokr2->Text = Convert::ToString(ch) + "/" + Convert::ToString(z);
			}
		
		
	}
}
private: System::Void Help4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this, "Реализовать набор подпрограмм для выполнения следующих операций над обыкновенными дробями вида p / q(p – целое, q – натуральное) : а) сложение; б) вычитание; в) умножение; г) деление; д) сокращение дроби; е) возведение дроби в степень n (n – натуральное); ж) функции, реализующие операции отношения(равно, не равно, больше или равно, меньше или равно, больше, меньше).", "Подсказка.", MessageBoxButtons::OK, MessageBoxIcon::Question);
}
private: System::Void RANDOM4_Click(System::Object^ sender, System::EventArgs^ e) {
	//znamMIN, znamMAX, chislMIN, chislMAX;
	if (minch->Text == "" || maxch->Text == "" || minzn->Text == "" || maxzn->Text == "") {
			
	}
	else {
		znamMIN = Convert::ToInt32(minzn->Text);
		znamMAX = Convert::ToInt32(maxzn->Text);
		chislMIN = Convert::ToInt32(minch->Text);
		chislMAX = Convert::ToInt32(maxch->Text);
		
		
		if (znamMIN > znamMAX || chislMIN > chislMAX) {
			MessageBox::Show(this, "Внимание! Ваше число было изменено!", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (D1->Checked == true) {
				dr1 = 1;
				chislitel1 = (double)(chislMIN + rand() % (chislMAX - chislMIN + 1));
				znam1 = (znamMIN + rand() % (znamMAX - znamMIN + 1));
				for (int i = 0; i < 4; i++) {
					if (znam1 == 0) {	
						znam1 = (znamMIN + rand() % (znamMAX - znamMIN + 1));
					}
					i = 4;
				}
				Drob1->Text = Convert::ToString(chislitel1) + "/" + Convert::ToString(znam1);
			}
			
			if (D2->Checked == true) {
				dr2 = 1;
				chislitel2 = (double)(chislMIN + rand() % (chislMAX - chislMIN + 1));
				znam2 = (znamMIN + rand() % (znamMAX - znamMIN + 1));
				for (int i = 0; i < 4; i++) {
					if (znam2 == 0) {
						znam2 = (znamMIN + rand() % (znamMAX - znamMIN + 1));
					}
					i = 4;
				}
				Drob2->Text = Convert::ToString(chislitel2) + "/" + Convert::ToString(znam2);
			}
			
			if (D3->Checked == true) {
				dr3 = 1;
				chislitel3 = (double)(chislMIN + rand() % (chislMAX - chislMIN + 1));
				znam3 = (znamMIN + rand() % (znamMAX - znamMIN + 1));
				for (int i = 0; i < 4; i++) {
					if (znam3 == 0) {
						znam3 = (znamMIN + rand() % (znamMAX - znamMIN + 1));
					}i = 4;
				}
				sokr1->Text = Convert::ToString(chislitel3) + "/" + Convert::ToString(znam3);
			}
		}
		
	}
}
private: System::Void Drob1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		e->KeyChar == ',';
	}
	if (e->KeyChar == '/' || e->KeyChar == ',' || e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8) {
		e->Handled = false;
		two = 0;
		RESULTdrobi->Clear();
		minzn->Clear();
		maxzn->Clear();
		minch-> Clear();
		maxch->Clear();
		bl1 = 1;
		dr1 = 1;
	}
	else {
		e->Handled = true;
	}
}
private: System::Void Drob2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		e->KeyChar == ',';
	}
	if (e->KeyChar == '/' || e->KeyChar == ',' || e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8||e->KeyChar=='-') {
		e->Handled = false;
		two = 0;
		two = 0;
		RESULTdrobi->Clear();
		minzn->Clear();
		maxzn->Clear();
		minch->Clear();
		maxch->Clear();
		bl2 = 1;
		dr2 = 1;
	}
	else {
		e->Handled = true;
	}
}
private: System::Void sokr1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		e->KeyChar == ',';
	}
	if (e->KeyChar == '/' || e->KeyChar == ',' || e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8 || e->KeyChar == '-') {
		e->Handled = false;
		one = 0;
		two = 0;
		sokr2->Clear();
		minzn->Clear();
		maxzn->Clear();
		minch->Clear();
		maxch->Clear();
		bl3 = 1;
		dr3 = 3;
	}
	else {
		e->Handled = true;
	}
}
private: System::Void minch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8 || e->KeyChar == '-') {
		e->Handled = false;
		RESULTdrobi->Clear();
		sokr2->Clear();
	}
	else {
		e->Handled = true;
	}
}
private: System::Void maxch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8 || e->KeyChar == '-') {
		e->Handled = false;
		RESULTdrobi->Clear();
		sokr2->Clear();
	}
	else {
		e->Handled = true;
	}
}
private: System::Void minzn_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8 ) {
		e->Handled = false;
		RESULTdrobi->Clear();
		sokr2->Clear();
	}
	else {
		e->Handled = true;
	}
}
private: System::Void maxzn_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8 ) {
		e->Handled = false;
		RESULTdrobi->Clear();
		sokr2->Clear();
	}
	else {
		e->Handled = true;
	}
}
private: System::Void Drobinfile_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ FileName = "";
	SAVE3->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	SAVE3->FilterIndex = 1;
	SAVE3->ShowReadOnly = true;
	SAVE3->RestoreDirectory = true;
	if (SAVE3->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = SAVE3->FileName;
		txtdrobinfile->Text = SAVE3->FileName;
	}
	try {
		StreamWriter^ file = File::AppendText(FileName);
		
		if (one == 1) {
			if (dr3 == 1) {
				file->WriteLine(" *** ");
				file->WriteLine("Исходная дробь: " + sokr1->Text);
				file->WriteLine("Сокращенная дробь: " + sokr2->Text);
				dr3 = 0;
			}
		}
		one = 0; 
		if (two == 1) {
			if (rbstepen->Checked == false) {
				if (dr1 == 1 || dr2 == 1)	{
					file->WriteLine(" *** ");
					file->WriteLine("Первая дробь: " + Drob1->Text);
					file->WriteLine("Вторая дробь: " + Drob2->Text);
					
				}
				if (rbdel->Checked == true) {
					file->WriteLine("Результат деления первой дроби на вторую: " + RESULTdrobi->Text);
				}if (rbadd->Checked == true) {
					file->WriteLine("Результат сложения первой и второй дробей: " + RESULTdrobi->Text);
				}if (rbmin->Checked == true) {
					file->WriteLine("Результат вычитания второй дроби из первой: " + RESULTdrobi->Text);
				}if (rbsravnit->Checked == true) {
					file->WriteLine("Результат сравнения первой и второй дроби: " + RESULTdrobi->Text);
				}if (rbmnog->Checked == true) {
					file->WriteLine("Результат умножения первой дроби на вторую: " + RESULTdrobi->Text);
				}
			}
			else {
				if (rbstepen->Checked == true) {
					if (dr1 == 1 || dr2 == 1) {
						file->WriteLine(" *** ");
						file->WriteLine("Исходная дробь: " + Drob1->Text);
						file->WriteLine("Степень: " + Drob2->Text);
						file->WriteLine("Результат возведения дроби в степень: " + RESULTdrobi->Text);
						dr1 = 0;
						dr2 = 0;
					}
				}
			}
		}
		two = 0;
		file->Close();
		
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Файл не был открыт.", "Oшибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void groupBoxResults_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
};

