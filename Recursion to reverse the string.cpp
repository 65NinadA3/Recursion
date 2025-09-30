//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
void reversePrint(string s, int i) {
    if (i < 0) return;        
    cout << s[i];            
    reversePrint(s, i - 1);   
}
int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Reversed String = ";
    reversePrint(s, s.length() - 1);

    return 0;
}
