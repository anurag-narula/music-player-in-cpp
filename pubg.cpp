#include<iostream>
#include<windows.h>
#include<mmsystem.h>
using namespace std;
int main()
{
int a;
cout<<"\tWELCOME TO PUBG"<<endl;
cout <<"\tenter no from 1 to 4"<<endl;
while(true)
{
cout<<"enter the no.."<<endl;
cin>>a;
if  (a==1)
{
    cout<<"Enimies Ahead"<<endl;
    PlaySound(TEXT("C:\\Users\\ANURAG\\Downloads\\pubg\\enimies.wav"),NULL,SND_SYNC);
    cout<<"**********************\n";
}
else
    if (a==2)
{
    cout<<"Let's Go"<<endl;
      PlaySound(TEXT("C:\\Users\\ANURAG\\Downloads\\pubg\\lets go.wav"),NULL,SND_SYNC);
cout<<"**********************\n";
}
else
    if (a==3)
{
    cout<<"Get to the Safezone"<<endl;
    PlaySound(TEXT("C:\\Users\\ANURAG\\Downloads\\pubg\\safezone.wav"),NULL,SND_SYNC);
cout<<"**********************\n";
}
else
    if (a==4)
{
    cout<<"I got Supplies"<<endl;
    PlaySound(TEXT("C:\\Users\\ANURAG\\Downloads\\pubg\\supplies.wav"),NULL,SND_SYNC);
cout<<"**********************\n";
}
else
{
    cout<<"wrong number entered"<<endl;
    cout<<"**********************\n";
}
}
return 0;
}
