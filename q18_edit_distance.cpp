#include<iostream>
#include<string>
#include<climits>
using namespace std;
int edit_distance(string s,string t){
    if(s==t)
      return 0;
    if(s[0]==t[0])
      return edit_distance(s.substr(1),t.substr(1));
    else{
        
    }
}