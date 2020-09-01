#pragma once

namespace Parkingproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Seat에 대한 요약입니다.
	/// </summary>
	public ref class Seat : public System::Windows::Forms::Form
	{
	public:
		Seat(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Seat()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Panel^ panel1;
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			panel1->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			panel1->Controls->Add(this->tableLayoutPanel4);
			panel1->Controls->Add(this->tableLayoutPanel1);
			panel1->Location = System::Drawing::Point(80, 83);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(967, 594);
			panel1->TabIndex = 0;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->button32, 0, 7);
			this->tableLayoutPanel4->Controls->Add(this->button31, 0, 6);
			this->tableLayoutPanel4->Controls->Add(this->button30, 0, 5);
			this->tableLayoutPanel4->Controls->Add(this->button29, 0, 4);
			this->tableLayoutPanel4->Controls->Add(this->button28, 0, 3);
			this->tableLayoutPanel4->Controls->Add(this->button27, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->button26, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->button25, 0, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(836, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 8;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(131, 588);
			this->tableLayoutPanel4->TabIndex = 2;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(5, 516);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(121, 65);
			this->button32->TabIndex = 8;
			this->button32->Text = L"주차가능";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(5, 443);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(121, 65);
			this->button31->TabIndex = 7;
			this->button31->Text = L"주차가능";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(5, 370);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(121, 65);
			this->button30->TabIndex = 6;
			this->button30->Text = L"주차가능";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Red;
			this->button29->Location = System::Drawing::Point(5, 297);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(121, 65);
			this->button29->TabIndex = 5;
			this->button29->Text = L"주차불가";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(5, 224);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(121, 65);
			this->button28->TabIndex = 4;
			this->button28->Text = L"주차가능";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(5, 151);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(121, 65);
			this->button27->TabIndex = 3;
			this->button27->Text = L"주차가능";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(5, 78);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(121, 65);
			this->button26->TabIndex = 2;
			this->button26->Text = L"주차가능";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Red;
			this->button25->Location = System::Drawing::Point(5, 5);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(121, 65);
			this->button25->TabIndex = 1;
			this->button25->Text = L"주차불가";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->button8, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->button7, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->button6, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(143, 594);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Red;
			this->button8->Location = System::Drawing::Point(5, 523);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(133, 66);
			this->button8->TabIndex = 7;
			this->button8->Text = L"주차불가";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(5, 449);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(133, 66);
			this->button7->TabIndex = 6;
			this->button7->Text = L"주차가능";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(5, 375);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(133, 66);
			this->button6->TabIndex = 5;
			this->button6->Text = L"주차가능";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(5, 301);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 66);
			this->button5->TabIndex = 4;
			this->button5->Text = L"주차가능";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(5, 227);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 66);
			this->button4->TabIndex = 3;
			this->button4->Text = L"주차불가";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(5, 153);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 66);
			this->button3->TabIndex = 2;
			this->button3->Text = L"주차가능";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(5, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 66);
			this->button2->TabIndex = 1;
			this->button2->Text = L"주차가능";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Seat::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(5, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"주차불가";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Seat::button1_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->button16, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->button15, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->button14, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->button13, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->button12, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->button11, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->button10, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->button9, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(412, 83);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 8;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(137, 588);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(5, 516);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(127, 65);
			this->button16->TabIndex = 7;
			this->button16->Text = L"주차가능";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Red;
			this->button15->Location = System::Drawing::Point(5, 443);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(127, 65);
			this->button15->TabIndex = 7;
			this->button15->Text = L"주차불가";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Red;
			this->button14->Location = System::Drawing::Point(5, 370);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(127, 65);
			this->button14->TabIndex = 6;
			this->button14->Text = L"주차불가";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(5, 297);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(127, 65);
			this->button13->TabIndex = 5;
			this->button13->Text = L"주차가능";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(5, 224);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(127, 65);
			this->button12->TabIndex = 4;
			this->button12->Text = L"주차가능";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(5, 151);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(127, 65);
			this->button11->TabIndex = 3;
			this->button11->Text = L"주차불가";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(5, 78);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(127, 65);
			this->button10->TabIndex = 2;
			this->button10->Text = L"주차가능";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(5, 5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(127, 65);
			this->button9->TabIndex = 1;
			this->button9->Text = L"주차가능";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->button24, 0, 7);
			this->tableLayoutPanel3->Controls->Add(this->button23, 0, 6);
			this->tableLayoutPanel3->Controls->Add(this->button22, 0, 5);
			this->tableLayoutPanel3->Controls->Add(this->button21, 0, 4);
			this->tableLayoutPanel3->Controls->Add(this->button20, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->button19, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->button18, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->button17, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(555, 83);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 8;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(131, 591);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Red;
			this->button24->Location = System::Drawing::Point(5, 516);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(121, 65);
			this->button24->TabIndex = 7;
			this->button24->Text = L"주차불가";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(5, 443);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(121, 65);
			this->button23->TabIndex = 7;
			this->button23->Text = L"주차가능";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(5, 370);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(121, 65);
			this->button22->TabIndex = 1;
			this->button22->Text = L"주차가능";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Red;
			this->button21->Location = System::Drawing::Point(5, 297);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(121, 65);
			this->button21->TabIndex = 2;
			this->button21->Text = L"주차불가";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(5, 224);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(121, 65);
			this->button20->TabIndex = 3;
			this->button20->Text = L"주차가능";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(5, 151);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(121, 65);
			this->button19->TabIndex = 4;
			this->button19->Text = L"주차가능";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Red;
			this->button18->Location = System::Drawing::Point(5, 78);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(121, 65);
			this->button18->TabIndex = 5;
			this->button18->Text = L"주차불가";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Red;
			this->button17->Location = System::Drawing::Point(5, 5);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(121, 65);
			this->button17->TabIndex = 6;
			this->button17->Text = L"주차불가";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"휴먼둥근헤드라인", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(401, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(297, 63);
			this->label1->TabIndex = 3;
			this->label1->Text = L"자리 유무";
			// 
			// Seat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1408, 759);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(panel1);
			this->Name = L"Seat";
			this->Text = L"주차불가";
			this->Load += gcnew System::EventHandler(this, &Seat::Seat_Load);
			panel1->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Seat_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (this->button1->Text == L"주차가능") {
			this->button1->Text = L"주차불가";
			this->button1->BackColor = System::Drawing::Color::Red;
		}
		else
		{
			this->button1->Text = L"주차가능";
			this->button1->BackColor = System::Drawing::Color::LimeGreen;
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	};
}