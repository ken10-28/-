#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 19

int main(){
	int x , y,z;
	cout<<"��a�p�C��"<<endl; 
	cout<<endl;
	cout<<"�C�����k"<<endl;       //how to play
	cout<<"�̷ӤU��Q�}�Ҫ���l��m��J�y��"<<endl;
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
                 cout<<"�f";
         }
        else
         for (y = 0; y <= size; y++) {
             if (y == 0)
               cout<<"  "<<x; 
             else
                 cout<<"�f";
         }
         cout<<endl;
	 
	}
	cout<<"�п�Jx�y��"<<endl; 
	cin>>x;
	cout<<"�п�Jy�y��"<<endl;
	cin>>y; 
	cout<<"�T�w��J( 15 , 12 )? 0 or 1";
	cin>>z;
	cout<<endl;
}
