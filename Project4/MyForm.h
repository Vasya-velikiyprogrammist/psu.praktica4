#pragma once
#include<cmath>
namespace Project4 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(443, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Построение графика функции на интервале [xn;xk]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(42, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Функция";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(316, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Введите данные";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 138);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(385, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"0,25";
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(385, 152);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 20;
			this->textBox2->Text = L"26.45";
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(385, 117);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"-2.90";
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(306, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Введите XH";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(306, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Введите XK";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(306, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Введите XN";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(16, 458);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(284, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Нарисовать график";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(351, 458);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(16, 227);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series3";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(469, 225);
			this->chart1->TabIndex = 24;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(497, 493);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Выполнил студент группы 23-КФ Ясюк В. В.";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, xn, xk, xh, y;
		Series^ plot1 = chart1->Series[0];
		//Очистка компонента Chart1
		plot1->Points->Clear();
		//Проверка, что введены данные xn, xk, xh и их преобразование в переменные типа Double
		if ((textBox1->Text != "") && (textBox2->Text != "")
			&& (textBox3->Text != ""))
		{
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);
			//Проверка правильности ввода данных
			if ((xn >= xk) || (xh > (xk - xn)))
			{
				MessageBox::Show("Данные заполнены неверно", "Ошибкаввода данных",
					MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else
			{
				x = xn;
				while (x <= xk)
				{
					if (x <= 0) y =log10(pow(x,2)+5);
					else
						if (x > 0 && x < 5) y = sin(exp(x)+2);
						else y = tan(5*x+1);
					//Нанесение точки с координатами Х и У в компоненте Chart1
					plot1->Points->AddXY(x, y);

					x = x + xh;
				}
			}

		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî)
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé
	if (str[t] == ',') { a = false; } while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) { a = false; }
			k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') { a = false; }
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî)
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé
	if (str[t] == ',') { a = false; } while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) { a = false; }
			k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') { a = false; }
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî)
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé
	if (str[t] == ',') { a = false; } while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) { a = false; }
			k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') { a = false; }
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
};
}
