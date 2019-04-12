
#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
namespace Massiv {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MassivForm
	/// </summary>

	int maxDiap, minDiap, Num;
	vector <int> Array;
	int rb;


	public ref class MassivForm : public System::Windows::Forms::Form
	{
	public:
		MassivForm(void)
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
		~MassivForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbMaxDiap;

	private: System::Windows::Forms::TextBox^  tbMinDiap;

	private: System::Windows::Forms::TextBox^  tbNum;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbArr;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tbResult;





	private: System::Windows::Forms::Button^  Complete;






	private: System::Windows::Forms::Button^  CloseBut;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  SaveAs;
	private: System::Windows::Forms::Button^  OpenFile;
	private: System::Windows::Forms::Button^  GenerateArr;







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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tbMaxDiap = (gcnew System::Windows::Forms::TextBox());
			this->tbMinDiap = (gcnew System::Windows::Forms::TextBox());
			this->tbNum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbArr = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbResult = (gcnew System::Windows::Forms::TextBox());
			this->Complete = (gcnew System::Windows::Forms::Button());
			this->CloseBut = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SaveAs = (gcnew System::Windows::Forms::Button());
			this->OpenFile = (gcnew System::Windows::Forms::Button());
			this->GenerateArr = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tbMaxDiap);
			this->groupBox1->Controls->Add(this->tbMinDiap);
			this->groupBox1->Controls->Add(this->tbNum);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(12, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(405, 118);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// tbMaxDiap
			// 
			this->tbMaxDiap->Location = System::Drawing::Point(240, 87);
			this->tbMaxDiap->Name = L"tbMaxDiap";
			this->tbMaxDiap->Size = System::Drawing::Size(100, 20);
			this->tbMaxDiap->TabIndex = 5;
			this->tbMaxDiap->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MassivForm::BlockLetters);
			// 
			// tbMinDiap
			// 
			this->tbMinDiap->Location = System::Drawing::Point(240, 57);
			this->tbMinDiap->Name = L"tbMinDiap";
			this->tbMinDiap->Size = System::Drawing::Size(100, 20);
			this->tbMinDiap->TabIndex = 4;
			this->tbMinDiap->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MassivForm::BlockLetters);
			// 
			// tbNum
			// 
			this->tbNum->Location = System::Drawing::Point(240, 27);
			this->tbNum->Name = L"tbNum";
			this->tbNum->Size = System::Drawing::Size(100, 20);
			this->tbNum->TabIndex = 3;
			this->tbNum->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MassivForm::BlockLetters);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(20, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Максимальное значение диапозона:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(20, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Минимальное значение диапозона:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(20, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элементов массива:";
			this->label1->Click += gcnew System::EventHandler(this, &MassivForm::label1_Click);
			// 
			// tbArr
			// 
			this->tbArr->Location = System::Drawing::Point(12, 159);
			this->tbArr->Name = L"tbArr";
			this->tbArr->Size = System::Drawing::Size(405, 20);
			this->tbArr->TabIndex = 6;
			this->tbArr->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MassivForm::tbArr_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label4->Location = System::Drawing::Point(9, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Исходный массив";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox2->Location = System::Drawing::Point(12, 202);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(405, 118);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton5->Location = System::Drawing::Point(199, 85);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(154, 17);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Сортировка по убыванию";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton6->Location = System::Drawing::Point(199, 65);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(170, 17);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Сортировка по возрастанию";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton7->Location = System::Drawing::Point(199, 45);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(129, 17);
			this->radioButton7->TabIndex = 5;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Нечётные элементы";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton8->Location = System::Drawing::Point(199, 25);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(118, 17);
			this->radioButton8->TabIndex = 4;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Чётные элементы";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton8_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton4->Location = System::Drawing::Point(5, 85);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(150, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Максимальный элемент";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton3->Location = System::Drawing::Point(5, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(144, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Минимальный элемент";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton2->Location = System::Drawing::Point(5, 45);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(118, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Среднее значение";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton1->Location = System::Drawing::Point(5, 25);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(117, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Сумма элементов";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MassivForm::radioButton1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label5->Location = System::Drawing::Point(9, 334);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Результаты операции";
			// 
			// tbResult
			// 
			this->tbResult->BackColor = System::Drawing::Color::White;
			this->tbResult->Location = System::Drawing::Point(12, 351);
			this->tbResult->Name = L"tbResult";
			this->tbResult->ReadOnly = true;
			this->tbResult->Size = System::Drawing::Size(405, 20);
			this->tbResult->TabIndex = 8;
			// 
			// Complete
			// 
			this->Complete->Location = System::Drawing::Point(423, 211);
			this->Complete->Name = L"Complete";
			this->Complete->Size = System::Drawing::Size(127, 32);
			this->Complete->TabIndex = 11;
			this->Complete->Text = L"Выполнить";
			this->Complete->UseVisualStyleBackColor = true;
			this->Complete->Click += gcnew System::EventHandler(this, &MassivForm::Complete_Click);
			// 
			// CloseBut
			// 
			this->CloseBut->Location = System::Drawing::Point(423, 287);
			this->CloseBut->Name = L"CloseBut";
			this->CloseBut->Size = System::Drawing::Size(127, 32);
			this->CloseBut->TabIndex = 15;
			this->CloseBut->Text = L"Закрыть";
			this->CloseBut->UseVisualStyleBackColor = true;
			this->CloseBut->Click += gcnew System::EventHandler(this, &MassivForm::Close_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"\"txt files (*.txt)|*.txt|All files (*.*)|*.*\"";
			this->saveFileDialog1->RestoreDirectory = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// SaveAs
			// 
			this->SaveAs->Location = System::Drawing::Point(423, 86);
			this->SaveAs->Name = L"SaveAs";
			this->SaveAs->Size = System::Drawing::Size(127, 32);
			this->SaveAs->TabIndex = 16;
			this->SaveAs->Text = L"Сохранить как";
			this->SaveAs->UseVisualStyleBackColor = true;
			this->SaveAs->Click += gcnew System::EventHandler(this, &MassivForm::SaveAs_Click);
			// 
			// OpenFile
			// 
			this->OpenFile->Location = System::Drawing::Point(423, 45);
			this->OpenFile->Name = L"OpenFile";
			this->OpenFile->Size = System::Drawing::Size(127, 32);
			this->OpenFile->TabIndex = 17;
			this->OpenFile->Text = L"Открыть файл";
			this->OpenFile->UseVisualStyleBackColor = true;
			this->OpenFile->Click += gcnew System::EventHandler(this, &MassivForm::OpenFile_Click);
			// 
			// GenerateArr
			// 
			this->GenerateArr->Location = System::Drawing::Point(423, 7);
			this->GenerateArr->Name = L"GenerateArr";
			this->GenerateArr->Size = System::Drawing::Size(127, 32);
			this->GenerateArr->TabIndex = 9;
			this->GenerateArr->Text = L"Генерация массива";
			this->GenerateArr->UseVisualStyleBackColor = true;
			this->GenerateArr->Click += gcnew System::EventHandler(this, &MassivForm::GenerateArr_Click);
			// 
			// MassivForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 401);
			this->Controls->Add(this->OpenFile);
			this->Controls->Add(this->SaveAs);
			this->Controls->Add(this->CloseBut);
			this->Controls->Add(this->Complete);
			this->Controls->Add(this->GenerateArr);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbResult);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbArr);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MassivForm";
			this->Text = L"MassivForm";
			this->Load += gcnew System::EventHandler(this, &MassivForm::MassivForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MassivForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

 void Sum()
 {
	 double oper = 0;
	 for (int i = 0; i < Array.size(); i++)
	 {
		 oper += Array.at(i);
	 }
	 tbResult->Text = "Сумма элементов: " + oper.ToString();
 }
 void Average()
 {
	 double oper = 0;
	 for (int i = 0; i < Array.size(); i++)
	 {
		 oper += Array.at(i);
	 }
	 tbResult->Text = "Среднее значение: " + (oper / Array.size()).ToString("F3");
 }
 void Min(int min,int max)
 {
	 for (int i = 0; i < Array.size(); i++)
	 {
		 if (min > Array[i])
		 {
			 min = Array[i];
		 }
	 }
	 tbResult->Text = "Минимальный элемент: " + min.ToString();
 }
 void Max(int min, int max)
 {
	 for (int i = 0; i < Array.size(); i++)
	 {
		 if (max < Array[i])
		 {
			 max = Array[i];
		 }
	 }
	 tbResult->Text = "Максимальный элемент: " + max.ToString();
 }
 void Even()
 {
	 tbResult->Text = "Чётные элементы: ";
	 for (int i = 0; i < Array.size(); i++)
	 {
		 if (Array[i] % 2 == 0)
			 tbResult->Text += Array[i] + " ";
	 }
 }
 void Odd()
 {
	 tbResult->Text = "Нечётные элементы: ";
	 for (int i = 0; i < Array.size(); i++)
	 {
		 if (Array[i] % 2 != 0)
			 tbResult->Text += Array[i] + " ";
	 }
 }
 void SortAsc()
 {
	 sort(Array.begin(), Array.end());
	 tbResult->Text = "Сортировка по возрастанию: ";
	 for (int i = 0; i < Array.size(); i++)
	 {
		 tbResult->Text += Convert::ToString(Array[i]) + " ";
	 }
 }
 void SortDesc()
 {
	 sort(Array.rbegin(), Array.rend());
	 tbResult->Text = "Сортировка по убыванию: ";
	 for (int i = 0; i < Array.size(); i++)
	 {
		 tbResult->Text += Convert::ToString(Array[i]) + " ";
	 }
 }
 void SaveFile()
 {
	 Stream^ myStream;
	 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	 {

		 if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		 {
			 StreamWriter^ writer = gcnew StreamWriter(myStream);
			 //String^ path = saveFileDialog1->FileName;
			 //File::WriteAllText(saveFileDialog1->FileName, "HUELO");
			 if (tbArr->Text != "")
			 {
				 writer->WriteLine("Исходный массив:");
				 writer->WriteLine(tbArr->Text);
				 writer->Write("Операция с массивом: ");
				 if (radioButton1->Checked)
				 {
					 writer->WriteLine("Сумма элементов");
				 }
				 else if (radioButton2->Checked)
				 {
					 writer->WriteLine("Среднее значение");
				 }
				 else if (radioButton3->Checked)
				 {
					 writer->WriteLine("Минимальный элемент");
				 }
				 else if (radioButton4->Checked)
				 {
					 writer->WriteLine("Максимальный элемент");
				 }
				 else if (radioButton8->Checked)
				 {
					 writer->WriteLine("Чётные элементы");
				 }
				 else if (radioButton7->Checked)
				 {
					 writer->WriteLine("Нечётные элементы");
				 }
				 else if (radioButton6->Checked)
				 {
					 writer->WriteLine("Сортировка по возрастанию");
				 }
				 else if (radioButton5->Checked)
				 {
					 writer->WriteLine("Сортировка по убыванию");
				 }
				 writer->WriteLine("Результаты операции: ");
				 writer->WriteLine(tbResult->Text);
			 }
			 writer->Close();
			 myStream->Close();
		 }
	 }
 }
 void LoadFile()
 {
	 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	 {
		 String^ filePath = openFileDialog1->FileName;
		 Stream^ fileStream;
		 String^ TextInFile;
		 if ((fileStream = openFileDialog1->OpenFile()) != nullptr)
		 {
			 StreamReader^ reader = gcnew StreamReader(fileStream);
			 // reader.
			 // StreamWriter^ writer = gcnew StreamWriter(fileStream);
			 while ((TextInFile = reader->ReadLine()) != nullptr)
			 {
				 if (reader->ReadLine() != "")
				 {
					 tbArr->Text = TextInFile;
				 }
			 }
		 }
		 //auto sr = gcnew StreamReader(openFileDialog1->FileName);
	 }
 }
 void GenArr()
 {
	 if (tbMinDiap->Text != "" && tbMaxDiap->Text != "" && tbNum->Text != "")
	 {
		 Array.clear();
		 tbArr->Text = "";
		 Num = Convert::ToInt16(tbNum->Text);
		 minDiap = Convert::ToInt16(tbMinDiap->Text);
		 maxDiap = Convert::ToInt16(tbMaxDiap->Text);
		 srand(time(0));
		 if (maxDiap > minDiap)
		 {
			 for (int i = 0; i < Num; i++)
			 {
				 Array.push_back(rand() % (maxDiap - minDiap + 1) + minDiap);
			 }
			 for (int i = 0; i < Array.size(); i++)
			 {
				 tbArr->Text += Convert::ToString(Array.at(i)) + " ";
			 }
		 }
		 else
		 {
			 MessageBox::Show("Максимальное значение должно быть больше минимального");
		 }
	 }
 }
 void CompleteArr()
 {
	 Array.clear();
	 double oper = 0;
	 int min, max;
	 int buf, k = 0;
	 int push;
	 String^ buffer = tbArr->Text;
	 string b = msclr::interop::marshal_as< std::string >(tbArr->Text);
	 istringstream iss(b);
	 while (iss >> push)
	 {
		 if (k == 0)
		 {
			 max = min = push;
		 }
		 if (max < push)
		 {
			 max = push;
		 }
		 if (min > push)
		 {
			 min = push;
		 }
		 Array.push_back(push);
		 k++;
	 }
	 switch (rb)
	 {
	 case 1:
		 Sum();
		 break;
	 case 2:
		 Average();
		 break;
	 case 3:
		 Min(min, max);
		 break;
	 case 4:
		 Max(min, max);
		 break;
	 case 5:
		 Even();
		 break;
	 case 6:
		 Odd();
		 break;
	 case 7:
		 SortAsc();
		 break;
	 case 8:
		 SortDesc();
		 break;

	 }
 }
private: System::Void GenerateArr_Click(System::Object^  sender, System::EventArgs^  e) {
	GenArr();
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 1;
}
private: System::Void Complete_Click(System::Object^  sender, System::EventArgs^  e) {
	CompleteArr();
}
private: System::Void Close_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 2;
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 3;
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 4;
}
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 5;
}
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 6;
}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 7;
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rb = 8;
}
	private: System::Void BlockLetters(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		TextBox^ textbox = (TextBox^)sender;
		if (!Char::IsDigit(e->KeyChar))
		{
			// Запрет на ввод более одного знака минуса.
			if (e->KeyChar != '-' || textbox->Text->IndexOf('-') != -1)
				// Если нажатая клавиша не является клавишей BackSpace.
				if (e->KeyChar != (char)Keys::Back)
					e->Handled = true;          // Запрет ввода
		}
	}
private: System::Void tbArr_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar))
	{
		// Запрет на ввод более одного знака минуса.
		if (e->KeyChar != '-')
			// Если нажатая клавиша не является клавишей BackSpace.
			if (e->KeyChar != (char)Keys::Back)
				if(e->KeyChar != (char)Keys::Space)
				e->Handled = true;          // Запрет ввода
	}
	if (tbArr->Text->EndsWith("-") && e->KeyChar == '-')
		e->Handled = true;
	/*if (!(tbArr->Text->EndsWith(" ")) && e->KeyChar == '-' && tbArr->Text->Length > 0)
		e->Handled = true;*/
	if (tbArr->Text->EndsWith("-") && e->KeyChar == ' ')
		e->Handled = true;
	/*if (tbArr->Text->EndsWith(" ") && e->KeyChar == ' ')
		e->Handled = true;*/
	if (tbArr->Text == "" && e->KeyChar == ' ')
		e->Handled = true;
	if (tbArr->SelectionStart < tbArr->Text->Length && tbArr->SelectionStart>0)
	{
		if (e->KeyChar == ' ' && (tbArr->Text[tbArr->SelectionStart-1] == ' ' || tbArr->Text[tbArr->SelectionStart] == ' '))
			e->Handled = true;
		if (e->KeyChar == '-' && tbArr->Text[tbArr->SelectionStart - 1] == '-' || tbArr->Text[tbArr->SelectionStart] == '-')
		{
			e->Handled = true;
		}
		if (tbArr->Text[tbArr->SelectionStart-1] != ' ')
			e->Handled = true;
		}
	if (tbArr->Text->EndsWith(" ") && e->KeyChar == ' ')
		e->Handled = true;
	//tbMinDiap->Text = Convert::ToString(tbArr->SelectionStart);
	//tbMaxDiap->Text = Convert::ToString(tbArr->Text->Length);
}
private: System::Void OpenFile_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadFile();
}
private: System::Void SaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFile();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
