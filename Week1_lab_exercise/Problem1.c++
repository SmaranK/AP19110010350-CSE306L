#include <bits/stdc++.h>
using  namespace std;

int main()
{
    int state=0;
    int i,j;
    char string[50]="aabb";
    
    for(i=0;i<4;i++){
        
        if (state==0){
           
            
            if (string[i]=='a'){
                state=1;
                
            }
            else if (string[i]=='b'){
                state=2;
            }
            else{
                
                cout<<"invalid entry";
                break;
            }
            
            
        }
        
        else if (state==1){
            if (string[i]=='a'){
                state=0;
            }
            else if (string[i]=='b'){
                state=3;
            }
            else{
                cout<<string[i];
                cout<<"invalid entry";
                break;
            }
            
        }
        
        else if (state==2){
            if (string[i]=='a'){
                state=3;
            }
            else if (string[i]=='b'){
                state=0;
            }
            else{
                cout<<"%c",string[i];
                cout<<"invalid entry";
                break;
            }
           
        }
        
        else if (state==3){
            if (string[i]=='a'){
                state=2;
            }
            else if (string[i]=='b'){
                state=1;
            }
            else{
                cout<<"invalid entry";
                break;
            }
        }
        
        
        
            
    }
    if (state==0){
            cout<<"accepted";
    }
    else{
            cout<<"%d",state;
            cout<<"not accepted";
    }
}