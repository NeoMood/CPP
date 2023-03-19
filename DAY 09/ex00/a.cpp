#include <iostream>
#include <fstream>
#include <sstream>

bool toInt(std::string number, int& result) {
    std::stringstream ss(number);
    return ss >> result && ss.eof();
}

int main()
{
    std::string s = "20-";
    int result;
    std::cout << toInt(s, result) << "this is resu " << result << std::endl;

}