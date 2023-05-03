#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
#include "C:\Users\Jumana\Desktop\Boggle\Boggle\Trie.h"



#define SIZE 4







//creates the root node
Trie::Trie()
{
    root = new trieP();
}









/*
starting from the root node, the "current" node traverses the children of each node
till we reach the word length and checks
if the child of the current node is NULL, if so, it returns "false"
however, if the condition is not met, it moves the "current" pointer to make it
point to the child of the current node until we reach the word length OR the first condition is
met.
it then checks if the current node is not NULL and if the end of the word in the trie is reached
and returns true if both conditions are met.
*/
bool Trie::search(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
    }
    trieP* current = root;
    int index;
    for (int i = 0; i < word.length(); i++)
    {
        index = word[i] - 'A';

        if (current->child[index] == NULL)
        {
            return false;
        }
        current = current->child[index];
    }
    return current != NULL && current->end == 1;
}









/*
* to insert a new word, we first check if the word already exists in our trie
* if not, we initialize a pointer that first points to the root of our trie and
* takes each letter of the word we want to insert and subratcts 'A' from it to know
which index it needs to be inserted in, and then we create a new node pointed to by the
specific pointer in the array of pointers with the same index. we then move the
"current" pointer to point to the child of the node we're currently on.
*/
void Trie::insert(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
    }
    if (search(word) == 1)
    {
        cerr << "Word \"" << word << "\" is already in Trie\n";
        return;
    }
    trieP* current = root;



    for (int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'A';



        if (current->child[index] == NULL)
        {
            trieP* newNode = new trieP();



            current->child[index] = newNode;



        }
        current->child[index]->count++;
        current = current->child[index];
    }
    current->end = true;
}







// checks if the trie is empty
bool Trie::isEmpty()
{
    for (int i = 0; i < 26; i++)



        if ((root->child[i]) != NULL && (root->child[i]->count > 0))
            return 0;



    return 1;



}





/*
is a recursive function that traverses all the nodes in the trie
and saves each word in a string and couts each word before it moves to the next word
*/



void Trie::inPrint(trieP* parent, char* out, int index)
{
    if (parent != NULL)
    {
        for (int i = 0; i < 26; i++)
        {
            if (parent->child[i] != NULL)
            {
                out[index] = 'A' + i;
                inPrint(parent->child[i], out, index + 1);
            }
        }
        if (parent->end)
        {
            out[index] = '\0';
            cout << out << endl;
        }
    }
}







// calls the inprint function to display all the words in a trie
void  Trie::display(ostream& out)
{
    char arr[15];
    inPrint(root, arr, 0);
}







/*
* it initializes the currentNode pointer with the root node then
* Checks if the index is NULL or not and If null the word is not present in the Trie then
* it moves the current pointer to the next node
* If current pointer is not NULL and
    "end" for the current is "1", make end = "0" for the current pointer
    If the "end for the current is equal to 0
    then the word is not present in Trie
*
*/
void Trie::deleteword(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
    }
    trieP* current = root;
    int index;
    for (int i = 0; i < word.length(); i++)
    {
        index = word[i] - 'A';



        if (current->child[index] == NULL)
        {
            cerr << "Word is not found\n";
            return;
        }
        current->child[index]->count--;
        current = current->child[index];
    }









    //If current pointer is not NULL and 
    //wordEndCnt for the current is greater than 0



    if (current != NULL && current->end == true)
    {
        current->end = false;
        current->count--;



        return;
    }
    cerr << "Word is not found\n";
}





// operator overloading; calls the display function
ostream& operator<< (ostream& out, Trie& t)
{
    t.display(out);
    return out;
}



