#include<iostream>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int arr[]={5,3,10};
    int n=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float Kmin=(float)(INT_MIN);
    float Kmax=(float)(INT_MAX);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            Kmin= max(Kmin,(arr[i]+arr[i+1])/2);
        }
        else{
            Kmax= min(Kmax,(arr[i]+arr[i+1])/2);
        }
        if(Kmin>Kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(Kmin==Kmax){
        if(Kmin-(int)Kmin==0){//Kmin and Kmax are integers
            cout<<"There is only one value of K :"<<Kmin;

        }
    }
    else{
        if(Kmin-(int)Kmin>0){
            Kmin=(int)Kmin+1;
        }
        cout<<"Range of K is : ["<<Kmin<<","<<(int)Kmax<<"]";
    }
}