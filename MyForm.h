#pragma once
#include <climits>
#include <vector>

namespace Project19 {

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
	private: System::Windows::Forms::DataGridView^ grdMatrix;
	protected:

	private: System::Windows::Forms::Button^ btnAddStringMatrix;
	private: System::Windows::Forms::Button^ btnAddColumnMatrix;
	private: System::Windows::Forms::Button^ btnRemoveStringMatrix;
	private: System::Windows::Forms::Button^ btnRemoveColumnMatrix;
	private: System::Windows::Forms::DataGridView^ grdVector;
	private: System::Windows::Forms::Button^ btnRemoveColumnVector;

	private: System::Windows::Forms::Button^ btnRemoveStringVector;

	private: System::Windows::Forms::Button^ btnAddColumnVector;

	private: System::Windows::Forms::Button^ btnAddSrtingVector;
	private: System::Windows::Forms::Button^ btnMultNumber;
	private: System::Windows::Forms::TextBox^ txtNumber;
	private: System::Windows::Forms::Label^ lblNumber;
	private: System::Windows::Forms::ErrorProvider^ errorProviderNumber;
	private: System::Windows::Forms::Button^ btnMultVector;
	private: System::Windows::Forms::DataGridView^ grdResult;
	private: System::Windows::Forms::Button^ btnRemoveAll;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnScalar;
	private: System::Windows::Forms::Label^ lblScal;
	private: System::Windows::Forms::TextBox^ txtOutputScal;



	private: System::Windows::Forms::Button^ btnVector;
	private: System::Windows::Forms::Button^ btnTrans;
	private: System::Windows::Forms::Button^ btnOpred;
	private: System::Windows::Forms::TextBox^ txtOutputOpr;
	private: System::Windows::Forms::Label^ lblOpredel;
	private: System::Windows::Forms::TextBox^ txtOutputRank;

