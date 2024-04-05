#include<iostream> 
#include"my library.h"
#include<string>
# define max 100
void veKhung(int x,int y, int w, int h,int ngang,int doc,int mau);
void chuGameSnake();
void play();
void taoRan(int x, int y,int sl);
void veRan(int sl);int xran[max];
void case1(int speed);
void xuLyRanDiChuyen(int x, int y);
int yran[max];int sl=4;int xqua;int yqua;int x=50;int y=12;
bool ktRanDeQua();void taoQua ();void veQua();
bool ktRanAnQua();
bool ktGameOver () ;
void veThanhSangMenu();
int lc1;int lc2;char t;
using namespace std;

int main ()
{
	ShowCur(false);
	play();
    _getch();
}
void chuGameSnake()
{
	setcolor(10);
	for(int i=8;i<14;i++)
{
	gotoXY(i,3);cout << char(169);
	gotoXY(i,7);cout << char(169);i++;
}
for(int i=3;i<8;i++)
{
	gotoXY(23,i);cout << char(169);
	gotoXY(76,i);cout << char(169);
	gotoXY(66,i);cout << char(169);
	gotoXY(29,i);cout << char(169);
	gotoXY(83,i);cout << char(169);
}
   for(int i=4;i<7;i++)
   {
   	gotoXY(8,i);cout << char(169);
   }
   gotoXY(13,5);cout << char(169);
   gotoXY(13,6);cout << char(169);
   gotoXY(12,5);cout << char(169);
   gotoXY(19,4);cout << char(169);
   gotoXY(20,5);cout << char(169);
   gotoXY(21,6);cout << char(169);
   gotoXY(22,7);cout << char(169);
   gotoXY(25,4);cout << char(169);
   gotoXY(27,4);cout << char(169);
   gotoXY(61,4);cout << char(169);
   gotoXY(63,5);cout << char(169);
   gotoXY(64,6);cout << char(169);
   gotoXY(71,5);cout << char(169);
   gotoXY(77,5);cout << char(169);
   gotoXY(79,4);cout << char(169);
   gotoXY(81,3);cout << char(169);
   gotoXY(81,7);cout << char(169);
   gotoXY(79,6);cout << char(169);
   gotoXY(26,5);cout << char(169);
   for(int i=83;i<90;i++)
   {
   	gotoXY(i,3);cout << char(169);
    gotoXY(i,7);cout << char(169);
    gotoXY(i,5);cout << char(169);i++;
   }
   for(int i=3;i<8;i++)
   {
   	gotoXY(31,i);cout << char(169);
   	gotoXY(59,i);cout << char(169);
   
   }
 
   	
   for(int i=33;i<=38;i++)
   {
   	gotoXY(i,3);cout << char(169);
   	gotoXY(i,5);cout << char(169);
   	gotoXY(i,7);cout << char(169);
   	gotoXY(49,4);cout << char(169);
   	gotoXY(57,6);cout << char(169);
   	i++;
   }
   for(int i=51;i<57;i++)
    {
    	gotoXY(i,5);cout << char(169); 
    	i++;
	}
    for(int i=50;i<58;i++)
    {
    	gotoXY(i,3);cout << char(169); 
    	i++;
	}
	for(int i=49;i<57;i++)
    {
    	gotoXY(i,7);cout << char(169); 
    	i++;
	}
    
    for(int i=18;i<19;i++)
    {
    	gotoXY(i,5);cout << char(169); i++;
	}
 int e[5]={71,72,73,74,75};
   int c[5]={71,70,69,68,67};
   int d[5]={3,4,5,6,7};
   int a[5]={14,15,16,17,18};
   int b[5]={7,6,5,4,3};
   for(int i=0;i<6;i++)
   {
   		gotoXY(c[i],d[i]);cout << char(169); 
   }
   for(int i=0;i<6;i++)
   {
   		gotoXY(e[i],d[i]);cout << char(169); 
   }
   for(int i=0;i<5;i++)
   {
   	gotoXY(a[i],b[i]);cout << char(169);  	
   }
  
  
	 } 
   
   
   
	
	
	
	

