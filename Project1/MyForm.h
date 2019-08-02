#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <vcclr.h>  
#include "ALGORITMY.h"
#include <msclr\marshal_cppstd.h>
//#include <future>
//#include <thread>
#include <boost/thread.hpp>
namespace boost {
	struct thread::dummy {};
}

//#include <boost/filesystem.hpp>

ALGORITMY obj;


namespace Project1 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	static int Second = 0;
	static int Minute = 0;
	String^ Sec = "";
	String^ Min = "";

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
	private: System::Windows::Forms::Button^  ConvertButton;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  pathFromUser;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  OpenFileButton;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::Button^  OpenFolderButton;
	public: System::Windows::Forms::ListBox^  listBox1;
	private:


	private:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  AcceptPath;
	private: System::Windows::Forms::Label^  XML_Items;
	private: System::Windows::Forms::Label^  JSONfiles;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  timeLabel;
	private: System::ComponentModel::IContainer^  components;





	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ConvertButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pathFromUser = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->OpenFileButton = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->OpenFolderButton = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->AcceptPath = (gcnew System::Windows::Forms::Button());
			this->XML_Items = (gcnew System::Windows::Forms::Label());
			this->JSONfiles = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ConvertButton
			// 
			this->ConvertButton->BackColor = System::Drawing::SystemColors::Highlight;
			this->ConvertButton->Location = System::Drawing::Point(341, 464);
			this->ConvertButton->Name = L"ConvertButton";
			this->ConvertButton->Size = System::Drawing::Size(156, 30);
			this->ConvertButton->TabIndex = 0;
			this->ConvertButton->Text = L"Конвертировать";
			this->ConvertButton->UseVisualStyleBackColor = false;
			this->ConvertButton->Click += gcnew System::EventHandler(this, &MyForm::convert_button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(392, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите путь к папке или файлу";
			// 
			// pathFromUser
			// 
			this->pathFromUser->Location = System::Drawing::Point(318, 40);
			this->pathFromUser->Name = L"pathFromUser";
			this->pathFromUser->Size = System::Drawing::Size(381, 22);
			this->pathFromUser->TabIndex = 2;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"xml";
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"(*.xml)|*.xml";
			this->openFileDialog1->Multiselect = true;
			this->openFileDialog1->Title = L"Выберите файлы XML";
			// 
			// OpenFileButton
			// 
			this->OpenFileButton->Location = System::Drawing::Point(318, 78);
			this->OpenFileButton->Name = L"OpenFileButton";
			this->OpenFileButton->Size = System::Drawing::Size(176, 23);
			this->OpenFileButton->TabIndex = 3;
			this->OpenFileButton->Text = L"Открыть файл(-ы)";
			this->OpenFileButton->UseVisualStyleBackColor = true;
			this->OpenFileButton->Click += gcnew System::EventHandler(this, &MyForm::OpenFileButton_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->Description = L"Выберите папку с файлами XML";
			// 
			// OpenFolderButton
			// 
			this->OpenFolderButton->Location = System::Drawing::Point(523, 78);
			this->OpenFolderButton->Name = L"OpenFolderButton";
			this->OpenFolderButton->Size = System::Drawing::Size(176, 23);
			this->OpenFolderButton->TabIndex = 5;
			this->OpenFolderButton->Text = L"Открыть папку";
			this->OpenFolderButton->UseVisualStyleBackColor = true;
			this->OpenFolderButton->Click += gcnew System::EventHandler(this, &MyForm::OpenFolderButton_Click);
			// 
			// listBox1
			// 
			this->listBox1->AllowDrop = true;
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(523, 107);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(493, 340);
			this->listBox1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(887, 464);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Ожидание ввода";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->AllowDrop = true;
			this->checkedListBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->HorizontalScrollbar = true;
			this->checkedListBox1->Location = System::Drawing::Point(15, 107);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(482, 344);
			this->checkedListBox1->TabIndex = 8;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// AcceptPath
			// 
			this->AcceptPath->Location = System::Drawing::Point(705, 40);
			this->AcceptPath->Name = L"AcceptPath";
			this->AcceptPath->Size = System::Drawing::Size(45, 23);
			this->AcceptPath->TabIndex = 9;
			this->AcceptPath->Text = L"OK";
			this->AcceptPath->UseVisualStyleBackColor = true;
			this->AcceptPath->Click += gcnew System::EventHandler(this, &MyForm::OKbutton_Click);
			// 
			// XML_Items
			// 
			this->XML_Items->AutoSize = true;
			this->XML_Items->Location = System::Drawing::Point(21, 462);
			this->XML_Items->Name = L"XML_Items";
			this->XML_Items->Size = System::Drawing::Size(137, 17);
			this->XML_Items->TabIndex = 10;
			this->XML_Items->Text = L"Файлов выбрано: 0";
			// 
			// JSONfiles
			// 
			this->JSONfiles->AutoSize = true;
			this->JSONfiles->Location = System::Drawing::Point(520, 462);
			this->JSONfiles->Name = L"JSONfiles";
			this->JSONfiles->Size = System::Drawing::Size(188, 17);
			this->JSONfiles->TabIndex = 11;
			this->JSONfiles->Text = L"Файлов конвертировано: 0";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timeLabel
			// 
			this->timeLabel->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->timeLabel->AutoSize = true;
			this->timeLabel->Location = System::Drawing::Point(887, 494);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(78, 17);
			this->timeLabel->TabIndex = 12;
			this->timeLabel->Text = L"Время: 0:0";
			// 
			// MyForm
			// 
			this->AcceptButton = this->AcceptPath;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1028, 520);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->JSONfiles);
			this->Controls->Add(this->XML_Items);
			this->Controls->Add(this->AcceptPath);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->OpenFolderButton);
			this->Controls->Add(this->OpenFileButton);
			this->Controls->Add(this->pathFromUser);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ConvertButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//Timer 

	}
	private: System::Void convert_button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
		obj.lastConvertedIndex = 0;
		obj.m_XML_files.clear();
		obj.m_JSON_files.clear();
		listBox1->Items->Clear();

		if (checkedListBox1->CheckedItems->Count != 0) {
			timer1->Enabled = 1;
			label2->Text = "Конвертация...";

		}
		else return;

		for (int i = 0; i < checkedListBox1->CheckedItems->Count; ++i) {
			string copy = msclr::interop::marshal_as<std::string>(checkedListBox1->CheckedItems[i]->ToString());
			obj.m_XML_files.push_back(copy);
		}
		boost::thread thrd(&handler, pair <vector<string>,vector<string>>(obj.m_XML_files,obj.m_JSON_files));
		ConvertButton->Enabled = 0;
	}
	private: System::Void OpenFileButton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK) {
			obj.lastConvertedIndex = 0;
			obj.m_XML_files.clear();
			obj.m_JSON_files.clear();
			listBox1->Items->Clear();
			checkedListBox1->Items->Clear();
			label2->Text = "Ожидание ввода";
			JSONfiles->Text = "Файлов конвертировано: 0";
			timeLabel->Text = "Время: 0:0";



			for (int it = 0; it < openFileDialog1->FileNames->Length; ++it) {
				string copy = msclr::interop::marshal_as<std::string>(openFileDialog1->FileNames[it]->ToString());
				obj.m_XML_files.push_back(copy);
				checkedListBox1->Items->Add(openFileDialog1->FileNames[it]);
				checkedListBox1->SetItemChecked(it, true);
				XML_Items->Text = "Выбрано файлов: " + checkedListBox1->CheckedItems->Count.ToString() + "/" +
					checkedListBox1->Items->Count.ToString();
			}
			ConvertButton->Enabled = true;
		}


	}
	private: System::Void OpenFolderButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (folderBrowserDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK) {
			obj.lastConvertedIndex = 0;
			obj.m_XML_files.clear();
			obj.m_JSON_files.clear();
			listBox1->Items->Clear();
			checkedListBox1->Items->Clear();
			label2->Text = "Ожидание ввода";
			JSONfiles->Text = "Файлов конвертировано: 0";
			timeLabel->Text = "Время: 0:0";

			obj.m_XML_files.clear();
			string copy = msclr::interop::marshal_as<std::string>(folderBrowserDialog1->SelectedPath);
			get_all(copy, ".xml", obj.m_XML_files);
			for (int it = 0; it < obj.m_XML_files.size();++it) {
				String^ sys = gcnew	String(obj.m_XML_files[it].c_str());
				checkedListBox1->Items->Add(sys);
				checkedListBox1->SetItemChecked(it, true);
				XML_Items->Text = "Выбрано файлов: " + checkedListBox1->CheckedItems->Count.ToString() + "/" +
					checkedListBox1->Items->Count.ToString();
			}
			ConvertButton->Enabled = true;
		}
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		XML_Items->Text = "Выбрано файлов: " + checkedListBox1->CheckedItems->Count.ToString() + "/" +
			checkedListBox1->Items->Count.ToString();
	}
	private: System::Void OKbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		string copy = msclr::interop::marshal_as<std::string>(pathFromUser->Text->ToString());
		if (copy!="") {
			label2->Text = "Ожидание ввода";
			JSONfiles->Text = "Файлов конвертировано: 0";
			timeLabel->Text = "Время: 0:0";
			obj.m_JSON_files.clear();
			obj.m_XML_files.clear();
			listBox1->Items->Clear();
			checkedListBox1->Items->Clear();
			get_all(copy, ".xml", obj.m_XML_files);
			checkedListBox1->Items->Clear();
			ConvertButton->Enabled = true;

			for (int it = 0; it < obj.m_XML_files.size(); ++it) {
				String^ sys = gcnew	String(obj.m_XML_files[it].c_str());
				checkedListBox1->Items->Add(sys);
				checkedListBox1->SetItemChecked(it, true);
				XML_Items->Text = "Выбрано файлов: " + checkedListBox1->CheckedItems->Count.ToString() + "/" +
					checkedListBox1->Items->Count.ToString();
			}
		}
		
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Second++;
		if (Second == 60) {
			Second = 0;
			Minute++;
		}
		Sec = Second.ToString();
		Min = Minute.ToString();
		timeLabel->Text = "Время: " + Min + ":" + Sec;

		for (int i = listBox1->Items->Count; i < obj.m_JSON_files.size(); ++i) {
				String^ sys = gcnew	String(obj.m_JSON_files[i].c_str());
				listBox1->Items->Add(sys);
		}
		JSONfiles->Text = "Файлов конвертировано: " + obj.m_JSON_files.size() + "/" + obj.lastConvertedIndex;
		if (obj.lastConvertedIndex == obj.m_XML_files.size()) {
			timer1->Enabled = 0;
			label2->Text = "Завершено";
		}
	}
};
}