	private: System::Windows::Forms::Label^ lblRank;
	private: System::Windows::Forms::Button^ btnRank;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;





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
			this->components = (gcnew System::ComponentModel::Container());
			this->grdMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->btnAddStringMatrix = (gcnew System::Windows::Forms::Button());
			this->btnAddColumnMatrix = (gcnew System::Windows::Forms::Button());
			this->btnRemoveStringMatrix = (gcnew System::Windows::Forms::Button());
			this->btnRemoveColumnMatrix = (gcnew System::Windows::Forms::Button());
			this->grdVector = (gcnew System::Windows::Forms::DataGridView());
			this->btnRemoveColumnVector = (gcnew System::Windows::Forms::Button());
			this->btnRemoveStringVector = (gcnew System::Windows::Forms::Button());
			this->btnAddColumnVector = (gcnew System::Windows::Forms::Button());
			this->btnAddSrtingVector = (gcnew System::Windows::Forms::Button());
			this->btnMultNumber = (gcnew System::Windows::Forms::Button());
			this->txtNumber = (gcnew System::Windows::Forms::TextBox());
			this->lblNumber = (gcnew System::Windows::Forms::Label());
			this->errorProviderNumber = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->btnMultVector = (gcnew System::Windows::Forms::Button());
			this->grdResult = (gcnew System::Windows::Forms::DataGridView());
			this->btnRemoveAll = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnScalar = (gcnew System::Windows::Forms::Button());
			this->txtOutputScal = (gcnew System::Windows::Forms::TextBox());
			this->lblScal = (gcnew System::Windows::Forms::Label());
			this->btnVector = (gcnew System::Windows::Forms::Button());
			this->btnTrans = (gcnew System::Windows::Forms::Button());
			this->btnOpred = (gcnew System::Windows::Forms::Button());
			this->lblOpredel = (gcnew System::Windows::Forms::Label());
			this->txtOutputOpr = (gcnew System::Windows::Forms::TextBox());
			this->btnRank = (gcnew System::Windows::Forms::Button());
			this->lblRank = (gcnew System::Windows::Forms::Label());
			this->txtOutputRank = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdMatrix))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdVector))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderNumber))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdResult))->BeginInit();
			this->SuspendLayout();
			// 
			// grdMatrix
			// 
			this->grdMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdMatrix->Location = System::Drawing::Point(57, 77);
			this->grdMatrix->Name = L"grdMatrix";
			this->grdMatrix->Size = System::Drawing::Size(240, 150);
			this->grdMatrix->TabIndex = 0;
			// 
			// btnAddStringMatrix
			// 
			this->btnAddStringMatrix->Location = System::Drawing::Point(57, 233);
			this->btnAddStringMatrix->Name = L"btnAddStringMatrix";
			this->btnAddStringMatrix->Size = System::Drawing::Size(112, 23);
			this->btnAddStringMatrix->TabIndex = 1;
			this->btnAddStringMatrix->Text = L"Добавить строку";
			this->btnAddStringMatrix->UseVisualStyleBackColor = true;
			this->btnAddStringMatrix->Click += gcnew System::EventHandler(this, &MyForm::btnAddStringMatrix_Click);
			// 
			// btnAddColumnMatrix
			// 
			this->btnAddColumnMatrix->Location = System::Drawing::Point(57, 262);
			this->btnAddColumnMatrix->Name = L"btnAddColumnMatrix";
			this->btnAddColumnMatrix->Size = System::Drawing::Size(112, 23);
			this->btnAddColumnMatrix->TabIndex = 2;
			this->btnAddColumnMatrix->Text = L"Добавить столбец";
			this->btnAddColumnMatrix->UseVisualStyleBackColor = true;
			this->btnAddColumnMatrix->Click += gcnew System::EventHandler(this, &MyForm::btnAddColumnMatrix_Click);
			// 
			// btnRemoveStringMatrix
			// 
			this->btnRemoveStringMatrix->Location = System::Drawing::Point(185, 233);
			this->btnRemoveStringMatrix->Name = L"btnRemoveStringMatrix";
			this->btnRemoveStringMatrix->Size = System::Drawing::Size(112, 23);
			this->btnRemoveStringMatrix->TabIndex = 3;
			this->btnRemoveStringMatrix->Text = L"Удалить строку";
			this->btnRemoveStringMatrix->UseVisualStyleBackColor = true;
			this->btnRemoveStringMatrix->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveStringMatrix_Click);
			// 
			// btnRemoveColumnMatrix
			// 
			this->btnRemoveColumnMatrix->Location = System::Drawing::Point(185, 262);
			this->btnRemoveColumnMatrix->Name = L"btnRemoveColumnMatrix";
			this->btnRemoveColumnMatrix->Size = System::Drawing::Size(112, 23);
			this->btnRemoveColumnMatrix->TabIndex = 4;
			this->btnRemoveColumnMatrix->Text = L"Удалить столбец";
			this->btnRemoveColumnMatrix->UseVisualStyleBackColor = true;
			this->btnRemoveColumnMatrix->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveColumnMatrix_Click);
			// 
			// grdVector
			// 
			this->grdVector->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdVector->Location = System::Drawing::Point(321, 77);
			this->grdVector->Name = L"grdVector";
			this->grdVector->Size = System::Drawing::Size(240, 150);
			this->grdVector->TabIndex = 5;
			// 
			// btnRemoveColumnVector
			// 
			this->btnRemoveColumnVector->Location = System::Drawing::Point(449, 262);
			this->btnRemoveColumnVector->Name = L"btnRemoveColumnVector";
			this->btnRemoveColumnVector->Size = System::Drawing::Size(112, 23);
			this->btnRemoveColumnVector->TabIndex = 9;
			this->btnRemoveColumnVector->Text = L"Удалить столбец";
			this->btnRemoveColumnVector->UseVisualStyleBackColor = true;
			this->btnRemoveColumnVector->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveColumnVector_Click);
			// 
			// btnRemoveStringVector
			// 
			this->btnRemoveStringVector->Location = System::Drawing::Point(449, 233);
			this->btnRemoveStringVector->Name = L"btnRemoveStringVector";
			this->btnRemoveStringVector->Size = System::Drawing::Size(112, 23);
			this->btnRemoveStringVector->TabIndex = 8;
			this->btnRemoveStringVector->Text = L"Удалить строку";
			this->btnRemoveStringVector->UseVisualStyleBackColor = true;
			this->btnRemoveStringVector->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveStringVector_Click);
			// 
			// btnAddColumnVector
			// 
			this->btnAddColumnVector->Location = System::Drawing::Point(321, 262);
			this->btnAddColumnVector->Name = L"btnAddColumnVector";
			this->btnAddColumnVector->Size = System::Drawing::Size(112, 23);
			this->btnAddColumnVector->TabIndex = 7;
			this->btnAddColumnVector->Text = L"Добавить столбец";
			this->btnAddColumnVector->UseVisualStyleBackColor = true;
			this->btnAddColumnVector->Click += gcnew System::EventHandler(this, &MyForm::btnAddColumnVector_Click);
			// 
			// btnAddSrtingVector
			// 
			this->btnAddSrtingVector->Location = System::Drawing::Point(321, 233);
			this->btnAddSrtingVector->Name = L"btnAddSrtingVector";
			this->btnAddSrtingVector->Size = System::Drawing::Size(112, 23);
			this->btnAddSrtingVector->TabIndex = 6;
			this->btnAddSrtingVector->Text = L"Добавить строку";
			this->btnAddSrtingVector->UseVisualStyleBackColor = true;
			this->btnAddSrtingVector->Click += gcnew System::EventHandler(this, &MyForm::btnAddSrtingVector_Click);
			// 
			// btnMultNumber
			// 
			this->btnMultNumber->Location = System::Drawing::Point(57, 303);
			this->btnMultNumber->Name = L"btnMultNumber";
			this->btnMultNumber->Size = System::Drawing::Size(112, 35);
			this->btnMultNumber->TabIndex = 10;
			this->btnMultNumber->Text = L"Умножить на число";
			this->btnMultNumber->UseVisualStyleBackColor = true;
			this->btnMultNumber->Click += gcnew System::EventHandler(this, &MyForm::btnMultNumber_Click);
			// 
			// txtNumber
			// 
			this->txtNumber->Location = System::Drawing::Point(244, 311);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(53, 20);
			this->txtNumber->TabIndex = 11;
			// 
			// lblNumber
			// 
			this->lblNumber->AutoSize = true;
			this->lblNumber->Location = System::Drawing::Point(190, 314);
			this->lblNumber->Name = L"lblNumber";
			this->lblNumber->Size = System::Drawing::Size(48, 13);
			this->lblNumber->TabIndex = 12;
			this->lblNumber->Text = L"Число =";
			// 
			// errorProviderNumber
			// 
			this->errorProviderNumber->ContainerControl = this;
			// 
			// btnMultVector
			// 
			this->btnMultVector->Location = System::Drawing::Point(321, 293);
			this->btnMultVector->Name = L"btnMultVector";
			this->btnMultVector->Size = System::Drawing::Size(240, 38);
			this->btnMultVector->TabIndex = 13;
			this->btnMultVector->Text = L"Умножить на вектор/матрицу";
			this->btnMultVector->UseVisualStyleBackColor = true;
			this->btnMultVector->Click += gcnew System::EventHandler(this, &MyForm::btnMultVector_Click);
			// 
			// grdResult
			// 
			this->grdResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdResult->Location = System::Drawing::Point(591, 77);
			this->grdResult->Name = L"grdResult";
			this->grdResult->Size = System::Drawing::Size(240, 150);
			this->grdResult->TabIndex = 14;
			// 
			// btnRemoveAll
			// 
			this->btnRemoveAll->Location = System::Drawing::Point(682, 233);
			this->btnRemoveAll->Name = L"btnRemoveAll";
			this->btnRemoveAll->Size = System::Drawing::Size(75, 23);
			this->btnRemoveAll->TabIndex = 15;
			this->btnRemoveAll->Text = L"Очистить";
			this->btnRemoveAll->UseVisualStyleBackColor = true;
			this->btnRemoveAll->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveAll_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(321, 366);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(240, 23);
			this->btnPlus->TabIndex = 16;
			this->btnPlus->Text = L"Сложить матрицы";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(321, 337);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(240, 23);
			this->btnMinus->TabIndex = 17;
			this->btnMinus->Text = L"Вычесть матрицы";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// btnScalar
			// 
			this->btnScalar->Location = System::Drawing::Point(591, 262);
			this->btnScalar->Name = L"btnScalar";
			this->btnScalar->Size = System::Drawing::Size(240, 29);
			this->btnScalar->TabIndex = 18;
			this->btnScalar->Text = L"Скалярное произведение векторов";
			this->btnScalar->UseVisualStyleBackColor = true;
			this->btnScalar->Click += gcnew System::EventHandler(this, &MyForm::btnScalar_Click);
			// 
			// txtOutputScal
			// 
			this->txtOutputScal->Location = System::Drawing::Point(750, 297);
			this->txtOutputScal->Name = L"txtOutputScal";
			this->txtOutputScal->ReadOnly = true;
			this->txtOutputScal->Size = System::Drawing::Size(81, 20);
			this->txtOutputScal->TabIndex = 19;
			// 
			// lblScal
			// 
			this->lblScal->AutoSize = true;
			this->lblScal->Location = System::Drawing::Point(598, 300);
			this->lblScal->Name = L"lblScal";
			this->lblScal->Size = System::Drawing::Size(146, 13);
			this->lblScal->TabIndex = 20;
			this->lblScal->Text = L"Скалярное произведение =";
			// 
			// btnVector
			// 
			this->btnVector->Location = System::Drawing::Point(591, 323);
			this->btnVector->Name = L"btnVector";
			this->btnVector->Size = System::Drawing::Size(240, 23);
			this->btnVector->TabIndex = 21;
			this->btnVector->Text = L"Векторное произведение";
			this->btnVector->UseVisualStyleBackColor = true;
			this->btnVector->Click += gcnew System::EventHandler(this, &MyForm::btnVector_Click);
			// 
			// btnTrans
			// 
			this->btnTrans->Location = System::Drawing::Point(57, 347);
			this->btnTrans->Name = L"btnTrans";
			this->btnTrans->Size = System::Drawing::Size(240, 23);
			this->btnTrans->TabIndex = 24;
			this->btnTrans->Text = L"Транспонировать матрицу";
			this->btnTrans->UseVisualStyleBackColor = true;
			this->btnTrans->Click += gcnew System::EventHandler(this, &MyForm::btnTrans_Click);
			// 
			// btnOpred
			// 
			this->btnOpred->Location = System::Drawing::Point(57, 376);
			this->btnOpred->Name = L"btnOpred";
			this->btnOpred->Size = System::Drawing::Size(112, 35);
			this->btnOpred->TabIndex = 25;
			this->btnOpred->Text = L"Найти определитель";
			this->btnOpred->UseVisualStyleBackColor = true;
			this->btnOpred->Click += gcnew System::EventHandler(this, &MyForm::btnOpred_Click);
			// 
			// lblOpredel
			// 
			this->lblOpredel->AutoSize = true;
			this->lblOpredel->Location = System::Drawing::Point(178, 387);
			this->lblOpredel->Name = L"lblOpredel";
			this->lblOpredel->Size = System::Drawing::Size(60, 13);
			this->lblOpredel->TabIndex = 26;
			this->lblOpredel->Text = L"Определ =";
			// 
			// txtOutputOpr
			// 
			this->txtOutputOpr->Location = System::Drawing::Point(244, 384);
			this->txtOutputOpr->Name = L"txtOutputOpr";
			this->txtOutputOpr->ReadOnly = true;
			this->txtOutputOpr->Size = System::Drawing::Size(53, 20);
			this->txtOutputOpr->TabIndex = 27;
			// 
			// btnRank
			// 
			this->btnRank->Location = System::Drawing::Point(57, 417);
			this->btnRank->Name = L"btnRank";
			this->btnRank->Size = System::Drawing::Size(112, 43);
			this->btnRank->TabIndex = 28;
			this->btnRank->Text = L"Найти ранг матрицы";
			this->btnRank->UseVisualStyleBackColor = true;
			this->btnRank->Click += gcnew System::EventHandler(this, &MyForm::btnRank_Click);
			// 
			// lblRank
			// 
			this->lblRank->AutoSize = true;
			this->lblRank->Location = System::Drawing::Point(198, 432);
			this->lblRank->Name = L"lblRank";
			this->lblRank->Size = System::Drawing::Size(40, 13);
			this->lblRank->TabIndex = 29;
			this->lblRank->Text = L"Ранг =";
			// 
			// txtOutputRank
			// 
			this->txtOutputRank->Location = System::Drawing::Point(244, 429);
			this->txtOutputRank->Name = L"txtOutputRank";
			this->txtOutputRank->ReadOnly = true;
			this->txtOutputRank->Size = System::Drawing::Size(52, 20);
			this->txtOutputRank->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(496, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Примечание: вектор создается аналогично матрице с помощью кнопок добавления и уда"
				L"ления";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(685, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Результат";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(131, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Матрица/Вектор - 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(387, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Матрица/Вектор - 2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 492);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtOutputRank);
			this->Controls->Add(this->lblRank);
			this->Controls->Add(this->btnRank);
			this->Controls->Add(this->txtOutputOpr);
			this->Controls->Add(this->lblOpredel);
			this->Controls->Add(this->btnOpred);
			this->Controls->Add(this->btnTrans);
			this->Controls->Add(this->btnVector);
			this->Controls->Add(this->lblScal);
			this->Controls->Add(this->txtOutputScal);
			this->Controls->Add(this->btnScalar);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnRemoveAll);
			this->Controls->Add(this->grdResult);
			this->Controls->Add(this->btnMultVector);
			this->Controls->Add(this->lblNumber);
			this->Controls->Add(this->txtNumber);
			this->Controls->Add(this->btnMultNumber);
			this->Controls->Add(this->btnRemoveColumnVector);
			this->Controls->Add(this->btnRemoveStringVector);
			this->Controls->Add(this->btnAddColumnVector);
			this->Controls->Add(this->btnAddSrtingVector);
			this->Controls->Add(this->grdVector);
			this->Controls->Add(this->btnRemoveColumnMatrix);
			this->Controls->Add(this->btnRemoveStringMatrix);
			this->Controls->Add(this->btnAddColumnMatrix);
			this->Controls->Add(this->btnAddStringMatrix);
			this->Controls->Add(this->grdMatrix);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Матричный калькулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdMatrix))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdVector))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderNumber))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdResult))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			//добавить строчку в левую таблицу
	private: System::Void btnAddStringMatrix_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//на случай, если столбцов нет совсем
		try
		{
			this->grdMatrix->Rows->Add(1);
		}
		catch (...)
		{
			MessageBox::Show("Сначала добавьте столбец");
		}
	}

		   //добавить столбец в левую таблицу
	private: System::Void btnAddColumnMatrix_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DataGridViewTextBoxColumn^ i1 = gcnew DataGridViewTextBoxColumn();
		grdMatrix->Columns->Add(i1);
	}

		   //удалить строчку в левой таюлице
	private: System::Void btnRemoveStringMatrix_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			if (!this->grdMatrix->CurrentRow->IsNewRow)
			{
				int i1 = this->grdMatrix->CurrentRow->Index;
				this->grdMatrix->Rows->Remove(this->grdMatrix->Rows[i1]);
			}
		}
		catch (...)
		{
			MessageBox::Show("Эту строку нельзя удалить!");
		}
	}

		   //удалить столбец в левой таблице
	private: System::Void btnRemoveColumnMatrix_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//если нет столбцов
		if (!grdMatrix->ColumnCount)
		{
			MessageBox::Show("В таблице нет столбцов!");
			return;
		}

		if (grdMatrix->SelectedColumns->Count > 0)
		{
			for (int i = 0; i < grdMatrix->SelectedColumns->Count; i++)
			{
				int index1 = grdMatrix->SelectedColumns[i]->Index;
				try
				{
					grdMatrix->Columns->RemoveAt(index1);
				}
				catch (...)
				{
					MessageBox::Show("Не могу удалить столбец с индексом ");
				}
			}
		}
		else
		{
			int index1;
			try
			{
				index1 = grdMatrix->CurrentCell->ColumnIndex;
			}
			catch (...)
			{

			}

			if (index1 != -1)
			{
				try
				{
					grdMatrix->Columns->RemoveAt(index1);
				}
				catch (...)
				{
					MessageBox::Show("Не могу удалить столбец с индексом ");
				}
			}
			else MessageBox::Show("Выберите столбцы для удаления");
		}
	}

		   //добавить строку в центральную таблицу
	private: System::Void btnAddSrtingVector_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//на случай, если столбцов нет совсем
		try
		{
			this->grdVector->Rows->Add(1);
		}
		catch (...)
		{
			MessageBox::Show("Сначала добавьте столбец");
		}
	}

		   //добавить столбец в центральную таблицу
	private: System::Void btnAddColumnVector_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DataGridViewTextBoxColumn^ i1 = gcnew DataGridViewTextBoxColumn();
		grdVector->Columns->Add(i1);
	}

		   //удалить строчку в центральной таблице
	private: System::Void btnRemoveStringVector_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			if (!this->grdVector->CurrentRow->IsNewRow)
			{
				int i1 = this->grdVector->CurrentRow->Index;
				this->grdVector->Rows->Remove(this->grdVector->Rows[i1]);
			}
		}
		catch (...)
		{
			MessageBox::Show("Эту строку нельзя удалить!");
		}
	}

		   //удалить столбец в центральной таблице
	private: System::Void btnRemoveColumnVector_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//если нет столбцов
		if (!grdVector->ColumnCount)
		{
			MessageBox::Show("В таблице нет столбцов!");
			return;
		}

		if (grdVector->SelectedColumns->Count > 0)
		{
			for (int i = 0; i < grdVector->SelectedColumns->Count; i++)
			{
				int index1 = grdVector->SelectedColumns[i]->Index;
				try
				{
					grdVector->Columns->RemoveAt(index1);
				}
				catch (...)
				{
					MessageBox::Show("Не могу удалить столбец");
				}
			}
		}

		else
		{
			int index1;
			try
			{
				index1 = grdVector->CurrentCell->ColumnIndex;
			}
			catch (...)
			{

			}

			if (index1 != -1)
			{
				try
				{
					grdVector->Columns->RemoveAt(index1);
				}
				catch (...)
				{
					MessageBox::Show("Не могу удалить столбец");
				}
			}
			else MessageBox::Show("Выберите столбцы для удаления");
		}
	}

		   //Умножить на число
	private: System::Void btnMultNumber_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		long long Number;	//вводимое число
		bool resultX = Int64::TryParse(this->txtNumber->Text, Number); //переводим строку из TextBox в число
		if (!resultX)		//ввели не число
			errorProviderNumber->SetError(txtNumber, "не целое число");
		else				//ввели число
		{
			int S = 0;		//переменная для изменения значений
			int ColumnNumber = 0; //Столбец
							//если цифры
			try
			{
				for (int i1 = 0; i1 < this->grdMatrix->RowCount-1; i1++) //всегда RowCount-1, 
										//потому что автоматически приписывается след строка
				{
					for (int j1 = 0; j1 < this->grdMatrix->ColumnCount; j1++)
					{
						S = Convert::ToInt32(grdMatrix->Rows[i1]->Cells[j1]->Value); //получаем значение элемента таблицы
						S *= Number; //умножаем на нужное число
						grdMatrix->Rows[i1]->Cells[j1]->Value = Convert::ToInt32(S); //перезаписываем новое значение
					}
				}

			}
			//если не цифры
			catch (Exception^ ex)
			{
				MessageBox::Show("В таблицу неправильно введены данные//введены не цифры!!");
			}
		}
	}

		   //метод для заполнения правой (результирующей) матрицы
		   void addAll() 
		   {
			   int indexColumn = 0; //индекс столбца
			   int indexRow = 0;    //идекс строки
			   //заполняем таким же количеством столбцов, как у центральной таблицы
			   while (indexColumn < grdVector->ColumnCount)
			   {
				   DataGridViewTextBoxColumn^ i = gcnew DataGridViewTextBoxColumn();
				   grdResult->Columns->Add(i);
				   indexColumn++;
			   }
			   //заполняем таким же количеством строк, как у левой таблицы
			   while (indexRow < grdMatrix->RowCount-2)
			   {
				   this->grdResult->Rows->Add(1);
				   indexRow++;
			   }
		   }

		   //Операция умножения двух матриц выполнима только в том случае, 
		   //если число столбцов в первом сомножителе равно числу строк во втором; 

		   //умножение на вектор/матрицу
	private: System::Void btnMultVector_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//проверим очищена ли таблица результатов
		if (grdResult->ColumnCount == 0)
		{
			//если число столбцов в первом сомножителе равно числу строк во втором 
			if (grdMatrix->ColumnCount == grdVector->RowCount - 1)
			{
				addAll(); //создаем результирующую таблицу
				int S1 = 0;
				int S2 = 0;
				//если цифры
				try
				{
					//заполняем результирующую таблицу
					for (int ires = 0; ires < this->grdResult->RowCount; ires++)
					{
						for (int jres = 0; jres < this->grdResult->ColumnCount; jres++)
						{
							int Sum = 0;
							
							for (int k = 0; k < grdMatrix->ColumnCount; k++)
							{
								S1 = Convert::ToInt32(grdMatrix->Rows[ires]->Cells[k]->Value);
								S2 = Convert::ToInt32(grdVector->Rows[k]->Cells[jres]->Value);
								Sum += S1 * S2;
							}
							grdResult->Rows[ires]->Cells[jres]->Value = Convert::ToInt32(Sum);
							Sum = 0;
						}
					}

				}
				//если не цифры
				catch (Exception^ ex)
				{
					MessageBox::Show("В таблице есть НЕ цифры!!");
				}
			}
			else MessageBox::Show("Нельзя умножить, размеры не подходят");
		}
		else MessageBox::Show("Сначала очистите матрицу-результат!");
	}

		   //Очистка результирующей таблицы
	private: System::Void btnRemoveAll_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//пока есть столбцы
		while (grdResult->ColumnCount != 0)
		{
			//если нет столбцов
			if (!grdResult->ColumnCount)
			{
				MessageBox::Show("В таблице нет столбцов!");
				return;
			}

			if (grdResult->SelectedColumns->Count > 0)
			{
				for (int i = 0; i < grdResult->SelectedColumns->Count; i++)
				{
					int index1 = grdResult->SelectedColumns[i]->Index;
					try
					{
						grdResult->Columns->RemoveAt(index1);
					}
					catch (...)
					{
						MessageBox::Show("Не могу удалить столбец");
					}
				}
			}
			else
			{
				int index1;
				try
				{
					index1 = grdResult->CurrentCell->ColumnIndex;
				}
				catch (...)
				{

				}

				if (index1 != -1)
				{
					try
					{
						grdResult->Columns->RemoveAt(index1);
					}
					catch (...)
					{
						MessageBox::Show("Не могу удалить столбец");
					}
				}
				else MessageBox::Show("Выберите столбцы для удаления");
			}
		}
	}

		   //Сложить матрицы/векторы
	private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//проверяем пуста ли результирующая таблица
		if (grdResult->ColumnCount == 0)
		{
			//Складывать можно только матрицы/векторы одинаковой размерности
			if ((grdMatrix->ColumnCount == grdVector->ColumnCount) && (grdMatrix->RowCount == grdVector->RowCount))
			{
				addAll(); //создаем результирующую матрицу
				int S1 = 0;
				int S2 = 0;
				int Sum = 0;
				//если цифры
				try
				{
					//заполняем результирющую таблицу
					for (int ires = 0; ires < this->grdResult->RowCount; ires++)
					{
						for (int jres = 0; jres < this->grdResult->ColumnCount; jres++)
						{
							S1 = Convert::ToInt32(grdMatrix->Rows[ires]->Cells[jres]->Value);
							S2 = Convert::ToInt32(grdVector->Rows[ires]->Cells[jres]->Value);
							Sum = S1 + S2;
							grdResult->Rows[ires]->Cells[jres]->Value = Convert::ToInt32(Sum);
						}
					}
				}
				//если не цифры
				catch (Exception^ ex)
				{
					MessageBox::Show("В таблице есть НЕ цифры!!");
				}
			}
			else MessageBox::Show("Нельзя сложить, размеры не подходят");
		}
		else MessageBox::Show("Сначала очистите матрицу-результат!");
	}

		   //Вычесть из левой таблицы правую
	private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//проверим пуста ли таблица-результат
		if (grdResult->ColumnCount == 0)
		{
			//Вычитать можно только матрицы/векторы одинаковой размерности
			if ((grdMatrix->ColumnCount == grdVector->ColumnCount) && (grdMatrix->RowCount == grdVector->RowCount))
			{
				addAll(); //создаем таблицу-результат
				int S1 = 0;
				int S2 = 0;
				int Sum = 0;
				//если цифры
				try
				{
					//заполняем результирующую таблицу
					for (int ires = 0; ires < this->grdResult->RowCount; ires++)
					{
						for (int jres = 0; jres < this->grdResult->ColumnCount; jres++)
						{
							S1 = Convert::ToInt32(grdMatrix->Rows[ires]->Cells[jres]->Value);
							S2 = Convert::ToInt32(grdVector->Rows[ires]->Cells[jres]->Value);
							Sum = S1 - S2;
							grdResult->Rows[ires]->Cells[jres]->Value = Convert::ToInt32(Sum);
						}
					}
				}
				//если не цифры
				catch (Exception^ ex)
				{
					MessageBox::Show("В таблице что-то введено не так!!");
				}
			}
			else MessageBox::Show("Нельзя вычесть, размеры не подходят");
		}
		else MessageBox::Show("Сначала очистите матрицу-результат!");
	}

		   //метод для очистки полей
		   void ClearAll() {//очистка полей
			   this->txtNumber->Text = "";	   //число для умножения
			   this->txtOutputScal->Text = ""; //скалярное
			   this->txtOutputOpr->Text = "";  //определитель
			   this->txtOutputRank->Text = ""; //ранг
		   }

		   //посчитать скалярное произведение векторов
	private: System::Void btnScalar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//одинаковая размерность, матрицы с 1ой строкой (grdMatrix->RowCount == 2, 
		//потому что если попробуете заполнить вторую строку, автоматически добавится 3, и их будет уже 3)
		if ((grdMatrix->ColumnCount == grdVector->ColumnCount) && (grdMatrix->RowCount == 2) && (grdVector->RowCount == 2))
		{
			ClearAll(); //очистка всех полей
			int S1 = 0;
			int S2 = 0;
			int Sum = 0;
			//если цифры
			try
			{
				for (int ires = 0; ires < this->grdMatrix->ColumnCount; ires++)
				{
					S1 = Convert::ToInt32(grdMatrix->Rows[0]->Cells[ires]->Value);
					S2 = Convert::ToInt32(grdVector->Rows[0]->Cells[ires]->Value);
					Sum += S1 * S2;
				}
				this->txtOutputScal->Text = System::Convert::ToString(Sum); //записываем в поле вывода
			}
			//если не цифры
			catch (Exception^ ex)
			{
				MessageBox::Show("В таблицах неправильные данные!!");
			}
		}
		else MessageBox::Show("Нельзя найти скалярное произведение, неправильно введены вектора или есть лишние строки");
	}

		   //векторное произведение //!только для 3 координат!
	private: System::Void btnVector_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//если результиркющая таблица пуста
		if (grdResult->ColumnCount == 0)
		{
			//векторное произведение существует только для 3 координат, вектор
			if ((grdMatrix->ColumnCount == 3) && (grdMatrix->ColumnCount == grdVector->ColumnCount) && (grdMatrix->RowCount == 2) && (grdVector->RowCount == 2))
			{
				addAll(); //создаем результирующую таблицу
				//если цифры
				try
				{
					int ax = Convert::ToInt32(grdMatrix->Rows[0]->Cells[0]->Value);
					int ay = Convert::ToInt32(grdMatrix->Rows[0]->Cells[1]->Value);
					int az = Convert::ToInt32(grdMatrix->Rows[0]->Cells[2]->Value);

					int bx = Convert::ToInt32(grdVector->Rows[0]->Cells[0]->Value);
					int by = Convert::ToInt32(grdVector->Rows[0]->Cells[1]->Value);
					int bz = Convert::ToInt32(grdVector->Rows[0]->Cells[2]->Value);

					grdResult->Rows[0]->Cells[0]->Value = Convert::ToInt32(ay * bz - az * by);
					grdResult->Rows[0]->Cells[1]->Value = Convert::ToInt32(az * bx - ax * bz);
					grdResult->Rows[0]->Cells[2]->Value = Convert::ToInt32(ax * by - ay * bx);
				}
				//если не цифры
				catch (Exception^ ex)
				{
					MessageBox::Show("В таблицах неправильные данные!!");
				}
			}
			else MessageBox::Show("Нельзя найти векторное произведение, неправильно введены векторы");
		}
		else MessageBox::Show("Сначала очистите матрицу-результат!");
	}

		   //транспонировать левую матрицу
	private: System::Void btnTrans_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//если результирующая матрица пуста
		if (grdResult->ColumnCount == 0)
		{
			//создадим место для транспонированного результата
			int indexColumn = 0;
			int indexRow = 0;
			while (indexColumn < grdMatrix->RowCount-1)
			{
				DataGridViewTextBoxColumn^ i = gcnew DataGridViewTextBoxColumn();
				grdResult->Columns->Add(i);
				indexColumn++;
			}
			while (indexRow < grdMatrix->ColumnCount)
			{
				this->grdResult->Rows->Add(1);
				indexRow++;
			}

			int S1 = 0;
			int S2 = 0;
			int Sum = 0;
			int ColumnNumber = 0;   //Столбец
			//если цифры
			try
			{
				//заполняем результирующую таблицу
				for (int ires = 0; ires < this->grdMatrix->RowCount-1; ires++)
				{
					for (int jres = 0; jres < this->grdMatrix->ColumnCount; jres++)
					{
						S1 = Convert::ToInt32(grdMatrix->Rows[ires]->Cells[jres]->Value);
						grdResult->Rows[jres]->Cells[ires]->Value = Convert::ToInt32(S1);
					}
				}
			}
			//если не цифры
			catch (Exception^ ex)
			{
				MessageBox::Show("В таблицу введены неверные параметры!!");
			}
		}
		else MessageBox::Show("Сначала очистите матрицу-результат!");
	}

		   // Рекурсивное вычисление определителя
		   int det(int** array, int ColCount) { //массив и количество столбцов 
			   //(определитель только у квадратной матрицы)
			   int i, j, result, k, n;
			   int** p; // вспомогательный массив
			   p = new int* [ColCount];

			   for (i = 0; i < ColCount; i++)
			   {
				   p[i] = new int[ColCount];
			   }

			   j = 0; 
			   result = 0;
			   k = 1; //(-1) в степени i
			   n = ColCount - 1;

			   //если вообще не матрица и неправильный ввод
			   if (ColCount < 1) 
			   {
				   return INT_MIN;
			   }

			   //если это 1*1 матрица
			   if (ColCount == 1) 
			   {
				   result = array[0][0];
				   return(result);
			   }

			   //если это матрица 2*2
			   if (ColCount == 2) 
			   {
				   result = array[0][0] * array[1][1] - (array[1][0] * array[0][1]);
				   return(result);
			   }

			   //если это порядком выше, чем 2*2, матрица
			   if (ColCount > 2) 
			   {
				   for (i = 0; i < ColCount; i++) 
				   {
					   int k1, k2, d1, d2; //вспомогательные индексы
					   d1 = 0;

					   for (k1 = 0; k1 < ColCount - 1; k1++) 
					   { // проверка индекса строки
						   if (k1 == i) d1 = 1;
						   d2 = 0;

						   for (k2 = 0; k2 < ColCount - 1; k2++) 
						   { // проверка индекса столбца
							   if (k2 == 0) d2 = 1;
							   p[k1][k2] = array[k1 + d1][k2 + d2];
						   }
					   }

					   result = result + k * array[i][0] * det(p, n);
					   k = -k;
				   }
			   }
			   return(result);
		   }

		   //найти определитель левой таблицы
	private: System::Void btnOpred_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//если она квадратная
		if (grdMatrix->ColumnCount == grdMatrix->RowCount-1)
		{
			ClearAll(); //очищаем все поля для ответов

			//если цифры
			try
			{
				int n = System::Convert::ToInt64(grdMatrix->ColumnCount); //это квадратная матрица, поэтому
				int m = System::Convert::ToInt64(grdMatrix->ColumnCount); //можно взять значение количества столбцов

				int** array = new int* [n]; //создаем динамический массив

				for (int i = 0; i < this->grdMatrix->ColumnCount; i++)
				{
					array[i] = new int[m];
				}

				//заполняем массив
				for (int i = 0; i < this->grdMatrix->ColumnCount; i++)
				{
					for (int j = 0; j < this->grdMatrix->ColumnCount; j++)
					{
						array[i][j] = System::Convert::ToInt64(grdMatrix->Rows[i]->Cells[j]->Value);
					}
				}

				//вызываем рекурсию и проверяем, что возвращенное значение верное
				if (det(array, n) != INT_MIN)
				{
					this->txtOutputOpr->Text = System::Convert::ToString(det(array, n)); //записываем в поле вывода
				}
			}
			//если не цифры
			catch (Exception^ ex)
			{
				MessageBox::Show("В таблицу введены неверные параметры!!");
			}
		}
		else MessageBox::Show("Это не квадратная матрица!");
	}

		   //метод подсчета ранга матрицы
		   int findRank(int** matrix, int i, int j)
		   {
			   int r = 0;
			   int q = 1;

			   while (q <= std::min(i, j)) // проверка: порядок матрицы меньше или равен минимальному из размеров матрицы?
			   { // если да
				   int** B = new int* [q]; // создаем новую матрицу размера q
				   for (int w = 0; w < q; ++w)
					   B[w] = new int[q];

				   for (int array = 0; array < (i - (q - 1)); ++array) // тут начинается перебор матриц q-го порядка
				   {
					   for (int b = 0; b < (j - (q - 1)); ++b)
					   {
						   for (int c = 0; c < q; ++c)
							   for (int d = 0; d < q; ++d)
								   B[c][d] = matrix[array + c][b + d];

						   if (!(det(B, q) == 0)) // если определитель матрицы отличен от нуля
						   { // то
							   r = q; // присваиваем рангу значение q
						   }
					   }
				   }
				   q++; // прибавляем 1
			   }
			   return r;
		   }

		   //подсчет ранга левой таблицы
	private: System::Void btnRank_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClearAll(); //очищаем все поля вывода
		//если цифры
		try
		{
			int n = System::Convert::ToInt64(this->grdMatrix->RowCount-1); //количество строк
			int m = System::Convert::ToInt64(this->grdMatrix->ColumnCount); //количество столбцов

			int** array = new int* [n];

			for (int i = 0; i < n; i++)
			{
				array[i] = new int[m];
			}

			//заполняем массив элементами таблицы
			for (int i = 0; i < this->grdMatrix->RowCount-1; i++) 
			{
				for (int j = 0; j < this->grdMatrix->ColumnCount; j++) 
				{
					array[i][j] = System::Convert::ToInt64(this->grdMatrix->Rows[i]->Cells[j]->Value);
				}
			}

			//ищем ранг
			int sum = findRank(array, n, m);
			this->txtOutputRank->Text = System::Convert::ToString(sum); //записываем в поле для вывода
		}
		//если не цифры
		catch (Exception^ ex)
		{
			MessageBox::Show("В таблицу введены неверные параметры!!");
		}
	}
};
}
