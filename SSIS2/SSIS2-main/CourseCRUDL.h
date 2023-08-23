#pragma once

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
	/// Summary for CourseCRUDL
	/// </summary>
	public ref class CourseCRUDL : public System::Windows::Forms::Form
	{
	public:
		property String^ CurrentDegree;

		CourseCRUDL(void)
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
		~CourseCRUDL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbCollegeC;
	protected:

	private: System::Windows::Forms::Label^ lblCollege;
	private: System::Windows::Forms::TextBox^ txtDegreeC;

	private: System::Windows::Forms::Label^ lblDegree;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ btnModifyC;
	private: System::Windows::Forms::Button^ btnDelC;
	private: System::Windows::Forms::Button^ addCourseBtn;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cbCollegeC = (gcnew System::Windows::Forms::ComboBox());
			this->lblCollege = (gcnew System::Windows::Forms::Label());
			this->txtDegreeC = (gcnew System::Windows::Forms::TextBox());
			this->lblDegree = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnModifyC = (gcnew System::Windows::Forms::Button());
			this->btnDelC = (gcnew System::Windows::Forms::Button());
			this->addCourseBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cbCollegeC
			// 
			this->cbCollegeC->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cbCollegeC->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbCollegeC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCollegeC->FormattingEnabled = true;
			this->cbCollegeC->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"(CCS) College of Computer Studies", L"(CASS) College of Arts and Social and Sciences",
					L"(COE) College of Engineering", L"(CEBA) College of Economics and Business Administration", L"(CED) College of Education", L"(CSM) College of Science and Mathematics",
					L"(CON) College of Nursing"
			});
			this->cbCollegeC->Location = System::Drawing::Point(21, 57);
			this->cbCollegeC->Name = L"cbCollegeC";
			this->cbCollegeC->Size = System::Drawing::Size(483, 26);
			this->cbCollegeC->TabIndex = 7;
			// 
			// lblCollege
			// 
			this->lblCollege->AutoSize = true;
			this->lblCollege->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCollege->Location = System::Drawing::Point(17, 34);
			this->lblCollege->Name = L"lblCollege";
			this->lblCollege->Size = System::Drawing::Size(62, 20);
			this->lblCollege->TabIndex = 8;
			this->lblCollege->Text = L"College";

			// 
			// txtDegreeC
			// 
			this->txtDegreeC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDegreeC->Location = System::Drawing::Point(21, 144);
			this->txtDegreeC->Name = L"txtDegreeC";
			this->txtDegreeC->Size = System::Drawing::Size(483, 24);
			this->txtDegreeC->TabIndex = 9;
			// 
			// lblDegree
			// 
			this->lblDegree->AutoSize = true;
			this->lblDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDegree->Location = System::Drawing::Point(17, 120);
			this->lblDegree->Name = L"lblDegree";
			this->lblDegree->Size = System::Drawing::Size(62, 20);
			this->lblDegree->TabIndex = 10;
			this->lblDegree->Text = L"Degree";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(277, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"(ex. Bachelor of Science in Computer Science)";
			// 
			// btnModifyC
			// 
			this->btnModifyC->Location = System::Drawing::Point(21, 187);
			this->btnModifyC->Name = L"btnModifyC";
			this->btnModifyC->Size = System::Drawing::Size(267, 45);
			this->btnModifyC->TabIndex = 41;
			this->btnModifyC->Text = L"UPDATE";
			this->btnModifyC->UseVisualStyleBackColor = true;
			this->btnModifyC->Click += gcnew System::EventHandler(this, &CourseCRUDL::btnModifyC_Click);
			// 
			// btnDelC
			// 
			this->btnDelC->Location = System::Drawing::Point(307, 187);
			this->btnDelC->Name = L"btnDelC";
			this->btnDelC->Size = System::Drawing::Size(210, 103);
			this->btnDelC->TabIndex = 42;
			this->btnDelC->Text = L"DELETE";
			this->btnDelC->UseVisualStyleBackColor = true;
			this->btnDelC->Click += gcnew System::EventHandler(this, &CourseCRUDL::btnDelC_Click_1);
			// 
			// addCourseBtn
			// 
			this->addCourseBtn->Location = System::Drawing::Point(21, 238);
			this->addCourseBtn->Name = L"addCourseBtn";
			this->addCourseBtn->Size = System::Drawing::Size(267, 52);
			this->addCourseBtn->TabIndex = 43;
			this->addCourseBtn->Text = L"ADD";
			this->addCourseBtn->UseVisualStyleBackColor = true;
			this->addCourseBtn->Click += gcnew System::EventHandler(this, &CourseCRUDL::addCourseBtn_Click);
			// 
			// CourseCRUDL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 302);
			this->Controls->Add(this->addCourseBtn);
			this->Controls->Add(this->btnDelC);
			this->Controls->Add(this->btnModifyC);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblDegree);
			this->Controls->Add(this->txtDegreeC);
			this->Controls->Add(this->lblCollege);
			this->Controls->Add(this->cbCollegeC);
			this->Name = L"CourseCRUDL";
			this->Text = L"CourseCRUDL";
			this->Load += gcnew System::EventHandler(this, &CourseCRUDL::CourseCRUDL_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ connstring = "server=localhost;port=3306;database=dbStudents;uid=root;password=gag0p1n4s";
		MySqlConnection^ conn = gcnew MySqlConnection(connstring);

	private: System::Void CourseCRUDL_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ degree = "'" + CurrentDegree + "'";
		conn->Open();
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT college,degree FROM tblCourses WHERE degree=" + degree, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		cbCollegeC->Text = dt->Rows[0]->ItemArray[0]->ToString();
		txtDegreeC->Text = dt->Rows[0]->ItemArray[1]->ToString();

		conn->Close();
	}


	private: System::Void btnModifyC_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Update Course Table
		//Update Students with the degree to the modified ver
		String^ college = cbCollegeC->Text;
		String^ degree = txtDegreeC->Text;

		conn->Open();
		String^ cmdstring = "UPDATE tblCourses SET college=@college, degree=@degree1 WHERE degree=@degree2";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
		cmd->Parameters->AddWithValue("@college", college);
		cmd->Parameters->AddWithValue("@degree1", degree);
		cmd->Parameters->AddWithValue("@degree2", CurrentDegree);
		try
		{
			cmd->ExecuteNonQuery();
			conn->Close();
			MessageBox::Show("Successfully MODIFIED COURSE in Course Table.");
		}
		catch (Exception^ e) { MessageBox::Show("FAILED TO MODIFY COURSE in Course Table"); }

		try
		{
			String^ degree2 = "'" + CurrentDegree + "'";
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT schoolID FROM tblstudents WHERE degree=" + degree2, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			conn->Close();

			int size = dt->Rows->Count;
			// THEN STORE IN STRING? ARRAY dt->Rows[i]->ItemArray[0]->ToString(); until dt->Rows->Count - 1 ?
			// THEN ACCESS each index in the array until the length...to Update All the Students with that ID, change the college and degree of the course perhaps
			//Sa college kay naka cbbox so by index ang pagaccess don?

			for (int i = 0; i < size; i++)
			{
				String^ id = dt->Rows[i]->ItemArray[0]->ToString();
				String^ cmdstring = "UPDATE tblStudents SET college=@college,degree=@degree WHERE schoolID=@schoolID";
				MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
				cmd->Parameters->AddWithValue("@college", college);
				cmd->Parameters->AddWithValue("@degree", degree);
				cmd->Parameters->AddWithValue("@schoolID", id);
				try
				{
					conn->Open();
					cmd->ExecuteNonQuery();
					conn->Close();
					MessageBox::Show("Successfully MODIFIED STUDENT in Student Table.");
				}
				catch (Exception^ e) { MessageBox::Show("FAILED TO MODIFY STUDENT in Student Table"); }
			}

		}
		catch (Exception^ e) { MessageBox::Show("FAILED TO UPDATE STUDENTS in Course Table"); }
	}

	private: System::Void btnDelC_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		//Delete entire row

		conn->Open();

		//String^ currDegree = "'" + CurrentDegree + "'";
		//MySqlCommand^ cmd = gcnew MySqlCommand("DELETE WHERE degree=" + currDegree, conn);
		String^ cmdstring = "DELETE FROM tblCourses WHERE degree=@degree";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
		cmd->Parameters->AddWithValue("@degree", CurrentDegree);
		try
		{
			cmd->ExecuteNonQuery();
			conn->Close();
			MessageBox::Show("Successfully DELETED COURSE in Course Table.");
		}
		catch (Exception^ e) { MessageBox::Show("FAILED TO DELETE COURSE in Course Table"); }

		//And delete students with that course in Student Table
		try
		{
			String^ degree = "'" + CurrentDegree + "'";
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT schoolID FROM tblstudents WHERE degree=" + degree, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			conn->Close();

			int size = dt->Rows->Count;


			// THEN STORE IN STRING? ARRAY dt->Rows[i]->ItemArray[0]->ToString(); until dt->Rows->Count - 1 ?
			// THEN ACCESS each index in the array until the length...to Delete All the Students with that ID
			//array<String^>^ idArr = gcnew array<String^>(Array_Size);
			//di nalang pla array lol

			for (int i = 0; i < size; i++)
			{
				String^ id = dt->Rows[i]->ItemArray[0]->ToString();
				String^ cmdstring = "DELETE FROM tblStudents WHERE schoolID=@schoolID";
				MySqlCommand^ cmd = gcnew MySqlCommand(cmdstring, conn);
				cmd->Parameters->AddWithValue("@schoolID", id);
				try
				{
					conn->Open();
					cmd->ExecuteNonQuery();
					conn->Close();
					MessageBox::Show("Successfully DELETED STUDENT in Student Table.");
				}
				catch (Exception^ e) { MessageBox::Show("FAILED TO DELETE STUDENT in Student Table"); }
			}
			if (conn->State == ConnectionState::Open)
			{
				// Connection is open, close it
				conn->Close();
			}
		}
		catch (Exception^ e) { MessageBox::Show("FAILED TO DELETE STUDENTS in Student Table"); }
	}

	private: System::Void addCourseBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		String^ college = cbCollegeC->Text;
		String^ degree = txtDegreeC->Text;

		bool isValid = true;
		//check if course already exists
		try
		{
			conn->Open();
			String^ degreeC = "'" + degree + "'";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM tblcourses WHERE degree=" + degreeC, conn);

			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			if (dt->Rows->Count > 0)
			{
				isValid = false;
				MessageBox::Show("Course already exists.");
			}
			conn->Close();
		}
		catch (Exception^ e) {}
		//add course if it doesn't exist

		if (isValid)
		{
			if (conn->State == ConnectionState::Open)
			{
				// Connection is open, close it
				conn->Close();
			}

			conn->Open();

			String^ cmdString = "INSERT INTO tblcourses (college,degree,numOfStudents) VALUES (@college,@degree,@numOfStudents)";

			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@college", college);
			cmd->Parameters->AddWithValue("@degree", degree);
			cmd->Parameters->AddWithValue("@numOfStudents", 0);

			try
			{
				cmd->ExecuteNonQuery();
				MessageBox::Show("Course added successfully.");
				conn->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Insert in Course Database FAILED.");
			}

		}
	}
	
	};

}
