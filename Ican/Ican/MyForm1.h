#pragma once

namespace Ican {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm1에 대한 요약입니다.
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"굴림", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(15, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 100);
			this->label1->TabIndex = 0;
			this->label1->Text = L"P";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"돋움", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(80, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"↑";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->BackColor = System::Drawing::SystemColors::ControlText;
			this->label3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(21, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(479, 65);
			this->label3->TabIndex = 2;
			this->label3->Text = L"주차가능대수";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->BackColor = System::Drawing::SystemColors::ControlText;
			this->label4->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(21, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 102);
			this->label4->TabIndex = 3;
			this->label4->Text = L"4F";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->BackColor = System::Drawing::SystemColors::ControlText;
			this->label5->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(21, 314);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 102);
			this->label5->TabIndex = 4;
			this->label5->Text = L"3F";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->BackColor = System::Drawing::SystemColors::ControlText;
			this->label6->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(21, 416);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 102);
			this->label6->TabIndex = 5;
			this->label6->Text = L"2F";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->BackColor = System::Drawing::SystemColors::ControlText;
			this->label7->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->ForeColor = System::Drawing::Color::LightGreen;
			this->label7->Location = System::Drawing::Point(177, 212);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(220, 110);
			this->label7->TabIndex = 6;
			this->label7->Text = L"여  유";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->BackColor = System::Drawing::SystemColors::ControlText;
			this->label8->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->ForeColor = System::Drawing::Color::LightGreen;
			this->label8->Location = System::Drawing::Point(177, 322);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(220, 94);
			this->label8->TabIndex = 7;
			this->label8->Text = L"여  유";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->BackColor = System::Drawing::SystemColors::ControlText;
			this->label9->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label9->ForeColor = System::Drawing::Color::Tomato;
			this->label9->Location = System::Drawing::Point(177, 416);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 102);
			this->label9->TabIndex = 8;
			this->label9->Text = L"혼  잡";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->BackColor = System::Drawing::SystemColors::ControlText;
			this->label10->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label10->Location = System::Drawing::Point(397, 212);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 110);
			this->label10->TabIndex = 9;
			this->label10->Text = L"21";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->BackColor = System::Drawing::SystemColors::ControlText;
			this->label11->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label11->Location = System::Drawing::Point(397, 322);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 105);
			this->label11->TabIndex = 10;
			this->label11->Text = L"15";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->BackColor = System::Drawing::SystemColors::ControlText;
			this->label12->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label12->ForeColor = System::Drawing::Color::Tomato;
			this->label12->Location = System::Drawing::Point(397, 412);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(103, 106);
			this->label12->TabIndex = 11;
			this->label12->Text = L"2";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label13->ForeColor = System::Drawing::Color::LightSalmon;
			this->label13->Location = System::Drawing::Point(21, 646);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(479, 81);
			this->label13->TabIndex = 12;
			this->label13->Text = L"MINSEM";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &MyForm1::label13_Click);
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->BackColor = System::Drawing::SystemColors::ControlText;
			this->label14->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label14->ForeColor = System::Drawing::Color::Tomato;
			this->label14->Location = System::Drawing::Point(397, 514);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(103, 106);
			this->label14->TabIndex = 15;
			this->label14->Text = L"0";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->BackColor = System::Drawing::SystemColors::ControlText;
			this->label15->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label15->ForeColor = System::Drawing::Color::Tomato;
			this->label15->Location = System::Drawing::Point(177, 518);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(220, 102);
			this->label15->TabIndex = 14;
			this->label15->Text = L"혼  잡";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->BackColor = System::Drawing::SystemColors::ControlText;
			this->label16->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(21, 518);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(156, 102);
			this->label16->TabIndex = 13;
			this->label16->Text = L"1F";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(525, 763);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"Space";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
