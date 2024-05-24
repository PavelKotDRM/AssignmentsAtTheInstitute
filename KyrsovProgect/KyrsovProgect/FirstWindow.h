#pragma once

#include "DataSorege.h"
#include <msclr\marshal_cppstd.h>

namespace KyrsovProgect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для FirstWindow
	/// </summary>
	public ref class FirstWindow : public System::Windows::Forms::Form
	{
	public:
		FirstWindow(void)
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
		~FirstWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: DataSorege^ Data;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Menu;
	private: System::Windows::Forms::ToolStripMenuItem^ AddInUnite;
	private: System::Windows::Forms::ToolStripMenuItem^ DeleteUnite;
	private: System::Windows::Forms::ToolStripMenuItem^ ExportUnite;



	private: System::Windows::Forms::Panel^ PanelFind;
	private: System::Windows::Forms::ToolStripMenuItem^ ImportUnite;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ FindUnite;
	private: System::Windows::Forms::TextBox^ DataFind;

	private: System::Windows::Forms::CheckedListBox^ checkedListBoxFind;
	private: System::Windows::Forms::Panel^ PanelDeleted;
	private: System::Windows::Forms::TextBox^ textBoxDelete;


	private: System::Windows::Forms::CheckedListBox^ checkedListBoxDeleted;

	private: System::Windows::Forms::Button^ ButtomDelete;
	private: System::Windows::Forms::Panel^ PanelAdd;

	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::ListBox^ listBoxOutData;
	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Label^ labProffesion;
	private: System::Windows::Forms::TextBox^ textBoxProffesion;


	private: System::Windows::Forms::Label^ labSubvision;
	private: System::Windows::Forms::TextBox^ textBoxSubvision;


	private: System::Windows::Forms::Label^ labBerthday;

	private: System::Windows::Forms::Label^ labAge;


	private: System::Windows::Forms::Label^ LabName;
	private: System::Windows::Forms::MonthCalendar^ monthCalendarBerthday;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownAge;








	protected:



	protected:

	protected:


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddInUnite = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DeleteUnite = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FindUnite = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExportUnite = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ImportUnite = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PanelFind = (gcnew System::Windows::Forms::Panel());
			this->listBoxOutData = (gcnew System::Windows::Forms::ListBox());
			this->checkedListBoxFind = (gcnew System::Windows::Forms::CheckedListBox());
			this->DataFind = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PanelDeleted = (gcnew System::Windows::Forms::Panel());
			this->textBoxDelete = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBoxDeleted = (gcnew System::Windows::Forms::CheckedListBox());
			this->ButtomDelete = (gcnew System::Windows::Forms::Button());
			this->PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->numericUpDownAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->monthCalendarBerthday = (gcnew System::Windows::Forms::MonthCalendar());
			this->labProffesion = (gcnew System::Windows::Forms::Label());
			this->textBoxProffesion = (gcnew System::Windows::Forms::TextBox());
			this->labSubvision = (gcnew System::Windows::Forms::Label());
			this->textBoxSubvision = (gcnew System::Windows::Forms::TextBox());
			this->labBerthday = (gcnew System::Windows::Forms::Label());
			this->labAge = (gcnew System::Windows::Forms::Label());
			this->LabName = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->PanelFind->SuspendLayout();
			this->PanelDeleted->SuspendLayout();
			this->PanelAdd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAge))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Menu });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Menu
			// 
			this->Menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->AddInUnite, this->DeleteUnite,
					this->FindUnite, this->ExportUnite, this->ImportUnite
			});
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(50, 20);
			this->Menu->Text = L"Menu";
			// 
			// AddInUnite
			// 
			this->AddInUnite->Name = L"AddInUnite";
			this->AddInUnite->Size = System::Drawing::Size(126, 22);
			this->AddInUnite->Text = L"Добавить";
			this->AddInUnite->Click += gcnew System::EventHandler(this, &FirstWindow::AddUniteEvent);
			this->AddInUnite->DoubleClick += gcnew System::EventHandler(this, &FirstWindow::AddUniteEvent);
			// 
			// DeleteUnite
			// 
			this->DeleteUnite->Name = L"DeleteUnite";
			this->DeleteUnite->Size = System::Drawing::Size(126, 22);
			this->DeleteUnite->Text = L"Удалить";
			this->DeleteUnite->Click += gcnew System::EventHandler(this, &FirstWindow::ClikDeleteUnite);
			this->DeleteUnite->DoubleClick += gcnew System::EventHandler(this, &FirstWindow::ClikDeleteUnite);
			// 
			// FindUnite
			// 
			this->FindUnite->Name = L"FindUnite";
			this->FindUnite->Size = System::Drawing::Size(126, 22);
			this->FindUnite->Text = L"Найти";
			this->FindUnite->Click += gcnew System::EventHandler(this, &FirstWindow::FindUniteEvent);
			this->FindUnite->DoubleClick += gcnew System::EventHandler(this, &FirstWindow::FindUniteEvent);
			// 
			// ExportUnite
			// 
			this->ExportUnite->Name = L"ExportUnite";
			this->ExportUnite->Size = System::Drawing::Size(126, 22);
			this->ExportUnite->Text = L"Export";
			this->ExportUnite->Click += gcnew System::EventHandler(this, &FirstWindow::ExportUniteMassEvent);
			this->ExportUnite->DoubleClick += gcnew System::EventHandler(this, &FirstWindow::ExportUniteMassEvent);
			// 
			// ImportUnite
			// 
			this->ImportUnite->Name = L"ImportUnite";
			this->ImportUnite->Size = System::Drawing::Size(126, 22);
			this->ImportUnite->Text = L"Import";
			this->ImportUnite->Click += gcnew System::EventHandler(this, &FirstWindow::ImportMassUniteEvent);
			this->ImportUnite->DoubleClick += gcnew System::EventHandler(this, &FirstWindow::ImportMassUniteEvent);
			// 
			// PanelFind
			// 
			this->PanelFind->Controls->Add(this->listBoxOutData);
			this->PanelFind->Controls->Add(this->checkedListBoxFind);
			this->PanelFind->Controls->Add(this->DataFind);
			this->PanelFind->Controls->Add(this->button1);
			this->PanelFind->Location = System::Drawing::Point(0, 27);
			this->PanelFind->Name = L"PanelFind";
			this->PanelFind->Size = System::Drawing::Size(581, 389);
			this->PanelFind->TabIndex = 1;
			this->PanelFind->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FirstWindow::PanelEvent);
			// 
			// listBoxOutData
			// 
			this->listBoxOutData->Location = System::Drawing::Point(4, 3);
			this->listBoxOutData->Name = L"listBoxOutData";
			this->listBoxOutData->Size = System::Drawing::Size(574, 290);
			this->listBoxOutData->TabIndex = 4;
			// 
			// checkedListBoxFind
			// 
			this->checkedListBoxFind->FormattingEnabled = true;
			this->checkedListBoxFind->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Name", L"Age", L"Berthday", L"Subvision",
					L"Proffesion", L"all"
			});
			this->checkedListBoxFind->Location = System::Drawing::Point(93, 295);
			this->checkedListBoxFind->MultiColumn = true;
			this->checkedListBoxFind->Name = L"checkedListBoxFind";
			this->checkedListBoxFind->Size = System::Drawing::Size(120, 94);
			this->checkedListBoxFind->TabIndex = 3;
			// 
			// DataFind
			// 
			this->DataFind->Location = System::Drawing::Point(218, 295);
			this->DataFind->Name = L"DataFind";
			this->DataFind->Size = System::Drawing::Size(360, 20);
			this->DataFind->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FirstWindow::FindDataEvent);
			// 
			// PanelDeleted
			// 
			this->PanelDeleted->Controls->Add(this->textBoxDelete);
			this->PanelDeleted->Controls->Add(this->checkedListBoxDeleted);
			this->PanelDeleted->Controls->Add(this->ButtomDelete);
			this->PanelDeleted->Location = System::Drawing::Point(587, 30);
			this->PanelDeleted->Name = L"PanelDeleted";
			this->PanelDeleted->Size = System::Drawing::Size(462, 132);
			this->PanelDeleted->TabIndex = 2;
			// 
			// textBoxDelete
			// 
			this->textBoxDelete->Location = System::Drawing::Point(84, 6);
			this->textBoxDelete->Name = L"textBoxDelete";
			this->textBoxDelete->Size = System::Drawing::Size(348, 20);
			this->textBoxDelete->TabIndex = 5;
			// 
			// checkedListBoxDeleted
			// 
			this->checkedListBoxDeleted->FormattingEnabled = true;
			this->checkedListBoxDeleted->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Name", L"Age", L"Berthday", L"Subvision",
					L"Proffesion", L"Index"
			});
			this->checkedListBoxDeleted->Location = System::Drawing::Point(3, 32);
			this->checkedListBoxDeleted->MultiColumn = true;
			this->checkedListBoxDeleted->Name = L"checkedListBoxDeleted";
			this->checkedListBoxDeleted->Size = System::Drawing::Size(120, 94);
			this->checkedListBoxDeleted->TabIndex = 4;
			// 
			// ButtomDelete
			// 
			this->ButtomDelete->Location = System::Drawing::Point(3, 3);
			this->ButtomDelete->Name = L"ButtomDelete";
			this->ButtomDelete->Size = System::Drawing::Size(75, 23);
			this->ButtomDelete->TabIndex = 0;
			this->ButtomDelete->Text = L"Delete";
			this->ButtomDelete->UseVisualStyleBackColor = true;
			this->ButtomDelete->Click += gcnew System::EventHandler(this, &FirstWindow::DeletedUniteEvent);
			// 
			// PanelAdd
			// 
			this->PanelAdd->Controls->Add(this->numericUpDownAge);
			this->PanelAdd->Controls->Add(this->monthCalendarBerthday);
			this->PanelAdd->Controls->Add(this->labProffesion);
			this->PanelAdd->Controls->Add(this->textBoxProffesion);
			this->PanelAdd->Controls->Add(this->labSubvision);
			this->PanelAdd->Controls->Add(this->textBoxSubvision);
			this->PanelAdd->Controls->Add(this->labBerthday);
			this->PanelAdd->Controls->Add(this->labAge);
			this->PanelAdd->Controls->Add(this->LabName);
			this->PanelAdd->Controls->Add(this->textBoxName);
			this->PanelAdd->Controls->Add(this->buttonAdd);
			this->PanelAdd->Location = System::Drawing::Point(590, 168);
			this->PanelAdd->Name = L"PanelAdd";
			this->PanelAdd->Size = System::Drawing::Size(459, 248);
			this->PanelAdd->TabIndex = 3;
			// 
			// numericUpDownAge
			// 
			this->numericUpDownAge->Location = System::Drawing::Point(174, 36);
			this->numericUpDownAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->numericUpDownAge->Name = L"numericUpDownAge";
			this->numericUpDownAge->Size = System::Drawing::Size(150, 20);
			this->numericUpDownAge->TabIndex = 12;
			this->numericUpDownAge->Leave += gcnew System::EventHandler(this, &FirstWindow::numericUpDownAge_Leave);
			// 
			// monthCalendarBerthday
			// 
			this->monthCalendarBerthday->Location = System::Drawing::Point(286, 71);
			this->monthCalendarBerthday->Name = L"monthCalendarBerthday";
			this->monthCalendarBerthday->TabIndex = 11;
			this->monthCalendarBerthday->Leave += gcnew System::EventHandler(this, &FirstWindow::LeavCalendarEvent);
			// 
			// labProffesion
			// 
			this->labProffesion->AutoSize = true;
			this->labProffesion->Location = System::Drawing::Point(10, 100);
			this->labProffesion->Name = L"labProffesion";
			this->labProffesion->Size = System::Drawing::Size(54, 13);
			this->labProffesion->TabIndex = 10;
			this->labProffesion->Text = L"Proffesion";
			// 
			// textBoxProffesion
			// 
			this->textBoxProffesion->Location = System::Drawing::Point(65, 97);
			this->textBoxProffesion->Name = L"textBoxProffesion";
			this->textBoxProffesion->Size = System::Drawing::Size(150, 20);
			this->textBoxProffesion->TabIndex = 9;
			// 
			// labSubvision
			// 
			this->labSubvision->AutoSize = true;
			this->labSubvision->Location = System::Drawing::Point(10, 74);
			this->labSubvision->Name = L"labSubvision";
			this->labSubvision->Size = System::Drawing::Size(53, 13);
			this->labSubvision->TabIndex = 8;
			this->labSubvision->Text = L"Subvision";
			// 
			// textBoxSubvision
			// 
			this->textBoxSubvision->Location = System::Drawing::Point(65, 71);
			this->textBoxSubvision->Name = L"textBoxSubvision";
			this->textBoxSubvision->Size = System::Drawing::Size(150, 20);
			this->textBoxSubvision->TabIndex = 7;
			// 
			// labBerthday
			// 
			this->labBerthday->AutoSize = true;
			this->labBerthday->Location = System::Drawing::Point(343, 49);
			this->labBerthday->Name = L"labBerthday";
			this->labBerthday->Size = System::Drawing::Size(49, 13);
			this->labBerthday->TabIndex = 6;
			this->labBerthday->Text = L"Berthday";
			// 
			// labAge
			// 
			this->labAge->AutoSize = true;
			this->labAge->Location = System::Drawing::Point(119, 36);
			this->labAge->Name = L"labAge";
			this->labAge->Size = System::Drawing::Size(26, 13);
			this->labAge->TabIndex = 4;
			this->labAge->Text = L"Age";
			// 
			// LabName
			// 
			this->LabName->AutoSize = true;
			this->LabName->Location = System::Drawing::Point(119, 10);
			this->LabName->Name = L"LabName";
			this->LabName->Size = System::Drawing::Size(35, 13);
			this->LabName->TabIndex = 2;
			this->LabName->Text = L"Name";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(174, 7);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(150, 20);
			this->textBoxName->TabIndex = 1;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(4, 4);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 0;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &FirstWindow::AddEvent);
			// 
			// FirstWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 504);
			this->Controls->Add(this->PanelAdd);
			this->Controls->Add(this->PanelDeleted);
			this->Controls->Add(this->PanelFind);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FirstWindow";
			this->Text = L"FirstWindow";
			this->Load += gcnew System::EventHandler(this, &FirstWindow::FirstWindow_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->PanelFind->ResumeLayout(false);
			this->PanelFind->PerformLayout();
			this->PanelDeleted->ResumeLayout(false);
			this->PanelDeleted->PerformLayout();
			this->PanelAdd->ResumeLayout(false);
			this->PanelAdd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAge))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FirstWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		this->PanelFind->Visible = false;
		this->PanelDeleted->Visible = false;
		this->PanelAdd->Visible = false;
	}
	private: System::Void ClikDeleteUnite(System::Object^ sender, System::EventArgs^ e) {
		this->PanelAdd->Visible = false;
		this->PanelFind->Visible = false;
		this->PanelDeleted->Visible = true;
	}
	private: System::Void AddUniteEvent(System::Object^ sender, System::EventArgs^ e) {
		this->PanelDeleted->Visible = false;
		this->PanelFind->Visible = false;
		this->PanelAdd->Visible = true;
	}
	private: System::Void FindUniteEvent(System::Object^ sender, System::EventArgs^ e) {
		this->PanelDeleted->Visible = false;
		this->PanelAdd->Visible = false;
		this->PanelFind->Visible = true;
	}
	private: System::Void PanelEvent(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {   //Why
	}
	private: System::Void ExportUniteMassEvent(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ImportMassUniteEvent(System::Object^ sender, System::EventArgs^ e) {
	}

		   // Вкладка найти ---------------------------------------------------------------------------
	private: System::Void FindDataEvent(System::Object^ sender, System::EventArgs^ e) {
		if (this->Data == nullptr)
		{
			this->PanelDeleted->Visible = false;
			this->PanelFind->Visible = false;
			this->PanelAdd->Visible = true;
			return;
		}
		int i = this->checkedListBoxFind->SelectedIndex;
		this->checkedListBoxFind->ClearSelected();
		Unite tmpU;
		int qunt = this->Data->getQuantity();
		this->listBoxOutData->Items->Clear();
		switch (i)
		{
		case 0:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				if (tmpU.name == msclr::interop::marshal_as<std::string>(this->DataFind->Text)) {
					System::String^ tmp;
					tmpU = this->Data->getUnite(i);
					tmp += "Name : ";
					tmp += gcnew System::String(tmpU.name.c_str());
					tmp += " Age : ";
					tmp += tmpU.age;
					tmp += " Birthday : ";
					tmp += gcnew System::String(tmpU.birthday.c_str());
					tmp += " Subdvision : ";
					tmp += gcnew System::String(tmpU.subdivision.c_str());
					tmp += " Profession : ";
					tmp += gcnew System::String(tmpU.profession.c_str());
					this->listBoxOutData->Items->Add(tmp);
				}
				this->listBoxOutData->AutoSize;
			}
			break;
		case 1:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				if (tmpU.age == Convert::ToInt32(this->DataFind->Text)) {
					System::String^ tmp;
					tmpU = this->Data->getUnite(i);
					tmp += "Name : ";
					tmp += gcnew System::String(tmpU.name.c_str());
					tmp += " Age : ";
					tmp += tmpU.age;
					tmp += " Birthday : ";
					tmp += gcnew System::String(tmpU.birthday.c_str());
					tmp += " Subdvision : ";
					tmp += gcnew System::String(tmpU.subdivision.c_str());
					tmp += " Profession : ";
					tmp += gcnew System::String(tmpU.profession.c_str());
					this->listBoxOutData->Items->Add(tmp);
				}
				this->listBoxOutData->AutoSize;
			}
			break;
		case 2:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				DateTime Time = this->monthCalendarBerthday->SelectionStart;
				if (tmpU.birthday == msclr::interop::marshal_as<std::string>(this->DataFind->Text)) {
					System::String^ tmp;
					tmpU = this->Data->getUnite(i);
					tmp += "Name : ";
					tmp += gcnew System::String(tmpU.name.c_str());
					tmp += " Age : ";
					tmp += tmpU.age;
					tmp += " Birthday : ";
					tmp += gcnew System::String(tmpU.birthday.c_str());
					tmp += " Subdvision : ";
					tmp += gcnew System::String(tmpU.subdivision.c_str());
					tmp += " Profession : ";
					tmp += gcnew System::String(tmpU.profession.c_str());
					this->listBoxOutData->Items->Add(tmp);
				}
				this->listBoxOutData->AutoSize;
			}
			break;
		case 3:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				if (tmpU.subdivision == msclr::interop::marshal_as<std::string>(this->DataFind->Text)) {
					System::String^ tmp;
					tmpU = this->Data->getUnite(i);
					tmp += "Name : ";
					tmp += gcnew System::String(tmpU.name.c_str());
					tmp += " Age : ";
					tmp += tmpU.age;
					tmp += " Birthday : ";
					tmp += gcnew System::String(tmpU.birthday.c_str());
					tmp += " Subdvision : ";
					tmp += gcnew System::String(tmpU.subdivision.c_str());
					tmp += " Profession : ";
					tmp += gcnew System::String(tmpU.profession.c_str());
					this->listBoxOutData->Items->Add(tmp);
				}
				this->listBoxOutData->AutoSize;
			}
			break;
		case 4:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				if (tmpU.profession == msclr::interop::marshal_as<std::string>(this->DataFind->Text)) {
					System::String^ tmp;
					tmpU = this->Data->getUnite(i);
					tmp += "Name : ";
					tmp += gcnew System::String(tmpU.name.c_str());
					tmp += " Age : ";
					tmp += tmpU.age;
					tmp += " Birthday : ";
					tmp += gcnew System::String(tmpU.birthday.c_str());
					tmp += " Subdvision : ";
					tmp += gcnew System::String(tmpU.subdivision.c_str());
					tmp += " Profession : ";
					tmp += gcnew System::String(tmpU.profession.c_str());
					this->listBoxOutData->Items->Add(tmp);
				}
				this->listBoxOutData->AutoSize;
			}
		case 5:
			//int qunt = this->Data->getQuantity();
			for (size_t i = 0; i < qunt; i++)
			{
				System::String^ tmp;
				tmpU = this->Data->getUnite(i);
				tmp += "Name : ";
				tmp += gcnew System::String(tmpU.name.c_str());
				tmp += " Age : ";
				tmp += tmpU.age;
				tmp += " Birthday : ";
				tmp += gcnew System::String(tmpU.birthday.c_str());
				tmp += " Subdvision : ";
				tmp += gcnew System::String(tmpU.subdivision.c_str());
				tmp += " Profession : ";
				tmp += gcnew System::String(tmpU.profession.c_str());
				this->listBoxOutData->Items->Add(tmp);
			}
			this->listBoxOutData->AutoSize;
			break;
		default:
			//int qunt = this->Data->getQuantity();
			for (size_t i = 0; i < qunt; i++)
			{
				System::String^ tmp;
				tmpU = this->Data->getUnite(i);
				tmp += "Name : ";
				tmp += gcnew System::String(tmpU.name.c_str());
				tmp += " Age : ";
				tmp += tmpU.age;
				tmp += " Birthday : ";
				tmp += gcnew System::String(tmpU.birthday.c_str());
				tmp += " Subdvision : ";
				tmp += gcnew System::String(tmpU.subdivision.c_str());
				tmp += " Profession : ";
				tmp += gcnew System::String(tmpU.profession.c_str());
				this->listBoxOutData->Items->Add(tmp);
			}
			this->listBoxOutData->AutoSize;
			break;
		}
	}


	// Вкладка deleted ---------------------------------------------------------------------------
	private: System::Void DeletedUniteEvent(System::Object^ sender, System::EventArgs^ e) {
		if (this->Data == nullptr)
		{
			this->PanelDeleted->Visible = false;
			this->PanelFind->Visible = false;
			this->PanelAdd->Visible = true;
			return;
		}
		int i = this->checkedListBoxDeleted->SelectedIndex;
		this->checkedListBoxDeleted->ClearSelected();
		Unite tmpU;
		int qunt = this->Data->getQuantity();
		switch (i)
		{
		case 0:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				if (i == this->Data->getQuantity())break;
				tmpU = this->Data->getUnite(i);
				if (tmpU.name == msclr::interop::marshal_as<std::string>(this->textBoxDelete->Text)) {
					this->Data->deleteUnite(i);
				}
			}
			break;
		case 1:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				if (tmpU.age == Convert::ToInt32(this->numericUpDownAge->Text)) {
					this->Data->deleteUnite(i);
				}
			}
			break;
		case 2:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				DateTime Time = this->monthCalendarBerthday->SelectionStart;
				if (tmpU.birthday == msclr::interop::marshal_as<std::string>(this->textBoxDelete->Text)) {
					this->Data->deleteUnite(i);
				}
			}
			break;
		case 3:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				if (tmpU.subdivision == msclr::interop::marshal_as<std::string>(this->textBoxDelete->Text)) {
					this->Data->deleteUnite(i);
				}
			}
			break;
		case 4:
			//int qunt = this->Data->getQuantity();
			for (int i = 0; i < qunt; i++)
			{
				tmpU = this->Data->getUnite(i);
				if (tmpU.profession == msclr::interop::marshal_as<std::string>(this->textBoxDelete->Text)) {
					this->Data->deleteUnite(i);
				}
			}
			break;
		case 5:
			if(Convert::ToInt32(this->textBoxDelete->Text) < this->Data->getQuantity())this->Data->deleteUnite(Convert::ToInt32(this->textBoxDelete->Text));
			break;
		default:
			break;
		}
	}
		   // Вкладка Add ---------------------------------------------------------------------------
	private: System::Void AddEvent(System::Object^ sender, System::EventArgs^ e) {
		if (this->Data == nullptr)
		{
			std::string name = msclr::interop::marshal_as<std::string>(this->textBoxName->Text);
			int age = Convert::ToInt32(this->numericUpDownAge->Text);
			DateTime Time = this->monthCalendarBerthday->SelectionStart;
			std::string Birthday = msclr::interop::marshal_as<std::string>(Time.ToString());
			std::string Subdvision = msclr::interop::marshal_as<std::string>(this->textBoxSubvision->Text);
			std::string Profession = msclr::interop::marshal_as<std::string>(this->textBoxProffesion->Text);
			this->Data = gcnew DataSorege(name, age, Birthday, Subdvision, Profession);
		}
		else {
			std::string name = msclr::interop::marshal_as<std::string>(this->textBoxName->Text);
			int age = Convert::ToInt32(this->numericUpDownAge->Value);
			DateTime Time = this->monthCalendarBerthday->SelectionStart;
			std::string Birthday = msclr::interop::marshal_as<std::string>(Time.ToString());
			std::string Subdvision = msclr::interop::marshal_as<std::string>(this->textBoxSubvision->Text);
			std::string Profession = msclr::interop::marshal_as<std::string>(this->textBoxProffesion->Text);
			this->Data->addUnite(name, age, Birthday, Subdvision, Profession);
		}
		this->textBoxName->Text="";
		this->numericUpDownAge->Value = 0;
		this->textBoxSubvision->Text = "";
		this->textBoxProffesion->Text = "";
	}
	private: System::Void textBoxAge_Leave(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LeavCalendarEvent(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void numericUpDownAge_Leave(System::Object^ sender, System::EventArgs^ e) {
		int year = Convert::ToInt32(this->numericUpDownAge->Value);
		DateTime t = DateTime::Now;
		DateTime t2 = DateTime(t.Year-year, t.Month, t.Day, t.Hour, t.Minute, t.Second);
		this->monthCalendarBerthday->SelectionEnd = t2;
	}
};
}