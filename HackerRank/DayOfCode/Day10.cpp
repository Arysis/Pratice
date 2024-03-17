#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void intToBinary(int num) {
    std::bitset<32> binary(num);  // Using std::bitset to simplify the conversion
    std::string binaryString = binary.to_string();

    size_t count = 0;
    size_t maxCount = 0;

    for (char bit : binaryString) {
        if (bit == '1') {
            count++;
            maxCount = max(maxCount, count);
        } else {
            // If '0' is encountered, reset the counter
            count = 0;
        }
    }

    std::cout << maxCount;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    intToBinary(n);
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
