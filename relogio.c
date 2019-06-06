#include <stdio.h>
#include <windows.h>
int main(){
int hora = 0, minutos = 0, segundos = 0;
while(1){
printf("%.2d:%.2d:%.2d",hora,minutos,segundos);
Sleep(1000);
segundos++;
if(segundos == 60){
segundos = 0;
minutos++;
if(minutos == 60){
minutos = 0;
hora++;
}
}
system("cls");
}
}
