#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    string input;
    int sum = 0;
    cin >> num;
    cin >> input;
    for (int i = 0; i < num; i++) {
        string a = input.substr(i, 1); 
        sum = sum + stoi(a);           
    }

    cout << sum;
}