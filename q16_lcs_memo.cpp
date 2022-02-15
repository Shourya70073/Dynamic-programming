#include<iostream>
#include<string>
using namespace std;
int lcs(string s,string t,int b[20][20]){
    if(s.size()==0 || t.size()==0){
        return 0;
    }
    if(s[0]==t[0]){
        if(b[s.size()-1][t.size()-1]==-1)
            b[s.size()-1][t.size()-1]=lcs(s.substr(1),t.substr(1),b);
         b[s.size()][t.size()]=1+b[s.size()-1][t.size()-1];
         return b[s.size()][t.size()];
    }
       

    else{
        if(b[s.size()][t.size()-1]==-1)
            b[s.size()][t.size()-1]=lcs(s,t.substr(1),b);
        int y=b[s.size()][t.size()-1];
         if(b[s.size()-1][t.size()]==-1)
            b[s.size()-1][t.size()]=lcs(s.substr(1),t,b);
        int z=b[s.size()-1][t.size()];
        b[s.size()][t.size()]=max(y,z);
        return b[s.size()][t.size()];
    }
}
int main(){
    string a="qwerty";
    string b="qwroii";
    int l[20][20];
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=b.size();j++){
            l[i][j]=-1;
        }
    }
   cout<<lcs(a,b,l);
    return 0;
}