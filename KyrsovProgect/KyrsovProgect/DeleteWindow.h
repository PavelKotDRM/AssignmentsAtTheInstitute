#pragma once

namespace KyrsovProgect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class DeleteWindow : public System::Windows::Forms::Form
	{
	public:
		DeleteWindow(void)
		{
			InitializeComponent();
			//
			//TODO: add constructor code
			//
		}

	protected:
		/// <summary>
		/// Release all resources in use.
		/// </summary>
		~DeleteWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// DeleteWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 224);
			this->Name = L"DeleteWindow";
			this->Text = L"Delete-CreateWindow";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
