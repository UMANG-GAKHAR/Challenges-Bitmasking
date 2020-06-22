#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.get();
     char s1[100],s2[100];
    while(t>0){
        
       
        
		cin >> s1;
		cin >> s2;
        int i=0;
        
        while(s1[i] !='\0'){
                
           if(s1[i] == s2[i])
               cout<<"0";
        else
               cout<<"1";
           
           i++;
        }
        t--;
        cout<<endl;
        
    }
}
