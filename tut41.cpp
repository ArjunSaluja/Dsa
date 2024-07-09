// string test  sabsa jad konsi string ayi ha input ma usko output ma lana ha 
#include<iostream>
using namespace std;
char getmaxoccur(string s){
    int arr[26]={0};

    for(int i=0; i<s.length();i++){

        char ch= s[i];
        int number=0;
        if(ch>='a'&&ch<='z'){
            number= ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }

    int maxi=-1, ans=0;
    for(int i=0; i<26;i++){
        if(maxi< arr[i]){
            ans=i;
            maxi=arr[i];
                    }
    }
    char finalans='a'+ans;
    return finalans;
}


int main(){

    string s;
     cin>> s;
     cout<< getmaxoccur(s)<<endl;
     return 0;
}
//0(n)
//0(1)

//cin will stop if  the have space and tab and new line
//My name is khan 

// length
// int len = strlen(name);

// compaare(s1, s2)
//strtemp (s1, s2)
//       !=0- not equal to 0;

// copy

// strcopy(dest, src)