void veKhung(int x,int y, int w, int h,int ngang,int doc,int mau)
{
	setcolor(mau);
	for(int i=y;i<y+h;i++)
	{
		gotoXY(x,i);
		cout <<char(doc);
		gotoXY(x+w,i);
		cout <<char(doc);
	}
	for(int i=x+2;i<=x+w-2;i++)
	{
		gotoXY(i,y);
		cout <<char(ngang)<<" ";
		gotoXY(i,y+h-1);
		cout <<char(ngang)<<" ";
		i++;
	}
	
}
void play()	
{
	int lc;
	
	veKhung(4,1,110,27,164,164,12);
	chuGameSnake();
	gotoXY(45,12);cout << " ~~~~~~~~~~ MENU ~~~~~~~~~~";
    gotoXY(47,14);cout << " 1 . SETTING AND PLAY ";
    gotoXY(47,15);cout << " 2 . ABOUT ";
    
    
    
    
    	char c =getch();
    	
         if(c==49)
		{
			system("cls");
			ShowCur(false);
			veKhung(4,1,110,27,164,164,14);
    		veKhung(35,7,50,15,43,43,14);
    	setcolor(13);
    		gotoXY(40,8);cout<< "===== DAU RAN =====";setcolor(10);
    		gotoXY(40,9);cout<< "1. DAU RAN BINH THUONG ";
    		gotoXY(40,10);cout<< "2. DAU RAN BANG CHU CAI DAU TIEN CUA TEN BAN ";
    	
    		gotoXY(40,11);cout<< " -LUA CHON CUA BAN : "; cin >> lc1;
    		if( lc1==2)
    		{
    		 	gotoXY(40,12);cout<<"-MOI BAN NHAP CHU CAI DAU TIEN CUA TEN BAN "; cin >> t;
			}setcolor(13);
    		gotoXY(40,13);cout<< "===== MAU RAN ===== ";setcolor(10);
    		gotoXY(40,14);cout<< "10. MAU XANH";
    		gotoXY(40,15);cout<< "12. MAU DO ";
    		gotoXY(40,16);cout<< " -LUA CHON CUA BAN : "; cin >> lc2;setcolor(13);
    		gotoXY(40,17);cout<< "=== NHAN ENTER DE BAT DAU === ";
    		char phim=getch();
    		if (phim==13)
    		{
    		
            system("cls");
    		
    				chuGameSnake();
    				veKhung(4,1,110,27,164,164,12);
    				veKhung(45,10,30,10,43,43,12);setcolor(10);
    				gotoXY(53,12);cout<< "    LEVELS ";
    				gotoXY(53,14);cout<< "  1. LEVEL 1 ";
    				gotoXY(53,15);cout<< "  2. LEVEL 2 ";
    				gotoXY(53,16);cout<< "  3. LEVEL 3 ";
    					char a=getch();
    				veThanhSangMenu();
    					if(a==49)
    					{
    		
    						system("cls");
    						case1(200);
						}
						else if(a==50)
						{
						
							system("cls");
							case1(100);
						}
						else if(a==51)
						{
		
							system("cls");
							case1(50);
						}
						getch();
        }
			}
		if(c==50)
		{
			
			}	
    		
    		
    		
    		
    	
			
			    	getch();
		
   	
	
	}

