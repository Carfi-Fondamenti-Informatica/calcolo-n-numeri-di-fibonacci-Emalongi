#include <iostream> // 1,1,2,3,5,8,13 a+b=c a=b b=c
using namespace std;

int main(){
    int n=0,i=0, a=i,b=1, c=0;
            cin>>n;

   if(n>=2){
       cout<<"1"<<endl;
       for(int i=1;i<=n-1;i++){
           c= a+b;
           a=b, b=c;
           cout<< c << endl;
       }
   }else{
       cout<<"errore";
   }

  return 0;
}
