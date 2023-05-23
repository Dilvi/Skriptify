#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <string>
#include "TxtInput.h"
#include "SaveSkript.h"
namespace Skriptify {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;
	int k = 0;
	int n = 0;
	/// <summary>
	/// Сводка для Skriptify
	/// </summary>
	public ref class Skriptify : public System::Windows::Forms::Form
	{
	public:
		Skriptify(void)
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
		~Skriptify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ lctrl_button;
	private: System::Windows::Forms::Button^ win_button;
	private: System::Windows::Forms::Button^ lalt_button;
	private: TxtInput^ m_input;
	protected:
	protected:
	private: System::Windows::Forms::Button^ shift_button;
	private: System::Windows::Forms::Button^ capslock_button;
	private: System::Windows::Forms::Button^ tab_button;
	private: System::Windows::Forms::Button^ oneleft_button;
	private: System::Windows::Forms::Button^ escape_button;
	private: System::Windows::Forms::Button^ f1_button;
	private: System::Windows::Forms::Button^ f2_button;
	private: System::Windows::Forms::Button^ f3_button;
	private: System::Windows::Forms::Button^ f4_button;
	private: System::Windows::Forms::Button^ f5_button;
	private: System::Windows::Forms::Button^ f6_button;
	private: System::Windows::Forms::Button^ f7_button;
	private: System::Windows::Forms::Button^ f8_button;
	private: System::Windows::Forms::Button^ f9_button;
	private: System::Windows::Forms::Button^ f10_button;
	private: System::Windows::Forms::Button^ f11_button;
	private: System::Windows::Forms::Button^ f12_button;
	private: System::Windows::Forms::Button^ prtintscreen_button;
	private: System::Windows::Forms::Button^ z_button;
	private: System::Windows::Forms::Button^ a_button;
	private: System::Windows::Forms::Button^ q_button;
	private: System::Windows::Forms::Button^ w_button;
	private: System::Windows::Forms::Button^ s_button;
	private: System::Windows::Forms::Button^ d_button;
	private: System::Windows::Forms::Button^ e_button;
	private: System::Windows::Forms::Button^ x_button;
	private: System::Windows::Forms::Button^ c_button;
	private: System::Windows::Forms::Button^ r_button;
	private: System::Windows::Forms::Button^ f_button;
	private: System::Windows::Forms::Button^ v_button;
	private: System::Windows::Forms::Button^ b_button;
	private: System::Windows::Forms::Button^ n_button;
	private: System::Windows::Forms::Button^ m_button;
	private: System::Windows::Forms::Button^ space_button;
	private: System::Windows::Forms::Button^ delete_button;
	private: System::Windows::Forms::Button^ g_button;
	private: System::Windows::Forms::Button^ t_button;
	private: System::Windows::Forms::Button^ h_button;
	private: System::Windows::Forms::Button^ y_button;
	private: System::Windows::Forms::Button^ j_button;
	private: System::Windows::Forms::Button^ u_button;
	private: System::Windows::Forms::Button^ ralt_button;
	private: System::Windows::Forms::Button^ rctrl_button;
	private: System::Windows::Forms::Button^ left_button;
	private: System::Windows::Forms::Button^ comma_button;
	private: System::Windows::Forms::Button^ point_button;
	private: System::Windows::Forms::Button^ rightslash_button;
	private: System::Windows::Forms::Button^ k_button;
	private: System::Windows::Forms::Button^ i_button;
	private: System::Windows::Forms::Button^ o_button;
	private: System::Windows::Forms::Button^ p_button;
	private: System::Windows::Forms::Button^ l_button;
	private: System::Windows::Forms::Button^ colon_button;
	private: System::Windows::Forms::Button^ leftsquarebracket_button;
	private: System::Windows::Forms::Button^ rightsquarebracket_button;
	private: System::Windows::Forms::Button^ quotationmarks_button;
	private: System::Windows::Forms::Button^ rshift_button;
	private: System::Windows::Forms::Button^ enter_button;
	private: System::Windows::Forms::Button^ leftslash_button;
	private: System::Windows::Forms::Button^ one_button;
	private: System::Windows::Forms::Button^ two_button;
	private: System::Windows::Forms::Button^ three_button;
	private: System::Windows::Forms::Button^ four_button;
	private: System::Windows::Forms::Button^ five_button;
	private: System::Windows::Forms::Button^ six_button;
	private: System::Windows::Forms::Button^ seven_button;
	private: System::Windows::Forms::Button^ eight_button;
	private: System::Windows::Forms::Button^ nine_button;
	private: System::Windows::Forms::Button^ zero_button;
	private: System::Windows::Forms::Button^ minus_button;
	private: System::Windows::Forms::Button^ equally_button;
	private: System::Windows::Forms::Button^ backspace_button;
	private: System::Windows::Forms::Button^ up_button;
	private: System::Windows::Forms::Button^ down_button;
	private: System::Windows::Forms::Button^ right_button;
	private: System::Windows::Forms::Button^ language_button;
	private: System::Windows::Forms::Button^ create_button;
	private: System::Windows::Forms::Button^ deleteskript_button;
	private: System::Windows::Forms::Button^ save_button;
	private: System::Windows::Forms::GroupBox^ keyboard;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::TextBox^ skripteditor_window;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::GroupBox^ mouse_buttons;
	private: System::Windows::Forms::Button^ leftmouseclick_button;
	private: System::Windows::Forms::Button^ rightmouseclick_button;
	private: System::Windows::Forms::Button^ averagemouseclick_button;
	private: System::Windows::Forms::GroupBox^ mouse_axis;
	private: System::Windows::Forms::Button^ add_mouse_axis;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ add_time;
	private: System::Windows::Forms::Button^ undo_button;
	private: System::Windows::Forms::Button^ add_time_button;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Button^ combinate;
private: System::Windows::Forms::Button^ cancel_button;
private: System::Windows::Forms::Button^ add_com_button;
private: System::Windows::Forms::GroupBox^ loop_box;
private: System::Windows::Forms::Button^ loop_start_button;
private: System::Windows::Forms::Button^ loop_end_button;
private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Skriptify::typeid));
			this->lctrl_button = (gcnew System::Windows::Forms::Button());
			this->win_button = (gcnew System::Windows::Forms::Button());
			this->lalt_button = (gcnew System::Windows::Forms::Button());
			this->shift_button = (gcnew System::Windows::Forms::Button());
			this->capslock_button = (gcnew System::Windows::Forms::Button());
			this->tab_button = (gcnew System::Windows::Forms::Button());
			this->oneleft_button = (gcnew System::Windows::Forms::Button());
			this->escape_button = (gcnew System::Windows::Forms::Button());
			this->f1_button = (gcnew System::Windows::Forms::Button());
			this->f2_button = (gcnew System::Windows::Forms::Button());
			this->f3_button = (gcnew System::Windows::Forms::Button());
			this->f4_button = (gcnew System::Windows::Forms::Button());
			this->f5_button = (gcnew System::Windows::Forms::Button());
			this->f6_button = (gcnew System::Windows::Forms::Button());
			this->f7_button = (gcnew System::Windows::Forms::Button());
			this->f8_button = (gcnew System::Windows::Forms::Button());
			this->f9_button = (gcnew System::Windows::Forms::Button());
			this->f10_button = (gcnew System::Windows::Forms::Button());
			this->f11_button = (gcnew System::Windows::Forms::Button());
			this->f12_button = (gcnew System::Windows::Forms::Button());
			this->prtintscreen_button = (gcnew System::Windows::Forms::Button());
			this->z_button = (gcnew System::Windows::Forms::Button());
			this->a_button = (gcnew System::Windows::Forms::Button());
			this->q_button = (gcnew System::Windows::Forms::Button());
			this->w_button = (gcnew System::Windows::Forms::Button());
			this->s_button = (gcnew System::Windows::Forms::Button());
			this->d_button = (gcnew System::Windows::Forms::Button());
			this->e_button = (gcnew System::Windows::Forms::Button());
			this->x_button = (gcnew System::Windows::Forms::Button());
			this->c_button = (gcnew System::Windows::Forms::Button());
			this->r_button = (gcnew System::Windows::Forms::Button());
			this->f_button = (gcnew System::Windows::Forms::Button());
			this->v_button = (gcnew System::Windows::Forms::Button());
			this->b_button = (gcnew System::Windows::Forms::Button());
			this->n_button = (gcnew System::Windows::Forms::Button());
			this->m_button = (gcnew System::Windows::Forms::Button());
			this->space_button = (gcnew System::Windows::Forms::Button());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->g_button = (gcnew System::Windows::Forms::Button());
			this->t_button = (gcnew System::Windows::Forms::Button());
			this->h_button = (gcnew System::Windows::Forms::Button());
			this->y_button = (gcnew System::Windows::Forms::Button());
			this->j_button = (gcnew System::Windows::Forms::Button());
			this->u_button = (gcnew System::Windows::Forms::Button());
			this->ralt_button = (gcnew System::Windows::Forms::Button());
			this->rctrl_button = (gcnew System::Windows::Forms::Button());
			this->left_button = (gcnew System::Windows::Forms::Button());
			this->comma_button = (gcnew System::Windows::Forms::Button());
			this->point_button = (gcnew System::Windows::Forms::Button());
			this->rightslash_button = (gcnew System::Windows::Forms::Button());
			this->k_button = (gcnew System::Windows::Forms::Button());
			this->i_button = (gcnew System::Windows::Forms::Button());
			this->o_button = (gcnew System::Windows::Forms::Button());
			this->p_button = (gcnew System::Windows::Forms::Button());
			this->l_button = (gcnew System::Windows::Forms::Button());
			this->colon_button = (gcnew System::Windows::Forms::Button());
			this->leftsquarebracket_button = (gcnew System::Windows::Forms::Button());
			this->rightsquarebracket_button = (gcnew System::Windows::Forms::Button());
			this->quotationmarks_button = (gcnew System::Windows::Forms::Button());
			this->rshift_button = (gcnew System::Windows::Forms::Button());
			this->enter_button = (gcnew System::Windows::Forms::Button());
			this->leftslash_button = (gcnew System::Windows::Forms::Button());
			this->one_button = (gcnew System::Windows::Forms::Button());
			this->two_button = (gcnew System::Windows::Forms::Button());
			this->three_button = (gcnew System::Windows::Forms::Button());
			this->four_button = (gcnew System::Windows::Forms::Button());
			this->five_button = (gcnew System::Windows::Forms::Button());
			this->six_button = (gcnew System::Windows::Forms::Button());
			this->seven_button = (gcnew System::Windows::Forms::Button());
			this->eight_button = (gcnew System::Windows::Forms::Button());
			this->nine_button = (gcnew System::Windows::Forms::Button());
			this->zero_button = (gcnew System::Windows::Forms::Button());
			this->minus_button = (gcnew System::Windows::Forms::Button());
			this->equally_button = (gcnew System::Windows::Forms::Button());
			this->backspace_button = (gcnew System::Windows::Forms::Button());
			this->up_button = (gcnew System::Windows::Forms::Button());
			this->down_button = (gcnew System::Windows::Forms::Button());
			this->right_button = (gcnew System::Windows::Forms::Button());
			this->language_button = (gcnew System::Windows::Forms::Button());
			this->create_button = (gcnew System::Windows::Forms::Button());
			this->deleteskript_button = (gcnew System::Windows::Forms::Button());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->keyboard = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->undo_button = (gcnew System::Windows::Forms::Button());
			this->skripteditor_window = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->combinate = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->add_com_button = (gcnew System::Windows::Forms::Button());
			this->mouse_buttons = (gcnew System::Windows::Forms::GroupBox());
			this->leftmouseclick_button = (gcnew System::Windows::Forms::Button());
			this->rightmouseclick_button = (gcnew System::Windows::Forms::Button());
			this->averagemouseclick_button = (gcnew System::Windows::Forms::Button());
			this->mouse_axis = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->add_mouse_axis = (gcnew System::Windows::Forms::Button());
			this->add_time = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->add_time_button = (gcnew System::Windows::Forms::Button());
			this->loop_box = (gcnew System::Windows::Forms::GroupBox());
			this->loop_start_button = (gcnew System::Windows::Forms::Button());
			this->loop_end_button = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->keyboard->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->mouse_buttons->SuspendLayout();
			this->mouse_axis->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->add_time->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->loop_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// lctrl_button
			// 
			this->lctrl_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->lctrl_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lctrl_button->Font = (gcnew System::Drawing::Font(L"Consolas", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lctrl_button->ForeColor = System::Drawing::Color::Black;
			this->lctrl_button->Location = System::Drawing::Point(6, 302);
			this->lctrl_button->Name = L"lctrl_button";
			this->lctrl_button->Size = System::Drawing::Size(45, 51);
			this->lctrl_button->TabIndex = 0;
			this->lctrl_button->Text = L"Ctrl";
			this->lctrl_button->UseVisualStyleBackColor = false;
			this->lctrl_button->Click += gcnew System::EventHandler(this, &Skriptify::lctrl_button_Click);
			// 
			// win_button
			// 
			this->win_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->win_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->win_button->ForeColor = System::Drawing::Color::Black;
			this->win_button->Location = System::Drawing::Point(57, 302);
			this->win_button->Name = L"win_button";
			this->win_button->Size = System::Drawing::Size(45, 51);
			this->win_button->TabIndex = 1;
			this->win_button->Text = L"Win";
			this->win_button->UseVisualStyleBackColor = false;
			this->win_button->Click += gcnew System::EventHandler(this, &Skriptify::win_button_Click);
			// 
			// lalt_button
			// 
			this->lalt_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->lalt_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lalt_button->ForeColor = System::Drawing::Color::Black;
			this->lalt_button->Location = System::Drawing::Point(107, 302);
			this->lalt_button->Name = L"lalt_button";
			this->lalt_button->Size = System::Drawing::Size(45, 51);
			this->lalt_button->TabIndex = 2;
			this->lalt_button->Text = L"Alt";
			this->lalt_button->UseVisualStyleBackColor = false;
			this->lalt_button->Click += gcnew System::EventHandler(this, &Skriptify::lalt_button_Click);
			// 
			// shift_button
			// 
			this->shift_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->shift_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->shift_button->ForeColor = System::Drawing::Color::Black;
			this->shift_button->Location = System::Drawing::Point(5, 244);
			this->shift_button->Name = L"shift_button";
			this->shift_button->Size = System::Drawing::Size(86, 51);
			this->shift_button->TabIndex = 3;
			this->shift_button->Text = L"Shift";
			this->shift_button->UseVisualStyleBackColor = false;
			this->shift_button->Click += gcnew System::EventHandler(this, &Skriptify::shift_button_Click);
			// 
			// capslock_button
			// 
			this->capslock_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->capslock_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->capslock_button->ForeColor = System::Drawing::Color::Black;
			this->capslock_button->Location = System::Drawing::Point(7, 187);
			this->capslock_button->Name = L"capslock_button";
			this->capslock_button->Size = System::Drawing::Size(75, 51);
			this->capslock_button->TabIndex = 4;
			this->capslock_button->Text = L"CapsLk";
			this->capslock_button->UseVisualStyleBackColor = false;
			this->capslock_button->Click += gcnew System::EventHandler(this, &Skriptify::capslock_button_Click);
			// 
			// tab_button
			// 
			this->tab_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->tab_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tab_button->ForeColor = System::Drawing::Color::Black;
			this->tab_button->Location = System::Drawing::Point(7, 129);
			this->tab_button->Name = L"tab_button";
			this->tab_button->Size = System::Drawing::Size(66, 51);
			this->tab_button->TabIndex = 5;
			this->tab_button->Text = L"Tab";
			this->tab_button->UseVisualStyleBackColor = false;
			this->tab_button->Click += gcnew System::EventHandler(this, &Skriptify::tab_button_Click);
			// 
			// oneleft_button
			// 
			this->oneleft_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->oneleft_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->oneleft_button->ForeColor = System::Drawing::Color::Black;
			this->oneleft_button->Location = System::Drawing::Point(7, 72);
			this->oneleft_button->Name = L"oneleft_button";
			this->oneleft_button->Size = System::Drawing::Size(45, 51);
			this->oneleft_button->TabIndex = 6;
			this->oneleft_button->Text = L"~";
			this->oneleft_button->UseVisualStyleBackColor = false;
			this->oneleft_button->Click += gcnew System::EventHandler(this, &Skriptify::oneleft_button_Click);
			// 
			// escape_button
			// 
			this->escape_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->escape_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->escape_button->ForeColor = System::Drawing::Color::Black;
			this->escape_button->Location = System::Drawing::Point(7, 37);
			this->escape_button->Name = L"escape_button";
			this->escape_button->Size = System::Drawing::Size(45, 28);
			this->escape_button->TabIndex = 7;
			this->escape_button->Text = L"Esc";
			this->escape_button->UseVisualStyleBackColor = false;
			this->escape_button->Click += gcnew System::EventHandler(this, &Skriptify::escape_button_Click);
			// 
			// f1_button
			// 
			this->f1_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f1_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f1_button->ForeColor = System::Drawing::Color::Black;
			this->f1_button->Location = System::Drawing::Point(58, 37);
			this->f1_button->Name = L"f1_button";
			this->f1_button->Size = System::Drawing::Size(45, 28);
			this->f1_button->TabIndex = 8;
			this->f1_button->Text = L"F1";
			this->f1_button->UseVisualStyleBackColor = false;
			this->f1_button->Click += gcnew System::EventHandler(this, &Skriptify::f1_button_Click);
			// 
			// f2_button
			// 
			this->f2_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f2_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f2_button->ForeColor = System::Drawing::Color::Black;
			this->f2_button->Location = System::Drawing::Point(107, 37);
			this->f2_button->Name = L"f2_button";
			this->f2_button->Size = System::Drawing::Size(45, 28);
			this->f2_button->TabIndex = 9;
			this->f2_button->Text = L"F2";
			this->f2_button->UseVisualStyleBackColor = false;
			this->f2_button->Click += gcnew System::EventHandler(this, &Skriptify::f2_button_Click);
			// 
			// f3_button
			// 
			this->f3_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f3_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f3_button->ForeColor = System::Drawing::Color::Black;
			this->f3_button->Location = System::Drawing::Point(159, 37);
			this->f3_button->Name = L"f3_button";
			this->f3_button->Size = System::Drawing::Size(45, 28);
			this->f3_button->TabIndex = 10;
			this->f3_button->Text = L"F3";
			this->f3_button->UseVisualStyleBackColor = false;
			this->f3_button->Click += gcnew System::EventHandler(this, &Skriptify::f3_button_Click);
			// 
			// f4_button
			// 
			this->f4_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f4_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f4_button->ForeColor = System::Drawing::Color::Black;
			this->f4_button->Location = System::Drawing::Point(210, 37);
			this->f4_button->Name = L"f4_button";
			this->f4_button->Size = System::Drawing::Size(45, 28);
			this->f4_button->TabIndex = 11;
			this->f4_button->Text = L"F4";
			this->f4_button->UseVisualStyleBackColor = false;
			this->f4_button->Click += gcnew System::EventHandler(this, &Skriptify::f4_button_Click);
			// 
			// f5_button
			// 
			this->f5_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f5_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f5_button->ForeColor = System::Drawing::Color::Black;
			this->f5_button->Location = System::Drawing::Point(261, 37);
			this->f5_button->Name = L"f5_button";
			this->f5_button->Size = System::Drawing::Size(45, 28);
			this->f5_button->TabIndex = 12;
			this->f5_button->Text = L"F5";
			this->f5_button->UseVisualStyleBackColor = false;
			this->f5_button->Click += gcnew System::EventHandler(this, &Skriptify::f5_button_Click);
			// 
			// f6_button
			// 
			this->f6_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f6_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f6_button->ForeColor = System::Drawing::Color::Black;
			this->f6_button->Location = System::Drawing::Point(312, 37);
			this->f6_button->Name = L"f6_button";
			this->f6_button->Size = System::Drawing::Size(45, 28);
			this->f6_button->TabIndex = 13;
			this->f6_button->Text = L"F6";
			this->f6_button->UseVisualStyleBackColor = false;
			this->f6_button->Click += gcnew System::EventHandler(this, &Skriptify::f6_button_Click);
			// 
			// f7_button
			// 
			this->f7_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f7_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f7_button->ForeColor = System::Drawing::Color::Black;
			this->f7_button->Location = System::Drawing::Point(363, 37);
			this->f7_button->Name = L"f7_button";
			this->f7_button->Size = System::Drawing::Size(45, 28);
			this->f7_button->TabIndex = 14;
			this->f7_button->Text = L"F7";
			this->f7_button->UseVisualStyleBackColor = false;
			this->f7_button->Click += gcnew System::EventHandler(this, &Skriptify::f7_button_Click);
			// 
			// f8_button
			// 
			this->f8_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f8_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f8_button->ForeColor = System::Drawing::Color::Black;
			this->f8_button->Location = System::Drawing::Point(415, 37);
			this->f8_button->Name = L"f8_button";
			this->f8_button->Size = System::Drawing::Size(45, 28);
			this->f8_button->TabIndex = 15;
			this->f8_button->Text = L"F8";
			this->f8_button->UseVisualStyleBackColor = false;
			this->f8_button->Click += gcnew System::EventHandler(this, &Skriptify::f8_button_Click);
			// 
			// f9_button
			// 
			this->f9_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f9_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f9_button->ForeColor = System::Drawing::Color::Black;
			this->f9_button->Location = System::Drawing::Point(466, 37);
			this->f9_button->Name = L"f9_button";
			this->f9_button->Size = System::Drawing::Size(45, 28);
			this->f9_button->TabIndex = 16;
			this->f9_button->Text = L"F9";
			this->f9_button->UseVisualStyleBackColor = false;
			this->f9_button->Click += gcnew System::EventHandler(this, &Skriptify::f9_button_Click);
			// 
			// f10_button
			// 
			this->f10_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f10_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f10_button->ForeColor = System::Drawing::Color::Black;
			this->f10_button->Location = System::Drawing::Point(517, 37);
			this->f10_button->Name = L"f10_button";
			this->f10_button->Size = System::Drawing::Size(45, 28);
			this->f10_button->TabIndex = 17;
			this->f10_button->Text = L"F10";
			this->f10_button->UseVisualStyleBackColor = false;
			this->f10_button->Click += gcnew System::EventHandler(this, &Skriptify::f10_button_Click);
			// 
			// f11_button
			// 
			this->f11_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f11_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f11_button->ForeColor = System::Drawing::Color::Black;
			this->f11_button->Location = System::Drawing::Point(568, 37);
			this->f11_button->Name = L"f11_button";
			this->f11_button->Size = System::Drawing::Size(45, 28);
			this->f11_button->TabIndex = 18;
			this->f11_button->Text = L"F11";
			this->f11_button->UseVisualStyleBackColor = false;
			this->f11_button->Click += gcnew System::EventHandler(this, &Skriptify::f11_button_Click);
			// 
			// f12_button
			// 
			this->f12_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f12_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f12_button->ForeColor = System::Drawing::Color::Black;
			this->f12_button->Location = System::Drawing::Point(619, 37);
			this->f12_button->Name = L"f12_button";
			this->f12_button->Size = System::Drawing::Size(45, 28);
			this->f12_button->TabIndex = 19;
			this->f12_button->Text = L"F12";
			this->f12_button->UseVisualStyleBackColor = false;
			this->f12_button->Click += gcnew System::EventHandler(this, &Skriptify::f12_button_Click);
			// 
			// prtintscreen_button
			// 
			this->prtintscreen_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->prtintscreen_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prtintscreen_button->ForeColor = System::Drawing::Color::Black;
			this->prtintscreen_button->Location = System::Drawing::Point(670, 37);
			this->prtintscreen_button->Name = L"prtintscreen_button";
			this->prtintscreen_button->Size = System::Drawing::Size(50, 28);
			this->prtintscreen_button->TabIndex = 20;
			this->prtintscreen_button->Text = L"PrtSc";
			this->prtintscreen_button->UseVisualStyleBackColor = false;
			this->prtintscreen_button->Click += gcnew System::EventHandler(this, &Skriptify::prtintscreen_button_Click);
			// 
			// z_button
			// 
			this->z_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->z_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->z_button->ForeColor = System::Drawing::Color::Black;
			this->z_button->Location = System::Drawing::Point(97, 244);
			this->z_button->Name = L"z_button";
			this->z_button->Size = System::Drawing::Size(45, 51);
			this->z_button->TabIndex = 21;
			this->z_button->Text = L"Z\r\n я";
			this->z_button->UseVisualStyleBackColor = false;
			this->z_button->Click += gcnew System::EventHandler(this, &Skriptify::z_button_Click);
			// 
			// a_button
			// 
			this->a_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->a_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->a_button->ForeColor = System::Drawing::Color::Black;
			this->a_button->Location = System::Drawing::Point(89, 187);
			this->a_button->Name = L"a_button";
			this->a_button->Size = System::Drawing::Size(45, 51);
			this->a_button->TabIndex = 22;
			this->a_button->Text = L"A\r\n ф";
			this->a_button->UseVisualStyleBackColor = false;
			this->a_button->Click += gcnew System::EventHandler(this, &Skriptify::a_button_Click);
			// 
			// q_button
			// 
			this->q_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->q_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q_button->ForeColor = System::Drawing::Color::Black;
			this->q_button->Location = System::Drawing::Point(79, 129);
			this->q_button->Name = L"q_button";
			this->q_button->Size = System::Drawing::Size(45, 51);
			this->q_button->TabIndex = 23;
			this->q_button->Text = L"Q\r\n  й";
			this->q_button->UseVisualStyleBackColor = false;
			this->q_button->Click += gcnew System::EventHandler(this, &Skriptify::q_button_Click);
			// 
			// w_button
			// 
			this->w_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->w_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->w_button->ForeColor = System::Drawing::Color::Black;
			this->w_button->Location = System::Drawing::Point(130, 129);
			this->w_button->Name = L"w_button";
			this->w_button->Size = System::Drawing::Size(45, 51);
			this->w_button->TabIndex = 24;
			this->w_button->Text = L"W\r\n ц";
			this->w_button->UseVisualStyleBackColor = false;
			this->w_button->Click += gcnew System::EventHandler(this, &Skriptify::w_button_Click);
			// 
			// s_button
			// 
			this->s_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->s_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s_button->ForeColor = System::Drawing::Color::Black;
			this->s_button->Location = System::Drawing::Point(139, 187);
			this->s_button->Name = L"s_button";
			this->s_button->Size = System::Drawing::Size(45, 51);
			this->s_button->TabIndex = 25;
			this->s_button->Text = L"S\r\n ы";
			this->s_button->UseVisualStyleBackColor = false;
			this->s_button->Click += gcnew System::EventHandler(this, &Skriptify::s_button_Click);
			// 
			// d_button
			// 
			this->d_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->d_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->d_button->ForeColor = System::Drawing::Color::Black;
			this->d_button->Location = System::Drawing::Point(191, 187);
			this->d_button->Name = L"d_button";
			this->d_button->Size = System::Drawing::Size(45, 51);
			this->d_button->TabIndex = 26;
			this->d_button->Text = L"D\r\n в";
			this->d_button->UseVisualStyleBackColor = false;
			this->d_button->Click += gcnew System::EventHandler(this, &Skriptify::d_button_Click);
			// 
			// e_button
			// 
			this->e_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->e_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->e_button->ForeColor = System::Drawing::Color::Black;
			this->e_button->Location = System::Drawing::Point(181, 129);
			this->e_button->Name = L"e_button";
			this->e_button->Size = System::Drawing::Size(45, 51);
			this->e_button->TabIndex = 27;
			this->e_button->Text = L"E\r\n у";
			this->e_button->UseVisualStyleBackColor = false;
			this->e_button->Click += gcnew System::EventHandler(this, &Skriptify::e_button_Click);
			// 
			// x_button
			// 
			this->x_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->x_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->x_button->ForeColor = System::Drawing::Color::Black;
			this->x_button->Location = System::Drawing::Point(149, 244);
			this->x_button->Name = L"x_button";
			this->x_button->Size = System::Drawing::Size(45, 51);
			this->x_button->TabIndex = 28;
			this->x_button->Text = L"X\r\n ч";
			this->x_button->UseVisualStyleBackColor = false;
			this->x_button->Click += gcnew System::EventHandler(this, &Skriptify::x_button_Click);
			// 
			// c_button
			// 
			this->c_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->c_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->c_button->ForeColor = System::Drawing::Color::Black;
			this->c_button->Location = System::Drawing::Point(199, 244);
			this->c_button->Name = L"c_button";
			this->c_button->Size = System::Drawing::Size(45, 51);
			this->c_button->TabIndex = 29;
			this->c_button->Text = L"C\r\n с";
			this->c_button->UseVisualStyleBackColor = false;
			this->c_button->Click += gcnew System::EventHandler(this, &Skriptify::c_button_Click);
			// 
			// r_button
			// 
			this->r_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->r_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->r_button->ForeColor = System::Drawing::Color::Black;
			this->r_button->Location = System::Drawing::Point(232, 129);
			this->r_button->Name = L"r_button";
			this->r_button->Size = System::Drawing::Size(45, 51);
			this->r_button->TabIndex = 30;
			this->r_button->Text = L"R\r\n к";
			this->r_button->UseVisualStyleBackColor = false;
			this->r_button->Click += gcnew System::EventHandler(this, &Skriptify::r_button_Click);
			// 
			// f_button
			// 
			this->f_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->f_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button->ForeColor = System::Drawing::Color::Black;
			this->f_button->Location = System::Drawing::Point(242, 187);
			this->f_button->Name = L"f_button";
			this->f_button->Size = System::Drawing::Size(45, 51);
			this->f_button->TabIndex = 31;
			this->f_button->Text = L"F\r\n а";
			this->f_button->UseVisualStyleBackColor = false;
			this->f_button->Click += gcnew System::EventHandler(this, &Skriptify::f_button_Click);
			// 
			// v_button
			// 
			this->v_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->v_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->v_button->ForeColor = System::Drawing::Color::Black;
			this->v_button->Location = System::Drawing::Point(250, 244);
			this->v_button->Name = L"v_button";
			this->v_button->Size = System::Drawing::Size(45, 51);
			this->v_button->TabIndex = 32;
			this->v_button->Text = L"V\r\n м";
			this->v_button->UseVisualStyleBackColor = false;
			this->v_button->Click += gcnew System::EventHandler(this, &Skriptify::v_button_Click);
			// 
			// b_button
			// 
			this->b_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->b_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_button->ForeColor = System::Drawing::Color::Black;
			this->b_button->Location = System::Drawing::Point(301, 244);
			this->b_button->Name = L"b_button";
			this->b_button->Size = System::Drawing::Size(45, 51);
			this->b_button->TabIndex = 33;
			this->b_button->Text = L"B\r\n и";
			this->b_button->UseVisualStyleBackColor = false;
			this->b_button->Click += gcnew System::EventHandler(this, &Skriptify::b_button_Click);
			// 
			// n_button
			// 
			this->n_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->n_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n_button->ForeColor = System::Drawing::Color::Black;
			this->n_button->Location = System::Drawing::Point(352, 244);
			this->n_button->Name = L"n_button";
			this->n_button->Size = System::Drawing::Size(45, 51);
			this->n_button->TabIndex = 34;
			this->n_button->Text = L"N\r\n т";
			this->n_button->UseVisualStyleBackColor = false;
			this->n_button->Click += gcnew System::EventHandler(this, &Skriptify::n_button_Click);
			// 
			// m_button
			// 
			this->m_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->m_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_button->ForeColor = System::Drawing::Color::Black;
			this->m_button->Location = System::Drawing::Point(403, 244);
			this->m_button->Name = L"m_button";
			this->m_button->Size = System::Drawing::Size(45, 51);
			this->m_button->TabIndex = 35;
			this->m_button->Text = L"M\r\n ь";
			this->m_button->UseVisualStyleBackColor = false;
			this->m_button->Click += gcnew System::EventHandler(this, &Skriptify::m_button_Click);
			// 
			// space_button
			// 
			this->space_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->space_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->space_button->ForeColor = System::Drawing::Color::Black;
			this->space_button->Location = System::Drawing::Point(159, 302);
			this->space_button->Name = L"space_button";
			this->space_button->Size = System::Drawing::Size(289, 51);
			this->space_button->TabIndex = 36;
			this->space_button->UseVisualStyleBackColor = false;
			this->space_button->Click += gcnew System::EventHandler(this, &Skriptify::space_button_Click);
			// 
			// delete_button
			// 
			this->delete_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->delete_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_button->ForeColor = System::Drawing::Color::Black;
			this->delete_button->Location = System::Drawing::Point(725, 37);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(50, 28);
			this->delete_button->TabIndex = 37;
			this->delete_button->Text = L"Del";
			this->delete_button->UseVisualStyleBackColor = false;
			this->delete_button->Click += gcnew System::EventHandler(this, &Skriptify::delete_button_Click);
			// 
			// g_button
			// 
			this->g_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->g_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->g_button->ForeColor = System::Drawing::Color::Black;
			this->g_button->Location = System::Drawing::Point(293, 187);
			this->g_button->Name = L"g_button";
			this->g_button->Size = System::Drawing::Size(45, 51);
			this->g_button->TabIndex = 38;
			this->g_button->Text = L"G\r\n п";
			this->g_button->UseVisualStyleBackColor = false;
			this->g_button->Click += gcnew System::EventHandler(this, &Skriptify::g_button_Click);
			// 
			// t_button
			// 
			this->t_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->t_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->t_button->ForeColor = System::Drawing::Color::Black;
			this->t_button->Location = System::Drawing::Point(283, 129);
			this->t_button->Name = L"t_button";
			this->t_button->Size = System::Drawing::Size(45, 51);
			this->t_button->TabIndex = 39;
			this->t_button->Text = L"T\r\n е";
			this->t_button->UseVisualStyleBackColor = false;
			this->t_button->Click += gcnew System::EventHandler(this, &Skriptify::t_button_Click);
			// 
			// h_button
			// 
			this->h_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->h_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->h_button->ForeColor = System::Drawing::Color::Black;
			this->h_button->Location = System::Drawing::Point(344, 187);
			this->h_button->Name = L"h_button";
			this->h_button->Size = System::Drawing::Size(45, 51);
			this->h_button->TabIndex = 45;
			this->h_button->Text = L"H\r\n р";
			this->h_button->UseVisualStyleBackColor = false;
			this->h_button->Click += gcnew System::EventHandler(this, &Skriptify::h_button_Click);
			// 
			// y_button
			// 
			this->y_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->y_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->y_button->ForeColor = System::Drawing::Color::Black;
			this->y_button->Location = System::Drawing::Point(334, 129);
			this->y_button->Name = L"y_button";
			this->y_button->Size = System::Drawing::Size(45, 51);
			this->y_button->TabIndex = 41;
			this->y_button->Text = L"Y\r\n н";
			this->y_button->UseVisualStyleBackColor = false;
			this->y_button->Click += gcnew System::EventHandler(this, &Skriptify::y_button_Click);
			// 
			// j_button
			// 
			this->j_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->j_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->j_button->ForeColor = System::Drawing::Color::Black;
			this->j_button->Location = System::Drawing::Point(395, 187);
			this->j_button->Name = L"j_button";
			this->j_button->Size = System::Drawing::Size(45, 51);
			this->j_button->TabIndex = 42;
			this->j_button->Text = L"J\r\n о";
			this->j_button->UseVisualStyleBackColor = false;
			this->j_button->Click += gcnew System::EventHandler(this, &Skriptify::j_button_Click);
			// 
			// u_button
			// 
			this->u_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->u_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->u_button->ForeColor = System::Drawing::Color::Black;
			this->u_button->Location = System::Drawing::Point(384, 129);
			this->u_button->Name = L"u_button";
			this->u_button->Size = System::Drawing::Size(45, 51);
			this->u_button->TabIndex = 43;
			this->u_button->Text = L"U\r\n г";
			this->u_button->UseVisualStyleBackColor = false;
			this->u_button->Click += gcnew System::EventHandler(this, &Skriptify::u_button_Click);
			// 
			// ralt_button
			// 
			this->ralt_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->ralt_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ralt_button->ForeColor = System::Drawing::Color::Black;
			this->ralt_button->Location = System::Drawing::Point(454, 302);
			this->ralt_button->Name = L"ralt_button";
			this->ralt_button->Size = System::Drawing::Size(45, 51);
			this->ralt_button->TabIndex = 44;
			this->ralt_button->Text = L"Alt";
			this->ralt_button->UseVisualStyleBackColor = false;
			this->ralt_button->Click += gcnew System::EventHandler(this, &Skriptify::ralt_button_Click);
			// 
			// rctrl_button
			// 
			this->rctrl_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->rctrl_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rctrl_button->Font = (gcnew System::Drawing::Font(L"Consolas", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rctrl_button->ForeColor = System::Drawing::Color::Black;
			this->rctrl_button->Location = System::Drawing::Point(505, 302);
			this->rctrl_button->Name = L"rctrl_button";
			this->rctrl_button->Size = System::Drawing::Size(45, 51);
			this->rctrl_button->TabIndex = 45;
			this->rctrl_button->Text = L"Ctrl";
			this->rctrl_button->UseVisualStyleBackColor = false;
			this->rctrl_button->Click += gcnew System::EventHandler(this, &Skriptify::rctrl_button_Click);
			// 
			// left_button
			// 
			this->left_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->left_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->left_button->ForeColor = System::Drawing::Color::Black;
			this->left_button->Location = System::Drawing::Point(555, 302);
			this->left_button->Name = L"left_button";
			this->left_button->Size = System::Drawing::Size(45, 51);
			this->left_button->TabIndex = 46;
			this->left_button->Text = L"←";
			this->left_button->UseVisualStyleBackColor = false;
			this->left_button->Click += gcnew System::EventHandler(this, &Skriptify::left_button_Click);
			// 
			// comma_button
			// 
			this->comma_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->comma_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comma_button->ForeColor = System::Drawing::Color::Black;
			this->comma_button->Location = System::Drawing::Point(454, 244);
			this->comma_button->Name = L"comma_button";
			this->comma_button->Size = System::Drawing::Size(45, 51);
			this->comma_button->TabIndex = 47;
			this->comma_button->Text = L"<\r\n, б";
			this->comma_button->UseVisualStyleBackColor = false;
			this->comma_button->Click += gcnew System::EventHandler(this, &Skriptify::comma_button_Click);
			// 
			// point_button
			// 
			this->point_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->point_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->point_button->ForeColor = System::Drawing::Color::Black;
			this->point_button->Location = System::Drawing::Point(505, 244);
			this->point_button->Name = L"point_button";
			this->point_button->Size = System::Drawing::Size(45, 51);
			this->point_button->TabIndex = 48;
			this->point_button->Text = L">\r\n. ю";
			this->point_button->UseVisualStyleBackColor = false;
			this->point_button->Click += gcnew System::EventHandler(this, &Skriptify::point_button_Click);
			// 
			// rightslash_button
			// 
			this->rightslash_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->rightslash_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rightslash_button->ForeColor = System::Drawing::Color::Black;
			this->rightslash_button->Location = System::Drawing::Point(555, 244);
			this->rightslash_button->Name = L"rightslash_button";
			this->rightslash_button->Size = System::Drawing::Size(45, 51);
			this->rightslash_button->TabIndex = 49;
			this->rightslash_button->Text = L"\? ,\r\n/ .";
			this->rightslash_button->UseVisualStyleBackColor = false;
			this->rightslash_button->Click += gcnew System::EventHandler(this, &Skriptify::rightslash_button_Click);
			// 
			// k_button
			// 
			this->k_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->k_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->k_button->ForeColor = System::Drawing::Color::Black;
			this->k_button->Location = System::Drawing::Point(446, 187);
			this->k_button->Name = L"k_button";
			this->k_button->Size = System::Drawing::Size(45, 51);
			this->k_button->TabIndex = 50;
			this->k_button->Text = L"K\r\n л";
			this->k_button->UseVisualStyleBackColor = false;
			this->k_button->Click += gcnew System::EventHandler(this, &Skriptify::k_button_Click);
			// 
			// i_button
			// 
			this->i_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->i_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->i_button->ForeColor = System::Drawing::Color::Black;
			this->i_button->Location = System::Drawing::Point(435, 129);
			this->i_button->Name = L"i_button";
			this->i_button->Size = System::Drawing::Size(45, 51);
			this->i_button->TabIndex = 51;
			this->i_button->Text = L"I\r\n ш";
			this->i_button->UseVisualStyleBackColor = false;
			this->i_button->Click += gcnew System::EventHandler(this, &Skriptify::i_button_Click);
			// 
			// o_button
			// 
			this->o_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->o_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->o_button->ForeColor = System::Drawing::Color::Black;
			this->o_button->Location = System::Drawing::Point(486, 129);
			this->o_button->Name = L"o_button";
			this->o_button->Size = System::Drawing::Size(45, 51);
			this->o_button->TabIndex = 52;
			this->o_button->Text = L"O\r\n щ";
			this->o_button->UseVisualStyleBackColor = false;
			this->o_button->Click += gcnew System::EventHandler(this, &Skriptify::o_button_Click);
			// 
			// p_button
			// 
			this->p_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->p_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p_button->ForeColor = System::Drawing::Color::Black;
			this->p_button->Location = System::Drawing::Point(537, 129);
			this->p_button->Name = L"p_button";
			this->p_button->Size = System::Drawing::Size(45, 51);
			this->p_button->TabIndex = 53;
			this->p_button->Text = L"P\r\n з";
			this->p_button->UseVisualStyleBackColor = false;
			this->p_button->Click += gcnew System::EventHandler(this, &Skriptify::p_button_Click);
			// 
			// l_button
			// 
			this->l_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->l_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l_button->ForeColor = System::Drawing::Color::Black;
			this->l_button->Location = System::Drawing::Point(497, 187);
			this->l_button->Name = L"l_button";
			this->l_button->Size = System::Drawing::Size(45, 51);
			this->l_button->TabIndex = 54;
			this->l_button->Text = L"L\r\n д";
			this->l_button->UseVisualStyleBackColor = false;
			this->l_button->Click += gcnew System::EventHandler(this, &Skriptify::l_button_Click);
			// 
			// colon_button
			// 
			this->colon_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->colon_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->colon_button->ForeColor = System::Drawing::Color::Black;
			this->colon_button->Location = System::Drawing::Point(549, 187);
			this->colon_button->Name = L"colon_button";
			this->colon_button->Size = System::Drawing::Size(45, 51);
			this->colon_button->TabIndex = 55;
			this->colon_button->Text = L":\r\n; ж";
			this->colon_button->UseVisualStyleBackColor = false;
			this->colon_button->Click += gcnew System::EventHandler(this, &Skriptify::colon_button_Click);
			// 
			// leftsquarebracket_button
			// 
			this->leftsquarebracket_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->leftsquarebracket_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->leftsquarebracket_button->ForeColor = System::Drawing::Color::Black;
			this->leftsquarebracket_button->Location = System::Drawing::Point(587, 129);
			this->leftsquarebracket_button->Name = L"leftsquarebracket_button";
			this->leftsquarebracket_button->Size = System::Drawing::Size(45, 51);
			this->leftsquarebracket_button->TabIndex = 56;
			this->leftsquarebracket_button->Text = L"{\r\n[ х";
			this->leftsquarebracket_button->UseVisualStyleBackColor = false;
			this->leftsquarebracket_button->Click += gcnew System::EventHandler(this, &Skriptify::leftsquarebracket_button_Click);
			// 
			// rightsquarebracket_button
			// 
			this->rightsquarebracket_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->rightsquarebracket_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rightsquarebracket_button->ForeColor = System::Drawing::Color::Black;
			this->rightsquarebracket_button->Location = System::Drawing::Point(639, 129);
			this->rightsquarebracket_button->Name = L"rightsquarebracket_button";
			this->rightsquarebracket_button->Size = System::Drawing::Size(45, 51);
			this->rightsquarebracket_button->TabIndex = 57;
			this->rightsquarebracket_button->Text = L"}\r\n] ъ";
			this->rightsquarebracket_button->UseVisualStyleBackColor = false;
			this->rightsquarebracket_button->Click += gcnew System::EventHandler(this, &Skriptify::rightsquarebracket_button_Click);
			// 
			// quotationmarks_button
			// 
			this->quotationmarks_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->quotationmarks_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->quotationmarks_button->ForeColor = System::Drawing::Color::Black;
			this->quotationmarks_button->Location = System::Drawing::Point(599, 187);
			this->quotationmarks_button->Name = L"quotationmarks_button";
			this->quotationmarks_button->Size = System::Drawing::Size(45, 51);
			this->quotationmarks_button->TabIndex = 58;
			this->quotationmarks_button->Text = L"\"\r\n\' э";
			this->quotationmarks_button->UseVisualStyleBackColor = false;
			this->quotationmarks_button->Click += gcnew System::EventHandler(this, &Skriptify::quotationmarks_button_Click);
			// 
			// rshift_button
			// 
			this->rshift_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->rshift_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rshift_button->ForeColor = System::Drawing::Color::Black;
			this->rshift_button->Location = System::Drawing::Point(658, 244);
			this->rshift_button->Name = L"rshift_button";
			this->rshift_button->Size = System::Drawing::Size(117, 51);
			this->rshift_button->TabIndex = 59;
			this->rshift_button->Text = L"Shift";
			this->rshift_button->UseVisualStyleBackColor = false;
			this->rshift_button->Click += gcnew System::EventHandler(this, &Skriptify::rshift_button_Click);
			// 
			// enter_button
			// 
			this->enter_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->enter_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enter_button->ForeColor = System::Drawing::Color::Black;
			this->enter_button->Location = System::Drawing::Point(650, 187);
			this->enter_button->Name = L"enter_button";
			this->enter_button->Size = System::Drawing::Size(123, 51);
			this->enter_button->TabIndex = 60;
			this->enter_button->Text = L"Enter";
			this->enter_button->UseVisualStyleBackColor = false;
			this->enter_button->Click += gcnew System::EventHandler(this, &Skriptify::enter_button_Click);
			// 
			// leftslash_button
			// 
			this->leftslash_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->leftslash_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->leftslash_button->ForeColor = System::Drawing::Color::Black;
			this->leftslash_button->Location = System::Drawing::Point(690, 129);
			this->leftslash_button->Name = L"leftslash_button";
			this->leftslash_button->Size = System::Drawing::Size(85, 51);
			this->leftslash_button->TabIndex = 61;
			this->leftslash_button->Text = L"| \\";
			this->leftslash_button->UseVisualStyleBackColor = false;
			this->leftslash_button->Click += gcnew System::EventHandler(this, &Skriptify::leftslash_button_Click);
			// 
			// one_button
			// 
			this->one_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->one_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one_button->ForeColor = System::Drawing::Color::Black;
			this->one_button->Location = System::Drawing::Point(58, 72);
			this->one_button->Name = L"one_button";
			this->one_button->Size = System::Drawing::Size(45, 51);
			this->one_button->TabIndex = 62;
			this->one_button->Text = L"1";
			this->one_button->UseVisualStyleBackColor = false;
			this->one_button->Click += gcnew System::EventHandler(this, &Skriptify::one_button_Click);
			// 
			// two_button
			// 
			this->two_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->two_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->two_button->ForeColor = System::Drawing::Color::Black;
			this->two_button->Location = System::Drawing::Point(109, 72);
			this->two_button->Name = L"two_button";
			this->two_button->Size = System::Drawing::Size(45, 51);
			this->two_button->TabIndex = 63;
			this->two_button->Text = L"2";
			this->two_button->UseVisualStyleBackColor = false;
			this->two_button->Click += gcnew System::EventHandler(this, &Skriptify::two_button_Click);
			// 
			// three_button
			// 
			this->three_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->three_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->three_button->ForeColor = System::Drawing::Color::Black;
			this->three_button->Location = System::Drawing::Point(160, 72);
			this->three_button->Name = L"three_button";
			this->three_button->Size = System::Drawing::Size(45, 51);
			this->three_button->TabIndex = 64;
			this->three_button->Text = L"3";
			this->three_button->UseVisualStyleBackColor = false;
			this->three_button->Click += gcnew System::EventHandler(this, &Skriptify::three_button_Click);
			// 
			// four_button
			// 
			this->four_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->four_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->four_button->ForeColor = System::Drawing::Color::Black;
			this->four_button->Location = System::Drawing::Point(211, 72);
			this->four_button->Name = L"four_button";
			this->four_button->Size = System::Drawing::Size(45, 51);
			this->four_button->TabIndex = 65;
			this->four_button->Text = L"4";
			this->four_button->UseVisualStyleBackColor = false;
			this->four_button->Click += gcnew System::EventHandler(this, &Skriptify::four_button_Click);
			// 
			// five_button
			// 
			this->five_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->five_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->five_button->ForeColor = System::Drawing::Color::Black;
			this->five_button->Location = System::Drawing::Point(262, 72);
			this->five_button->Name = L"five_button";
			this->five_button->Size = System::Drawing::Size(45, 51);
			this->five_button->TabIndex = 66;
			this->five_button->Text = L"5";
			this->five_button->UseVisualStyleBackColor = false;
			this->five_button->Click += gcnew System::EventHandler(this, &Skriptify::five_button_Click);
			// 
			// six_button
			// 
			this->six_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->six_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->six_button->ForeColor = System::Drawing::Color::Black;
			this->six_button->Location = System::Drawing::Point(313, 72);
			this->six_button->Name = L"six_button";
			this->six_button->Size = System::Drawing::Size(45, 51);
			this->six_button->TabIndex = 67;
			this->six_button->Text = L"6";
			this->six_button->UseVisualStyleBackColor = false;
			this->six_button->Click += gcnew System::EventHandler(this, &Skriptify::six_button_Click);
			// 
			// seven_button
			// 
			this->seven_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->seven_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seven_button->ForeColor = System::Drawing::Color::Black;
			this->seven_button->Location = System::Drawing::Point(363, 72);
			this->seven_button->Name = L"seven_button";
			this->seven_button->Size = System::Drawing::Size(45, 51);
			this->seven_button->TabIndex = 68;
			this->seven_button->Text = L"7";
			this->seven_button->UseVisualStyleBackColor = false;
			this->seven_button->Click += gcnew System::EventHandler(this, &Skriptify::seven_button_Click);
			// 
			// eight_button
			// 
			this->eight_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->eight_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eight_button->ForeColor = System::Drawing::Color::Black;
			this->eight_button->Location = System::Drawing::Point(415, 72);
			this->eight_button->Name = L"eight_button";
			this->eight_button->Size = System::Drawing::Size(45, 51);
			this->eight_button->TabIndex = 69;
			this->eight_button->Text = L"8";
			this->eight_button->UseVisualStyleBackColor = false;
			this->eight_button->Click += gcnew System::EventHandler(this, &Skriptify::eight_button_Click);
			// 
			// nine_button
			// 
			this->nine_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->nine_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nine_button->ForeColor = System::Drawing::Color::Black;
			this->nine_button->Location = System::Drawing::Point(466, 72);
			this->nine_button->Name = L"nine_button";
			this->nine_button->Size = System::Drawing::Size(45, 51);
			this->nine_button->TabIndex = 70;
			this->nine_button->Text = L"9";
			this->nine_button->UseVisualStyleBackColor = false;
			this->nine_button->Click += gcnew System::EventHandler(this, &Skriptify::nine_button_Click);
			// 
			// zero_button
			// 
			this->zero_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->zero_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero_button->ForeColor = System::Drawing::Color::Black;
			this->zero_button->Location = System::Drawing::Point(517, 72);
			this->zero_button->Name = L"zero_button";
			this->zero_button->Size = System::Drawing::Size(45, 51);
			this->zero_button->TabIndex = 71;
			this->zero_button->Text = L"0";
			this->zero_button->UseVisualStyleBackColor = false;
			this->zero_button->Click += gcnew System::EventHandler(this, &Skriptify::zero_button_Click);
			// 
			// minus_button
			// 
			this->minus_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->minus_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus_button->ForeColor = System::Drawing::Color::Black;
			this->minus_button->Location = System::Drawing::Point(568, 72);
			this->minus_button->Name = L"minus_button";
			this->minus_button->Size = System::Drawing::Size(45, 51);
			this->minus_button->TabIndex = 72;
			this->minus_button->Text = L"-";
			this->minus_button->UseVisualStyleBackColor = false;
			this->minus_button->Click += gcnew System::EventHandler(this, &Skriptify::minus_button_Click);
			// 
			// equally_button
			// 
			this->equally_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->equally_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equally_button->ForeColor = System::Drawing::Color::Black;
			this->equally_button->Location = System::Drawing::Point(619, 72);
			this->equally_button->Name = L"equally_button";
			this->equally_button->Size = System::Drawing::Size(45, 51);
			this->equally_button->TabIndex = 73;
			this->equally_button->Text = L"=";
			this->equally_button->UseVisualStyleBackColor = false;
			this->equally_button->Click += gcnew System::EventHandler(this, &Skriptify::equally_button_Click);
			// 
			// backspace_button
			// 
			this->backspace_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->backspace_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backspace_button->ForeColor = System::Drawing::Color::Black;
			this->backspace_button->Location = System::Drawing::Point(670, 72);
			this->backspace_button->Name = L"backspace_button";
			this->backspace_button->Size = System::Drawing::Size(104, 51);
			this->backspace_button->TabIndex = 74;
			this->backspace_button->Text = L"Back";
			this->backspace_button->UseVisualStyleBackColor = false;
			this->backspace_button->Click += gcnew System::EventHandler(this, &Skriptify::backspace_button_Click);
			// 
			// up_button
			// 
			this->up_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->up_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->up_button->ForeColor = System::Drawing::Color::Black;
			this->up_button->Location = System::Drawing::Point(607, 244);
			this->up_button->Name = L"up_button";
			this->up_button->Size = System::Drawing::Size(45, 51);
			this->up_button->TabIndex = 75;
			this->up_button->Text = L"↑";
			this->up_button->UseVisualStyleBackColor = false;
			this->up_button->Click += gcnew System::EventHandler(this, &Skriptify::up_button_Click);
			// 
			// down_button
			// 
			this->down_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->down_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->down_button->ForeColor = System::Drawing::Color::Black;
			this->down_button->Location = System::Drawing::Point(607, 302);
			this->down_button->Name = L"down_button";
			this->down_button->Size = System::Drawing::Size(45, 51);
			this->down_button->TabIndex = 76;
			this->down_button->Text = L"↓";
			this->down_button->UseVisualStyleBackColor = false;
			this->down_button->Click += gcnew System::EventHandler(this, &Skriptify::down_button_Click);
			// 
			// right_button
			// 
			this->right_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->right_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->right_button->ForeColor = System::Drawing::Color::Black;
			this->right_button->Location = System::Drawing::Point(658, 302);
			this->right_button->Name = L"right_button";
			this->right_button->Size = System::Drawing::Size(45, 51);
			this->right_button->TabIndex = 77;
			this->right_button->Text = L"→";
			this->right_button->UseVisualStyleBackColor = false;
			this->right_button->Click += gcnew System::EventHandler(this, &Skriptify::right_button_Click);
			// 
			// language_button
			// 
			this->language_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->language_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->language_button->ForeColor = System::Drawing::Color::Black;
			this->language_button->Location = System::Drawing::Point(709, 302);
			this->language_button->Name = L"language_button";
			this->language_button->Size = System::Drawing::Size(65, 51);
			this->language_button->TabIndex = 78;
			this->language_button->Text = L"ENG";
			this->language_button->UseVisualStyleBackColor = false;
			this->language_button->Click += gcnew System::EventHandler(this, &Skriptify::language_button_Click);
			// 
			// create_button
			// 
			this->create_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->create_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->create_button->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_button->Location = System::Drawing::Point(3, 3);
			this->create_button->Name = L"create_button";
			this->create_button->Size = System::Drawing::Size(170, 51);
			this->create_button->TabIndex = 79;
			this->create_button->Text = L"Создать";
			this->create_button->UseVisualStyleBackColor = false;
			this->create_button->Click += gcnew System::EventHandler(this, &Skriptify::create_button_Click);
			// 
			// deleteskript_button
			// 
			this->deleteskript_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->deleteskript_button->Enabled = false;
			this->deleteskript_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteskript_button->Location = System::Drawing::Point(3, 117);
			this->deleteskript_button->Name = L"deleteskript_button";
			this->deleteskript_button->Size = System::Drawing::Size(170, 51);
			this->deleteskript_button->TabIndex = 80;
			this->deleteskript_button->Text = L"Удалить";
			this->deleteskript_button->UseVisualStyleBackColor = false;
			this->deleteskript_button->Click += gcnew System::EventHandler(this, &Skriptify::deleteskript_button_Click);
			// 
			// save_button
			// 
			this->save_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->save_button->Enabled = false;
			this->save_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_button->Location = System::Drawing::Point(3, 60);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(170, 51);
			this->save_button->TabIndex = 81;
			this->save_button->Text = L"Сохранить";
			this->save_button->UseVisualStyleBackColor = false;
			this->save_button->Click += gcnew System::EventHandler(this, &Skriptify::save_button_Click);
			// 
			// keyboard
			// 
			this->keyboard->Controls->Add(this->lctrl_button);
			this->keyboard->Controls->Add(this->win_button);
			this->keyboard->Controls->Add(this->lalt_button);
			this->keyboard->Controls->Add(this->shift_button);
			this->keyboard->Controls->Add(this->language_button);
			this->keyboard->Controls->Add(this->capslock_button);
			this->keyboard->Controls->Add(this->right_button);
			this->keyboard->Controls->Add(this->tab_button);
			this->keyboard->Controls->Add(this->down_button);
			this->keyboard->Controls->Add(this->oneleft_button);
			this->keyboard->Controls->Add(this->up_button);
			this->keyboard->Controls->Add(this->button1);
			this->keyboard->Controls->Add(this->escape_button);
			this->keyboard->Controls->Add(this->backspace_button);
			this->keyboard->Controls->Add(this->f1_button);
			this->keyboard->Controls->Add(this->equally_button);
			this->keyboard->Controls->Add(this->f2_button);
			this->keyboard->Controls->Add(this->minus_button);
			this->keyboard->Controls->Add(this->f3_button);
			this->keyboard->Controls->Add(this->zero_button);
			this->keyboard->Controls->Add(this->f4_button);
			this->keyboard->Controls->Add(this->nine_button);
			this->keyboard->Controls->Add(this->f5_button);
			this->keyboard->Controls->Add(this->eight_button);
			this->keyboard->Controls->Add(this->f6_button);
			this->keyboard->Controls->Add(this->seven_button);
			this->keyboard->Controls->Add(this->f7_button);
			this->keyboard->Controls->Add(this->six_button);
			this->keyboard->Controls->Add(this->f8_button);
			this->keyboard->Controls->Add(this->five_button);
			this->keyboard->Controls->Add(this->f9_button);
			this->keyboard->Controls->Add(this->four_button);
			this->keyboard->Controls->Add(this->f10_button);
			this->keyboard->Controls->Add(this->three_button);
			this->keyboard->Controls->Add(this->f11_button);
			this->keyboard->Controls->Add(this->two_button);
			this->keyboard->Controls->Add(this->f12_button);
			this->keyboard->Controls->Add(this->one_button);
			this->keyboard->Controls->Add(this->prtintscreen_button);
			this->keyboard->Controls->Add(this->leftslash_button);
			this->keyboard->Controls->Add(this->z_button);
			this->keyboard->Controls->Add(this->enter_button);
			this->keyboard->Controls->Add(this->a_button);
			this->keyboard->Controls->Add(this->rshift_button);
			this->keyboard->Controls->Add(this->q_button);
			this->keyboard->Controls->Add(this->quotationmarks_button);
			this->keyboard->Controls->Add(this->w_button);
			this->keyboard->Controls->Add(this->rightsquarebracket_button);
			this->keyboard->Controls->Add(this->s_button);
			this->keyboard->Controls->Add(this->leftsquarebracket_button);
			this->keyboard->Controls->Add(this->d_button);
			this->keyboard->Controls->Add(this->colon_button);
			this->keyboard->Controls->Add(this->e_button);
			this->keyboard->Controls->Add(this->l_button);
			this->keyboard->Controls->Add(this->x_button);
			this->keyboard->Controls->Add(this->p_button);
			this->keyboard->Controls->Add(this->c_button);
			this->keyboard->Controls->Add(this->o_button);
			this->keyboard->Controls->Add(this->r_button);
			this->keyboard->Controls->Add(this->i_button);
			this->keyboard->Controls->Add(this->f_button);
			this->keyboard->Controls->Add(this->k_button);
			this->keyboard->Controls->Add(this->v_button);
			this->keyboard->Controls->Add(this->rightslash_button);
			this->keyboard->Controls->Add(this->b_button);
			this->keyboard->Controls->Add(this->point_button);
			this->keyboard->Controls->Add(this->n_button);
			this->keyboard->Controls->Add(this->comma_button);
			this->keyboard->Controls->Add(this->m_button);
			this->keyboard->Controls->Add(this->left_button);
			this->keyboard->Controls->Add(this->space_button);
			this->keyboard->Controls->Add(this->rctrl_button);
			this->keyboard->Controls->Add(this->delete_button);
			this->keyboard->Controls->Add(this->ralt_button);
			this->keyboard->Controls->Add(this->g_button);
			this->keyboard->Controls->Add(this->u_button);
			this->keyboard->Controls->Add(this->t_button);
			this->keyboard->Controls->Add(this->j_button);
			this->keyboard->Controls->Add(this->h_button);
			this->keyboard->Controls->Add(this->y_button);
			this->keyboard->Enabled = false;
			this->keyboard->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->keyboard->Location = System::Drawing::Point(11, 346);
			this->keyboard->Name = L"keyboard";
			this->keyboard->Size = System::Drawing::Size(782, 361);
			this->keyboard->TabIndex = 83;
			this->keyboard->TabStop = false;
			this->keyboard->Text = L"Виртуальная клавиатура";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(7, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Esc";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Skriptify::escape_button_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Controls->Add(this->create_button);
			this->flowLayoutPanel1->Controls->Add(this->save_button);
			this->flowLayoutPanel1->Controls->Add(this->deleteskript_button);
			this->flowLayoutPanel1->Controls->Add(this->undo_button);
			this->flowLayoutPanel1->Location = System::Drawing::Point(11, 14);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(179, 326);
			this->flowLayoutPanel1->TabIndex = 85;
			// 
			// undo_button
			// 
			this->undo_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->undo_button->Enabled = false;
			this->undo_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->undo_button->Location = System::Drawing::Point(3, 174);
			this->undo_button->Name = L"undo_button";
			this->undo_button->Size = System::Drawing::Size(170, 51);
			this->undo_button->TabIndex = 82;
			this->undo_button->Text = L"Назад";
			this->undo_button->UseVisualStyleBackColor = false;
			this->undo_button->Click += gcnew System::EventHandler(this, &Skriptify::undo_button_Click);
			// 
			// skripteditor_window
			// 
			this->skripteditor_window->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->skripteditor_window->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->skripteditor_window->Enabled = false;
			this->skripteditor_window->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->skripteditor_window->ForeColor = System::Drawing::Color::Black;
			this->skripteditor_window->Location = System::Drawing::Point(197, 47);
			this->skripteditor_window->Multiline = true;
			this->skripteditor_window->Name = L"skripteditor_window";
			this->skripteditor_window->ReadOnly = true;
			this->skripteditor_window->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->skripteditor_window->Size = System::Drawing::Size(597, 292);
			this->skripteditor_window->TabIndex = 86;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(200, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(594, 30);
			this->label1->TabIndex = 87;
			this->label1->Text = L"Редактор скрипта";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel2->Controls->Add(this->combinate);
			this->flowLayoutPanel2->Controls->Add(this->cancel_button);
			this->flowLayoutPanel2->Controls->Add(this->add_com_button);
			this->flowLayoutPanel2->Location = System::Drawing::Point(803, 14);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(226, 118);
			this->flowLayoutPanel2->TabIndex = 89;
			// 
			// combinate
			// 
			this->combinate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->combinate->Enabled = false;
			this->combinate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->combinate->Location = System::Drawing::Point(3, 3);
			this->combinate->Name = L"combinate";
			this->combinate->Size = System::Drawing::Size(216, 51);
			this->combinate->TabIndex = 0;
			this->combinate->Text = L"Комбинация клавиш";
			this->combinate->UseVisualStyleBackColor = false;
			this->combinate->Click += gcnew System::EventHandler(this, &Skriptify::combinate_Click);
			// 
			// cancel_button
			// 
			this->cancel_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->cancel_button->Enabled = false;
			this->cancel_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_button->Location = System::Drawing::Point(3, 60);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(105, 51);
			this->cancel_button->TabIndex = 1;
			this->cancel_button->Text = L"Отмена";
			this->cancel_button->UseVisualStyleBackColor = false;
			this->cancel_button->Click += gcnew System::EventHandler(this, &Skriptify::cancel_button_Click);
			// 
			// add_com_button
			// 
			this->add_com_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->add_com_button->Enabled = false;
			this->add_com_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_com_button->Location = System::Drawing::Point(114, 60);
			this->add_com_button->Name = L"add_com_button";
			this->add_com_button->Size = System::Drawing::Size(105, 51);
			this->add_com_button->TabIndex = 2;
			this->add_com_button->Text = L"Добавить";
			this->add_com_button->UseVisualStyleBackColor = false;
			this->add_com_button->Click += gcnew System::EventHandler(this, &Skriptify::add_com_button_Click);
			// 
			// mouse_buttons
			// 
			this->mouse_buttons->Controls->Add(this->leftmouseclick_button);
			this->mouse_buttons->Controls->Add(this->rightmouseclick_button);
			this->mouse_buttons->Controls->Add(this->averagemouseclick_button);
			this->mouse_buttons->Enabled = false;
			this->mouse_buttons->Location = System::Drawing::Point(803, 512);
			this->mouse_buttons->Name = L"mouse_buttons";
			this->mouse_buttons->Size = System::Drawing::Size(223, 196);
			this->mouse_buttons->TabIndex = 91;
			this->mouse_buttons->TabStop = false;
			this->mouse_buttons->Text = L"Кнопки мыши";
			// 
			// leftmouseclick_button
			// 
			this->leftmouseclick_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->leftmouseclick_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->leftmouseclick_button->Location = System::Drawing::Point(6, 21);
			this->leftmouseclick_button->Name = L"leftmouseclick_button";
			this->leftmouseclick_button->Size = System::Drawing::Size(211, 51);
			this->leftmouseclick_button->TabIndex = 2;
			this->leftmouseclick_button->Text = L"ЛКМ";
			this->leftmouseclick_button->UseVisualStyleBackColor = false;
			this->leftmouseclick_button->Click += gcnew System::EventHandler(this, &Skriptify::leftmouseclick_button_Click);
			// 
			// rightmouseclick_button
			// 
			this->rightmouseclick_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->rightmouseclick_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rightmouseclick_button->Location = System::Drawing::Point(6, 79);
			this->rightmouseclick_button->Name = L"rightmouseclick_button";
			this->rightmouseclick_button->Size = System::Drawing::Size(211, 51);
			this->rightmouseclick_button->TabIndex = 1;
			this->rightmouseclick_button->Text = L"ПКМ";
			this->rightmouseclick_button->UseVisualStyleBackColor = false;
			this->rightmouseclick_button->Click += gcnew System::EventHandler(this, &Skriptify::rightmouseclick_button_Click);
			// 
			// averagemouseclick_button
			// 
			this->averagemouseclick_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->averagemouseclick_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->averagemouseclick_button->Location = System::Drawing::Point(6, 136);
			this->averagemouseclick_button->Name = L"averagemouseclick_button";
			this->averagemouseclick_button->Size = System::Drawing::Size(211, 51);
			this->averagemouseclick_button->TabIndex = 0;
			this->averagemouseclick_button->Text = L"СКМ";
			this->averagemouseclick_button->UseVisualStyleBackColor = false;
			this->averagemouseclick_button->Click += gcnew System::EventHandler(this, &Skriptify::averagemouseclick_button_Click);
			// 
			// mouse_axis
			// 
			this->mouse_axis->Controls->Add(this->numericUpDown2);
			this->mouse_axis->Controls->Add(this->numericUpDown1);
			this->mouse_axis->Controls->Add(this->label3);
			this->mouse_axis->Controls->Add(this->label2);
			this->mouse_axis->Controls->Add(this->add_mouse_axis);
			this->mouse_axis->Enabled = false;
			this->mouse_axis->Location = System::Drawing::Point(803, 346);
			this->mouse_axis->Name = L"mouse_axis";
			this->mouse_axis->Size = System::Drawing::Size(223, 159);
			this->mouse_axis->TabIndex = 92;
			this->mouse_axis->TabStop = false;
			this->mouse_axis->Text = L"Мышь на ось";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Location = System::Drawing::Point(37, 68);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(180, 25);
			this->numericUpDown2->TabIndex = 6;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(37, 24);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(180, 25);
			this->numericUpDown1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(6, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Y:";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(6, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"X:";
			// 
			// add_mouse_axis
			// 
			this->add_mouse_axis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->add_mouse_axis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_mouse_axis->Location = System::Drawing::Point(6, 101);
			this->add_mouse_axis->Name = L"add_mouse_axis";
			this->add_mouse_axis->Size = System::Drawing::Size(211, 51);
			this->add_mouse_axis->TabIndex = 0;
			this->add_mouse_axis->Text = L"Добавить";
			this->add_mouse_axis->UseVisualStyleBackColor = false;
			this->add_mouse_axis->Click += gcnew System::EventHandler(this, &Skriptify::add_mouse_axis_Click);
			// 
			// add_time
			// 
			this->add_time->Controls->Add(this->numericUpDown3);
			this->add_time->Controls->Add(this->add_time_button);
			this->add_time->Enabled = false;
			this->add_time->Location = System::Drawing::Point(803, 226);
			this->add_time->Name = L"add_time";
			this->add_time->Size = System::Drawing::Size(223, 115);
			this->add_time->TabIndex = 93;
			this->add_time->TabStop = false;
			this->add_time->Text = L"Задержка(сек)";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->numericUpDown3->Location = System::Drawing::Point(6, 26);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1316134912, 2328, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(211, 25);
			this->numericUpDown3->TabIndex = 1;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// add_time_button
			// 
			this->add_time_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->add_time_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_time_button->Location = System::Drawing::Point(6, 57);
			this->add_time_button->Name = L"add_time_button";
			this->add_time_button->Size = System::Drawing::Size(211, 51);
			this->add_time_button->TabIndex = 0;
			this->add_time_button->Text = L"Добавить";
			this->add_time_button->UseVisualStyleBackColor = false;
			this->add_time_button->Click += gcnew System::EventHandler(this, &Skriptify::add_time_Click);
			// 
			// loop_box
			// 
			this->loop_box->Controls->Add(this->loop_start_button);
			this->loop_box->Controls->Add(this->loop_end_button);
			this->loop_box->Controls->Add(this->numericUpDown4);
			this->loop_box->Controls->Add(this->label4);
			this->loop_box->Enabled = false;
			this->loop_box->Location = System::Drawing::Point(803, 132);
			this->loop_box->Name = L"loop_box";
			this->loop_box->Size = System::Drawing::Size(223, 88);
			this->loop_box->TabIndex = 94;
			this->loop_box->TabStop = false;
			this->loop_box->Text = L"Цикл";
			// 
			// loop_start_button
			// 
			this->loop_start_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->loop_start_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loop_start_button->Location = System::Drawing::Point(9, 52);
			this->loop_start_button->Name = L"loop_start_button";
			this->loop_start_button->Size = System::Drawing::Size(102, 30);
			this->loop_start_button->TabIndex = 3;
			this->loop_start_button->Text = L"Начать";
			this->loop_start_button->UseVisualStyleBackColor = false;
			this->loop_start_button->Click += gcnew System::EventHandler(this, &Skriptify::loop_start_button_Click);
			// 
			// loop_end_button
			// 
			this->loop_end_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->loop_end_button->Enabled = false;
			this->loop_end_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->loop_end_button->Location = System::Drawing::Point(115, 52);
			this->loop_end_button->Name = L"loop_end_button";
			this->loop_end_button->Size = System::Drawing::Size(102, 30);
			this->loop_end_button->TabIndex = 2;
			this->loop_end_button->Text = L"Завершить";
			this->loop_end_button->UseVisualStyleBackColor = false;
			this->loop_end_button->Click += gcnew System::EventHandler(this, &Skriptify::loop_end_button_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->numericUpDown4->Location = System::Drawing::Point(147, 21);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(70, 25);
			this->numericUpDown4->TabIndex = 1;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 18);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Число повторений:";
			// 
			// Skriptify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1038, 721);
			this->Controls->Add(this->loop_box);
			this->Controls->Add(this->keyboard);
			this->Controls->Add(this->add_time);
			this->Controls->Add(this->mouse_axis);
			this->Controls->Add(this->mouse_buttons);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->skripteditor_window);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Skriptify";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Skriptify - AHK editor";
			this->Load += gcnew System::EventHandler(this, &Skriptify::Skriptify_Load);
			this->keyboard->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->mouse_buttons->ResumeLayout(false);
			this->mouse_axis->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->add_time->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->loop_box->ResumeLayout(false);
			this->loop_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Skriptify_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bindingNavigator1_RefreshItems(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void create_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		loop_box->Enabled = true;
		combinate->Enabled = true;
		keyboard->Enabled = true;
		mouse_axis->Enabled = true;
		mouse_buttons->Enabled = true;
		save_button->Enabled = true;
		deleteskript_button->Enabled = true;
		create_button->Enabled = false;
		undo_button->Enabled = true;
		add_time->Enabled = true;
		skripteditor_window->Text = "";
		StreamWriter^ writer = gcnew StreamWriter("Skript.txt");
		writer->Write("Rctrl::\r\n");
		writer->Close();
	}
		   String^ ctext = "";
	private: System::Void escape_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {esc}\r\nsleep, 50", "Нажать клавишу Esc", skripteditor_window);
			m_input->Execute();
		}
		else {
			k = k + 1;
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			writer->Write("{esc down}");
			ctext = ctext + "{esc up}";
			writer->Close();
			String^ text = "Esc + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f1_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f1}\r\nsleep, 50", "Нажать клавишу F1", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f1 down}");
			ctext = ctext + "{f1 up}";
			writer->Close();
			String^ text = "F1 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f2_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f2}\r\nsleep, 50", "Нажать клавишу F2", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f2 down}");
			ctext = ctext + "{f2 up}";
			writer->Close();
			String^ text = "F2 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f3_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f3}\r\nsleep, 50", "Нажать клавишу F3", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f3 down}");
			ctext = ctext + "{f3 up}";
			writer->Close();
			String^ text = "F3 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f4_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f4}\r\nsleep, 50", "Нажать клавишу F4", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f4 down}");
			ctext = ctext + "{f4 up}";
			writer->Close();
			String^ text = "F4 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f5_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f5}\r\nsleep, 50", "Нажать клавишу F5", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f5 down}");
			ctext = ctext + "{f5 up}";
			writer->Close();
			String^ text = "F5 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f6_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f6}\r\nsleep, 50", "Нажать клавишу F6", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f6 down}");
			ctext = ctext + "{f6 up}";
			writer->Close();
			String^ text = "F6 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f7_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f7}\r\nsleep, 50", "Нажать клавишу F7", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f7 down}");
			ctext = ctext + "{f7 up}";
			writer->Close();
			String^ text = "F7 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f8_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f8}\r\nsleep, 50", "Нажать клавишу F8", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f8 down}");
			ctext = ctext + "{f8 up}";
			writer->Close();
			String^ text = "F8 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f9_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f9}\r\nsleep, 50", "Нажать клавишу F9", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f9 down}");
			ctext = ctext + "{f9 up}";
			writer->Close();
			String^ text = "F9 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f10_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f10}\r\nsleep, 50", "Нажать клавишу F10", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f10 down}");
			ctext = ctext + "{f10 up}";
			writer->Close();
			String^ text = "F10 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f11_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f11}\r\nsleep, 50", "Нажать клавишу F11", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f11 down}");
			ctext = ctext + "{f11 up}";
			writer->Close();
			String^ text = "F11 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f12_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f12}\r\nsleep, 50", "Нажать клавишу F12", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f12 down}");
			ctext = ctext + "{f12 up}";
			writer->Close();
			String^ text = "F12 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void prtintscreen_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {PrintScreen}\r\nsleep, 50", "Нажать клавишу PrintScreen", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{PrintScreen down}");
			ctext = ctext + "{PrintScreen up}";
			writer->Close();
			String^ text = "PrintScreen + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void delete_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {delete}\r\nsleep, 50", "Нажать клавишу Delete", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{delete down}");
			ctext = ctext + "{delete up}";
			writer->Close();
			String^ text = "Delete + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void oneleft_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {~}\r\nsleep, 50", "Нажать клавишу ~", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{~ down}");
			ctext = ctext + "{~ up}";
			writer->Close();
			String^ text = "~ + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void one_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {1}\r\nsleep, 50", "Нажать клавишу 1", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{1 down}");
			ctext = ctext + "{1 up}";
			writer->Close();
			String^ text = "1 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void two_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {2}\r\nsleep, 50", "Нажать клавишу 2", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{2 down}");
			ctext = ctext + "{2 up}";
			writer->Close();
			String^ text = "2 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void three_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {3}\r\nsleep, 50", "Нажать клавишу 3", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{3 down}");
			ctext = ctext + "{3 up}";
			writer->Close();
			String^ text = "3 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void four_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {4}\r\nsleep, 50", "Нажать клавишу 4", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{4 down}");
			ctext = ctext + "{4 up}";
			writer->Close();
			String^ text = "4 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void five_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {5}\r\nsleep, 50", "Нажать клавишу 5", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{5 down}");
			ctext = ctext + "{5 up}";
			writer->Close();
			String^ text = "5 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void six_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {6}\r\nsleep, 50", "Нажать клавишу 6", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{6 down}");
			ctext = ctext + "{6 up}";
			writer->Close();
			String^ text = "6 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void seven_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {7}\r\nsleep, 50", "Нажать клавишу 7", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{7 down}");
			ctext = ctext + "{7 up}";
			writer->Close();
			String^ text = "7 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void eight_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {8}\r\nsleep, 50", "Нажать клавишу 8", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{8 down}");
			ctext = ctext + "{8 up}";
			writer->Close();
			String^ text = "8 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void nine_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {9}\r\nsleep, 50", "Нажать клавишу 9", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{9 down}");
			ctext = ctext + "{9 up}";
			writer->Close();
			String^ text = "9 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void zero_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {0}\r\nsleep, 50", "Нажать клавишу 0", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{0 down}");
			ctext = ctext + "{0 up}";
			writer->Close();
			String^ text = "0 + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void minus_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {-}\r\nsleep, 50", "Нажать клавишу -", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{- down}");
			ctext = ctext + "{- up}";
			writer->Close();
			String^ text = "- + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void equally_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {=}\r\nsleep, 50", "Нажать клавишу =", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{= down}");
			ctext = ctext + "{= up}";
			writer->Close();
			String^ text = "= + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void backspace_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {Backspace}\r\nsleep, 50", "Нажать клавишу Backspace", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{Backspace down}");
			ctext = ctext + "{Backspace up}";
			writer->Close();
			String^ text = "Backspace + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void tab_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {tab}\r\nsleep, 50", "Нажать клавишу Tab", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{tab down}");
			ctext = ctext + "{tab up}";
			writer->Close();
			String^ text = "Tab + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void q_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {q}\r\nsleep, 50", "Нажать клавишу Q", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{q down}");
			ctext = ctext + "{q up}";
			writer->Close();
			String^ text = "Q + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void w_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {w}\r\nsleep, 50", "Нажать клавишу W", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{w down}");
			ctext = ctext + "{w up}";
			writer->Close();
			String^ text = "W + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void e_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {e}\r\nsleep, 50", "Нажать клавишу E", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{e down}");
			ctext = ctext + "{e up}";
			writer->Close();
			String^ text = "E + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void r_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {r}\r\nsleep, 50", "Нажать клавишу R", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{r down}");
			ctext = ctext + "{r up}";
			writer->Close();
			String^ text = "R + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void t_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {t}\r\nsleep, 50", "Нажать клавишу T", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{t down}");
			ctext = ctext + "{t up}";
			writer->Close();
			String^ text = "T + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void y_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {y}\r\nsleep, 50", "Нажать клавишу Y", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{y down}");
			ctext = ctext + "{y up}";
			writer->Close();
			String^ text = "Y + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void u_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {u}\r\nsleep, 50", "Нажать клавишу U", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{u down}");
			ctext = ctext + "{u up}";
			writer->Close();
			String^ text = "U + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void i_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {i}\r\nsleep, 50", "Нажать клавишу I", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{i down}");
			ctext = ctext + "{i up}";
			writer->Close();
			String^ text = "I + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void o_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {o}\r\nsleep, 50", "Нажать клавишу O", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{o down}");
			ctext = ctext + "{o up}";
			writer->Close();
			String^ text = "O + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void p_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {p}\r\nsleep, 50", "Нажать клавишу P", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{p down}");
			ctext = ctext + "{p up}";
			writer->Close();
			String^ text = "P + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void leftsquarebracket_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {[}\r\nsleep, 50", "Нажать клавишу [", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{[ down}");
			ctext = ctext + "{[ up}";
			writer->Close();
			String^ text = "[ + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void rightsquarebracket_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {]}\r\nsleep, 50", "Нажать клавишу ]", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{] down}");
			ctext = ctext + "{] up}";
			writer->Close();
			String^ text = "] + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void leftslash_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {\}\r\nsleep, 50", "Нажать клавишу |", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{\ down}");
			ctext = ctext + "{\ up}";
			writer->Close();
			String^ text = "| + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void capslock_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {capslock}\r\nsleep, 50", "Нажать клавишу Capslock", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{capslock down}");
			ctext = ctext + "{capslock up}";
			writer->Close();
			String^ text = "CapsLock + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void a_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {a}\r\nsleep, 50", "Нажать клавишу A", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{a down}");
			ctext = ctext + "{a up}";
			writer->Close();
			String^ text = "A + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void s_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {s}\r\nsleep, 50", "Нажать клавишу S", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{s down}");
			ctext = ctext + "{s up}";
			writer->Close();
			String^ text = "S + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void d_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {d}\r\nsleep, 50", "Нажать клавишу D", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{d down}");
			ctext = ctext + "{d up}";
			writer->Close();
			String^ text = "D + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void f_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {f}\r\nsleep, 50", "Нажать клавишу F", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{f down}");
			ctext = ctext + "{f up}";
			writer->Close();
			String^ text = "F + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void g_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {g}\r\nsleep, 50", "Нажать клавишу G", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{g down}");
			ctext = ctext + "{g up}";
			writer->Close();
			String^ text = "G + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void h_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {h}\r\nsleep, 50", "Нажать клавишу H", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{h down}");
			ctext = ctext + "{h up}";
			writer->Close();
			String^ text = "H + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void j_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {j}\r\nsleep, 50", "Нажать клавишу J", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{j down}");
			ctext = ctext + "{j up}";
			writer->Close();
			String^ text = "J + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void k_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {k}\r\nsleep, 50", "Нажать клавишу K", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{k down}");
			ctext = ctext + "{k up}";
			writer->Close();
			String^ text = "K + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void l_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {l}\r\nsleep, 50", "Нажать клавишу L", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{l down}");
			ctext = ctext + "{l up}";
			writer->Close();
			String^ text = "L + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void colon_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {;}\r\nsleep, 50", "Нажать клавишу ;", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{; down}");
			ctext = ctext + "{; up}";
			writer->Close();
			String^ text = "; + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void quotationmarks_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {'}\r\nsleep, 50", "Нажать клавишу '", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{' down}");
			ctext = ctext + "{' up}";
			writer->Close();
			String^ text = "' + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void enter_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {enter}\r\nsleep, 50", "Нажать клавишу Enter", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{enter down}");
			ctext = ctext + "{enter up}";
			writer->Close();
			String^ text = "Enter + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void shift_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {lshift}\r\nsleep, 50", "Нажать клавишу Левый Shift", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{lshift down}");
			ctext = ctext + "{lshift up}";
			writer->Close();
			String^ text = "Левый Shift + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void z_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {z}\r\nsleep, 50", "Нажать клавишу Z", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{z down}");
			ctext = ctext + "{z up}";
			writer->Close();
			String^ text = "Z + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void x_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {x}\r\nsleep, 50", "Нажать клавишу X", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{x down}");
			ctext = ctext + "{x up}";
			writer->Close();
			String^ text = "X + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void c_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {c}\r\nsleep, 50", "Нажать клавишу C", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{c down}");
			ctext = ctext + "{c up}";
			writer->Close();
			String^ text = "C + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void v_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {v}\r\nsleep, 50", "Нажать клавишу V", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{v down}");
			ctext = ctext + "{v up}";
			writer->Close();
			String^ text = "V + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void b_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {b}\r\nsleep, 50", "Нажать клавишу B", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{b down}");
			ctext = ctext + "{b up}";
			writer->Close();
			String^ text = "B + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void n_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {n}\r\nsleep, 50", "Нажать клавишу N", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{n down}");
			ctext = ctext + "{n up}";
			writer->Close();
			String^ text = "N + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void m_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {m}\r\nsleep, 50", "Нажать клавишу M", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{m down}");
			ctext = ctext + "{m up}";
			writer->Close();
			String^ text = "M + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void comma_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {,}\r\nsleep, 50", "Нажать клавишу ,", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{, down}");
			ctext = ctext + "{, up}";
			writer->Close();
			String^ text = ", + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void point_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {.}\r\nsleep, 50", "Нажать клавишу .", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{. down}");
			ctext = ctext + "{. up}";
			writer->Close();
			String^ text = ". + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void rightslash_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {/}\r\nsleep, 50", "Нажать клавишу /", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{/ down}");
			ctext = ctext + "{/ up}";
			writer->Close();
			String^ text = "/ + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void up_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {up}\r\nsleep, 50", "Нажать клавишу Стрелка вверх", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{up down}");
			ctext = ctext + "{up up}";
			writer->Close();
			String^ text = "Стрелка вверх + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void rshift_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {rshift}\r\nsleep, 50", "Нажать клавишу Правый Shift", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{rshift down}");
			ctext = ctext + "{rshift up}";
			writer->Close();
			String^ text = "Правый Shift + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void lctrl_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {lctrl}\r\nsleep, 50", "Нажать клавишу Левый Ctrl", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{lctrl down}");
			ctext = ctext + "{lctrl up}";
			writer->Close();
			String^ text = "Левый Ctrl + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void win_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {lwin}\r\nsleep, 50", "Нажать клавишу Win", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{lwin down}");
			ctext = ctext + "{lwin up}";
			writer->Close();
			String^ text = "Win + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void lalt_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {lalt}\r\nsleep, 50", "Нажать клавишу Левый Alt", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{lalt down}");
			ctext = ctext + "{lalt up}";
			writer->Close();
			String^ text = "Левый Alt + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void space_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {space}\r\nsleep, 50", "Нажать клавишу Пробел", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{space down}");
			ctext = ctext + "{space up}";
			writer->Close();
			String^ text = "Пробел + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void ralt_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {ralt}\r\nsleep, 50", "Нажать клавишу Правый Alt", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{ralt down}");
			ctext = ctext + "{ralt up}";
			writer->Close();
			String^ text = "Правый Alt + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void rctrl_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {rctrl}\r\nsleep, 50", "Нажать клавишу Правый Ctrl", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{rctrl down}");
			ctext = ctext + "{rctrl up}";
			writer->Close();
			String^ text = "Правый Ctrl + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void left_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {left}\r\nsleep, 50", "Нажать клавишу Стрелка влево", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{left down}");
			ctext = ctext + "{left up}";
			writer->Close();
			String^ text = "Стрелка влево + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void down_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {down}\r\nsleep, 50", "Нажать клавишу Стрелка вниз", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{down}");
			ctext = ctext + "{down up}";
			writer->Close();
			String^ text = "Стрелка вниз + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void right_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {right}\r\nsleep, 50", "Нажать клавишу Стрелка вправо", skripteditor_window);
			m_input->Execute();
		}
		else {
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
			k = k + 1; writer->Write("{right down}");	
			ctext = ctext + "{right up}";
			writer->Close();
			String^ text = "Стрелка влево + ";
			skripteditor_window->Text += text;
		}
	}
	private: System::Void leftmouseclick_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		m_input = gcnew TxtInput("send, {lbutton}\r\nsleep, 50", "Нажать Левую кнопку мыши", skripteditor_window);
		m_input->Execute();
	}
	private: System::Void rightmouseclick_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		m_input = gcnew TxtInput("send, {rbutton}\r\nsleep, 50", "Нажать Правую кнопку мыши", skripteditor_window);
		m_input->Execute();
	}
	private: System::Void averagemouseclick_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		m_input = gcnew TxtInput("send, {mbutton}\r\nsleep, 50", "Нажать Среднюю кнопку мыши", skripteditor_window);
		m_input->Execute();
	}
	private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (n == 0) {
			create_button->Enabled = true;
			loop_box->Enabled = false;
			keyboard->Enabled = false;
			mouse_axis->Enabled = false;
			mouse_buttons->Enabled = false;
			save_button->Enabled = false;
			deleteskript_button->Enabled = false;
			undo_button->Enabled = false;
			add_time->Enabled = false;
			combinate->Enabled = false;
			SaveSkript^ saver = gcnew SaveSkript();
			saver->SaveAHKFile(this);
			MessageBox::Show("Скрипт создан. Для запуска откройте файл и нажмите Правый Ctrl");
		}
		else {
			MessageBox::Show("Цикл не завершен");
		}
	}
	private: System::Void deleteskript_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		loop_box->Enabled = false;
		create_button->Enabled = true;
		keyboard->Enabled = false;
		mouse_axis->Enabled = false;
		mouse_buttons->Enabled = false;
		save_button->Enabled = false;
		deleteskript_button->Enabled = false;
		undo_button->Enabled = false;
		add_time->Enabled = false;
		combinate->Enabled = false;
		skripteditor_window->Text = "";
	}
	private: System::Void undo_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ currentDir = Directory::GetCurrentDirectory();
		String^ filePath = Path::Combine(currentDir, "Skript.txt");
		array<String^>^ lines = File::ReadAllLines(filePath);
		int numLines = lines->Length;
		if (numLines > 1)
		{
			Array::Resize(lines, numLines - 2);
			File::WriteAllLines(filePath, lines);
		}
		if (skripteditor_window->Lines->Length >= 2) {
			int lastLineIndex = skripteditor_window->GetFirstCharIndexFromLine(skripteditor_window->Lines->Length - 2);
			int lastCharIndex = skripteditor_window->GetFirstCharIndexFromLine(skripteditor_window->Lines->Length - 1) + skripteditor_window->Lines[skripteditor_window->Lines->Length - 1]->Length;
			skripteditor_window->Text = skripteditor_window->Text->Remove(lastLineIndex, lastCharIndex - lastLineIndex);
			skripteditor_window->SelectionStart = skripteditor_window->Text->Length;
			skripteditor_window->ScrollToCaret();
		}
		else if (skripteditor_window->Lines->Length == 1) {
			skripteditor_window->Clear();
		}
	}
	private: System::Void language_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (k == 0) {
			m_input = gcnew TxtInput("send, {LAlt down}{LShift down}{LAlt up}{LShift up}\r\nsleep, 50", "Сменить раскладку клавиатуры", skripteditor_window);
			m_input->Execute();
		}
	}
	private: System::Void add_mouse_axis_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int x = (int)numericUpDown1->Value;
		int y = (int)numericUpDown2->Value;
		StreamWriter^ writer = gcnew StreamWriter("Skript.txt", true);
		writer->WriteLine("MouseMove " + x + ", " + y + "\r\nsleep, 50");
		writer->Close();
		String^ text = "Сместить курсор на ось " + x + " и " + y;
		text += "\r\n";
		skripteditor_window->Text += text;
		skripteditor_window->SelectionStart = skripteditor_window->Text->Length;
		skripteditor_window->ScrollToCaret();
	}
	private: System::Void add_time_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a = (int)numericUpDown3->Value;
		int b = a * 1000 / 2;
		StreamWriter^ writer = gcnew StreamWriter("Skript.txt", true);
		writer->WriteLine("sleep, " + b + "\r\nsleep, " + b);
		writer->Close();
		String^ text = "Задержка " + a + " сек.";
		text += "\r\n";
		skripteditor_window->Text += text;
		skripteditor_window->SelectionStart = skripteditor_window->Text->Length;
		skripteditor_window->ScrollToCaret();
	}
	private: System::Void combinate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		k = 1;
		loop_box->Enabled = false;
		combinate->Enabled = false;
		create_button->Enabled = false;
		mouse_axis->Enabled = false;
		mouse_buttons->Enabled = false;
		save_button->Enabled = false;
		deleteskript_button->Enabled = false;
		undo_button->Enabled = false;
		add_time->Enabled = false;
		cancel_button->Enabled = true;
		add_com_button->Enabled = true;
		StreamWriter^ writer = gcnew StreamWriter("Skript.txt", true);
		writer->Write("send, ");
		writer->Close();
		String^ text = "Комбинация клавиш: ";
		skripteditor_window->Text += text;
	}
	private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (k > 1) {
			int currentIndex = skripteditor_window->SelectionStart;
			int startIndex = skripteditor_window->Text->LastIndexOf("\n", currentIndex) + 1;
			int endIndex = skripteditor_window->Text->IndexOf("\n", currentIndex);
			if (endIndex == -1) {
				endIndex = skripteditor_window->Text->Length - 1;
			}
			skripteditor_window->Text = skripteditor_window->Text->Remove(startIndex, endIndex - startIndex + 1);
			String^ text = "";
			text += "\r\n";
			skripteditor_window->Text += text;
			skripteditor_window->SelectionStart = skripteditor_window->Text->Length;
			skripteditor_window->ScrollToCaret();
			loop_box->Enabled = true;
			combinate->Enabled = true;
			create_button->Enabled = true;
			mouse_axis->Enabled = true;
			mouse_buttons->Enabled = true;
			save_button->Enabled = true;
			deleteskript_button->Enabled = true;
			undo_button->Enabled = true;
			add_time->Enabled = true;
			cancel_button->Enabled = false;
			add_com_button->Enabled = false;
			k = 0;
			ctext = "";
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt");
			writer->Write("");
			writer->Close();
		}
		else {
			if (skripteditor_window->Lines->Length > 0) {
				if (skripteditor_window->Lines->Length < 2) {
					skripteditor_window->Clear();
				}
				else {
					skripteditor_window->Text = skripteditor_window->Text->Substring(0, skripteditor_window->Text->LastIndexOf(Environment::NewLine));
				}
			}
			String^ text = "";
			text += "\r\n";
			skripteditor_window->Text += text;
			skripteditor_window->SelectionStart = skripteditor_window->Text->Length;
			skripteditor_window->ScrollToCaret();
			loop_box->Enabled = true;
			combinate->Enabled = true;
			create_button->Enabled = true;
			mouse_axis->Enabled = true;
			mouse_buttons->Enabled = true;
			save_button->Enabled = true;
			deleteskript_button->Enabled = true;
			undo_button->Enabled = true;
			add_time->Enabled = true;
			cancel_button->Enabled = false;
			add_com_button->Enabled = false;
			k = 0;
			ctext = "";
			StreamWriter^ writer = gcnew StreamWriter("Combinate.txt");
			writer->Write("");
			writer->Close();

		}
	}
