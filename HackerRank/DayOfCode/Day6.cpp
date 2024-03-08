#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    cin.ignore();
    while(T>0)
    {
        string s;
        getline(cin, s);
        string se;
        string so;
        for(int i = 0; i < s.length(); i++)
        {
            if(i%2==0){
                se += s[i];
            }else{
                so += s[i];
            }
        }
        cout << se << " " << so << endl;
        T--;
    }
    
    return 0;
}
