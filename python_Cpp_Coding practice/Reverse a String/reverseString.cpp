// Reverse only alphabetic characters while keeping special characters at their original positions.

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// string reverseString(string s){
//     if(s.empty()){
//         return "";
//     }

//     int left=0;
//     int right=s.size()-1;

//     while(left<right){
//         if(!isalpha(s[left])){
//             left++;
//         }
//         else if(!isalpha(s[right])){
//             right--;
//         }
//         else{
//             swap(s[left],s[right]);
//             left++;
//             right--;
//         }
//     }

//     return s;
// }

// int main(){
//     string s;
//     getline(cin,s);
//     string r=reverseString(s);
//     cout<<r;

// }


// Reverse only alphabetic characters while keeping special characters at their original positions.

#include<iostream>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

char* reverseString(char* s){
    if(s==NULL){
        return NULL;
    }

    int left=0;
    int right=strlen(s)-1;

    while(left<right){
        if(!isalpha(s[left])){
            left++;
        }
        else if(!isalpha(s[right])){
            right--;
        }
        else{
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }

    return s;
}

int main(){
    string s;
    getline(cin,s);

    char* str =new char[s.size()+1];
    strcpy(str,s.c_str());
    char* result=reverseString(str);
    cout<<endl<<result;
    delete[] str;

}