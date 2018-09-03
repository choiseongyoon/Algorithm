#include<iostream>
using namespace std;
int main(){
   string input;
    for(int i=0;i<100;++i){
   getline(cin,input);
    if(input=="")break;
   cout<<input<<endl;
}   
}
