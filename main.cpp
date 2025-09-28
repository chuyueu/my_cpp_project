#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg {"Hello", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg) {
        cout << word << " "; // 在这一行打上断点
    }
    cout << endl;

    int a = 10;
    int b = 20;
    int sum = a + b; // 在这一行也打上断点
    cout << "The sum is: " << sum << endl;

    return 0;
}