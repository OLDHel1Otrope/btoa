//shitty spiral code that dosent work
#include<iostream>
using namespace std;
int main(){
    int cellValue=1;
    float p=0;
    int d=1;
    int x=2;
    int y=2;
    cout<<x<<"\t"<<y<<endl;
    for(int armLength=1;armLength<=5; armLength+=2){
        for(int b=0;b<armLength;b++){
            if(d>0){
                y++;
                cout<<x<<"\t"<<y<<endl;
            }
            if(d<0){
                y--;
                cout<<x<<"\t"<<y<<endl;
            }
        for(int a=0;a<armLength;a++){
            if(d>0){
                x++;
                cout<<x<<"\t"<<y<<endl;
            }
            if(d<0){
                x--;
                cout<<x<<"\t"<<y<<endl;
            }
        }
        d*=-1;
        }

    }
}
