#include <iostream>
#include <cassert>
#include <string>
#include <cstring>
using namespace std;

struct tree
{
    char data = '\0';
    tree* left = nullptr;
    tree* right = nullptr;
};

string getExpression()
{
    start:
    string postfix;
    cout << "Please enter a postfix Expression > ";
    cin >> postfix;
    for (int i = 0; i < postfix.size(); i++)
    {
        if ((isdigit(postfix[i]) == false)&&(postfix[i] != '/')&&(postfix[i] != '*')&&(postfix[i] != '+')
           &&(postfix[i] != '-')&&(postfix[i] != '^')&&(postfix[i] != '(')&&(postfix[i] != ')')&&(postfix[i] != '='))
        {
            goto start;
        }
    }
    return postfix;
}

int main()
{
    tree* root = new tree;
    tree* leaf = root;
    string postfix = getExpression();
    cout << postfix << endl;
    return 0;
}
