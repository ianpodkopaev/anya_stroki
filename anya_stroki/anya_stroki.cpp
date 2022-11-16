#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    string str, wrd, tmp;
    cout << "String: ";
    getline(std::cin, str);
    cout << "Word: ";
    cin >> wrd;

    istringstream ss(str);
    size_t cnt = 0;
    while (ss >> tmp)
        if (tmp == wrd)
            ++cnt;
    std::cout << "meet " << cnt << " times." <<endl;

    return 0;
}