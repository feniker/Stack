#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

int main()
{
	ofstream out("Output.txt");
	ifstream in("Input.txt");
	stack <int> ar;
	string data;
	in >> data;
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] != '(' && data[i] != '{' && data[i] != '[' && data[i] != ']' && data[i] != '}' && data[i] != ')') continue;
		if (data[i] == '(') ar.push(data[i]);
		if (data[i] == '[') ar.push(data[i]);
		if (data[i] == '{') ar.push(data[i]);
		if (data[i] == ')')
		{
			if (!ar.empty())
			{
				if (ar.top() == '(') ar.pop();
			}
			else
			{
				out << "Not balanced";
				cout << "Not balanced";
				out.close();
				in.close();
				return 0;
			}
		}
		if (data[i] == ']')
		{
			if (!ar.empty())
			{
				if (ar.top() == '[') ar.pop();
			}
			else
			{
				out << "Not balanced";
				cout << "Not balanced";
				out.close();
				in.close();
				return 0;
			}
		}
		if (data[i] == '}')
		{
			if (!ar.empty())
			{
				if (ar.top() == '{') ar.pop();
			}
			else
			{
				out << "Not balanced";
				cout << "Not balanced";
				out.close();
				in.close();
				return 0;
			}
		}
	}
	if (ar.empty())
	{
		out << "Balanced";
		cout << "Balanced";
	}
	else
	{
		out << "Not balanced";
		cout << "Not balanced";
	}
	in.close();
	out.close();
}