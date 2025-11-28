#include<iostream>
#include <windows.h>
#include <string>
using namespace std;

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}

void cero(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0||i==n-1||j==0||j==n-1||j==i){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
void uno(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(j==n/2||i==n-1||i==j&&j<=n/2&&j<=n/4){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
void dos(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0||i==n-1||(j==n-1&&i<=n/2)||(j==0&&i>=n/2)||i==n/2){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}

void tres(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0||i==n-1||j==n-1||i==n/2){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
void cuatro(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(j==n-1||i==n/2||(j==0&&i<=n/2)){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
void cinco(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0||i==n-1||(j==0&&i<=n/2)||(j==n-1&&i>=n/2)||i==n/2){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
void seis(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0||i==n-1||j==0||(j==n-1&&i>=n/2)||i==n/2){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
void siete(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0||j==n-1){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
void ocho(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0||i==n-1||j==n-1||j==0||i==n/2){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
void nueve(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0||i==n-1||(j==0&&i<=n/2)||(j==n-1)||i==n/2){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}

void barra(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==j){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}


int main(){
	int n= 5;
	string fecha;
	
	cout<<"ingrese su fecha de nacimiento (un ejemplo 22/11/2010) : ";
	cin>> fecha;
	
	int startX = 5;
	int startY = 5;
	
	for (size_t i = 0; i < fecha.length(); ++i) {
        char c = fecha[i];
        
        int posX = startX + (i * (n + 2)); 

	
	switch (c) {
            case '0': cero(posX, startY, n); break;
            case '1': uno(posX, startY, n); break;
            case '2': dos(posX, startY, n); break;
            case '3': tres(posX, startY, n); break;
            case '4': cuatro(posX, startY, n); break;
            case '5': cinco(posX, startY, n); break;
            case '6': seis(posX, startY, n); break;
            case '7': siete(posX, startY, n); break;
            case '8': ocho(posX, startY, n); break;
            case '9': nueve(posX, startY, n); break;
            case '/': barra(posX, startY, n); break;


    default: break;
        }
    }


    return 0;
}
