#include<iostream>
using namespace std;
int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){//flip,k/2
        int preAns=kthGrammar(n-1,k/2);
        if(preAns==0) return 1;
        else return 0;
        }
        else{//same ans,k/2+1
            int preAns=kthGrammar(n-1,k/2+1);
            return preAns;
        }
}
int main(){
    cout<<kthGrammar(4,7);
}