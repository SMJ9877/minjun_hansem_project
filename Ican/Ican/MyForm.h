#pragma once

namespace Ican {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	protected:




	protected:


	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(256, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 73);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Parking Time";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				291)));
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 100);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 9;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(285, 424);
			this->tableLayoutPanel1->TabIndex = 1;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"굴림", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label12->Location = System::Drawing::Point(91, 385);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(112, 24);
			this->label12->TabIndex = 8;
			this->label12->Text = L"93당6274";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"굴림", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label11->Location = System::Drawing::Point(91, 335);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 24);
			this->label11->TabIndex = 7;
			this->label11->Text = L"53루2306";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"굴림", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->Location = System::Drawing::Point(91, 287);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(112, 24);
			this->label10->TabIndex = 6;
			this->label10->Text = L"21하8536";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"굴림", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label9->Location = System::Drawing::Point(91, 239);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 24);
			this->label9->TabIndex = 5;
			this->label9->Text = L"75사7777";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"굴림", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->Location = System::Drawing::Point(91, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 24);
			this->label8->TabIndex = 4;
			this->label8->Text = L"92오4432";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"굴림", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->Location = System::Drawing::Point(91, 143);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 24);
			this->label7->TabIndex = 3;
			this->label7->Text = L"82마3923";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"굴림", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->Location = System::Drawing::Point(91, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 24);
			this->label6->TabIndex = 2;
			this->label6->Text = L"34다2306";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"돋움", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(101, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"차량번호";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"굴림", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->Location = System::Drawing::Point(91, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 24);
			this->label5->TabIndex = 1;
			this->label5->Text = L"39로5032";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				291)));
			this->tableLayoutPanel2->Controls->Add(this->label3, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->label13, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->label14, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->label15, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->label16, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->label17, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label18, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label19, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label20, 0, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(292, 100);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 9;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(275, 423);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(72, 388);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"2020.09.01. 10:26:13";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label13->Location = System::Drawing::Point(72, 338);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(151, 17);
			this->label13->TabIndex = 7;
			this->label13->Text = L"2020.09.01. 10:24:52";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label14->Location = System::Drawing::Point(72, 290);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(150, 17);
			this->label14->TabIndex = 6;
			this->label14->Text = L"2020.09.01. 10:23:31";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label15->Location = System::Drawing::Point(72, 242);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(150, 17);
			this->label15->TabIndex = 5;
			this->label15->Text = L"2020.09.01. 10:19:11";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label16->Location = System::Drawing::Point(72, 194);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(151, 17);
			this->label16->TabIndex = 4;
			this->label16->Text = L"2020.09.01. 10:17:40";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label17->Location = System::Drawing::Point(72, 146);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(150, 17);
			this->label17->TabIndex = 3;
			this->label17->Text = L"2020.09.01. 10:17:13";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label18->Location = System::Drawing::Point(72, 98);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(150, 17);
			this->label18->TabIndex = 2;
			this->label18->Text = L"2020.09.01. 10:16:50";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"돋움", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label19->Location = System::Drawing::Point(101, 8);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(93, 20);
			this->label19->TabIndex = 0;
			this->label19->Text = L"입차시각";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label20->Location = System::Drawing::Point(72, 50);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(150, 17);
			this->label20->TabIndex = 1;
			this->label20->Text = L"2020.09.01. 10:16:22";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				291)));
			this->tableLayoutPanel3->Controls->Add(this->label4, 0, 8);
			this->tableLayoutPanel3->Controls->Add(this->label21, 0, 7);
			this->tableLayoutPanel3->Controls->Add(this->label22, 0, 6);
			this->tableLayoutPanel3->Controls->Add(this->label23, 0, 5);
			this->tableLayoutPanel3->Controls->Add(this->label24, 0, 4);
			this->tableLayoutPanel3->Controls->Add(this->label25, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->label26, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->label27, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label28, 0, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(561, 100);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 9;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(281, 424);
			this->tableLayoutPanel3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->Location = System::Drawing::Point(135, 388);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"--";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label21->Location = System::Drawing::Point(135, 338);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(24, 17);
			this->label21->TabIndex = 7;
			this->label21->Text = L"--";
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label22->Location = System::Drawing::Point(71, 290);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(152, 17);
			this->label22->TabIndex = 6;
			this->label22->Text = L"2020.09.01. 15:41:48";
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label23->Location = System::Drawing::Point(135, 242);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(24, 17);
			this->label23->TabIndex = 5;
			this->label23->Text = L"--";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label24->Location = System::Drawing::Point(135, 194);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(24, 17);
			this->label24->TabIndex = 4;
			this->label24->Text = L"--";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label25->Location = System::Drawing::Point(72, 146);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(151, 17);
			this->label25->TabIndex = 3;
			this->label25->Text = L"2020.09.01. 14:15:32";
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label26->Location = System::Drawing::Point(135, 98);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(24, 17);
			this->label26->TabIndex = 2;
			this->label26->Text = L"--";
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"돋움", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label27->Location = System::Drawing::Point(101, 8);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 20);
			this->label27->TabIndex = 0;
			this->label27->Text = L"출차시각";
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"굴림", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label28->Location = System::Drawing::Point(72, 50);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(150, 17);
			this->label28->TabIndex = 1;
			this->label28->Text = L"2020.09.01. 17:23:10";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 534);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Parking";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
