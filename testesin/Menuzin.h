#pragma once
#include <windows.h>
#include <stdio.h>

namespace testesin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Menuzin
	/// </summary>
	public ref class Menuzin : public System::Windows::Forms::Form
	{
	public:
		Menuzin(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Menuzin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  freeze;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::CheckBox^  countdownCheck;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  statusGC;
	private: System::Windows::Forms::Label^  label3;



	protected: 

	protected: 
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBoxGreen;
	private: System::Windows::Forms::PictureBox^  pictureBoxRed;
	private: System::Windows::Forms::CheckBox^  clockTime;
	private: System::Windows::Forms::CheckBox^  antiHack;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		Boolean GCRunning;
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Menuzin::typeid));
			this->freeze = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->countdownCheck = (gcnew System::Windows::Forms::CheckBox());
			this->statusGC = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxGreen = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRed = (gcnew System::Windows::Forms::PictureBox());
			this->clockTime = (gcnew System::Windows::Forms::CheckBox());
			this->antiHack = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxRed))->BeginInit();
			this->SuspendLayout();
			// 
			// freeze
			// 
			this->freeze->Enabled = true;
			this->freeze->Tick += gcnew System::EventHandler(this, &Menuzin::freeze_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)), 
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(282, 31);
			this->panel1->TabIndex = 1;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Menuzin::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Menuzin::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Menuzin::panel1_MouseUp);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(98, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 17);
			this->label4->TabIndex = 2;
			this->label4->Text = L"kimuOppa.";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(239, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"–";
			this->label2->Click += gcnew System::EventHandler(this, &Menuzin::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(256, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X";
			this->label1->Click += gcnew System::EventHandler(this, &Menuzin::label1_Click);
			// 
			// countdownCheck
			// 
			this->countdownCheck->AutoSize = true;
			this->countdownCheck->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->countdownCheck->ForeColor = System::Drawing::Color::Silver;
			this->countdownCheck->Location = System::Drawing::Point(12, 47);
			this->countdownCheck->Name = L"countdownCheck";
			this->countdownCheck->Size = System::Drawing::Size(189, 21);
			this->countdownCheck->TabIndex = 0;
			this->countdownCheck->Text = L"Countdown sala de espera.";
			this->countdownCheck->UseVisualStyleBackColor = true;
			// 
			// statusGC
			// 
			this->statusGC->AutoSize = true;
			this->statusGC->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->statusGC->ForeColor = System::Drawing::Color::Silver;
			this->statusGC->Location = System::Drawing::Point(56, 253);
			this->statusGC->Name = L"statusGC";
			this->statusGC->Size = System::Drawing::Size(0, 17);
			this->statusGC->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(9, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Status:";
			// 
			// pictureBoxGreen
			// 
			this->pictureBoxGreen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxGreen.Image")));
			this->pictureBoxGreen->Location = System::Drawing::Point(263, 257);
			this->pictureBoxGreen->Name = L"pictureBoxGreen";
			this->pictureBoxGreen->Size = System::Drawing::Size(11, 11);
			this->pictureBoxGreen->TabIndex = 6;
			this->pictureBoxGreen->TabStop = false;
			this->pictureBoxGreen->Click += gcnew System::EventHandler(this, &Menuzin::pictureBoxGreen_Click);
			// 
			// pictureBoxRed
			// 
			this->pictureBoxRed->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxRed.Image")));
			this->pictureBoxRed->Location = System::Drawing::Point(263, 257);
			this->pictureBoxRed->Name = L"pictureBoxRed";
			this->pictureBoxRed->Size = System::Drawing::Size(11, 11);
			this->pictureBoxRed->TabIndex = 7;
			this->pictureBoxRed->TabStop = false;
			// 
			// clockTime
			// 
			this->clockTime->AutoSize = true;
			this->clockTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->clockTime->ForeColor = System::Drawing::Color::Silver;
			this->clockTime->Location = System::Drawing::Point(12, 74);
			this->clockTime->Name = L"clockTime";
			this->clockTime->Size = System::Drawing::Size(106, 21);
			this->clockTime->TabIndex = 8;
			this->clockTime->Text = L"Parar relógio.";
			this->clockTime->UseVisualStyleBackColor = true;
			// 
			// antiHack
			// 
			this->antiHack->AutoSize = true;
			this->antiHack->Checked = true;
			this->antiHack->CheckState = System::Windows::Forms::CheckState::Checked;
			this->antiHack->ForeColor = System::Drawing::Color::Silver;
			this->antiHack->Location = System::Drawing::Point(12, 233);
			this->antiHack->Name = L"antiHack";
			this->antiHack->Size = System::Drawing::Size(121, 17);
			this->antiHack->TabIndex = 9;
			this->antiHack->Text = L"Desativar Anti-Hack";
			this->antiHack->UseVisualStyleBackColor = true;
			this->antiHack->Visible = false;
			// 
			// Menuzin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)), 
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->ClientSize = System::Drawing::Size(282, 279);
			this->Controls->Add(this->antiHack);
			this->Controls->Add(this->clockTime);
			this->Controls->Add(this->pictureBoxRed);
			this->Controls->Add(this->pictureBoxGreen);
			this->Controls->Add(this->statusGC);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->countdownCheck);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Menuzin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menuzin";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxRed))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: cli::array<Process^>^ GCProcess;

	private: System::Void freeze_Tick(System::Object^  sender, System::EventArgs^  e) {
				 GCProcess = Process::GetProcessesByName(L"main");
				 
				 if(GCProcess->Length == 0)
				 {
					 clockTime->Enabled = false;
					 countdownCheck->Enabled = false;
					 GCRunning = false;
					 pictureBoxGreen->Visible = false;
					 pictureBoxRed->Visible = true;

				 }else if(GCProcess->Length > 0)
				 {
					 clockTime->Enabled = true;
					 countdownCheck->Enabled = true;
					 if(countdownCheck->Checked)
					 {
						 pictureBoxGreen->Visible = true;
						 pictureBoxRed->Visible = false;
						 GCRunning = true;
						 this->statusGC->Text = "Cheat Ativado!";
						 this->statusGC->ForeColor = System::Drawing::Color::Green;
						*(DWORD*)(
						*(DWORD*)(
						*(DWORD*)(
						*(DWORD*)(
						*(DWORD*)(
						*(DWORD*)((int)GetModuleHandle(L"main.exe") + 0xBDEB28)
						+ 0x70) + 0x3A4) + 0x70) + 0x3AC) + 0x2D4) = 0;
					 }else
					 {
						 pictureBoxGreen->Visible = false;
						 pictureBoxRed->Visible = true;
						 this->statusGC->Text = "Cheat Desativdo!";
						 this->statusGC->ForeColor = System::Drawing::Color::Red;			 
					 }

					 if(clockTime->Checked)
					 {
						 pictureBoxGreen->Visible = true;
						 pictureBoxRed->Visible = false;
						 GCRunning = true;
						 this->statusGC->Text = "Cheat Ativado!";
						 this->statusGC->ForeColor = System::Drawing::Color::Green;
						*(DWORD*)(
						*(DWORD*)((int)GetModuleHandle(L"main.exe") + 0xBE5F6C) + 0x40) = 24000;
					 }

				 }
	};

	private: bool mover;
	private: int cX, cY;

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->WindowState = FormWindowState::Minimized;
			 }
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if(e->Button == System::Windows::Forms::MouseButtons::Left){
					cX = e->X;
					cY = e->Y;
					mover = true;
				 }
			 }
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if(e->Button == System::Windows::Forms::MouseButtons::Left)
				 {
					 mover = false;
				 }
			 }
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if(mover){
					 this->Left += e->X - (cX - panel1->Left);
					 this->Top += e->Y - (cY - panel1->Top);
				 }
			 }
	private: System::Void pictureBoxGreen_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 }
};
}