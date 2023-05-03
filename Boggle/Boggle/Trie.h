#pragma once
#ifndef Trie_hpp
#define Trie_hpp
#include <iostream>
#include<vector>
using namespace std;



#define SIZE 4









class Trie {









private:





    class trieP
    {
    public:
        // end signifies the end of a word
        bool end;
        int count;
        // an array of pointers that point to the children of each node if found
        // (0-25) because there are 26 letters in the alphabet
        trieP* child[26];





        trieP()
            : count(0), end(false) {
            for (int i = 0; i < 26; i++) {
                child[i] = NULL;
            }
        }
    };



    trieP* root;



public:
    Trie();//class constructor
    void insert(string word);
    bool search(string w);
    void deleteword(string word);
    bool isEmpty();
    void inPrint(trieP* parent, char* out, int index);
    void  display(ostream& out);
    /*bool prefixSearch(string prefix);*/







};


ostream& operator<< (ostream& out, const Trie& t);
vector<string> findWords(char boggle[SIZE][SIZE], Trie& t);
void findWordsUtil(char boggle[SIZE][SIZE], bool visited[SIZE][SIZE], int i, int j, string& str, Trie& t, vector<string>& wordsfound);
void randMat(char boggle[SIZE][SIZE]);
void randMat2(char boggle[SIZE][SIZE]);
int pointsutil(string word);
string totalPoints(vector<string>& words);





#endif /*Trie_hpp*/
