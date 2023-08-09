#pragma once

#include "CourseCRUDL.h"

namespace ssisguitest1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvListCourse;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ pbAddProfilePic;

	protected:

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ txtFirstName;

	private: System::Windows::Forms::Label^ lblFirstName;




	private: System::Windows::Forms::ComboBox^ cbLevel;



	private: System::Windows::Forms::Button^ btnAddImg;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::Label^ lblLevel;

	private: System::Windows::Forms::Label^ lblSchoolID;
	private: System::Windows::Forms::TextBox^ txtSchoolID;




	private: System::Windows::Forms::ComboBox^ cbCollege;
	private: System::Windows::Forms::Label^ lblDegree;


	private: System::Windows::Forms::Label^ lblCollege;

	private: System::Windows::Forms::Button^ btnInsert;



	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::TextBox^ txtDegree;
	private: System::Windows::Forms::DataGridView^ dgvListStudent;

	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblSurname;
	private: System::Windows::Forms::TextBox^ txtSurname;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnClrField;
	private: System::Windows::Forms::Button^ btnCrudlCourse;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnSearchStudent;
	private: System::Windows::Forms::TextBox^ txtSearchStudent;
	private: System::Windows::Forms::Button^ btnSearchCourse;
	private: System::Windows::Forms::TextBox^ txtSearchCourse;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->dgvListCourse = (gcnew System::Windows::Forms::DataGridView());
			this->pbAddProfilePic = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnSearchStudent = (gcnew System::Windows::Forms::Button());
			this->txtSearchStudent = (gcnew System::Windows::Forms::TextBox());
			this->btnClrField = (gcnew System::Windows::Forms::Button());
			this->dgvListStudent = (gcnew System::Windows::Forms::DataGridView());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnSearchCourse = (gcnew System::Windows::Forms::Button());
			this->txtSearchCourse = (gcnew System::Windows::Forms::TextBox());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnCrudlCourse = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAddImg = (gcnew System::Windows::Forms::Button());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->lblSchoolID = (gcnew System::Windows::Forms::Label());
			this->txtSchoolID = (gcnew System::Windows::Forms::TextBox());
			this->cbCollege = (gcnew System::Windows::Forms::ComboBox());
			this->lblDegree = (gcnew System::Windows::Forms::Label());
			this->lblCollege = (gcnew System::Windows::Forms::Label());
			this->lblLevel = (gcnew System::Windows::Forms::Label());
			this->cbLevel = (gcnew System::Windows::Forms::ComboBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->txtDegree = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblSurname = (gcnew System::Windows::Forms::Label());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListCourse))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAddProfilePic))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListStudent))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvListCourse
			// 
			this->dgvListCourse->AllowUserToAddRows = false;
			this->dgvListCourse->AllowUserToDeleteRows = false;
			this->dgvListCourse->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvListCourse->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dgvListCourse->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dgvListCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListCourse->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dgvListCourse->Location = System::Drawing::Point(0, 52);
			this->dgvListCourse->Name = L"dgvListCourse";
			this->dgvListCourse->ReadOnly = true;
			this->dgvListCourse->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvListCourse->Size = System::Drawing::Size(704, 336);
			this->dgvListCourse->TabIndex = 0;
			this->dgvListCourse->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &MainForm::dgvListCourse_RowPostPaint);
			// 
			// pbAddProfilePic
			// 
			this->pbAddProfilePic->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->pbAddProfilePic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbAddProfilePic.BackgroundImage")));
			this->pbAddProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbAddProfilePic->Location = System::Drawing::Point(12, 12);
			this->pbAddProfilePic->Name = L"pbAddProfilePic";
			this->pbAddProfilePic->Size = System::Drawing::Size(206, 202);
			this->pbAddProfilePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbAddProfilePic->TabIndex = 1;
			this->pbAddProfilePic->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 335);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(712, 469);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage1->Controls->Add(this->btnSearchStudent);
			this->tabPage1->Controls->Add(this->txtSearchStudent);
			this->tabPage1->Controls->Add(this->btnClrField);
			this->tabPage1->Controls->Add(this->dgvListStudent);
			this->tabPage1->Controls->Add(this->btnDelete);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(704, 443);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Student Details";
			// 
			// btnSearchStudent
			// 
			this->btnSearchStudent->Location = System::Drawing::Point(563, 19);
			this->btnSearchStudent->Name = L"btnSearchStudent";
			this->btnSearchStudent->Size = System::Drawing::Size(118, 21);
			this->btnSearchStudent->TabIndex = 15;
			this->btnSearchStudent->Text = L"SEARCH";
			this->btnSearchStudent->UseVisualStyleBackColor = true;
			this->btnSearchStudent->Click += gcnew System::EventHandler(this, &MainForm::btnSearchStudent_Click);
			// 
			// txtSearchStudent
			// 
			this->txtSearchStudent->BackColor = System::Drawing::SystemColors::Window;
			this->txtSearchStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtSearchStudent->Location = System::Drawing::Point(24, 19);
			this->txtSearchStudent->Name = L"txtSearchStudent";
			this->txtSearchStudent->Size = System::Drawing::Size(520, 24);
			this->txtSearchStudent->TabIndex = 14;
			// 
			// btnClrField
			// 
			this->btnClrField->Location = System::Drawing::Point(24, 376);
			this->btnClrField->Name = L"btnClrField";
			this->btnClrField->Size = System::Drawing::Size(149, 61);
			this->btnClrField->TabIndex = 1;
			this->btnClrField->Text = L"RESET FIELDS";
			this->btnClrField->UseVisualStyleBackColor = true;
			this->btnClrField->Click += gcnew System::EventHandler(this, &MainForm::btnClrField_Click);
			// 
			// dgvListStudent
			// 
			this->dgvListStudent->AllowUserToAddRows = false;
			this->dgvListStudent->AllowUserToDeleteRows = false;
			this->dgvListStudent->AllowUserToOrderColumns = true;
			this->dgvListStudent->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvListStudent->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dgvListStudent->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dgvListStudent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListStudent->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dgvListStudent->Location = System::Drawing::Point(0, 49);
			this->dgvListStudent->Name = L"dgvListStudent";
			this->dgvListStudent->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvListStudent->Size = System::Drawing::Size(704, 321);
			this->dgvListStudent->TabIndex = 0;
			this->dgvListStudent->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dgvListStudent_CellContentClick);
			this->dgvListStudent->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &MainForm::dgvListStudent_RowPostPaint);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(532, 376);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(149, 61);
			this->btnDelete->TabIndex = 0;
			this->btnDelete->Text = L"DELETE SELECTED ITEM";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MainForm::btnDelete_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage2->Controls->Add(this->btnSearchCourse);
			this->tabPage2->Controls->Add(this->txtSearchCourse);
			this->tabPage2->Controls->Add(this->btnRefresh);
			this->tabPage2->Controls->Add(this->btnCrudlCourse);
			this->tabPage2->Controls->Add(this->dgvListCourse);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(704, 443);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"Course Details";
			// 
			// btnSearchCourse
			// 
			this->btnSearchCourse->Location = System::Drawing::Point(562, 16);
			this->btnSearchCourse->Name = L"btnSearchCourse";
			this->btnSearchCourse->Size = System::Drawing::Size(118, 21);
			this->btnSearchCourse->TabIndex = 14;
			this->btnSearchCourse->Text = L"SEARCH";
			this->btnSearchCourse->UseVisualStyleBackColor = true;
			this->btnSearchCourse->Click += gcnew System::EventHandler(this, &MainForm::btnSearchCourse_Click);
			// 
			// txtSearchCourse
			// 
			this->txtSearchCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtSearchCourse->Location = System::Drawing::Point(12, 16);
			this->txtSearchCourse->Name = L"txtSearchCourse";
			this->txtSearchCourse->Size = System::Drawing::Size(529, 24);
			this->txtSearchCourse->TabIndex = 13;
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(562, 389);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(118, 51);
			this->btnRefresh->TabIndex = 12;
			this->btnRefresh->Text = L"REFRESH";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MainForm::btnRefresh_Click);
			// 
			// btnCrudlCourse
			// 
			this->btnCrudlCourse->Location = System::Drawing::Point(12, 389);
			this->btnCrudlCourse->Name = L"btnCrudlCourse";
			this->btnCrudlCourse->Size = System::Drawing::Size(483, 51);
			this->btnCrudlCourse->TabIndex = 11;
			this->btnCrudlCourse->Text = L"MORE";
			this->btnCrudlCourse->UseVisualStyleBackColor = true;
			this->btnCrudlCourse->Click += gcnew System::EventHandler(this, &MainForm::btnCrudlCourse_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(12, 262);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(206, 61);
			this->btnUpdate->TabIndex = 22;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MainForm::btnUpdate_Click);
			// 
			// btnAddImg
			// 
			this->btnAddImg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddImg->Location = System::Drawing::Point(12, 220);
			this->btnAddImg->Name = L"btnAddImg";
			this->btnAddImg->Size = System::Drawing::Size(206, 36);
			this->btnAddImg->TabIndex = 3;
			this->btnAddImg->Text = L"Add Image";
			this->btnAddImg->UseVisualStyleBackColor = true;
			this->btnAddImg->Click += gcnew System::EventHandler(this, &MainForm::btnAddImg_Click);
			// 
			// btnInsert
			// 
			this->btnInsert->Location = System::Drawing::Point(233, 262);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(483, 61);
			this->btnInsert->TabIndex = 10;
			this->btnInsert->Text = L"INSERT DETAILS";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &MainForm::btnInsert_Click);
			// 
			// lblSchoolID
			// 
			this->lblSchoolID->AutoSize = true;
			this->lblSchoolID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSchoolID->Location = System::Drawing::Point(229, 79);
			this->lblSchoolID->Name = L"lblSchoolID";
			this->lblSchoolID->Size = System::Drawing::Size(79, 20);
			this->lblSchoolID->TabIndex = 9;
			this->lblSchoolID->Text = L"School ID";
			// 
			// txtSchoolID
			// 
			this->txtSchoolID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSchoolID->Location = System::Drawing::Point(233, 102);
			this->txtSchoolID->Name = L"txtSchoolID";
			this->txtSchoolID->Size = System::Drawing::Size(177, 24);
			this->txtSchoolID->TabIndex = 8;
			// 
			// cbCollege
			// 
			this->cbCollege->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cbCollege->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbCollege->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCollege->FormattingEnabled = true;
			this->cbCollege->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"(CCS) College of Computer Studies", L"(CASS) College of Arts and Social and Sciences",
					L"(COE) College of Engineering", L"(CEBA) College of Economics and Business Administration", L"(CED) College of Education", L"(CSM) College of Science and Mathematics",
					L"(CON) College of Nursing"
			});
			this->cbCollege->Location = System::Drawing::Point(233, 171);
			this->cbCollege->Name = L"cbCollege";
			this->cbCollege->Size = System::Drawing::Size(483, 26);
			this->cbCollege->TabIndex = 6;
			// 
			// lblDegree
			// 
			this->lblDegree->AutoSize = true;
			this->lblDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDegree->Location = System::Drawing::Point(229, 209);
			this->lblDegree->Name = L"lblDegree";
			this->lblDegree->Size = System::Drawing::Size(62, 20);
			this->lblDegree->TabIndex = 5;
			this->lblDegree->Text = L"Degree";
			// 
			// lblCollege
			// 
			this->lblCollege->AutoSize = true;
			this->lblCollege->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCollege->Location = System::Drawing::Point(229, 148);
			this->lblCollege->Name = L"lblCollege";
			this->lblCollege->Size = System::Drawing::Size(62, 20);
			this->lblCollege->TabIndex = 4;
			this->lblCollege->Text = L"College";
			// 
			// lblLevel
			// 
			this->lblLevel->AutoSize = true;
			this->lblLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLevel->Location = System::Drawing::Point(431, 78);
			this->lblLevel->Name = L"lblLevel";
			this->lblLevel->Size = System::Drawing::Size(46, 20);
			this->lblLevel->TabIndex = 3;
			this->lblLevel->Text = L"Level";
			// 
			// cbLevel
			// 
			this->cbLevel->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cbLevel->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbLevel->FormattingEnabled = true;
			this->cbLevel->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Graduate", L"Undergraduate" });
			this->cbLevel->Location = System::Drawing::Point(435, 100);
			this->cbLevel->Name = L"cbLevel";
			this->cbLevel->Size = System::Drawing::Size(281, 26);
			this->cbLevel->TabIndex = 2;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstName->Location = System::Drawing::Point(233, 36);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(255, 24);
			this->txtFirstName->TabIndex = 1;
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFirstName->Location = System::Drawing::Point(229, 15);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(86, 20);
			this->lblFirstName->TabIndex = 0;
			this->lblFirstName->Text = L"First Name";
			// 
			// txtDegree
			// 
			this->txtDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDegree->Location = System::Drawing::Point(233, 232);
			this->txtDegree->Name = L"txtDegree";
			this->txtDegree->Size = System::Drawing::Size(483, 24);
			this->txtDegree->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(401, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"(ex. Eden Grace)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(654, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"(ex. Dorato)";
			// 
			// lblSurname
			// 
			this->lblSurname->AutoSize = true;
			this->lblSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSurname->Location = System::Drawing::Point(503, 15);
			this->lblSurname->Name = L"lblSurname";
			this->lblSurname->Size = System::Drawing::Size(74, 20);
			this->lblSurname->TabIndex = 27;
			this->lblSurname->Text = L"Surname";
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->Location = System::Drawing::Point(507, 36);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(209, 24);
			this->txtSurname->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(329, 84);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"(ex. 2020-5180)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(489, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"(ex. Bachelor of Science in Computer Science)";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 816);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblSurname);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtDegree);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAddImg);
			this->Controls->Add(this->pbAddProfilePic);
			this->Controls->Add(this->btnInsert);
			this->Controls->Add(this->lblFirstName);
			this->Controls->Add(this->lblSchoolID);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->cbLevel);
			this->Controls->Add(this->txtSchoolID);
			this->Controls->Add(this->lblLevel);
			this->Controls->Add(this->cbCollege);
			this->Controls->Add(this->lblCollege);
			this->Controls->Add(this->lblDegree);
			this->Name = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListCourse))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAddProfilePic))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListStudent))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Server = localhost
	//Port	 = 3306
	//Database Name = dbStudents, dbCourses
	//UID			= root
	//Password	= gag0p1n4s

	String^ connstring = "server=localhost;port=3306;database=dbStudents;uid=root;password=gag0p1n4s";
	//String^ connstring2 = "server=localhost;port=3306;database=dbCourses;uid=root;password=gag0p1n4s";
	MySqlConnection^ conn = gcnew MySqlConnection(connstring);
	//MySqlConnection^ conn2 = gcnew MySqlConnection(connstring2);

	//to store prev value
	String^ storedDegree;
	String^ storedID;

	void storeDegree(String^ store)
	{
		storedDegree = store;
	}

	void storeID(String^ store)
	{
		storedID = store;
	}

	void StudentPopulateTable () 
	{
		try
		{
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT schoolID,lastName,firstName,level,college,degree FROM tblStudents", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dgvListStudent->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ e)
		{
			//MessageBox::Show("FAILED to Read Student Data.");
		}
	}

	void CoursePopulateTable() 
	{
		try
		{
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT college,degree,numOfStudents FROM tblCourses", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dgvListCourse->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("FAILED to Read Course Data.");
		}
	}

	void ClearFields () 
	{
		txtFirstName->Text = "";
		txtSurname->Text = "";
		txtSchoolID->Text = "";
		cbLevel->Text = "";
		cbCollege->Text = "";
		txtDegree->Text = "";

		pbAddProfilePic->ImageLocation = "";
		pbAddProfilePic->Image = nullptr;

	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		try {
			conn->Open();
			MessageBox::Show("Connection Succeeded.");
			conn->Close();
			}
		catch (Exception^ e) {
			MessageBox::Show("Connection Error.");
		}
		StudentPopulateTable();
		CoursePopulateTable();
	}
	private: System::Void btnInsert_Click(System::Object ^ sender, System::EventArgs ^ e) 
	{

		String^ firstName = txtFirstName->Text;
		String^ surName = txtSurname->Text;
		String^ schoolID = txtSchoolID->Text;
		String^ level = cbLevel->Text;
		String^ college = cbCollege->Text;
		String^ degree = txtDegree->Text;

		array<unsigned char>^ studentImage;

		String^ filelocation = pbAddProfilePic->ImageLocation;

		int numStudents = 1;

		bool isValid = true;

		//checks School ID
		try
		{
			conn->Open();
			String^ schoolID2 = "'" + schoolID + "'";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT schoolID FROM tblStudents WHERE schoolID=" + schoolID2, conn);

			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			if (dt->Rows->Count > 0)
			{
				isValid = false;
				MessageBox::Show("School ID already exists.");
			}
			conn->Close();
		}
		catch (Exception^ e) {}

		try
		{
			FileStream^ fs = gcnew FileStream(filelocation, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			studentImage = br->ReadBytes(fs->Length);
		}
		catch (Exception^ e) {}

		if (firstName->Trim()->Length < 1)
		{
			MessageBox::Show("Enter a PROPER FIRST NAME.");
			isValid = false;
		}

		if (surName->Trim()->Length < 1)
		{
			MessageBox::Show("Enter a PROPER SURNAME.");
			isValid = false;
		}

		if (schoolID->Trim()->Length < 9)
		{
			MessageBox::Show("Enter a PROPER SCHOOL ID.");
			isValid = false;
		}

		if (level->Trim()->Length < 1)
		{
			MessageBox::Show("Enter your LEVEL.");
			isValid = false;
		}

		if (college->Trim()->Length < 1)
		{
			MessageBox::Show("Enter your COLLEGE.");
			isValid = false;
		}

		if (degree->Trim()->Length < 4)
		{
			MessageBox::Show("Enter a PROPER DEGREE name.");
			isValid = false;
		}


		if (isValid)
		{
			if (conn->State == ConnectionState::Open)
			{
				// Connection is open, close it
				conn->Close();
			}

			conn->Open();

			String^ cmdString = "INSERT INTO tblStudents (schoolID,lastName,firstName,level,college,degree,image) VALUES (@schoolID,@lastName,@firstName,@level,@college,@degree,@image)";

			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@schoolID", schoolID);
			cmd->Parameters->AddWithValue("@lastName", surName);
			cmd->Parameters->AddWithValue("@firstName", firstName);
			cmd->Parameters->AddWithValue("@level", level);
			cmd->Parameters->AddWithValue("@college", college);
			cmd->Parameters->AddWithValue("@degree", degree);
			cmd->Parameters->AddWithValue("@image", studentImage);

			try
			{
				String^ degree2 = "'" + degree + "'";
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT degree,numOfStudents FROM tblCourses WHERE degree=" + degree2, conn);

				DataTable^ dt = gcnew DataTable();
				

				adapter->Fill(dt);

				int rowCount = dt->Rows->Count;
				//MessageBox::Show("Number of rows: " + rowCount.ToString());


				if (dt->Rows->Count > 0)
				{
					
					String^ currentNumStudents = dt->Rows[0]->ItemArray[1]->ToString();
					//String^ currentDegree = dt->Rows[0]->ItemArray[0]->ToString();
					int updatedNumStudents = Convert::ToInt32(currentNumStudents) + 1;

					
					String^ cmd2string = "UPDATE tblCourses SET numOfStudents=@numOfStudents WHERE degree=@degree";
					MySqlCommand^ cmd2 = gcnew MySqlCommand(cmd2string, conn);

					cmd2->Parameters->AddWithValue("@numOfStudents", updatedNumStudents);
					cmd2->Parameters->AddWithValue("@degree", degree);

					try
					{
						cmd2->ExecuteNonQuery();
						MessageBox::Show("[INSERTION] Updated Count in Course data table:numOfStudents");
						conn->Close();
						CoursePopulateTable();
					}
					catch (Exception^ e) { MessageBox::Show("[INSERTION] Failed to update Course data:numOfStudents"); }
					
				}
				else
				{
					String^ cmdString2 = "INSERT INTO tblCourses (college,degree,numOfStudents) VALUES (@college,@degree,@numOfStudents)";

					MySqlCommand^ cmd2 = gcnew MySqlCommand(cmdString2, conn);

					cmd2->Parameters->AddWithValue("@college", college);
					cmd2->Parameters->AddWithValue("@degree", degree);
					cmd2->Parameters->AddWithValue("@numOfStudents", numStudents);

					try
					{
						cmd2->ExecuteNonQuery();
						MessageBox::Show(schoolID + " Inserted Successfully in Course Database.");
						CoursePopulateTable();
						conn->Close();

					}
					catch (Exception^ e)
					{
						MessageBox::Show("Insert in Course Database FAILED.");
					}
				}
			}
			catch (Exception^ e) {}
			
			try
			{
				conn->Open();
				cmd->ExecuteNonQuery();
				MessageBox::Show(schoolID + " Inserted Successfully in Student Database.");
				conn->Close();
				ClearFields();
				StudentPopulateTable();
				CoursePopulateTable();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Insert in Student Database FAILED.");
			}
			conn->Close();
		}
	}
	private: System::Void btnAddImg_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";

		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			pbAddProfilePic->ImageLocation = ofd->FileName;
		}
	}
	private: System::Void dgvListStudent_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		//MessageBox::Show(dgvProducts->CurrentCell->RowIndex.ToString());

		String^ currID = dgvListStudent->Rows[dgvListStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString(); //cells[0] accesses the first column?
		//MessageBox::Show(currentPID);

		try
		{
			conn->Open();

			pbAddProfilePic->Image = nullptr;
			txtFirstName->Text = "";
			txtSurname->Text = "";
			txtSchoolID->Text = "";
			cbLevel->Text = "";
			cbCollege->Text = "";
			txtDegree->Text = "";

			String^ currID2 = "'" + currID + "'";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT image FROM tblStudents WHERE schoolID=" + currID2, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			txtSchoolID->Text = currID;
			txtSurname->Text = dgvListStudent->Rows[dgvListStudent->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
			txtFirstName->Text = dgvListStudent->Rows[dgvListStudent->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
			cbLevel->Text = dgvListStudent->Rows[dgvListStudent->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
			cbCollege->Text = dgvListStudent->Rows[dgvListStudent->CurrentCell->RowIndex]->Cells[4]->Value->ToString();
			txtDegree->Text = dgvListStudent->Rows[dgvListStudent->CurrentCell->RowIndex]->Cells[5]->Value->ToString();

			String^ storedDegree = txtDegree->Text;
			storeDegree(storedDegree);

			String^ storedID = txtSchoolID->Text;
			storeID(storedID);

			array<unsigned char>^ studentImage = (array<unsigned char>^)dt->Rows[0]->ItemArray[0]; //ItemArray for column sa DataTable
			MemoryStream^ ms = gcnew MemoryStream(studentImage);
			pbAddProfilePic->Image = Image::FromStream(ms);
			conn->Close();

		}
		catch (Exception^ e)
		{
			conn->Close();
		}
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ currID = dgvListStudent->Rows[dgvListStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		String^ degree = dgvListStudent->Rows[dgvListStudent->CurrentCell->RowIndex]->Cells[5]->Value->ToString();

		try
		{
			conn->Open();
			String^ cmdstring = "DELETE FROM tblstudents WHERE schoolID=@schoolID";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
			cmd->Parameters->AddWithValue("@schoolID", currID);
			cmd->ExecuteNonQuery();

			conn->Close();
			MessageBox::Show("DELETED SUCCESSFULLY in Student Table.");
			StudentPopulateTable();

			pbAddProfilePic->Image = nullptr;
			txtFirstName->Text = "";
			txtSurname->Text = "";
			txtSchoolID->Text = "";
			cbLevel->Text = "";
			cbCollege->Text = "";
			txtDegree->Text = "";
		}
		catch (Exception^ e) { MessageBox::Show("FAILED TO DELETE in Student Table."); }
		
		try
		{
			conn->Open();
			String^ degree2 = "'" + degree + "'";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT degree,numOfStudents FROM tblCourses WHERE degree=" + degree2, conn);

			DataTable^ dt = gcnew DataTable();


			adapter->Fill(dt);

			//int rowCount = dt->Rows->Count;

			//IF DEGREE EXISTS
			if (dt->Rows->Count > 0)
			{

				String^ currentNumStudents = dt->Rows[0]->ItemArray[1]->ToString();
				String^ currentDegree = dt->Rows[0]->ItemArray[0]->ToString();
				int updatedNumStudents = Convert::ToInt32(currentNumStudents) - 1;

				//IF IT'S NOW O, DELETE ROW
				if (updatedNumStudents == 0)
				{
					String^ cmdstring = "DELETE FROM tblCourses WHERE degree=@degree";
					MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
					cmd->Parameters->AddWithValue("@degree", degree);
					try
					{
						cmd->ExecuteNonQuery();
						conn->Close();
						MessageBox::Show("numOfStudents:0 : DELETED ROW in Course Table.");
						CoursePopulateTable();
					}
					catch (Exception^ e) { MessageBox::Show("FAILED TO DELETE ROW in Course Table"); }
					
				}
				//IF NOT 0, UPDATE
				else
				{
					String^ cmd2string = "UPDATE tblCourses SET numOfStudents=@numOfStudents WHERE degree=@degree";
					MySqlCommand^ cmd2 = gcnew MySqlCommand(cmd2string, conn);

					cmd2->Parameters->AddWithValue("@numOfStudents", updatedNumStudents);
					cmd2->Parameters->AddWithValue("@degree", degree);

					try
					{
						cmd2->ExecuteNonQuery();
						MessageBox::Show("[DELETION] Updated Count in Course data table:numOfStudents");
						conn->Close();
						CoursePopulateTable();
					}
					catch (Exception^ e) { MessageBox::Show("[DELETION] Failed to update Course data:numOfStudents"); }
				}
				
			}
		}
		catch (Exception^ e) { MessageBox::Show("Failed to Delete/Decrement in Course Table."); }


	}

	
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ currID = txtSchoolID->Text;
		String^ surname = txtSurname->Text;
		String ^ firstname = txtFirstName->Text;
		String^ level = cbLevel->Text;
		String^ college = cbCollege->Text;
		String^ degree = txtDegree->Text;


		array<unsigned char>^ studentImage;

		bool changedID = false;
		bool isValid = true;
		bool noDegree = true;

		try
		{
			MemoryStream^ ms = gcnew MemoryStream();
			if (pbAddProfilePic->Image != nullptr)
			{
				pbAddProfilePic->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				studentImage = ms->ToArray();
			}

		}
		catch (Exception^ e) {}

		try
		{
			conn->Open();

			String^ currID2 = "'" + currID + "'";
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tblstudents SET schoolID=@schoolID,lastName=@lastName,firstName=@firstName,level=@level,college=@college,degree=@degree,image=@image WHERE schoolID=" + currID2, conn);

			cmd->Parameters->AddWithValue("@schoolID", currID);
			cmd->Parameters->AddWithValue("@lastName", surname);
			cmd->Parameters->AddWithValue("@firstName", firstname);
			cmd->Parameters->AddWithValue("@level", level);
			cmd->Parameters->AddWithValue("@college", college);
			cmd->Parameters->AddWithValue("@degree", degree);
			cmd->Parameters->AddWithValue("@image", studentImage);

			//if binago ang ID
			if (currID != storedID)
			{
				changedID = true;
			}
			
			//check if ID exists/not unique
			//dapat i check lang pala if chinange ang school ID
			if (changedID)
			{
				try
				{
					String^ schoolID2 = "'" + currID + "'";
					MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT schoolID FROM tblStudents WHERE schoolID=" + schoolID2, conn);

					DataTable^ dt = gcnew DataTable();
					adapter->Fill(dt);

					if (dt->Rows->Count > 0)
					{
						isValid = false;
						MessageBox::Show("School ID already exists.");
					}
					conn->Close();
				}
				catch (Exception^ e) {}
			}
			
			//if ID is unique
			if (isValid)
			{
				cmd->ExecuteNonQuery();
				MessageBox::Show(currID + " Updated Successfully in Student Table.");
				ClearFields();
				conn->Close();
				StudentPopulateTable();

				//check if degree is not the same
				if (storedDegree != degree)
				{
					//check if the new degree already exists
					try
					{
						conn->Open();
						String^ degree2 = "'" + degree + "'";
						MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT degree,numOfStudents FROM tblCourses WHERE degree=" + degree2, conn);

						DataTable^ dt = gcnew DataTable();

						adapter->Fill(dt);

						//int rowCount = dt->Rows->Count;

						//IF DEGREE EXISTS
						if (dt->Rows->Count > 0)
						{
							noDegree = false;
						}
						conn->Close();
					}
					catch (Exception^ e) {}
					//create new degree if it does not exists
					if (noDegree) 
					{
						conn->Open();
						int numStudents = 1;

						String^ cmdString2 = "INSERT INTO tblCourses (college,degree,numOfStudents) VALUES (@college,@degree,@numOfStudents)";

						MySqlCommand^ cmd2 = gcnew MySqlCommand(cmdString2, conn);

						cmd2->Parameters->AddWithValue("@college", college);
						cmd2->Parameters->AddWithValue("@degree", degree);
						cmd2->Parameters->AddWithValue("@numOfStudents", numStudents);

						try
						{
							cmd2->ExecuteNonQuery();
							MessageBox::Show(currID + "Inserted Successfully in Course Database.");
							CoursePopulateTable();
							conn->Close();
						}
						catch (Exception^ e) {}
					}
					//Increment the new degree if it already exists 
					else
					{
						conn->Open();

						String^ degree2 = "'" + degree + "'";
						MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT degree,numOfStudents FROM tblCourses WHERE degree=" + degree2, conn);

						DataTable^ dt = gcnew DataTable();
						adapter->Fill(dt);

						String^ currentNumStudents = dt->Rows[0]->ItemArray[1]->ToString();

						int^ updatedNumStudents = Convert::ToInt32(currentNumStudents) + 1;

						String^ cmd2string = "UPDATE tblCourses SET numOfStudents=@numOfStudents WHERE degree=@degree";
						MySqlCommand^ cmd2 = gcnew MySqlCommand(cmd2string, conn);
						cmd2->Parameters->AddWithValue("@numOfStudents", updatedNumStudents);
						cmd2->Parameters->AddWithValue("@degree", degree);

						try
						{
							cmd2->ExecuteNonQuery();
							MessageBox::Show("[UPDATE] Updated Count of New Degree in Course data table:numOfStudents");
							conn->Close();
							CoursePopulateTable();
						}
						catch (Exception^ e) { MessageBox::Show("[UPDATE] Failed to update Course data:numOfStudents"); }

					}
					//Decrement the previous degree if Degree is not the same as before update OR Delete if numStudents is 0
					try
					{
						conn->Open();
						String^ degree2 = "'" + storedDegree + "'";
						MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT degree,numOfStudents FROM tblCourses WHERE degree=" + degree2, conn);

						DataTable^ dt = gcnew DataTable();

						adapter->Fill(dt);

						String^ currentNumStudents = dt->Rows[0]->ItemArray[1]->ToString();
						String^ currentDegree = dt->Rows[0]->ItemArray[0]->ToString();
						int updatedNumStudents = Convert::ToInt32(currentNumStudents) - 1;

						//IF IT'S NOW O, DELETE ROW
						if (updatedNumStudents == 0)
						{
							String^ cmdstring = "DELETE FROM tblCourses WHERE degree=@degree";
							MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
							cmd->Parameters->AddWithValue("@degree", storedDegree);
							try
							{
								cmd->ExecuteNonQuery();
								conn->Close();
								MessageBox::Show("[UPDATE] numOfStudents:0 : DELETED ROW in Course Table.");
								CoursePopulateTable();
							}
							catch (Exception^ e) { MessageBox::Show("[UPDATE] FAILED TO DELETE ROW in Course Table"); }

						}
						//IF NOT 0, UPDATE
						else
						{
							String^ cmd2string = "UPDATE tblCourses SET numOfStudents=@numOfStudents WHERE degree=@degree";
							MySqlCommand^ cmd2 = gcnew MySqlCommand(cmd2string, conn);

							cmd2->Parameters->AddWithValue("@numOfStudents", updatedNumStudents);
							cmd2->Parameters->AddWithValue("@degree", storedDegree);

							try
							{
								cmd2->ExecuteNonQuery();
								MessageBox::Show("[UPDATE] Updated Count in Course data table:numOfStudents");
								conn->Close();
								CoursePopulateTable();
							}
							catch (Exception^ e) { MessageBox::Show("[UPDATE] Failed to update Course data:numOfStudents"); }
						}

					}
					catch (Exception^ e) { MessageBox::Show("Failed to UPDATE in Course Table."); }

					//CHECK ANG MGA CONNECTIONS KUNG TAMA BA HA pagopen at pagsara
					MessageBox::Show("Updated Successfully in Course Table.");
				}
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Update in Student Table FAILED.");
		}
		
    }
	//DI GUMAGANA UPDATE SA COURSE TABLE PAG MAGDELETE,,,DAPAT MADELETE ROW OR DECREMENT BRUHHHH

	private: System::Void btnClrField_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClearFields();
		StudentPopulateTable();
	}
	private: System::Void btnCrudlCourse_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ clickedDegree = dgvListCourse->Rows[dgvListCourse->CurrentCell->RowIndex]->Cells[1]->Value->ToString();

		CourseCRUDL^ ptf = gcnew CourseCRUDL();
		ptf->CurrentDegree = clickedDegree;
		ptf->Visible = true;
	}
	private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CoursePopulateTable();
	}

	private: System::Void btnSearchStudent_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ studentSearch = txtSearchStudent->Text;

		try
		{
			conn->Open();

			String^ cmdstring = "SELECT s.schoolID, s.lastName, s.firstName, s.level, s.college, s.degree "
                "FROM tblstudents s "
                "WHERE LOWER(s.schoolID) LIKE CONCAT('%', @value, '%') "
                "OR LOWER(s.lastName) LIKE CONCAT('%', @value, '%') "
                "OR LOWER(s.firstName) LIKE CONCAT('%', @value, '%') "
                "OR LOWER(s.level) LIKE CONCAT('%', @value, '%') "
                "OR LOWER(s.college) LIKE CONCAT('%', @value, '%') "
				"OR LOWER(s.degree) LIKE CONCAT('%', @value, '%')";
			
			
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
			cmd->Parameters->AddWithValue("@value", studentSearch);

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();


			adapter->Fill(dt);
			dgvListStudent->DataSource = dt;

			txtSearchStudent->Text = "";

			conn->Close();

		}
		catch (Exception^ e) { MessageBox::Show(studentSearch + " cannot be found."); }
	}

	private: System::Void btnSearchCourse_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ courseSearch = txtSearchCourse->Text;
		

		try
		{
			conn->Open();

			String^ cmdstring = "SELECT  c.college, c.degree, c.numOfStudents from tblcourses c "
				"WHERE LOWER(c.college) LIKE CONCAT('%', @value, '%') "
				"OR LOWER(c.degree) LIKE CONCAT('%', @value, '%') "
				"OR LOWER(c.numOfStudents) LIKE CONCAT('%', @value, '%') ";

			MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
			cmd->Parameters->AddWithValue("@value", courseSearch);

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();


			adapter->Fill(dt);
			dgvListCourse->DataSource = dt;

			txtSearchCourse->Text = "";

			conn->Close();

		}
		catch (Exception^ e) { MessageBox::Show(courseSearch + " cannot be found."); }
	}

	//adds numbering for each row
	private: System::Void dgvListStudent_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e) 
	{
		DataGridView^ dataGridView = dynamic_cast<DataGridView^>(sender);
		String^ rowNumber = (e->RowIndex + 1).ToString();

		// Calculate the display rectangle for the row number
		Rectangle rowHeaderBounds = Rectangle(e->RowBounds.Location.X, e->RowBounds.Location.Y, dataGridView->RowHeadersWidth - 4, e->RowBounds.Height);

		// Set alignment of the row number
		TextFormatFlags flags = TextFormatFlags::VerticalCenter | TextFormatFlags::Right;

		// Draw the row number
		TextRenderer::DrawText(e->Graphics, rowNumber, dataGridView->RowHeadersDefaultCellStyle->Font, rowHeaderBounds, dataGridView->RowHeadersDefaultCellStyle->ForeColor, flags);
	}
	private: System::Void dgvListCourse_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e) 
	{
		DataGridView^ dataGridView = dynamic_cast<DataGridView^>(sender);
		String^ rowNumber = (e->RowIndex + 1).ToString();

		// Calculate the display rectangle for the row number
		Rectangle rowHeaderBounds = Rectangle(e->RowBounds.Location.X, e->RowBounds.Location.Y, dataGridView->RowHeadersWidth - 4, e->RowBounds.Height);

		// Set alignment of the row number
		TextFormatFlags flags = TextFormatFlags::VerticalCenter | TextFormatFlags::Right;

		// Draw the row number
		TextRenderer::DrawText(e->Graphics, rowNumber, dataGridView->RowHeadersDefaultCellStyle->Font, rowHeaderBounds, dataGridView->RowHeadersDefaultCellStyle->ForeColor, flags);
	}
};

}
