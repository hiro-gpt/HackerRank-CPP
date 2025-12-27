#include <iostream>
using namespace std;
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> numWords={"one", "two", "three", "four", "five", "six", "sevem", "eight", "nine"}
    if (n>=1 && n<=9) {
        cout << words[n-1];
    }
    else {
        cout << "Greater than 9";
    }
}