void randMat(char boggle[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            boggle[i][j] = (char)('a' + rand() % ('z' - 'a' + 1));
}

void randMat2(char boggle[SIZE][SIZE])
{
    char s1[] = { 'A', 'A', 'C', 'I', 'O', 'T' };
    char s2[] = { 'A', 'B', 'I', 'L', 'T', 'Y' };
    char s3[] = { 'A', 'B', 'J', 'M', 'O', 'Q' };
    char s4[] = { 'A', 'C', 'E', 'L', 'R', 'S' };
    char s5[] = { 'A', 'C', 'E', 'M', 'P', 'R' };
    char s6[] = { 'A', 'D', 'E', 'N', 'V', 'Z' };
    char s7[] = { 'A', 'H', 'M', 'O', 'R', 'S' };
    char s8[] = { 'B', 'F', 'I', 'O', 'R', 'X' };
    char s9[] = { 'D', 'E', 'N', 'O', 'S', 'W' };
    char s10[] = { 'D', 'K', 'N', 'O', 'T', 'U' };
    char s11[] = { 'E', 'E', 'F', 'H', 'I', 'Y' };
    char s12[] = { 'E', 'G', 'I', 'N', 'T', 'V' };
    char s13[] = { 'E', 'G', 'K', 'L', 'U', 'Y' };
    char s14[] = { 'E', 'H', 'I', 'N', 'P', 'S' };
    char s15[] = { 'E', 'L', 'P', 'S', 'T', 'U' };
    char s16[] = { 'G', 'I', 'L', 'R', 'U', 'W' };

    int R1 = rand() % 6;
    int R2 = rand() % 6;
    int R3 = rand() % 6;
    int R4 = rand() % 6;
    int R5 = rand() % 6;
    int R6 = rand() % 6;
    int R7 = rand() % 6;
    int R8 = rand() % 6;
    int R9 = rand() % 6;
    int R10 = rand() % 6;
    int R11 = rand() % 6;
    int R12 = rand() % 6;
    int R13 = rand() % 6;
    int R14 = rand() % 6;
    int R15 = rand() % 6;
    int R16 = rand() % 6;

    boggle[0][0] = s1[R1];
    boggle[0][1] = s2[R2];
    boggle[0][2] = s3[R3];
    boggle[0][3] = s4[R4];
    boggle[1][0] = s5[R5];
    boggle[1][1] = s6[R6];
    boggle[1][2] = s7[R7];
    boggle[1][3] = s8[R8];
    boggle[2][0] = s9[R9];
    boggle[2][1] = s10[R10];
    boggle[2][2] = s11[R11];
    boggle[2][3] = s12[R12];
    boggle[3][0] = s13[R13];
    boggle[3][1] = s14[R14];
    boggle[3][2] = s15[R15];
    boggle[3][3] = s16[R16];

}


// A recursive function to print all words present on boggle 
void findWordsUtil(char boggle[SIZE][SIZE], bool visited[SIZE][SIZE], int i,
    int j, string& str, Trie& t, vector<string>& wordsfound)
{
    bool found = false;
    //vector<string> wordsfound;
// 
    // Mark current cell as visited and append current character 
    // to str 
    visited[i][j] = true;
    str = str + boggle[i][j];



    // If str is present in dictionary, then print it 
    if (t.search(str)) {

        if (wordsfound.empty()) {
            wordsfound.push_back(str);
            cout << str << endl;
        }
        else {
            for (int i = 0; i < wordsfound.size(); i++) {
                if (wordsfound[i] == str) {
                    found = true;
                    break;
                }
            }
            if (found == false) {
                wordsfound.push_back(str);
                cout << str << endl;
            }
        }

        //cout << "wordsfound size" << wordsfound.size() << endl;
    }


    // Traverse 8 adjacent cells of boggle[i][j] 
    for (int row = i - 1; row <= i + 1 && row < SIZE; row++)
        for (int col = j - 1; col <= j + 1 && col < SIZE; col++)
            if (row >= 0 && col >= 0 && !visited[row][col])
                findWordsUtil(boggle, visited, row, col, str, t, wordsfound);



    // Erase current character from string and mark visited 
    // of current cell as false 
    str.erase(str.length() - 1);
    visited[i][j] = false;
}



// Prints all words present in dictionary. 
vector<string> findWords(char boggle[SIZE][SIZE], Trie& t)
{
    vector<string> wordsfound;
    vector<string> list;
    // Mark all characters as not visited 
    bool visited[SIZE][SIZE] = { { false } };



    // Initialize current string 
    string str = "";



    // Consider every character and look for all words 
    // starting with this character 
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            findWordsUtil(boggle, visited, i, j, str, t, wordsfound);
    return wordsfound;
}

//3 letters = 1 point
//4 letters = 1 point
//5 letters = 2 points
//6 letters = 3 points
//7 letters = 5 points
//8 letters or more = 11 points

int pointsutil(string word)
{
    if ((word.length() > 0) && (word.length()<= 4))
        return 1;
    if (word.length() == 5)
        return 2;
    if (word.length() == 6)
        return 3;
    if (word.length() == 7)
        return 5;
    if (word.length() >= 8)
        return 11;
}
string totalPoints(vector<string>& words) {
    vector<int> p;
    int total = 0;
    for (int i = 0; i < words.size(); i++) {
        p.push_back(pointsutil(words[i]));
    }
    for (int i = 0; i < p.size(); i++) {
        total = total + p[i];
    }
    string totals = to_string(total);
    return totals;
}

//
//int main()
//{
//    Trie t;
//    fstream myFile;
//    myFile.open("C:\\Users\\Jumana\\Desktop\\Boggle\\WordList.txt", ios::in);
//    if (myFile.is_open()) {
//        string line;
//        while (getline(myFile, line)) {
//            t.insert(line);
//        }
//        myFile.close();
//    }
//    // cout << t;
//
//
//
//    char board[SIZE][SIZE];
//    srand((unsigned int)time(NULL));
//    randMat(board);
//
//
//
//    //for (int i = 0; i < 3; i++)
//    //{
//    //    for (int j = 0; j < 3; j++)
//    //    {
//    //        cout << board[i][j] << " ";
//    //    }
//    //    cout << endl;
//    //   
//    //}
//    if (SIZE == 3) {
//        for (int i = 0; i != SIZE; i++) {
//            cout << "+---+---+---+" << endl;
//            for (int j = 0; j != SIZE; j++) {
//                cout << "| " << board[i][j] << " ";
//            }
//            cout << "|" << endl;
//        }
//        cout << "+---+---+---+" << endl;
//    }
//    if (SIZE == 4) {
//        for (int i = 0; i != SIZE; i++) {
//            cout << "+---+---+---+---+" << endl;
//            for (int j = 0; j != SIZE; j++) {
//                cout << "| " << board[i][j] << " ";
//            }
//            cout << "|" << endl;
//        }
//        cout << "+---+---+---+---+" << endl;
//    }
//    if (SIZE == 5) {
//        for (int i = 0; i != SIZE; i++) {
//            cout << "+---+---+---+---+---+" << endl;
//            for (int j = 0; j != SIZE; j++) {
//                cout << "| " << board[i][j] << " ";
//            }
//            cout << "|" << endl;
//        }
//        cout << "+---+---+---+---+---+" << endl;
//    }
//
//
//
//    cout << "The Following words are present in the dictionary:\n";
//    findWords(board, t);
//    return 0;
//
//
//
//}