private: System::Void add_com_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (k > 2) {
		if (skripteditor_window->Text->Length > 0) {
			skripteditor_window->Text = skripteditor_window->Text->Remove(skripteditor_window->Text->Length - 2, 1);
		}
		skripteditor_window->SelectionStart = skripteditor_window->Text->Length;
		skripteditor_window->AppendText(Environment::NewLine);
		
		StreamWriter^ writer = gcnew StreamWriter("Combinate.txt", true);
		writer->Write(ctext);
		writer->Close();

		// Создать новый временный файл для записи обновленных строк
		String^ tempFile = Path::GetTempFileName();

		// Открыть файлы для чтения и записи
		StreamReader^ reader = gcnew StreamReader("Combinate.txt");
		writer = gcnew StreamWriter(tempFile);

		// Читать строки по одной, изменять их и записывать в новый файл
		while (!reader->EndOfStream) {
			String^ line = reader->ReadLine();
			String^ newLine = Regex::Replace(line, "(\\{[^{}]*\\b)down\\b([^{}]*\\})(?!.*\\{[^{}]*\\bdown\\b[^{}]*\\})", "$1$2");
			newLine = Regex::Replace(newLine, "(\\{[^}]*\\})$", "");
			writer->WriteLine(newLine);
		}
		writer->WriteLine("sleep, 50");
		// Закрыть файлы
		reader->Close();
		writer->Close();

		// Заменить исходный файл обновленным временным файлом
		File::Delete("Combinate.txt");
		File::Move(tempFile, "Combinate.txt");

		// Открытие файла Combinate.txt на чтение
		StreamReader^ reader1 = gcnew StreamReader("Combinate.txt");
		String^ text = reader1->ReadToEnd();
		reader1->Close();

		// Открытие файла Skripti.txt на добавление (append)
		StreamWriter^ writer1 = gcnew StreamWriter("Skript.txt", true);
		writer1->Write(text);
		writer1->Close();

		// Очистка файла Combinate.txt
		writer1 = gcnew StreamWriter("Combinate.txt", false);
		writer1->Write("");
		writer1->Close();

		loop_box->Enabled = true;
		combinate->Enabled = true;
		create_button->Enabled = true;
		mouse_axis->Enabled = true;
		mouse_buttons->Enabled = true;
		save_button->Enabled = true;
		deleteskript_button->Enabled = true;
		undo_button->Enabled = true;
		add_time->Enabled = true;
		cancel_button->Enabled = false;
		add_com_button->Enabled = false;
		k = 0;
		ctext = "";
	}
}
private: System::Void loop_start_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	loop_end_button->Enabled = true;
	loop_start_button->Enabled = false;
	int z = (int)numericUpDown4->Value;
	n = n + 1;
	StreamWriter^ writer = gcnew StreamWriter("Skript.txt", true);
	writer->WriteLine("loop, " + z + "\r\n{");
	writer->Close();
	String^ text = "(" + z + ")Начать цикл:";
	text += "\r\n";
	skripteditor_window->Text += text;
	skripteditor_window->SelectionStart = skripteditor_window->Text->Length;
	skripteditor_window->ScrollToCaret();
}
private: System::Void loop_end_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	loop_end_button->Enabled = false;
	loop_start_button->Enabled = true;
	StreamWriter^ writer = gcnew StreamWriter("Skript.txt", true);
	writer->WriteLine("}\r\nsleep, 50");
	writer->Close();
	String^ text = "Завершить цикл";
	text += "\r\n";
	skripteditor_window->Text += text;
	skripteditor_window->SelectionStart = skripteditor_window->Text->Length;
	skripteditor_window->ScrollToCaret();
	n = n - 1;
}
};
};
