#include<iostream>
using namespace std;
int main(){
    int a;
    float x;
    cout<<"Enter a Cgpa:"<<endl;
    cin>>x;
    if (x>=3.95){
        a=1;
    }
    else if (x>=3.80&&x<3.95){
        a=2;
    }
    else if (x>3.70&&x<3.80){
        
    }
    switch (a){
        case 1:
            cout<<" You Get gold"<<endl;
            break;
        case 2:
            cout<<"You Get silver"<<endl;
            break;
        case 3:
            cout<<"You Get Bronze"<<endl;
            break;
        default:
            cout<<"You Get Nothing"<<endl;
            break;
    }
    return 0;
    }
