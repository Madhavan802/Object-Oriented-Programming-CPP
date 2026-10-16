#include<bits\stdc++.h>
#include<fstream>
using namespace std;
int main(){
    ofstream file("sample.txt");
    file<<"This is sample"<<endl;
    file.close();
    string text;
    ifstream file1("sample.txt");
    while(getline(file1,text))
    {
    cout<<text<<endl;
    }
    return 0;
}