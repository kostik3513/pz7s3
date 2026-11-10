#pragma once
#include <string>
#using <Microsoft.VisualBasic.dll>

namespace pz7s3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox4;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(961, 496);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->checkedListBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(953, 467);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Верхній елемент черги", L"Кількість елементів в черзі",
					L"Видалити перший елемент"
			});
			this->checkedListBox1->Location = System::Drawing::Point(316, 25);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(239, 106);
			this->checkedListBox1->TabIndex = 4;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(437, 177);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 74);
			this->textBox2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(316, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 58);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Додати нові значення";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(50, 25);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(218, 279);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вивести чергу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(953, 467);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(125, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введіть розмір черги";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(382, 239);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 36);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Обчислити";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(382, 178);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 42);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Видалити елементи черги";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(128, 58);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 31);
			this->textBox3->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(128, 109);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(198, 180);
			this->listBox1->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(382, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 48);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Додати значення черги";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(953, 467);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(114, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введіть розмір черги";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(117, 356);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 48);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Обчислити";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(367, 200);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(146, 57);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Видалити елементи черги";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(367, 136);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(134, 55);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Додати елементи черги";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(117, 136);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(205, 196);
			this->listBox2->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(117, 81);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(205, 29);
			this->textBox4->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 499);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Collections::Generic::Queue<int> numbersQueue;
		System::Collections::Generic::Queue<int>myQueue1;
		System::Collections::Generic::Queue<String^>StrQueue;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		numbersQueue.Enqueue(10);
		numbersQueue.Enqueue(20);
		numbersQueue.Enqueue(30);

		textBox1->Clear();
		for each (int number in numbersQueue) {
			textBox1->AppendText(number.ToString() + "\r\n");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	number = Convert::ToInt32(textBox2->Text);

	numbersQueue.Enqueue(number);

	textBox1->Clear();

	for each (int num in numbersQueue) {
		textBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedListBox1->GetItemChecked(0)) { // "Верхній елемент черги"
		if (numbersQueue.Count > 0) {
			MessageBox::Show("Поточний верхній елемент: " + numbersQueue.Peek().ToString());
		}
		else {
			MessageBox::Show("Черга порожня.");
		}
	}

	else if (checkedListBox1->GetItemChecked(1)) { // "Кількість елементів в черзі"
		int count = numbersQueue.Count;
		MessageBox::Show("Кількість елементiв y чepзi: " + count.ToString());
	}
	else if (checkedListBox1->GetItemChecked(2)) { // "Dequeue"
		if (numbersQueue.Count > 0) {
			int removedElement = numbersQueue.Dequeue();
			MessageBox::Show("Видалено верхній елемент: " + removedElement.ToString());
		}
		else {
		MessageBox::Show("Не можна видалити, черга порожня.");
		}
	}

	textBox1->Clear();

	for each (int num in numbersQueue) {
		textBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox3->Text);

	for (int i = 0; i < size; ++i) {
		int inputValue = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("Елемент черги", "Введіть значення елементів черги", "", 200, 200));

		myQueue1.Enqueue(inputValue);
		listBox1->Items->Add(inputValue.ToString());
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myQueue1.Count > 0) {
		myQueue1.Dequeue();
		if (listBox1->Items->Count > 0) {
			listBox1->Items->RemoveAt(0);
		}
	}
	else {
		listBox1->Items->Add("Черга порожня");
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0;
	int evenCount = 0;

	for each (int value in myQueue1) {
		if (value % 2 == 0 && value >= 10 && value <= 20) {
			sum += value;
			evenCount++;
		}
	}
	if (evenCount > 0) {
		double average = (double)sum / evenCount;
		MessageBox::Show("Середнє значення парних чисел у діапазоні від 10 до 20: " + average.ToString(), "Результат");
	}
	else {
	MessageBox::Show("Немає парних чисел у діапазоні від 10 до 20.", "Результат");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox4->Text);
	for (int i = 0; i < size; ++i) {
		String^ inputValue = Microsoft::VisualBasic::Interaction::InputBox("Елемент черги", "Введіть значення елементів черги", " ", 200, 200);
		StrQueue.Enqueue(inputValue);
		listBox2->Items->Add(inputValue);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StrQueue.Count > 0) {
		StrQueue.Dequeue();
		if (listBox2->Items->Count > 0) {
			listBox2->Items->RemoveAt(0);
		}
	}
	else {
		listBox2->Items->Add("Черга порожня");
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int CountChars = 0;

	for (int i = 0; i < listBox2->Items->Count; i++) {
		String^ value = listBox2->Items[i]->ToString();
		CountChars += value->Length;
	}
	MessageBox::Show("Загальна кількість символів: " + CountChars, "Підсумок символів");
}
};
}
