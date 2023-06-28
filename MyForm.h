#pragma once

namespace Project2 {

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

	private: System::Windows::Forms::TextBox^ TextBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;

	protected:

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
			System::Windows::Forms::Button^ button1;
			this->TextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			button1->Location = System::Drawing::Point(12, 24);
			button1->Name = L"button1";
			button1->Size = System::Drawing::Size(145, 60);
			button1->TabIndex = 0;
			button1->Text = L"Открыть файл";
			button1->UseVisualStyleBackColor = false;
			button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// TextBox1
			// 
			this->TextBox1->Location = System::Drawing::Point(206, 24);
			this->TextBox1->Multiline = true;
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->Size = System::Drawing::Size(647, 594);
			this->TextBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(12, 97);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 60);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Посчитать количество слов и пробелов";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 205);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 307);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(12, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 60);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Посчитать предложения";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(865, 630);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->TextBox1);
			this->Controls->Add(button1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Name = L"MyForm";
			this->Text = L"Работа с тектовым файлом";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		String^ fileContent;
		int countWords(String^ filename)
		{
			int count = 0;			
		
				// Разбиваем строку на слова с помощью пробелов и знаков препинания
				array<Char>^ delimiters = { ' ', ',', '.', ':', ';', '!', '?', '-', '(', ')' };
				array<String^>^ words = fileContent->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);

				// Увеличиваем счетчик слов на количество слов в текущей строке
				count += words->Length;

			return count;
		}
		int countWhitespace(String^ filename)
		{
			int count = 0;			
			char delimiters = ' ';
			for (int i = 0; i < filename->Length; i++) {
				if (filename[i] == delimiters)
					count++;
			}
			return count;
		}
		int countProposal(String^ filename)
		{
			int count = 0;

			// Разбиваем строку на предложения с помощью пробелов и знаков препинания
			array<Char>^ delimiters = { '.', '!', '?' };
			array<String^>^ proposal = fileContent->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);

			count += proposal->Length;
			return count;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Открываем диалоговое окно выбора файла

		openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		openFileDialog1->Title = "Выберите файл для чтения";

		// Если пользователь выбрал файл и нажал кнопку "Открыть"
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Открываем файл для чтения
			System::IO::StreamReader^ sr = gcnew
				System::IO::StreamReader(openFileDialog1->FileName);

			// Читаем данные из файла и выводим их в текстовое поле TextBox1
			fileContent = sr->ReadToEnd();
			TextBox1->Text = fileContent;
			// Закрываем файл
			sr->Close();
		}
			
	};

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		
			// Вызываем функцию countWords для подсчета количества слов в файле
			int wordCount = countWords(fileContent);
			int whitespaceCount = countWhitespace(fileContent);
			// Выводим результат в текстовое поле TextBox1
			label1->Text = "Количество слов в файле: " + wordCount;	
			label2->Text = "Количество пробелов в файле: " + whitespaceCount;
	};
	
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int proposalCount = countProposal(fileContent);
		label3->Text = "Количество предложений в файле:" + proposalCount;
	}
};
}


