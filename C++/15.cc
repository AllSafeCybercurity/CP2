#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    
    string str2;
    //input string 1
    cin>>str1;
    //input string 2
    cin>>str2;

    str1.swap(str2); //swap contents of str1 and str2
    cout<<str1<<"\n";
    cout<<str2;
return 0;

}