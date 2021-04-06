#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 19

int main(){
	int x , y,z;
	cout<<"踩地雷遊戲"<<endl; 
	cout<<endl;
	cout<<"遊戲玩法"<<endl;       //how to play
	cout<<"依照下方想開啟的格子位置輸入座標"<<endl;
	cout<<"ex:5 5   ,   3 2  "<<endl;
	cout<<endl;
	cout<<"   ";
	for (x = 0; x <=size; x++) {
	
	if(x<10) 
	  cout<<"0 ";
	else
	  cout<<"1 ";
	  }
	cout<<endl;
	
	  for (x = 0; x <= size; x++){      //print map
		if(x==0)
         cout<<"    ";
        else
		 cout<<" "<<x%10;
         
	}
		  cout<<endl;
     for (x = 1; x <= size; x++) {
     	if(x<10)
         for (y = 0; y <= size; y++) {
             if (y == 0)
               cout<<"   "<<x; 
             else
                 cout<<"口";
         }
        else
         for (y = 0; y <= size; y++) {
             if (y == 0)
               cout<<"  "<<x; 
             else
                 cout<<"口";
         }
         cout<<endl;
	 
	}
	cout<<"請輸入x座標"<<endl; 
	cin>>x;
	cout<<"請輸入y座標"<<endl;
	cin>>y; 
	cout<<"確定輸入( 15 , 12 )? 0 or 1";
	cin>>z;
	cout<<endl;
}
