#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(string s,string str,vector<string>& v,bool flag){
    if(str==""){
        v.push_back(s);
        return;
    }
    char ch=str[0];
    if(str.length()==1){
      if(flag==true)  subset(s+ch,str.substr(1),v,true);
      subset(s,str.substr(1),v,true);
      return;
    }
    char dh=str[1];
    if(ch==dh){//dupicate
        if(flag==true) subset(s+ch,str.substr(1),v,true);
        subset(s,str.substr(1),v,false);
    }
    else{//no duplicate
        if(flag==true)  subset(s+ch,str.substr(1),v,true);
        subset(s,str.substr(1),v,true); 
    }

}
int main(){
    string str="aab";
    vector<string> v;
    subset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    
}