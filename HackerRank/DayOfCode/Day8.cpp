#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    cin.ignore();
    
    map<string, string> phonebook;
    
    for(int i = 0; i < n ;i++)
    {
        string nom, numero;
        cin>>nom>>numero;
        //cree une paire pour pouvoir inserer dans map
        phonebook.insert({nom,numero});
    }
    
    string key;
    while(cin >> key){
        
        auto it = phonebook.find(key);
        
        if(phonebook.find(key) == phonebook.end())
        {
            cout << "Not found" << endl;
        }else{
            cout << it->first << "=" << it->second << endl;
        }
    }
    
    return 0;
}
