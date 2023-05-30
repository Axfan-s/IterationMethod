#pragma once
#include "Relaxation.h"
namespace IterationMethod {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(58, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(58, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Количество разбиений по оси абцисс ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(-1, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(263, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Количество разбиений по оси ординат";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(58, 135);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Критерий выхода по точности";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(58, 194);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(216, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Максимальное кол-во итераций";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(431, 447);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(685, 332);
			this->dataGridView1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(26, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Тестовая задача";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(386, 40);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(685, 332);
			this->dataGridView2->TabIndex = 10;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(1142, 40);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(658, 332);
			this->dataGridView3->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(-1, 457);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 18);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Справка";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(58, 248);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(58, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"параметр w";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(622, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(200, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Численное решение";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(1404, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(224, 25);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Погрешность решения";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(668, 404);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Таблица";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(26, 349);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 33);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Основная задача";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1687, 778);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Метод Верхней релаксации";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int N = System::Convert::ToInt64(textBox1->Text);
		int M = System::Convert::ToInt64(textBox2->Text);
		double eps= Convert::ToDouble(textBox3->Text);
		int Nmax = System::Convert::ToInt64(textBox4->Text);
		double w = Convert::ToDouble(textBox5->Text);
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
        dataGridView1->ColumnCount = N+3;
		dataGridView1->RowCount = M + 3;
		dataGridView1->Columns[0]->DefaultCellStyle->Format = "n2";
		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();
		dataGridView2->Refresh();
		dataGridView2->ColumnCount = N + 3;
		dataGridView2->RowCount = M + 3;
		dataGridView3->Rows->Clear();
		dataGridView3->Columns->Clear();
		dataGridView3->Refresh();
		dataGridView3->ColumnCount = N + 3;
		dataGridView3->RowCount = M + 3;


		for (int i = 0; i < N+1; i++) {
			dataGridView1->Rows[0]->Cells[i+2]->Value = 3 * i * 1.0 / N;
			dataGridView1->Rows[1]->Cells[i + 2]->Value = i;
		}
		for (int j = 0; j< M + 1; j++) {
			dataGridView1->Rows[j+2]->Cells[0]->Value =  j * 1.0 / M;
			dataGridView1->Rows[j + 2]->Cells[1]->Value = j;
		}
		dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x");
		dataGridView1->Rows[1]->Cells[0]->Value = gcnew String("y");
		dataGridView1->Rows[1]->Cells[1]->Value = gcnew String("j/i");
		double** f1 = function_to_array(fo, N, M, 0, 3, 0, 1);
		for (int i = 0; i < N + 1; i++) {
			for (int j = 0; j < M + 1; j++) {
				dataGridView1->Rows[j + 2]->Cells[i+2]->Value = f1[i][j];
				double xPoint =  i * 3*1.0 /N;
				double yPoint = j * 1.0 / M;
			}
		}
		double eps_cur = 0;
		int S = 0;
		for (int i = 0; i < N + 1; i++) {
			dataGridView2->Rows[0]->Cells[i + 2]->Value = 3 * i * 1.0 / N;
			dataGridView2->Rows[1]->Cells[i + 2]->Value = i;
		}
		for (int j = 0; j < M + 1; j++) {
			dataGridView2->Rows[j + 2]->Cells[0]->Value = j * 1.0 / M;
			dataGridView2->Rows[j + 2]->Cells[1]->Value = j;
		}
		dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
		dataGridView2->Rows[1]->Cells[0]->Value = gcnew String("y");
		dataGridView2->Rows[1]->Cells[1]->Value = gcnew String("j/i");
		double** v = Relaxationv(m1m, m2m, m3m, m4m, f, N, M, w, Nmax, eps, 0, 3, 0, 1, eps_cur, S);
		for (int i = 0; i < N + 1; i++) {
			for (int j = 0; j < M + 1; j++) {
				dataGridView2->Rows[j + 2]->Cells[i + 2]->Value =v[i][j];
			}
		}
		dataGridView3->Rows->Clear();
		dataGridView3->Columns->Clear();
		dataGridView3->Refresh();
		dataGridView3->ColumnCount = N + 3;
		dataGridView3->RowCount = M + 3;
		for (int i = 0; i < N + 1; i++) {
			dataGridView3->Rows[0]->Cells[i + 2]->Value = 3 * i * 1.0 / N;
			dataGridView3->Rows[1]->Cells[i + 2]->Value = i;
		}
		for (int j = 0; j < M + 1; j++) {
			dataGridView3->Rows[j + 2]->Cells[0]->Value = j * 1.0 / M;
			dataGridView3->Rows[j + 2]->Cells[1]->Value = j;
		}
		dataGridView3->Rows[0]->Cells[1]->Value = gcnew String("x");
		dataGridView3->Rows[1]->Cells[0]->Value = gcnew String("y");
		dataGridView3->Rows[1]->Cells[1]->Value = gcnew String("j/i");
		double max = 0;
		double x = 0;
		double y = 0;
		
		for (int i = 0; i < N + 1; i++) {
			for (int j = 0; j < M + 1; j++) {
				double z = abs(v[i][j] - f1[i][j]);
			    dataGridView3->Rows[j + 2]->Cells[i + 2]->Value =z;
				if (z > max) {
					max = z;
					x = 3 * j * 1.0 / M;
					y = i * 1.0 / N;
				}
			}
		}
		double r = 0;
		double maxr = 0;
		double** fu = function_to_array(f, N, M, 0, 3, 0, 1);
		for (int j = 1; j < N; j++) {
			for (int i = 1; i < M; i++) {
				r = -2 * (M * M + N * N * 1.0 / 9) * v[j][i] + fu[j][i] + N * N * (v[j + 1][i] + v[j - 1][i]) * 1.0 / 9 + M * M * (v[j][i + 1] + v[j][i - 1]);
				if (r > maxr) {
					maxr = r;
				}

			}
		}
		
		

		label5->Text="Для решения тестовой задачи использована \nсетка с числом разбиений по x равным "+System::Convert::ToString(N)+
			"\nи числом разбиений по y равным "+ System::Convert::ToString(M)+
			"\nМетод верхней релаксации \nс параметром w= "+ System::Convert::ToString(w)+
			"\nПрименены критерий остановки \nпо точности равный "+ System::Convert::ToString(eps)+
			"\nМаксимальное кол-во итераций "+ System::Convert::ToString(Nmax)+
			"\nНа решение схемы было затрачено "+ System::Convert::ToString(S)+
			"\nитераций и достигнута \nточность итерац. метода "+ System::Convert::ToString(eps_cur)+
			"\nТестовая задача решена\n с погрешностью "+ System::Convert::ToString(max)+
			"\nМаксимальное отклонение точного и \nчисленного решений наблюдается в точке\n x="+
			System::Convert::ToString(x)+"; "+"y="+ System::Convert::ToString(y)+
			"\nВ качестве начального приближения\n использован нулевой вектор"+
			"\nСхема решена с невязкой "+maxr+" \nдля невязки использована норма max";

		label9->Text = "Точное решение";
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int N = System::Convert::ToInt64(textBox1->Text);
	int M = System::Convert::ToInt64(textBox2->Text);
	double eps = Convert::ToDouble(textBox3->Text);
	int Nmax = System::Convert::ToInt64(textBox4->Text);
	double w = Convert::ToDouble(textBox5->Text);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	dataGridView1->ColumnCount = N + 3;
	dataGridView1->RowCount = M + 3;
	dataGridView1->Columns[0]->DefaultCellStyle->Format = "n2";
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView2->Refresh();
	dataGridView2->ColumnCount = N + 3;
	dataGridView2->RowCount = M + 3;
	dataGridView3->Rows->Clear();
	dataGridView3->Columns->Clear();
	dataGridView3->Refresh();
	dataGridView3->ColumnCount = N + 3;
	dataGridView3->RowCount = M + 3;
	double eps_cur = 0;
	int S = 0;
	for (int i = 0; i < N + 1; i++) {
		dataGridView1->Rows[0]->Cells[i + 2]->Value = 3 * i * 1.0 / N;
		dataGridView1->Rows[1]->Cells[i + 2]->Value = i;
	}
	for (int j = 0; j < M + 1; j++) {
		dataGridView1->Rows[j + 2]->Cells[0]->Value = j * 1.0 / M;
		dataGridView1->Rows[j + 2]->Cells[1]->Value = j;
	}
	dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x");
	dataGridView1->Rows[1]->Cells[0]->Value = gcnew String("y");
	dataGridView1->Rows[1]->Cells[1]->Value = gcnew String("j/i");
	double** f1 = Relaxationv(q1, q2, q3, q4, g, 2*N, 2*M, w, Nmax, eps, 0, 3, 0, 1, eps_cur, S);
	for (int i = 0; i < N + 1; i++) {
		for (int j = 0; j < M + 1; j++) {
			dataGridView1->Rows[j + 2]->Cells[i + 2]->Value = f1[2*i][2*j];
		}
	}
	
	for (int i = 0; i < N + 1; i++) {
		dataGridView2->Rows[0]->Cells[i + 2]->Value = 3 * i * 1.0 / N;
		dataGridView2->Rows[1]->Cells[i + 2]->Value = i;
	}
	for (int j = 0; j < M + 1; j++) {
		dataGridView2->Rows[j + 2]->Cells[0]->Value = j * 1.0 / M;
		dataGridView2->Rows[j + 2]->Cells[1]->Value = j;
	}
    eps_cur = 0;
    S = 0;
	dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
	dataGridView2->Rows[1]->Cells[0]->Value = gcnew String("y");
	dataGridView2->Rows[1]->Cells[1]->Value = gcnew String("j/i");
	double** v = Relaxationv(q1, q2, q3, q4, g, N,  M, w, Nmax, eps, 0, 3, 0, 1, eps_cur, S);
	for (int i = 0; i < N + 1; i++) {
		for (int j = 0; j < M + 1; j++) {
			dataGridView2->Rows[j + 2]->Cells[i + 2]->Value = v[i][j];
		}
	}
	dataGridView3->Rows->Clear();
	dataGridView3->Columns->Clear();
	dataGridView3->Refresh();
	dataGridView3->ColumnCount = N + 3;
	dataGridView3->RowCount = M + 3;
	for (int i = 0; i < N + 1; i++) {
		dataGridView3->Rows[0]->Cells[i + 2]->Value = 3 * i * 1.0 / N;
		dataGridView3->Rows[1]->Cells[i + 2]->Value = i;
	}
	for (int j = 0; j < M + 1; j++) {
		dataGridView3->Rows[j + 2]->Cells[0]->Value = j * 1.0 / M;
		dataGridView3->Rows[j + 2]->Cells[1]->Value = j;
	}
	dataGridView3->Rows[0]->Cells[1]->Value = gcnew String("x");
	dataGridView3->Rows[1]->Cells[0]->Value = gcnew String("y");
	dataGridView3->Rows[1]->Cells[1]->Value = gcnew String("j/i");
	double max = 0;
	double x = 0;
	double y = 0;

	for (int i = 0; i < N + 1; i++) {
		for (int j = 0; j < M + 1; j++) {
			double z = abs(v[i][j] - f1[2*i][2*j]);
			dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = z;
			if (z > max) {
				max = z;
				x = 3 * i * 1.0 / M;
				y = j * 1.0 / N;
			}
		}
	}
	double r = 0;
	double maxr = 0;
	double** gu = function_to_array(g, N, M, 0, 3, 0, 1);
	for (int j = 1; j < N; j++) {
		for (int i = 1; i < M; i++) {
			r = -2 * (M * M + N * N * 1.0 / 9) * v[j][i] + gu[j][i] + N * N * (v[j + 1][i] + v[j - 1][i]) * 1.0 / 9 + M * M * (v[j][i + 1] + v[j][i - 1]);
			if (r > maxr) {
				maxr = r;
			}

		}
	}

	label5->Text = "Для решения основной задачи использована \nсетка с числом разбиений по x равным " + System::Convert::ToString(N) +
		"\nи числом разбиений по y равным " + System::Convert::ToString(M) +
		"\nМетод верхней релаксации \nс параметром w= " + System::Convert::ToString(w) +
		"\nПрименены критерий остановки \nпо точности равный " + System::Convert::ToString(eps) +
		"\nМаксимальное кол-во итераций " + System::Convert::ToString(Nmax) +
		"\nНа решение схемы было затрачено " + System::Convert::ToString(S) +
		"\nитераций и достигнута \nточность итерац. метода " + System::Convert::ToString(eps_cur) +
		"\nОсновная задача решена\n с погрешностью " + System::Convert::ToString(max) +
		"\nМаксимальное отклонение точного и \nчисленного решений наблюдается в точке\n x=" +
		System::Convert::ToString(x) + "; " + "y=" + System::Convert::ToString(y) +
		"\nВ качестве начального приближения\n использован нулевой вектор"+
		"\nСхема решена с невязкой " + maxr + " \nдля невязки использована норма max";
	label9->Text = "Решение на сетке с половинным шагом";
}
};
}
