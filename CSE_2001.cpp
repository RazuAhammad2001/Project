#include <iostream>
#include<graphics.h>
using namespace std;
void myFunction1();
void Flag();
void doremon();
void fish ();



int main()
{
    myFunction1();
    int day;
    while(day!=0)
    {
        cout<<"\nEnter your choice: ";
        cin>>day;
       if(day!=0&&day!=1&&day!=2&&day!=3&&day!=4&&day!=5&&day!=6&&day!=7&&day!=8)
            cout<<"You have entered  Wrong."<<endl;
        else
            switch (day)
         {

           case 2:
               fish();
               break;
            case 1:
               Flag();
                break;

            case 3:
                doremon();
                break;



            }
    }
    return 0;
}



void myFunction1()
{
   cout << "\n1. National Flag"<<endl;
    cout << "\n2. Fish"<<endl;
       cout << "\n3. Doremon"<<endl;


}


void Flag()
{
    int i;
    initwindow(600,400,"Flag");

    setcolor(10);
    setfillstyle(1,2);
    ellipse(200,100,0,180,50,10);
    ellipse(300,100,180,360,50,10);
    ellipse(200,200,0,180,50,10);
    ellipse(300,200,180,360,50,10);
    line(150,100,150,200);
    line(350,100,350,200);
    floodfill(251,101,10);

    setcolor(RED);
    setfillstyle(1,4);
    circle(250,150,35);
    floodfill(251,151,RED);


    setcolor(8);
    setfillstyle(2,8);
    rectangle(130,70,150,300);
    floodfill(131,71,8);

    setfillstyle(1,8);
    ellipse(140,66,0,360,19,5);
    floodfill(141,67,8);



    getch();
    closegraph();
}


void doremon()
{

    initwindow(400,400,"Doremon");
    setcolor(BLUE);
    setfillstyle(1,LIGHTBLUE);
    ellipse(200,180,0,360,180,160);
    floodfill(200,100,BLUE);
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    ellipse(200,230,0,360,135,110);
    floodfill(201,200,WHITE);
    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(200,355,0,360,190,15);
    floodfill(200,355,RED);
    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    ellipse(200,385,0,360,15,15);
    floodfill(200,385,YELLOW);
    setcolor(BLACK);
    setfillstyle(1,WHITE);
    ellipse(229,120,0,360,30,50);
    floodfill(229,120,BLACK);
    setcolor(BLACK);
    setfillstyle(1,WHITE);
    ellipse(171,120,0,360,30,50);
    floodfill(171,120,BLACK);
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    ellipse(225,150,0,360,10,15);
    floodfill(225,150,BLACK);
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    ellipse(175,150,0,360,10,15);
    floodfill(175,150,BLACK);
    setcolor(RED);
    ellipse(200,240,180,360,70,40);
    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(200,180,0,360,17,17);
    floodfill(200,180,RED);
    setcolor(RED);
    line(200,190,200,280);
    line(230,200,350,170);
    line(230,210,350,210);
    line(230,220,350,250);
    line(170,200,50,170);
    line(170,210,50,210);
    line(170,220,50,250);
    getch();
    closegraph();
}

void fish()
{

   initwindow(550,400,"Fish");

    setcolor(15);
    setfillstyle(5,1);
    ellipse(250,200,0,360,150,60);
    floodfill(251,201,15);

    setfillstyle(1,14);
    ellipse(350,200,90,270,70,45);
floodfill(349,201,15);

setfillstyle(1,4);
    ellipse(370,200,0,360,10,15);
floodfill(371,201,15);



setcolor(15);
setfillstyle(2,4);
line(290,142,180,50);
line(240,140,180,50);
floodfill(250,125,15);

setcolor(15);
setfillstyle(2,4);
line(290,258,180,350);
line(240,260,180,350);
floodfill(250,265,15);

setcolor(15);
setfillstyle(5,4);
  line(108,180,60,170);
  line(60,170,75,200);
  line(108,220,60,230);
  line(60,230,75,200);
floodfill(65,175,15);

    getch();
    closegraph();

}
