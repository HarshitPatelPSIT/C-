#include<bits/stdc++.h>
using namespace std;

string RemoveallA(string &str, int idx, int n) {
    if (idx == n) {
        return "";
    }
    string str1 = "";
    str1 += str[idx];
    return ((str[idx] == 'a') ? "" : str1) + RemoveallA(str, idx + 1, n);
}

int main() {
    int n;
    cout << "Enter the size of string: ";
    cin >> n;
    cin.ignore(); // To ignore the newline character after the integer input
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << RemoveallA(str, 0, str.length());
    return 0;
}