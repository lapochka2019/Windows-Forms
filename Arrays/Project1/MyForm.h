#pragma once
#include <fstream>
#include <cmath>
#include <string>
#include <cstdio>
#include <conio.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::TextBox^ cout;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rbsort2;


	private: System::Windows::Forms::RadioButton^ rbsort1;


	private: System::Windows::Forms::RadioButton^ rbnechet;

	private: System::Windows::Forms::RadioButton^ rbchet;

	private: System::Windows::Forms::RadioButton^ rbmax;

	private: System::Windows::Forms::RadioButton^ rbmin;


	private: System::Windows::Forms::RadioButton^ rbsr;

	private: System::Windows::Forms::RadioButton^ rbsum;

	private: System::Windows::Forms::TextBox^ txtres;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ random;
	private: System::Windows::Forms::Button^ input;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ res;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::TextBox^ min;
	private: System::Windows::Forms::TextBox^ max;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;




	protected:






























	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->min = (gcnew System::Windows::Forms::TextBox());
			this->max = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cout = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbsort2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbsort1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbnechet = (gcnew System::Windows::Forms::RadioButton());
			this->rbchet = (gcnew System::Windows::Forms::RadioButton());
			this->rbmax = (gcnew System::Windows::Forms::RadioButton());
			this->rbmin = (gcnew System::Windows::Forms::RadioButton());
			this->rbsr = (gcnew System::Windows::Forms::RadioButton());
			this->rbsum = (gcnew System::Windows::Forms::RadioButton());
			this->txtres = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->random = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->res = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox1->Controls->Add(this->min);
			this->groupBox1->Controls->Add(this->max);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cout);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(29, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(337, 110);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// min
			// 
			this->min->Location = System::Drawing::Point(198, 77);
			this->min->Name = L"min";
			this->min->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->min->Size = System::Drawing::Size(123, 20);
			this->min->TabIndex = 7;
			this->min->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->min->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::min_KeyPress);
			// 
			// max
			// 
			this->max->Location = System::Drawing::Point(198, 51);
			this->max->Name = L"max";
			this->max->Size = System::Drawing::Size(123, 20);
			this->max->TabIndex = 6;
			this->max->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->max->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::max_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Максимальное значение диапазона";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Минимальное значение диапазона";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Колчество элементов массива";
			// 
			// cout
			// 
			this->cout->Location = System::Drawing::Point(198, 25);
			this->cout->Name = L"cout";
			this->cout->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->cout->Size = System::Drawing::Size(123, 20);
			this->cout->TabIndex = 0;
			this->cout->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->cout->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::cout_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(24, 136);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(190, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Исходный массив";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox2->Controls->Add(this->rbsort2);
			this->groupBox2->Controls->Add(this->rbsort1);
			this->groupBox2->Controls->Add(this->rbnechet);
			this->groupBox2->Controls->Add(this->rbchet);
			this->groupBox2->Controls->Add(this->rbmax);
			this->groupBox2->Controls->Add(this->rbmin);
			this->groupBox2->Controls->Add(this->rbsr);
			this->groupBox2->Controls->Add(this->rbsum);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(30, 201);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(335, 113);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// rbsort2
			// 
			this->rbsort2->AutoSize = true;
			this->rbsort2->Location = System::Drawing::Point(159, 90);
			this->rbsort2->Name = L"rbsort2";
			this->rbsort2->Size = System::Drawing::Size(154, 17);
			this->rbsort2->TabIndex = 7;
			this->rbsort2->Text = L"Сортировка по убыванию";
			this->rbsort2->UseVisualStyleBackColor = true;
			this->rbsort2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbsort2_CheckedChanged);
			// 
			// rbsort1
			// 
			this->rbsort1->AutoSize = true;
			this->rbsort1->Location = System::Drawing::Point(159, 66);
			this->rbsort1->Name = L"rbsort1";
			this->rbsort1->Size = System::Drawing::Size(170, 17);
			this->rbsort1->TabIndex = 6;
			this->rbsort1->Text = L"Сортировка по возрастанию";
			this->rbsort1->UseVisualStyleBackColor = true;
			this->rbsort1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbsort1_CheckedChanged);
			// 
			// rbnechet
			// 
			this->rbnechet->AutoSize = true;
			this->rbnechet->Location = System::Drawing::Point(159, 43);
			this->rbnechet->Name = L"rbnechet";
			this->rbnechet->Size = System::Drawing::Size(129, 17);
			this->rbnechet->TabIndex = 5;
			this->rbnechet->Text = L"Нечетные элементы";
			this->rbnechet->UseVisualStyleBackColor = true;
			this->rbnechet->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbnechet_CheckedChanged);
			// 
			// rbchet
			// 
			this->rbchet->AutoSize = true;
			this->rbchet->Location = System::Drawing::Point(159, 20);
			this->rbchet->Name = L"rbchet";
			this->rbchet->Size = System::Drawing::Size(118, 17);
			this->rbchet->TabIndex = 4;
			this->rbchet->Text = L"Четные элементы";
			this->rbchet->UseVisualStyleBackColor = true;
			this->rbchet->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbchet_CheckedChanged);
			// 
			// rbmax
			// 
			this->rbmax->AutoSize = true;
			this->rbmax->Location = System::Drawing::Point(9, 89);
			this->rbmax->Name = L"rbmax";
			this->rbmax->Size = System::Drawing::Size(150, 17);
			this->rbmax->TabIndex = 3;
			this->rbmax->Text = L"Максимальный элемент";
			this->rbmax->UseVisualStyleBackColor = true;
			this->rbmax->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbmax_CheckedChanged);
			// 
			// rbmin
			// 
			this->rbmin->AutoSize = true;
			this->rbmin->Location = System::Drawing::Point(9, 66);
			this->rbmin->Name = L"rbmin";
			this->rbmin->Size = System::Drawing::Size(136, 17);
			this->rbmin->TabIndex = 2;
			this->rbmin->Text = L"Миниальный элемент";
			this->rbmin->UseVisualStyleBackColor = true;
			this->rbmin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbmin_CheckedChanged);
			// 
			// rbsr
			// 
			this->rbsr->AutoSize = true;
			this->rbsr->Location = System::Drawing::Point(9, 43);
			this->rbsr->Name = L"rbsr";
			this->rbsr->Size = System::Drawing::Size(118, 17);
			this->rbsr->TabIndex = 1;
			this->rbsr->Text = L"Среднее значение";
			this->rbsr->UseVisualStyleBackColor = true;
			this->rbsr->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbsr_CheckedChanged);
			// 
			// rbsum
			// 
			this->rbsum->AutoSize = true;
			this->rbsum->Checked = true;
			this->rbsum->Location = System::Drawing::Point(9, 20);
			this->rbsum->Name = L"rbsum";
			this->rbsum->Size = System::Drawing::Size(117, 17);
			this->rbsum->TabIndex = 0;
			this->rbsum->TabStop = true;
			this->rbsum->Text = L"Сумма элементов";
			this->rbsum->UseVisualStyleBackColor = true;
			this->rbsum->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbsum_CheckedChanged);
			// 
			// txtres
			// 
			this->txtres->Location = System::Drawing::Point(29, 356);
			this->txtres->Name = L"txtres";
			this->txtres->ReadOnly = true;
			this->txtres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtres->Size = System::Drawing::Size(337, 20);
			this->txtres->TabIndex = 5;
			this->txtres->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtres_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(24, 328);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(205, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Результат оперции";
			// 
			// random
			// 
			this->random->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->random->Location = System::Drawing::Point(372, 17);
			this->random->Name = L"random";
			this->random->Size = System::Drawing::Size(126, 23);
			this->random->TabIndex = 7;
			this->random->Text = L"Генерация массива";
			this->random->UseVisualStyleBackColor = true;
			this->random->Click += gcnew System::EventHandler(this, &MyForm::random_Click_1);
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(372, 99);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(126, 22);
			this->input->TabIndex = 8;
			this->input->Text = L"Ввод из файла";
			this->input->UseVisualStyleBackColor = true;
			this->input->Click += gcnew System::EventHandler(this, &MyForm::input_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(372, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Имя файла ввода:";
			// 
			// res
			// 
			this->res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res->Location = System::Drawing::Point(372, 210);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(126, 22);
			this->res->TabIndex = 9;
			this->res->Text = L"Выполнить";
			this->res->UseVisualStyleBackColor = true;
			this->res->Click += gcnew System::EventHandler(this, &MyForm::res_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(372, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Имя файла вывода:";
			// 
			// save
			// 
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save->Location = System::Drawing::Point(372, 292);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(126, 22);
			this->save->TabIndex = 11;
			this->save->Text = L"Сохранить в файл";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &MyForm::save_Click);
			// 
			// close
			// 
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->close->Location = System::Drawing::Point(373, 354);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(126, 22);
			this->close->TabIndex = 12;
			this->close->Text = L"Закрыть";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(29, 164);
			this->txt1->Multiline = true;
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(336, 20);
			this->txt1->TabIndex = 8;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &MyForm::txt1_TextChanged);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt1_KeyPress);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(372, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(124, 20);
			this->textBox1->TabIndex = 13;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(372, 251);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(124, 20);
			this->textBox2->TabIndex = 14;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(513, 393);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->close);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->res);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->input);
			this->Controls->Add(this->random);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtres);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Массивы";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int m, M, mn = 1000000, mx = -1000000, S = 0;//м-нижняя граница, М-верхняя граница, mn-минимальное число массива,mx-максимальное число массива,S-сумма элементов массвиа.
		int Count, i, j, n, k = 0;//Count-количество элементов, i-счетчик для циклов, j-счетчик для циклов.
		int* arr = new int[n];//объявление массива
		int* prov = new int[k];//объявление массива для проверки на изменение массива для записи или не записи его в файл
		int Q = 0;
		String^ PROV = "  ";
		bool MASSIV = 0; bool RESULTAT = 0;

	private: System::Void random_Click_1(System::Object^ sender, System::EventArgs^ e) {//Генерация массивва
		if ((min->Text == "") || (min->Text == "-") || (max->Text == "") || (max->Text == "-") || (cout->Text == "") || (cout->Text == "-")) {
			MessageBox::Show(this, "Заполните все поля для генерации", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			txt1->Clear();
			MASSIV = 1;
			RESULTAT = 1;
			txtres->Clear();
			m = Convert::ToInt32(min->Text);

			M = Convert::ToInt32(max->Text);
			if (m > M) {
				MessageBox::Show(this, "Неверный диапазон знчений", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {

				Count = Convert::ToInt32(cout->Text);
				n = Count; k = n;
				for (i = 0; i < n; i++) {
					S = M - m + 1;
					arr[i] = m + rand() % S;
					txt1->Text = txt1->Text + Convert::ToString(arr[i]) + " ";

				}S = 0;
			}
		}
	}
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {//Кнопка Закрыть
		Close();
	}
	private: System::Void res_Click(System::Object^ sender, System::EventArgs^ e) {//Выполенние операций над массивом
		if ((txt1->Text == "") || (txt1->Text == " ") || (txt1->Text == "-") || (txt1->Text == "- ")) {
			MessageBox::Show(this, "Введите массив", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			for (i = 0; i < n; i++) {
				arr[i] = 0;
			}
			String^ R = Convert::ToString(txt1->Text);
			R = R->Trim();
			int C = R->Length;
			for (i = 1; i < (C - 1); i++) {
				if ((R[i - 1] == ' ') && (R[i] == ' ')) {
					R = R->Remove((i - 1), 1);
					i--; C--;
				}
			}
			txt1->Clear();
			txt1->Text = Convert::ToString(R);
			array<String^>^ sNums = txt1->Text->Split(' ');
			C = sNums->Length; //длина массива
			n = C;	
			txt1->Clear();
			for (i = 0; i < C; i++) {
				arr[i] = Int32::Parse(sNums[i]);
				txt1->Text = txt1->Text + Convert::ToString(arr[i]) + " ";
				//RESULTAT = 1;
			}




			if (rbsum->Checked) {
				S = 0;
				for (i = 0; i < n; i++) {
					S += arr[i];

				}
				txtres->Clear();
				txtres->Text = "Сумма элементов массива: " + Convert::ToString(S);
				//RESULTAT = 1;

			}
			else if (rbsr->Checked) {
				double D = 0;
				for (i = 0; i < n; i++) {
					D += arr[i];

				}D = D / n;
				txtres->Clear();
				txtres->Text = "Среднее значение элементов массива: " + Convert::ToString(D);
				//RESULTAT = 1;	

			}
			else if (rbmin->Checked) {

				for (i = 1; i < n; i++) {
					if (arr[i] < mn) {
						mn = arr[i];
					}

				}txtres->Clear();
				txtres->Text = "Минимальный элемент массива: " + Convert::ToString(mn);
				//RESULTAT = 1;

			}
			else if (rbmax->Checked) {
				for (i = 0; i < n; i++) {
					if (arr[i] > mx) {
						mx = arr[i];
					}
				}
				txtres->Clear();
				txtres->Text = "Мaкcимальный элемент массива: " + Convert::ToString(mx);
				//RESULTAT = 1;
			}
			else if (rbchet->Checked) {
				txtres->Clear();
				txtres->Text = "Четные элементы массива: ";
				for (i = 0; i < n; i++) {
					if ((arr[i] % 2) == 0)
						txtres->Text = txtres->Text + " " + Convert::ToString(arr[i]);
				}
			}
			else if (rbnechet->Checked) {
				txtres->Clear();
				txtres->Text = "Нечетные элементы массива: ";
				for (i = 0; i < n; i++) {
					if ((arr[i] % 2) != 0)
						txtres->Text = txtres->Text + " " + Convert::ToString(arr[i]);
					//RESULTAT = 1;
				}
			}
			else if (rbsort1->Checked) {
				txtres->Clear();
				txtres->Text = "Сортировка по возрастанию: ";
				//RESULTAT = 1;
				for (i = 0; i < n; i++) {
					int temp;
					for (j = 0; j < n - i - 1; j++) {
						if (arr[j] > arr[j + 1]) {

							temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}
				for (i = 0; i < n; i++) {

					txtres->Text = txtres->Text + " " + Convert::ToString(arr[i]);
				}
			}
			else if (rbsort2->Checked) {
				txtres->Clear();
				txtres->Text = "Сортировка по убыванию: ";
				//RESULTAT = 1;
				for (i = 0; i < n; i++) {
					int temp;
					for (j = 0; j < n - i - 1; j++) {
						if (arr[j] < arr[j + 1]) {

							temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}
				for (i = 0; i < n; i++) {

					txtres->Text = txtres->Text + " " + Convert::ToString(arr[i]);
				}
			}
		}

	}
	private: System::Void min_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int x1;
		if (((min->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
			min->Text = "";
			min->Text = min->Text->Insert(x1, "-0,");
			(min->SelectionStart = x1 + 3);
		}
		if (e->KeyChar == '-' && min->Text->IndexOf('-') == -1)
			min->SelectionStart = 0;

		if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && min->Text->IndexOf('-') == -1) {
			e->Handled = false;
		}
		else { e->Handled = true; }
	}
	private: System::Void max_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int x1;
		if (((max->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
			max->Text = "";
			max->Text = max->Text->Insert(x1, "-0,");
			(max->SelectionStart = x1 + 3);
		}
		if (e->KeyChar == '-' && max->Text->IndexOf('-') == -1)
			max->SelectionStart = 0;
		if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && max->Text->IndexOf('-') == -1) {
			e->Handled = false;
		}
		else { e->Handled = true; }
	}
	private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int x1;

		if ((e->KeyChar == 8) || ((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == '-' || (e->KeyChar == ' ')) {
			e->Handled = false;
			txtres->Clear();
			MASSIV = 1;
			RESULTAT = 1;


		}
		else { e->Handled = true; }
	}
	private: System::Void cout_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9')) {
			e->Handled = false;
		}
		else { e->Handled = true; }

	}
	private: System::Void input_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FileName = "";
		openFileDialog1->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog1->FilterIndex = 1;

		openFileDialog1->ShowReadOnly = true;

		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName = openFileDialog1->FileName;
			textBox1->Text = openFileDialog1->FileName;
			txtres->Clear();
			MASSIV = 1;
			RESULTAT = 1;
		}
		try {
			StreamReader^ file = File::OpenText(FileName);
			txt1->Text = file->ReadToEnd();



		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был открыт", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}String^ R = Convert::ToString(txt1->Text);

		int p = R->Length;
		for (int i = 0; i < p; i++) {
			if ((R[i] != '0') && (R[i] != '1') && (R[i] != '2') && (R[i] != '3') && (R[i] != '4') && (R[i] != '5') && (R[i] != '6') && (R[i] != '7') && (R[i] != '8') && (R[i] != '9') && (R[i] != '-') && (R[i] != ' ')) {
				R = R->Replace(R[i], ' ');
			}
		}
		R = R->Trim();
		for (i = 1; i < (R->Length); i++) {
			if ((R[i - 1] == ' ') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '-')) {
				R = R->Remove((i - 1), 1);
				i--;
			}
		}
		txt1->Clear();
		txt1->Text = Convert::ToString(R);
	}
	private: System::Void txtres_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ FileName = "";
		openFileDialog1->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog1->FilterIndex = 1;

		openFileDialog1->ShowReadOnly = true;

		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName = openFileDialog1->FileName;
			textBox2->Text = openFileDialog1->FileName;
		}
		try {
			StreamWriter^ file = File::AppendText(FileName);
			if (MASSIV == 1) {
				file->WriteLine("	");
				file->WriteLine("Исходный массив:" + txt1->Text);
			}if (RESULTAT == 1) {
				file->WriteLine(txtres->Text);
			}
			file->Close();
			MASSIV = 0;
			RESULTAT = 0;
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был открыт", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	private: System::Void txt1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//MASSIV = 1;
	}
private: System::Void rbsum_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	RESULTAT = 1;
	}
private: System::Void rbsr_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	RESULTAT = 1;
}
private: System::Void rbmin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	RESULTAT = 1;
}
private: System::Void rbmax_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	RESULTAT = 1;
}
private: System::Void rbchet_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	RESULTAT = 1;
}
private: System::Void rbnechet_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	RESULTAT = 1;
}
private: System::Void rbsort1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	RESULTAT = 1;
}
private: System::Void rbsort2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	RESULTAT = 1; 
}
};
}