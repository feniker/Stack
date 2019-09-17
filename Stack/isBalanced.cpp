#include "isBalanced.h"
#include "stack"

BraceChecker::BraceChecker() {
}
bool BraceChecker::isBalanced(const string& data) {
	stack <int> ar;
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] != '(' && data[i] != '{' && data[i] != '[' && data[i] != ']' && data[i] != '}' && data[i] != ')') continue;
		if (data[i] == '(') ar.push(data[i]);
		if (data[i] == '[') ar.push(data[i]);
		if (data[i] == '{') ar.push(data[i]);
		if (data[i] == ')') if (!ar.empty()) if (ar.top() == '(') ar.pop(); else return false; else return false;
		if (data[i] == ']') if (!ar.empty()) if (ar.top() == '[') ar.pop(); else return false; else return false;
		if (data[i] == '}') if (!ar.empty()) if (ar.top() == '{') ar.pop(); else return false; else return false;
	}
	if (ar.empty()) return true; else return false;

}