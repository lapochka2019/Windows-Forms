#pragma once

namespace Calaulator1 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;







	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RadioButton^ Degr;
	private: System::Windows::Forms::RadioButton^ Mult;
	private: System::Windows::Forms::RadioButton^ Sub;
	private: System::Windows::Forms::RadioButton^ Add;
	private: System::Windows::Forms::RadioButton^ Rem;
	private: System::Windows::Forms::RadioButton^ Share;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Degr = (gcnew System::Windows::Forms::RadioButton());
			this->Mult = (gcnew System::Windows::Forms::RadioButton());
			this->Sub = (gcnew System::Windows::Forms::RadioButton());
			this->Add = (gcnew System::Windows::Forms::RadioButton());
			this->Rem = (gcnew System::Windows::Forms::RadioButton());
			this->Share = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Первое число=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Второе число= ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Результат=";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::PowderBlue;
			this->groupBox1->Controls->Add(this->Degr);
			this->groupBox1->Controls->Add(this->Mult);
			this->groupBox1->Controls->Add(this->Sub);
			this->groupBox1->Controls->Add(this->Add);
			this->groupBox1->Controls->Add(this->Rem);
			this->groupBox1->Controls->Add(this->Share);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(259, 90);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выберите операцию:";
			// 
			// Degr
			// 
			this->Degr->AutoSize = true;
			this->Degr->Location = System::Drawing::Point(144, 67);
			this->Degr->Name = L"Degr";
			this->Degr->Size = System::Drawing::Size(67, 18);
			this->Degr->TabIndex = 10;
			this->Degr->Text = L"Степень";
			this->Degr->UseVisualStyleBackColor = true;
			// 
			// Mult
			// 
			this->Mult->AutoSize = true;
			this->Mult->Location = System::Drawing::Point(8, 67);
			this->Mult->Name = L"Mult";
			this->Mult->Size = System::Drawing::Size(78, 18);
			this->Mult->TabIndex = 11;
			this->Mult->Text = L"Умножить";
			this->Mult->UseVisualStyleBackColor = true;
			// 
			// Sub
			// 
			this->Sub->AutoSize = true;
			this->Sub->Location = System::Drawing::Point(8, 44);
			this->Sub->Name = L"Sub";
			this->Sub->Size = System::Drawing::Size(68, 18);
			this->Sub->TabIndex = 12;
			this->Sub->Text = L"Вычесть";
			this->Sub->UseVisualStyleBackColor = true;
			// 
			// Add
			// 
			this->Add->AutoSize = true;
			this->Add->Checked = true;
			this->Add->Location = System::Drawing::Point(8, 20);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(69, 18);
			this->Add->TabIndex = 13;
			this->Add->TabStop = true;
			this->Add->Text = L"Сложить";
			this->Add->UseVisualStyleBackColor = true;
			// 
			// Rem
			// 
			this->Rem->AutoSize = true;
			this->Rem->Location = System::Drawing::Point(144, 44);
			this->Rem->Name = L"Rem";
			this->Rem->Size = System::Drawing::Size(67, 18);
			this->Rem->TabIndex = 14;
			this->Rem->Text = L"Остаток";
			this->Rem->UseVisualStyleBackColor = true;
			// 
			// Share
			// 
			this->Share->AutoSize = true;
			this->Share->Location = System::Drawing::Point(144, 20);
			this->Share->Name = L"Share";
			this->Share->Size = System::Drawing::Size(79, 18);
			this->Share->TabIndex = 15;
			this->Share->Text = L"Разделить";
			this->Share->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(101, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(101, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(101, 198);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(164, 20);
			this->textBox3->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(279, 222);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int x1;
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((textBox1->Text == "") || (textBox1->Text == "0")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
			(textBox1->Text = ",");
			textBox1->Text = textBox1->Text->Insert(x1, "0");
			(textBox1->SelectionStart = x1 + 2);
		}
		if (e->KeyChar == '.') {
			e->KeyChar = ',';
		}
		if ((e->KeyChar == ',' && textBox1->Text->IndexOf(',') == -1) ||(e->KeyChar == '-' && textBox1->Text->IndexOf('-') == -1)||(e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8)) {
			e->Handled = false;
		}
		else { e->Handled = true; }
		if (textBox1->Text == "0") { textBox1->Text = ""; };
	}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (((textBox2->Text == "") || (textBox2->Text == "0")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
	(textBox2->Text = ",");
	textBox2->Text = textBox2->Text->Insert(x1, "0");
	(textBox2->SelectionStart = x1 + 2);
}
	   if (e->KeyChar == '.') {
		   e->KeyChar = ',';
	   }
	   if ((e->KeyChar == ',' && textBox2->Text->IndexOf(',') == -1) || (e->KeyChar == '-' && textBox2->Text->IndexOf('-') == -1) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8)) {
		   e->Handled = false;
	   }
	   else { e->Handled = true; }
	   if (textBox2->Text == "0") { textBox2->Text = ""; };
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((textBox1->Text == "") || (textBox1->Text == "-") || (textBox1->Text == "-") || (textBox2->Text == "") || (textBox1->Text == "")) {
		MessageBox::Show(this, "Некорректное значение", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}else{
		double a, b;
		if (Add->Checked) {
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			textBox3->Text = Convert::ToString(a + b);
		} else if (Sub->Checked) {
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			textBox3->Text = Convert::ToString(a - b);
		} else if (Mult->Checked) {
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			textBox3->Text = Convert::ToString(a * b);
		} else if (Share->Checked) {
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			textBox3->Text = Convert::ToString(a / b);
		}else if (Rem->Checked) {
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			textBox3->Text = Convert::ToString((int)a % (int)b);
		}else if (Degr->Checked) {
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToInt32(textBox2->Text);
			double temp = a;
			for (int i = 0; i < b-1; i++) {
				a *= temp;
			}
			textBox3->Text = Convert::ToString(a);
		}

	}
}
};
}