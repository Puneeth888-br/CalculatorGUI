#pragma once
#include <iostream>

namespace CalculatorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
	private: System::Windows::Forms::Button^ btn_per;
	protected:

	protected:



	private: System::Windows::Forms::Button^ btn_ce;



	private: System::Windows::Forms::Button^ btn_clr;
	private: System::Windows::Forms::Button^ btn_bs;



	private: System::Windows::Forms::Button^ btn_div;

	private: System::Windows::Forms::Button^ btn_mul;

	private: System::Windows::Forms::Button^ btn_sub;

	private: System::Windows::Forms::Button^ btn_add;

	private: System::Windows::Forms::Button^ btn_eq;

	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_9;



	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_6;



	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_pm;




	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_period;
	private: System::Windows::Forms::Label^ Display;
	private: System::Windows::Forms::Label^ Display1;






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
			this->btn_per = (gcnew System::Windows::Forms::Button());
			this->btn_ce = (gcnew System::Windows::Forms::Button());
			this->btn_clr = (gcnew System::Windows::Forms::Button());
			this->btn_bs = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_mul = (gcnew System::Windows::Forms::Button());
			this->btn_sub = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_eq = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_pm = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_period = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::Label());
			this->Display1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_per
			// 
			this->btn_per->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_per->Location = System::Drawing::Point(17, 174);
			this->btn_per->Name = L"btn_per";
			this->btn_per->Size = System::Drawing::Size(168, 45);
			this->btn_per->TabIndex = 2;
			this->btn_per->Text = L"%";
			this->btn_per->UseVisualStyleBackColor = true;
			this->btn_per->Click += gcnew System::EventHandler(this, &MyForm::btn_per_Click);
			// 
			// btn_ce
			// 
			this->btn_ce->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ce->Location = System::Drawing::Point(191, 174);
			this->btn_ce->Name = L"btn_ce";
			this->btn_ce->Size = System::Drawing::Size(167, 45);
			this->btn_ce->TabIndex = 4;
			this->btn_ce->Text = L"CE";
			this->btn_ce->UseVisualStyleBackColor = true;
			// 
			// btn_clr
			// 
			this->btn_clr->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clr->Location = System::Drawing::Point(362, 174);
			this->btn_clr->Name = L"btn_clr";
			this->btn_clr->Size = System::Drawing::Size(167, 45);
			this->btn_clr->TabIndex = 5;
			this->btn_clr->Text = L"C";
			this->btn_clr->UseVisualStyleBackColor = true;
			this->btn_clr->Click += gcnew System::EventHandler(this, &MyForm::btn_clr_Click);
			// 
			// btn_bs
			// 
			this->btn_bs->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btn_bs->Location = System::Drawing::Point(535, 174);
			this->btn_bs->Name = L"btn_bs";
			this->btn_bs->Size = System::Drawing::Size(167, 45);
			this->btn_bs->TabIndex = 6;
			this->btn_bs->Text = L"";
			this->btn_bs->UseVisualStyleBackColor = true;
			this->btn_bs->Click += gcnew System::EventHandler(this, &MyForm::btn_bs_Click);
			// 
			// btn_div
			// 
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_div->Location = System::Drawing::Point(535, 225);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(167, 45);
			this->btn_div->TabIndex = 7;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = true;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// btn_mul
			// 
			this->btn_mul->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mul->Location = System::Drawing::Point(535, 276);
			this->btn_mul->Name = L"btn_mul";
			this->btn_mul->Size = System::Drawing::Size(167, 45);
			this->btn_mul->TabIndex = 8;
			this->btn_mul->Text = L"*";
			this->btn_mul->UseVisualStyleBackColor = true;
			this->btn_mul->Click += gcnew System::EventHandler(this, &MyForm::btn_mul_Click);
			// 
			// btn_sub
			// 
			this->btn_sub->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sub->Location = System::Drawing::Point(535, 327);
			this->btn_sub->Name = L"btn_sub";
			this->btn_sub->Size = System::Drawing::Size(167, 45);
			this->btn_sub->TabIndex = 9;
			this->btn_sub->Text = L"-";
			this->btn_sub->UseVisualStyleBackColor = true;
			this->btn_sub->Click += gcnew System::EventHandler(this, &MyForm::btn_sub_Click);
			// 
			// btn_add
			// 
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(535, 378);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(167, 45);
			this->btn_add->TabIndex = 10;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_eq
			// 
			this->btn_eq->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eq->Location = System::Drawing::Point(18, 429);
			this->btn_eq->Name = L"btn_eq";
			this->btn_eq->Size = System::Drawing::Size(684, 45);
			this->btn_eq->TabIndex = 11;
			this->btn_eq->Text = L"=";
			this->btn_eq->UseVisualStyleBackColor = true;
			this->btn_eq->Click += gcnew System::EventHandler(this, &MyForm::btn_eq_Click);
			// 
			// btn_7
			// 
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_7->Location = System::Drawing::Point(17, 225);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(168, 45);
			this->btn_7->TabIndex = 12;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = true;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::btn_7_Click);
			// 
			// btn_8
			// 
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_8->Location = System::Drawing::Point(191, 225);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(167, 45);
			this->btn_8->TabIndex = 13;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = true;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::btn_8_Click);
			// 
			// btn_9
			// 
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_9->Location = System::Drawing::Point(362, 225);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(167, 45);
			this->btn_9->TabIndex = 14;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = true;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::btn_9_Click);
			// 
			// btn_4
			// 
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_4->Location = System::Drawing::Point(17, 276);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(167, 45);
			this->btn_4->TabIndex = 15;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = true;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::btn_4_Click);
			// 
			// btn_5
			// 
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_5->Location = System::Drawing::Point(189, 276);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(167, 45);
			this->btn_5->TabIndex = 16;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = true;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::btn_5_Click);
			// 
			// btn_6
			// 
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_6->Location = System::Drawing::Point(362, 276);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(167, 45);
			this->btn_6->TabIndex = 17;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = true;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::btn_6_Click);
			// 
			// btn_1
			// 
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_1->Location = System::Drawing::Point(17, 327);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(165, 45);
			this->btn_1->TabIndex = 18;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = true;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_2
			// 
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_2->Location = System::Drawing::Point(188, 327);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(167, 45);
			this->btn_2->TabIndex = 19;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = true;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::btn_2_Click);
			// 
			// btn_3
			// 
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_3->Location = System::Drawing::Point(362, 327);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(167, 45);
			this->btn_3->TabIndex = 20;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = true;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::btn_3_Click);
			// 
			// btn_pm
			// 
			this->btn_pm->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pm->Location = System::Drawing::Point(17, 378);
			this->btn_pm->Name = L"btn_pm";
			this->btn_pm->Size = System::Drawing::Size(167, 45);
			this->btn_pm->TabIndex = 21;
			this->btn_pm->Text = L"+/-";
			this->btn_pm->UseVisualStyleBackColor = true;
			this->btn_pm->Click += gcnew System::EventHandler(this, &MyForm::btn_pm_Click);
			// 
			// btn_0
			// 
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_0->Location = System::Drawing::Point(189, 378);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(167, 45);
			this->btn_0->TabIndex = 22;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = true;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::btn_0_Click);
			// 
			// btn_period
			// 
			this->btn_period->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_period->Location = System::Drawing::Point(362, 378);
			this->btn_period->Name = L"btn_period";
			this->btn_period->Size = System::Drawing::Size(167, 45);
			this->btn_period->TabIndex = 23;
			this->btn_period->Text = L".";
			this->btn_period->UseVisualStyleBackColor = true;
			this->btn_period->Click += gcnew System::EventHandler(this, &MyForm::btn_period_Click);
			// 
			// Display
			// 
			this->Display->BackColor = System::Drawing::Color::DarkGray;
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(21, 72);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(689, 63);
			this->Display->TabIndex = 24;
			this->Display->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// Display1
			// 
			this->Display1->BackColor = System::Drawing::Color::DarkGray;
			this->Display1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display1->Location = System::Drawing::Point(21, 9);
			this->Display1->Name = L"Display1";
			this->Display1->Size = System::Drawing::Size(689, 63);
			this->Display1->TabIndex = 24;
			this->Display1->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(720, 489);
			this->Controls->Add(this->Display1);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->btn_period);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_pm);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_eq);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_sub);
			this->Controls->Add(this->btn_mul);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_bs);
			this->Controls->Add(this->btn_clr);
			this->Controls->Add(this->btn_ce);
			this->Controls->Add(this->btn_per);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		double first, second, result, res,temp;
		char Operator;
