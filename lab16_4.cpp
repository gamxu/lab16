#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 

void shuffle(int &A,int &B,int &C,int &D){
	
	int cs = rand()%6;
	if(cs==0) swap(A,B);
	else if(cs==1) swap(A,C);
	else if(cs==2) swap(A,D);
	else if(cs==3) swap(B,C);
	else if(cs==4) swap(B,D);
	else swap(C,D);

	return;
}

