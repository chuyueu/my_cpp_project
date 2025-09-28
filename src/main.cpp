#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg {"Hello", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg) {
        std::cout << word << " "; // 在这一行打上断点
    }
    std::cout << endl; // 确保在使用 std::cout 时也添加 endl

    int a = 10;
    int b = 20;
    int sum = a + b; // 在这一行也打上断点
    std::cout << "The sum is: " << sum << endl; // 确保在使用 std::cout 时也添加 endl

    return 0;
}