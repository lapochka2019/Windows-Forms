#pragma once
#include <cmath>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ res;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ r6;

	private: System::Windows::Forms::RadioButton^ r5;

	private: System::Windows::Forms::RadioButton^ r4;

	private: System::Windows::Forms::RadioButton^ r3;

	private: System::Windows::Forms::RadioButton^ r2;

	private: System::Windows::Forms::RadioButton^ r1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->res = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->r6 = (gcnew System::Windows::Forms::RadioButton());
			this->r5 = (gcnew System::Windows::Forms::RadioButton());
			this->r4 = (gcnew System::Windows::Forms::RadioButton());
			this->r3 = (gcnew System::Windows::Forms::RadioButton());
			this->r2 = (gcnew System::Windows::Forms::RadioButton());
			this->r1 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// res
			// 
			this->res->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->res->BackColor = System::Drawing::SystemColors::HighlightText;
			this->res->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res->Location = System::Drawing::Point(12, 220);
			this->res->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(303, 33);
			this->res->TabIndex = 0;
			this->res->Text = L"Расчет Ехр(х)";
			this->res->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->res->UseVisualStyleBackColor = false;
			this->res->Click += gcnew System::EventHandler(this, &MyForm::res_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(179, 343);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(179, 368);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"0";
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(38, 23);
			this->txt->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(257, 23);
			this->txt->TabIndex = 3;
			this->txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(179, 319);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(48, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 21);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Ехр(х)=1+х/1!+х2/2!+х3/3!...";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Swis721 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label5->Location = System::Drawing::Point(7, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"х=";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txt);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->groupBox1->Location = System::Drawing::Point(14, 46);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Size = System::Drawing::Size(303, 65);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод значения Х (-13<=X<=25)";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox2->Controls->Add(this->r6);
			this->groupBox2->Controls->Add(this->r5);
			this->groupBox2->Controls->Add(this->r4);
			this->groupBox2->Controls->Add(this->r3);
			this->groupBox2->Controls->Add(this->r2);
			this->groupBox2->Controls->Add(this->r1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(14, 118);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox2->Size = System::Drawing::Size(303, 94);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выбор точности";
			// 
			// r6
			// 
			this->r6->AutoSize = true;
			this->r6->Location = System::Drawing::Point(205, 58);
			this->r6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->r6->Name = L"r6";
			this->r6->Size = System::Drawing::Size(86, 23);
			this->r6->TabIndex = 5;
			this->r6->Text = L"0,000001";
			this->r6->UseVisualStyleBackColor = true;
			this->r6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r6_CheckedChanged);
			// 
			// r5
			// 
			this->r5->AutoSize = true;
			this->r5->Location = System::Drawing::Point(96, 58);
			this->r5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->r5->Name = L"r5";
			this->r5->Size = System::Drawing::Size(78, 23);
			this->r5->TabIndex = 4;
			this->r5->Text = L"0,00001";
			this->r5->UseVisualStyleBackColor = true;
			this->r5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r5_CheckedChanged);
			// 
			// r4
			// 
			this->r4->AutoSize = true;
			this->r4->Location = System::Drawing::Point(7, 58);
			this->r4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->r4->Name = L"r4";
			this->r4->Size = System::Drawing::Size(70, 23);
			this->r4->TabIndex = 3;
			this->r4->Text = L"0,0001";
			this->r4->UseVisualStyleBackColor = true;
			this->r4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r4_CheckedChanged);
			// 
			// r3
			// 
			this->r3->AutoSize = true;
			this->r3->Location = System::Drawing::Point(205, 26);
			this->r3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->r3->Name = L"r3";
			this->r3->Size = System::Drawing::Size(62, 23);
			this->r3->TabIndex = 2;
			this->r3->Text = L"0,001";
			this->r3->UseVisualStyleBackColor = true;
			this->r3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r3_CheckedChanged);
			// 
			// r2
			// 
			this->r2->AutoSize = true;
			this->r2->Location = System::Drawing::Point(96, 26);
			this->r2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->r2->Name = L"r2";
			this->r2->Size = System::Drawing::Size(54, 23);
			this->r2->TabIndex = 1;
			this->r2->Text = L"0,01";
			this->r2->UseVisualStyleBackColor = true;
			this->r2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r2_CheckedChanged);
			// 
			// r1
			// 
			this->r1->AutoSize = true;
			this->r1->Checked = true;
			this->r1->Location = System::Drawing::Point(7, 26);
			this->r1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->r1->Name = L"r1";
			this->r1->Size = System::Drawing::Size(46, 23);
			this->r1->TabIndex = 0;
			this->r1->TabStop = true;
			this->r1->Text = L"0,1";
			this->r1->UseVisualStyleBackColor = true;
			this->r1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r1_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(179, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(179, 270);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(10, 294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Точночть=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(10, 270);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(139, 17);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Исходное значение=";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(10, 368);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Сумма ряда=";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(10, 343);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(122, 17);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Число слагаемых=";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(10, 319);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(163, 17);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Точное значение Ехр(х)=";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 389);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 34);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(328, 430);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->res);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Exp()";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double esp = 0.1;
		int c = 2;
		double ex;
		//функция для подсчета и округления суммы ряда

		Decimal SUM(Decimal x) {
			System::Decimal q = 1, res = 1;
			
			int n = 0;//Cчетчик количества слогаемых
			do {
				n++;
				q = q * x / n;
				res = System::Decimal::Add(res, q);
			} while (Math::Abs(q) > (System::Decimal)esp);
			if (res < 0)
				res = System::Decimal::Add(res, q);
			this->label1->Text = Convert::ToString(n);//вывод числа слогаемых
			res = Math::Round(res, c);//округление суммы ряда
			return res;
	}
		//функция для подсчета и округления экспоненты
		double EX(Decimal x) {
			
			ex = exp((double)x);
			ex = Math::Round(ex, c);//округление экспоненты
			return ex;
		}
	private: System::Void res_Click(System::Object^ sender, System::EventArgs^ e) {
		double p, k = 1;
		Decimal x;
		int i = 1;
		if ((txt->Text == " ") || (txt->Text == "-") || (txt->Text == ",") || (txt->Text == "-,") || (txt->Text == "")) {
			txt->Text = "";
			label7->Text = "0";
			label6->Text = "0";
			label3->Text = "0";
			label2->Text = "0";
			label1->Text = "0";
			MessageBox::Show("Введите число!", "Предупреждение!",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}else{
		
		x = Convert::ToDecimal(txt->Text);
		p = 1;
		if(x<-13 || x>25){
			MessageBox::Show("Введено некорректное значение!", "Предупреждение!",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		
		else {
			if (x == -9) {
				r4->Checked = true;
			}
			if (x == -12) {
				r6->Checked = true;
			}


			if (r1->Checked) {
				//вывод точности
				label2->Text = String::Format("{0:f2}", (SUM(x)));
				label3->Text = String::Format("{0:f2}", EX(x));
				p = Convert::ToDouble(label3->Text);
				if (p == 0||ex==0||p < 0 || ex < 0)
					r2->Checked = true;
			}
			 if (r2->Checked) {

				label2->Text = String::Format("{0:f3}", (SUM(x)));
				label3->Text = String::Format("{0:f3}", EX(x));
				p = Convert::ToDouble(label3->Text);
				if (p == 0 || ex == 0 || p < 0 || ex < 0)

					r3->Checked = true;
			}
				 if (r3->Checked) {
					
					label2->Text = String::Format("{0:f4}", (SUM(x)));
					label3->Text = String::Format("{0:f4}", EX(x));
					p = Convert::ToDouble(label3->Text);
					if (p == 0 || ex == 0 || p < 0 || ex < 0)
						r4->Checked = true;

				}
				 if (r4->Checked) {
					
					label2->Text = String::Format("{0:f5}", (SUM(x)));
					label3->Text = String::Format("{0:f5}", EX(x));
					p = Convert::ToDouble(label3->Text);
					if (p == 0 || ex == 0 || p < 0 || ex < 0)
						r5->Checked = true;
				}
				 if (r5->Checked) {
					
					label2->Text = String::Format("{0:f6}", (SUM(x)));
					label3->Text = String::Format("{0:f6}", EX(x));
					p = Convert::ToDouble(label3->Text);
					if (p == 0 || ex == 0 || p < 0 || ex < 0)
						r6->Checked = true;
				}
				 if (r6->Checked) {
					
					label2->Text = String::Format("{0:f7}", (Convert::ToDouble(SUM(x))));
					label3->Text = String::Format("{0:f7}", EX(x));
					p = Convert::ToDouble(label3->Text);
					if (p == 0 || ex == 0 || p < 0 || ex < 0)
						r2->Checked = true;


				}
			label7->Text = Convert::ToString(x);
			esp= Math::Round(esp, c);
			if (c == 2){
				label6->Text = String::Format("{0:f1}", esp);
			}else if (c == 3) {
				label6->Text = String::Format("{0:f2}", esp);
			}else if (c == 4) {
				label6->Text = String::Format("{0:f3}", esp);
			} else if (c == 5) {
				label6->Text = String::Format("{0:f4}", esp);
			} else if (c == 6) {
				label6->Text = String::Format("{0:f5}", esp);
			}else if(c == 7) {
				label6->Text = String::Format("{0:f6}", esp);
			}
			

			}
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void txt_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	double x1;
	if (((txt->Text == "") || (txt->Text == "0")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
		(txt->Text = ",");
		txt->Text = txt->Text->Insert(x1, "0");
		(txt->SelectionStart = x1 + 2);
	}
	if (((txt->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
		txt->Text = "";
		txt->Text = txt->Text->Insert(x1, "-0,");
		(txt->SelectionStart = x1 + 3);
	}
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == '-' && txt->Text->IndexOf('-') == -1)
		txt->SelectionStart = 0;
	if ((e->KeyChar == ',' && txt->Text->IndexOf(',') == -1) || (e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && txt->Text->IndexOf('-') == -1) {
		label7->Text = "0";
		label6->Text = "0";
		label3->Text = "0";
		label2->Text = "0";
		label1->Text = "0";	
		e->Handled = false;
	}
	else { e->Handled = true; }
}
private: System::Void r1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	c = 2;
	esp = 0.1;
}
private: System::Void r4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	c = 5;
	esp = 0.0001;
}
private: System::Void r2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	c = 3;
	esp = 0.01;
}
private: System::Void r5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	c = 6;
	esp = 0.00001;
}
private: System::Void r3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	c = 4;
	esp = 0.001;
}
private: System::Void r6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	c = 7;
	esp = 0.000001;
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