private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_1->Text;
}

private: System::Void btn_2_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_2->Text;
}

private: System::Void btn_3_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_3->Text;
}
private: System::Void btn_4_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_4->Text;
}
private: System::Void btn_5_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_5->Text;
}
private: System::Void btn_6_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_6->Text;
}
private: System::Void btn_7_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_7->Text;
}
private: System::Void btn_8_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_8->Text;
}
private: System::Void btn_9_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_9->Text;
}
private: System::Void btn_0_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text += btn_0->Text;
}
private: System::Void btn_clr_Click(System::Object^ sender, System::EventArgs^ e) {
	Display->Text = "";
	Display1->Text = "";

}

private: System::Void btn_bs_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Display->Text->Length > 0)
	{
		Display->Text= Display->Text->Remove(Display->Text->Length -1,1);
	}

}
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Display->Text != "")
	{	
		
		first = double::Parse(Display->Text); 
		Display1->Text = first+btn_add->Text;
		Operator = '+';
	}
	Display->Text="";
	
	
}
private: System::Void btn_period_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Display->Text->Contains("."))
		Display->Text += btn_period->Text;
}
	  

private: System::Void btn_sub_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Display->Text != "")
	{

		first = double::Parse(Display->Text);
		Display1->Text = first + btn_sub->Text;


		Operator = '-';
	}
	Display->Text = "";
}
private: System::Void btn_mul_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Display->Text != "")
	{

		first = double::Parse(Display->Text);
		Display1->Text = first + btn_mul->Text;


		Operator = '*';
	}
	Display->Text = "";

}
private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Display->Text != "")
	{

		first = double::Parse(Display->Text);
		Display1->Text = first + btn_div->Text;


		Operator = '/';
	}
	Display->Text = "";

}
	private: System::Void btn_eq_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (Operator)
		{
		case '+':
			if (Display->Text != "")
			{
				second = double::Parse(Display->Text);
				result = first + second;
				Display->Text = System::Convert::ToString(result);
				Display1->Text = System::Convert::ToString(first) + " + " + System::Convert::ToString(second);

			}
			break;
		case '-':
		{
			second = double::Parse(Display->Text);
			result = first - second;
			Display->Text = System::Convert::ToString(result);
			Display1->Text = System::Convert::ToString(first) + " - " + System::Convert::ToString(second);

		}
		break;
		case '*':
		{
			second = double::Parse(Display->Text);
			result = first * second;
			Display->Text =System::Convert::ToString(result);
			Display1->Text = System::Convert::ToString(first) + " * " + System::Convert::ToString(second);

		}
		break;
		case '/':
		{
			second = double::Parse(Display->Text);
			if (second != 0)
			{
				result = first / second;
				Display->Text = System::Convert::ToString(result);
				Display1->Text = System::Convert::ToString(first) + " / " + System::Convert::ToString(second); 
				
			}
			else
			{
				Display1->Text += "0";
				Display->Text = "Can Not Divide By Zero";
				
			}
		}
		break;

		}
	}
private: System::Void btn_per_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Display->Text != "")
	{
		first = double::Parse(Display->Text);
		result = first/ 100;
		Display1->Text = System::Convert::ToString(result);
	}
}
private: System::Void btn_pm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Display->Text->Contains("-"))
		Display->Text= Display->Text->Remove(0,1);
	else
		Display->Text = "-" + Display->Text;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
