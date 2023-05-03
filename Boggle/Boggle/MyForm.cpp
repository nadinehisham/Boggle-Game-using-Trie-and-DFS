#include "MyForm.h"
#include <vector>
#include"C:\Users\Jumana\Desktop\Boggle\Boggle\Trie.h"
//array<String^>^ args

using namespace System;
using namespace System::Windows::Forms;
void main()
{
	char board[SIZE][SIZE];
	srand((unsigned int)time(NULL));
	randMat2(board);
	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		v.push_back(board[i][j]);
	//		//MessageBox::Show("in for loop");
	//	}
	//}

	v0.push_back(toupper(board[0][0]));
	v1.push_back(toupper(board[0][1]));
	v2.push_back(toupper(board[0][2]));
	v3.push_back(toupper(board[0][3]));
	v4.push_back(toupper(board[1][0]));
	v5.push_back(toupper(board[1][1]));
	v6.push_back(toupper(board[1][2]));
	v7.push_back(toupper(board[1][3]));
	v8.push_back(toupper(board[2][0]));
	v9.push_back(toupper(board[2][1]));
	v10.push_back(toupper(board[2][2]));
	v11.push_back(toupper(board[2][3]));
	v12.push_back(toupper(board[3][0]));
	v13.push_back(toupper(board[3][1]));
	v14.push_back(toupper(board[3][2]));
	v15.push_back(toupper(board[3][3]));
	myFile.open("C:\\Users\\Jumana\\Desktop\\Boggle\\WordList.txt", ios::in);
	if (myFile.is_open()) {
		string line;
		while (getline(myFile, line)) {
			t.insert(line);
		}
		myFile.close();
		//MessageBox::Show("in");
	}
	wordsfound= findWords(board, t);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Boggle::MyForm form;
	Application::Run(% form);

	
	
}



