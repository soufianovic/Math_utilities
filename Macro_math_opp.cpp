#include "Macros_header.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void main(){
int T[3],i,max;
cout << "Donnez 4 nombres pour en extraire le max :" << endl;
for(i=0;i<4;i++)
{
cout << "Donnez le terme Num :" << i <<endl;
cin >> T[i];
}
max=GET_MAX_OF_FOUR(T);
cout << "Le max est :" << max << endl;
getch();
}