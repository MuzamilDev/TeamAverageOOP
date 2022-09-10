#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;


class player{
 private:
     char name[30];
     char team[30];
     float avg;
 public:
    player()
    {

        cout<<"Enter Name of Player "<<endl;
        gets(name);
        cout<<"Enter Team Name "<<endl;
        gets(team);
        cout<<"Enter Average of player "<<endl;
        cin>>avg;
    }

    void display()
    {

        cout<<"Name is: "<<name<<endl;
        cout<<"Team is: "<<team<<endl;
        cout<<"Average is: "<<avg<<endl;
    }

    void change(char n[], char t[], float a )
    {
        strcpy(name , n);
        strcpy(team ,t);
        avg=a;
    }
};

int main(){
player p1;
p1.display();
p1.change("Babar","Pakistan",55);
p1.display();
p1.change("Kohli","India",54);
p1.display();
p1.change("Warner","Australia",52);
p1.display();
p1.change("Rohit","India",50);
p1.display();
p1.change("Stokes","England",48);
p1.display();
getch();
}
