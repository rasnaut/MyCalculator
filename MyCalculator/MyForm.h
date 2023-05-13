#pragma once

#define BTN_SIZE 60
#define BRDR_SIZE 15
#define BTW_DIST 10
#define BTN_POS(x) BRDR_SIZE + x*(BTN_SIZE+BTW_DIST)

namespace MyCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	enum class Operation { Add, Min, Mult, Div };
	char operation;
	private: System::Windows::Forms::Button^ button2;
				 double num1;
	public:
		MyForm(void) : num1(0.0), operation('+')
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnResult;



	private: System::Windows::Forms::Button^ btn_add;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn_min;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btn_mult;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ btnSign;


	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ btn_point;

	protected:

	protected:

	protected:
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btnSign = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::Red;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Location = System::Drawing::Point(12, 12);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(30, 30);
			this->btn_close->TabIndex = 0;
			this->btn_close->Text = L"X";
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &MyForm::btn_close_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkGray;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCoral;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(18, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 60);
			this->button1->TabIndex = 2;
			this->button1->Text = L"AC";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnResult
			// 
			this->btnResult->BackColor = System::Drawing::Color::YellowGreen;
			this->btnResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResult->Location = System::Drawing::Point(158, 73);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(130, 60);
			this->btnResult->TabIndex = 5;
			this->btnResult->Text = L"=";
			this->btnResult->UseVisualStyleBackColor = false;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::Moccasin;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(228, 143);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(60, 60);
			this->btn_add->TabIndex = 9;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::buttonOperationPlus_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(158, 143);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 8;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(88, 143);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(18, 143);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// btn_min
			// 
			this->btn_min->BackColor = System::Drawing::Color::Moccasin;
			this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_min->Location = System::Drawing::Point(228, 213);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(60, 60);
			this->btn_min->TabIndex = 13;
			this->btn_min->Text = L"-";
			this->btn_min->UseVisualStyleBackColor = false;
			this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::buttonOperationPlus_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(158, 213);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(88, 213);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(18, 213);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 60);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::Moccasin;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mult->Location = System::Drawing::Point(228, 283);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(60, 60);
			this->btn_mult->TabIndex = 17;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::buttonOperationPlus_Click);
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(158, 283);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(88, 283);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 60);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(18, 283);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 60);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::Color::Moccasin;
			this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_div->Location = System::Drawing::Point(228, 353);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(60, 60);
			this->btn_div->TabIndex = 21;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::buttonOperationPlus_Click);
			// 
			// btnSign
			// 
			this->btnSign->BackColor = System::Drawing::Color::DarkGray;
			this->btnSign->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSign->Location = System::Drawing::Point(158, 353);
			this->btnSign->Name = L"btnSign";
			this->btnSign->Size = System::Drawing::Size(60, 60);
			this->btnSign->TabIndex = 20;
			this->btnSign->Text = L"+/-";
			this->btnSign->UseVisualStyleBackColor = false;
			this->btnSign->Click += gcnew System::EventHandler(this, &MyForm::btnSign_Click);
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(88, 353);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 60);
			this->button19->TabIndex = 19;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::Color::DarkGray;
			this->btn_point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_point->Location = System::Drawing::Point(18, 353);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(60, 60);
			this->btn_point->TabIndex = 18;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Moccasin;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(228, 419);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 22;
			this->button2->Text = L"sqrt";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button2_MouseMove);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(300, 500);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btnSign);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_close);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion
		

	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void buttonNum_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (this->label1->Text == L"0")
		this->label1->Text = safe_cast<Button^>(sender)->Text;
	else
		this->label1->Text += safe_cast<Button^>(sender)->Text;
}

private: System::Void buttonOperationProceed() {
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
	this->btn_point->Enabled = true;
}

	private: System::Void buttonOperationPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		this->operation = System::Convert::ToChar(safe_cast<Button^>(sender)->Text);
		buttonOperationProceed();
	}
	/*
	private: System::Void buttonOperationMin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->operation = Operation::Min;
		buttonOperationProceed();
	}

	private: System::Void buttonOperationMult_Click(System::Object^ sender, System::EventArgs^ e) {
		this->operation = Operation::Mult;
		buttonOperationProceed();
	}
	private: System::Void buttonOperationDiv_Click(System::Object^ sender, System::EventArgs^ e) {
		this->operation = Operation::Div;
		buttonOperationProceed();
	}*/
private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
	double num2 = System::Convert::ToDouble(this->label1->Text);
	double result = 0;
	switch (operation)
	{
		case '+': result = this->num1 + num2; break;
		case '-': result = this->num1 - num2; break;
		case '*': result = this->num1 * num2; break;
		case '/': 
			if (!num2) {
					auto res = MessageBox::Show(L"Деление на 0! Сбросить операцию?", L"Ошибка", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
					if (res == System::Windows::Forms::DialogResult::OK) {
						this->label1->Text = System::Convert::ToString(num1);
						operation = '+';
					}
					return;
			}
			
			result = this->num1 / num2; 
			
			break;
	}
	this->label1->Text = System::Convert::ToString(result);

	this->btn_point->Enabled = true;
}
private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) {
	if(!this->label1->Text->Contains("."))
		this->label1->Text += ".";
	this->btn_point->Enabled = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = "0";
	this->num1 = 0;
	this->btn_point->Enabled = true;
}
private: System::Void btnSign_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label1->Text->Contains("-"))
		this->label1->Text = this->label1->Text->Remove(0,1);
	else
		this->label1->Text = "-" + this->label1->Text;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double res = System::Convert::ToDouble(this->label1->Text);
	
	double result = res;
	while (result > res / result) {
		result -= 0.01;
	}

	this->label1->Text = System::Convert::ToString(result);
}

private: System::Void button2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	button2->Location = System::Drawing::Point(108, 419);
	
}
};
}
