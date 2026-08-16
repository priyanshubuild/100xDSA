#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    int vowels=0;

    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='e')
      {
        s[i]='x';
      }
    }
    replace(s.begin(),s.end(),'e','t');
    
cout<<"modified string is:"<<s;
}

