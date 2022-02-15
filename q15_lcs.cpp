#include<iostream>
#include<string>
using namespace std;
int lcs(string s,string t){
    if(s.size()==0 || t.size()==0){
        return 0;
    }
    if(s[0]==t[0])
       return(1+lcs(s.substr(1),t.substr(1)));
    else{
        int x=lcs(s.substr(1),t.substr(1));
        int y=lcs(s,t.substr(1));
        int z=lcs(s.substr(1),t);
        return max(x,max(y,z));
    }
}
int main(){
    cout<<lcs("qwertyuioplkjfjfmmf","qwroiipmomomoomomom");
    return 0;
}