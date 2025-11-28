#include<iostream>
#include<conio.h>
#include <windows.h>  
using namespace std;

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}
char leerChar(int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    CHAR_INFO ci;
    COORD bufferSize = {1,1};
    COORD bufferCoord = {0,0};
    SMALL_RECT readRegion = {x,y,x,y};
    ReadConsoleOutput(hcon, &ci, bufferSize, bufferCoord, &readRegion);
    return ci.Char.AsciiChar;
}  
void bordestotal(int x, int y, int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                gotoxy(x+j, y+i); cout<<"*";
            }
        }
    }
}
int main(){
    int n=0;
    bordestotal (0, 0, 20);
     int x = 17, y = 1; 
     
    gotoxy(x,y); cout<<".";

    int mx = 1, my = 18; 
    gotoxy(mx,my); cout<<"M";

    char tecla;
    while(true){
    
    tecla = getch();
    gotoxy(x,y); 
        
    if(tecla == 72) y--;        
    else if(tecla == 80) y++;   
    else if(tecla == 75) x--;   
    else if(tecla == 77) x++;   
    else if(tecla == 27) break; 

    char c = leerChar(x,y);
    if(c == '*'){																																						
    system("cls");
    cout<<"\n\n\Perdiste\n\n";
    break;
}

    if(x == mx && y == my){
    system("cls");
    cout<<"\n\n\Ganaste\n\n";
    break;
}

    gotoxy(x,y); cout<<".";
																																					 
}
    
    
    return 0;
}
