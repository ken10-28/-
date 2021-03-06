#include<bits/stdc++.h>
using namespace std;
#define size 19

int  plant_place[bombX][bombY]
int  open_place[digX][digY]
void print_board();
void open_location();
void put_bomb();
void calculate_area_bomb();
void dig_place(); 
int  left_bomb();
void ask_if_ends();
 

int main(){
	cout<<"踩地雷遊戲";   //title
	do {
		int digX , digY ,z;
		
		system("cls");
		print_board();        //print out the game board
		put_bomb();	      //set bomb on board
		
	}
	
	if(left_bomb()=0){
		ask_if_ends();	      //check if game ends
	}
	else(){
		cout<<"請輸入x座標"<<endl; 
	    cin>>digX;
	    cout<<"請輸入y座標"<<endl;
	    cin>>digY; 
	    cout<<"確定輸入( 15 , 12 )? 0 or 1";   //ask location
	    cin>>z
	    if(z==1)
		dig_place();   
		calculate_area_bomb();
		else
		 break
		
	}	
	put_bomb();           //set bomb
	open_location();      
	
	return 0;
}

void print_board(){
	int x , y,z;
	cout<<endl;
	cout<<"遊戲玩法"<<endl;       //how to play
	cout<<"依照下方想開啟的格子位置輸入座標"<<endl;
	cout<<"ex:5 5   ,   3 2  "<<endl;
	cout<<endl;
	cout<<"   ";
	for (x = 0; x <=size; x++) {	 //print map
	if(x<10) 
	  cout<<"0 ";
	else
	  cout<<"1 ";
	   }
	cout<<endl;
	  for (x = 0; x <= size; x++){     
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
	
void put_bomb(){
	srand( (unsigned)time(NULL) );
	int rand_num;
		rand_num=rand()%100
			bombX=(rand()%10+1);
			bombY=((rand_numder-bombX)%10+1);
	int plant_place[size-1][size-1]=
	{
		{bombX},{bombY}
	}		
	 
void calculate_area_bomb(int cells[][11]){ 
     int i, j, u, v;
     for (i = 1; i <= 9; i++)
         for (j = 1; j <= 9; j++)
             if (cells[i][j] == 0)
                for (u = i - 1; u <= i + 1; u++)
                    for (v = j - 1; v <= j + 1; v++)
                        if (cells[u][v] == -1)
                           cells[i][j]++;
}
}

void dig_place(digX,digY){   
   int x , y ;
    std :: cin >> x >> y;
    system("cls");
    if( x > 10 || y > 10 )
        std :: cout << "Wrong position\n";
    else
        map_info[Pos(x,y)] = true;
    if( map[Pos(x,y)] == 0 ) NoMineAround(Pos(x,y));
    return ;
	
}

int  left_bomb(){  
    short set = 0;
    for(short i = 0 ; i < 100 ; i++){
        if( ( map_info ) ){
            set++;
            if( map == -1 ){
                for(short a = 0 ; a < 100 ; a++){
                    if( map[a] == -1 )
                        map_info[a] = true;
                    }
                ShowMap('*');
                std :: cout << " Game over!\n";
                return false;
                }
            }
    }
    if( set == 90 ){
        for(short a = 0 ; a < 100 ; a++){
            map_info[a] = true;
            }
        ShowMap('M');
        std :: cout << " Congratulations!!\n";
        return false;
        }
    else return true;
}

void ask_if_ends(){char command;
    std :: cout << "Do you want to play again?(y/n)";
    std :: cin >> command;
    if( command == 'y' || command == 'Y' ){
        system("cls");
        return true;
        }
    else if( command == 'n' || command == 'N' )return false;
    else std :: cout << "Wrong command";
}
