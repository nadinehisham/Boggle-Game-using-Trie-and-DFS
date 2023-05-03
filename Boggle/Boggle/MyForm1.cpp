#include "MyForm1.h"

//#include"C:\Users\Jumana\Desktop\Boggle\Boggle\Trie.h"
//array<String^>^ args

using namespace System;
using namespace System::Windows::Forms;
void main2()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Boggle::MyForm1 form;
	Application::Run(% form);


}
