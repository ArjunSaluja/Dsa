#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return 
        ;

}
cout<<n<<endl;
//recursive relation or agar cout<<n ko print n-1 ka baad likaga to count 1 2 3 4 5
print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);

    return 0;
}