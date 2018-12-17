#include<iostream>
using namespace std;

int main(){
int x,y;

cout<<"PROGRAM MENGETAHUI KUADRAT DARI INPUTAN X DAN Y"<<endl;

cout<<"Masukan X : ";
cin>>x;
cout<<"Masukan Y : ";
cin>>y;

if(x>0&&y>0)
    cout<<"KUADRAT I"<<endl;
if(x>0&&y<0)
    cout<<"KUADRAT II"<<endl;
if(x<0&&y<0)
    cout<<"KUADRAT III"<<endl;
if(x<0&&y>0)
    cout<<"KUADRAT IV"<<endl;
if(x==0&&y==0)
    cout<<"TITIK PUSAT"<<endl;
return 0;

}
