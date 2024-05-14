 #include<iostream>
  using namespace std;
  int main(){
//     int n;
//     cin>>n;
//   //cout<<"print count from 1 to n"<<endl;
//     for (int i = 0;  i <=n; i++)
//     {
//      //   cout<<i<<endl;
//     }


  //  int n=10;
  //  int a=0;
  //  int  b=1;

  //  for (int i = 0; i <=n; i++)     //fabinacci series'
  //  {
  //   int nextno=a+b;
  //   cout<<nextno<<" ";
  //   a=b;
  //   b=nextno;

  //  }


  int n;
  cout<<"enter the no."<<endl;
  cin>>n;
  bool isPrime =1;
  for (int i = 2; i < n; i++)
  {
    
    if ( n%i==0
    )
    {
      cout<<"not a prime no."<<endl;
      isPrime =0;
      break;
    }
    
    
  }
  if (isPrime==0)
  {
    cout<<"Not a prime number"<<endl;
  }
  else{
    cout<<"is a prime no. "<<endl;
  }
  
  }
  
  


   
  