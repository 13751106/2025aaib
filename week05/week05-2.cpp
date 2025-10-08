/// week05-2.cpp
/// 搞懂 stringstream
#include <iostream> /// 為了 cin cout
#include <string> /// 為了字串 string
#include <sstream> ///(新的) string 變 stream 的外掛
using namespace std; /// 為了不寫 std::cin
int main()
{
    string line; ///
    getline( cin, line ); /// 一次讀入一整行
    cout << line << endl;

    stringstream ss(line);
    string word;
    while( ss >> word ){
        cout << "ss讀到第1個字: " << word << endl;
    }
}
