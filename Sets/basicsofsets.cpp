#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(2);
    s.erase(2);
    //for each loop
    int target=10;
    if(s.find(target)!=s.end()){// target exists
        cout<<"exists"<<endl;
    }
    else{
        cout<<"doesn't exists"<<endl;
    }
    for(int ele : s){
        cout<<ele<<" ";
    }
}