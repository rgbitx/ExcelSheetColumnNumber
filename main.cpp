#include <iostream>
#include <math.h>

using namespace std;


int transform(string s){

    int ret=0;

    for(int i=s.size()-1;i>=0;i--){

        if(s[i] >='A' && s[i]<='Z'){
            ret+=(s[i]-'A'+1)*pow(26,s.size()-i-1);
        }

    }

    return ret;

}

int titleToNumber(string s) {
    int number = 0;
    int temp = 0;
    for(int i = 0; i<s.length();++i)
    {
        temp = s[i] - 'A' + 1;
        number = number * 26 + temp;
    }
    return number;

}



int main() {
    cout << "Hello, World!" << endl;


    string s="AB";

    for(int i=0;i<s.size();i++){
        cout<<"s["<<i<<"]"<<s[i]<<endl;
    }

    int ret=transform(s);

    cout<<"Results:"<<endl;
    cout<<ret<<endl;

    int ret1=titleToNumber(s);

    cout<<"Results2:"<<endl;
    cout<<ret1<<endl;




    return 0;
}