
//including graphics lib
#include <graphics.h>

//length of time
#define Times 1000

//main method
void  main() {
    //define graphics init attr
int gd = DETECT , gm ;

//instaniate graph
initgraph(&gd , &gm , "..\\bgi");

    

    //draw circle
    for (size_t i = 0; i < Times && !kbhit(); i++)
    {
        //clear from mintor buffer
        // cleardevice();

        //draw arc
        arc(getmaxx()/2,getmaxy()/2,i,1+i,50);
            
        delay(50);
    }
    

    //fetch screen
    getch();
}