void taoRan(int x, int y,int sl)
{
	for (int i=0;i<sl;i++)
	{
		xran[i]=x;
		yran[i]=y;
		x--;
	}
}
void veRan(int sl)
{
	if (lc1==1)
	{
		setcolor(lc2);
		for (int i=0;i<sl;i++)
	   {
		gotoXY(xran[i],yran[i]);
		if(i==0) cout << "O";
		else cout << "o";
		}
		
	}
	else if(lc1==2)
	{
		
		setcolor(lc2);
	     for (int i=0;i<sl;i++)
	    {
		gotoXY(xran[i],yran[i]);
		if(i==0) cout << t;
		else cout << "o";
		
	   }
}
	
}
void case1(int speed)
{
	srand(time(NULL));
	ShowCur(false);
	int diem=0;int x_o_sang=2;
    veKhung(1,1,90,23,164,164,10);
    veKhung(95,1,20,10,164,164,10);
    veKhung(1,25,112,3,111,111,10);setcolor(12);
    gotoXY(55,0);cout << "LEVEL 1 ";
    gotoXY(1,24);cout << "min ";gotoXY(105,6);cout << diem;
    gotoXY(110,24);cout << "max ";
    gotoXY(98,2);cout << " MAX SCORE:1100";
	gotoXY(102,3);cout << " SCORE ";
    taoRan(x,  y, sl);
    taoQua ();veQua();veRan(  sl);
    int check=2;
     while(true)
    {
    	gotoXY(xran[sl],yran[sl]);cout << " ";
    	veRan(  sl);
    	if(_kbhit()==true)
    	{
    		char c=_getch();
    		if(c==-32)
    		{
    			c=_getch();
    			if(c==80&&check!=1) check=0;
    			else if (c==72&&check!=0) check=1;
    			else if (c==77&&check!=3) check=2;
    			else if(c==75&&check!=2)check=3;
    		}		
		}
		if (check==0)y++;
    		else if(check==1)y--;
    		else if(check==2)x++;
    		else if(check==3)x--;
		xuLyRanDiChuyen(x,  y);
		if (ktRanAnQua()==true)
		{	
			sl++;
			diem+=10;gotoXY(105,6);cout << diem;
			textcolor(65);
			gotoXY(x_o_sang,26);cout <<" ";
			x_o_sang++;textcolor(0 );
			if(diem==1100)
			{
			setcolor(13);
				gotoXY(30,12);cout << " CHUC MUNG BAN DAT DIEM CAO NHAT CUA LEVEL 1"; 
				 Sleep(4000);
				break;
			}
			taoQua ();veQua();
				
		}
		textcolor(0);
    	if(ktGameOver ()==true)
    	{
    		setcolor(13);
    			gotoXY(50,12);cout << "GAME OVER"; 
    			gotoXY(50,13);cout << "SCORE : "<< diem;
				Sleep(1000);
    		break;
    		
    	}
    	Sleep(speed);
	}
}
    
void xuLyRanDiChuyen(int x, int y)
{
	for(int i=sl;i>0;i--)
	{
		xran[i]=xran[i-1];
		yran[i]=yran[i-1];
	}
	xran[0]=x;
	yran[0]=y;
}
bool ktRanDeQua()
{
	for (int i=0;i<sl;i++)
	{
		if (xran[i]==xqua && yran[i]==yqua) 
		{
			return true;
		}
	} return false;
}
void taoQua ()
{
	do
	{
	    xqua=rand() % (90-2+1)+2;
	    yqua=rand() % (22-2+1)+2;
	    
	}while(ktRanDeQua()==true);
}
void veQua()
{
	setcolor(13);
	gotoXY(xqua,yqua);cout << char(169);
}
bool ktRanAnQua()
{
	if (xran[1]==xqua && yran[1]==yqua) 
	{
		return true;
	}
	return false;
}
bool ktGameOver () 
{
	for(int i=2;i<sl;i++)
	{
		if(xran[1]==xran[i]&&yran[1]==yran[i])
		{
			return true;
		}
	}
	if (xran[1]==1||xran[1]==91||yran[1]==1||yran[1]==23)
	{
		return true;
	}
	return false;
}
void veThanhSangMenu()
{
	veKhung(8,22,100,3,111,111,12);
   	int count=0;
   	for(int i=9;i<109;i++)
   	{
   		textcolor(65);
   		gotoXY(i,23);cout <<" ";textcolor(0);
   		count++;
   		if (count>=49)
   		{
   			gotoXY(57,23);textcolor(71);
		cout <<count<<"%";	Sleep(50);
		}
		else
		{
			setcolor(7); gotoXY(57,23);cout <<count<<"%";
   		   Sleep(50);
		}
   	    
   	 }
	   Sleep(400);
   	 textcolor(0);
}

