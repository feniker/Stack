#include <iostream>
#include <fstream>
#include "isBalanced.h"

using namespace std;

int main()
{
	ofstream out("Output.txt");
	ifstream in("Input.txt");
	string data;
	in >> data;
	BraceChecker chek;
	if (chek.isBalanced(data)) out << "Balanced"; else out << "Not Balanced";
	in.close();
	out.close();
}