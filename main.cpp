#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
#include <windows.h>
#include <mmsystem.h>
#include<cstring>

using namespace std;


int i,x,y;
void rain()
{
    glLineWidth(2);
    glPushMatrix();
    glTranslatef(-100,-110,0);
    glBegin(GL_LINE);
    for(i=1;i<=720;i++)
    {
        x=rand(),y=rand();
        x%=1000;y%=250;
        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2d(x,y);
        glVertex2d(x+5,y+20);
        glEnd();
    }
    glPopMatrix();
}

char text[] = "Police";
void Sprint( float x, float y, char *st)
{
    int l,i;


    l=strlen( st ); // see how many characters are in text string.
    glColor3f(255,0,0);
    //glDisable(GL_LIGHTING);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, st[i]);

    }


}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed

}


void bridgeRoad()
{

    glLineWidth(15.5);
    glBegin(GL_LINE_STRIP);// bridge upper part left back
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(-50+x,-20+y );
    }



    glEnd();

    glLineWidth(15.5);
    glBegin(GL_LINE_STRIP);// bridge upper part mid back
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=22.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(-15+x,-20+y );
    }



    glEnd();

    glLineWidth(15.5);
    glBegin(GL_LINE_STRIP);// bridge upper part right back
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(19+x,-20+y );
    }



    glEnd();



    glBegin(GL_POLYGON);              //bridge road
    glColor3ub(56, 56, 56);


    glVertex2f(-80.0f, -20.0f);
    glVertex2f(45.0f, -20.0f);
    glVertex2f(45.0f, -10.0f);
    glVertex2f(-75.0f, -10.0f);

    glEnd();

    glBegin(GL_POLYGON);              //bridge road side front
    glColor3ub(255,250,240);


    glVertex2f(-80.0f, -21.0f);
    glVertex2f(45.0f, -21.0f);
    glVertex2f(45.0f, -20.0f);
    glVertex2f(-80.0f, -20.0f);

    glEnd();

    glBegin(GL_POLYGON);              //bridge road side back
    glColor3ub(255,250,240);




    glVertex2f(-75.0f, -10.0f);
    glVertex2f(50.0f, -10.0f);
    glVertex2f(50.0f, -9.0f);
    glVertex2f(-75.0f, -9.0f);

    glVertex2f(-80.0f, -20.0f);
    glVertex2f(-80.0f, -20.0f);

    glVertex2f(-75.0f, -11.0f);
    glVertex2f(-75.0f, -11.0f);


    glEnd();


    glPushMatrix();
    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);

    glEnd();



    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();



    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();


    glTranslatef(4.0,0.0,0.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);              //road lines
    glColor3ub(255,255,255);

    glVertex2f(-78.0f, -15.0f);    // x, y
    glVertex2f(-76.0f, -15.0f);


    glEnd();

    glPopMatrix();






    glLineWidth(1.5);
    glBegin(GL_LINES);              //railing back up
    glColor3ub(192,192,192);

    glVertex2f(-60.0f, -8.0f);    // x, y
    glVertex2f(29.0f, -8.0f);

    glEnd();



    glLineWidth(1.0);
    glBegin(GL_LINES);              //railing down
    glColor3ub(192,192,192);

    glVertex2f(-62.0f, -9.0f);    // x, y
    glVertex2f(30.0f, -9.0f);




    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);              //railing || back
    glColor3ub(178,34,34);




    glVertex2f(-46.0f, -10.0f);    // x, y
    glVertex2f(-46.0f, -4.0f);



    glVertex2f(-46.50f, -10.0f);    // x, y
    glVertex2f(-46.50f, -4.0f);



    glVertex2f(-50.0f, -10.0f);    // x, y
    glVertex2f(-50.0f, -4.0f);



    glVertex2f(-50.50f, -10.0f);    // x, y
    glVertex2f(-50.50f, -4.0f);



    glVertex2f(-54.0f, -10.0f);    // x, y
    glVertex2f(-54.0f, -4.0f);



    glVertex2f(-54.50f, -10.0f);    // x, y
    glVertex2f(-54.50f, -4.0f);

    //


    glVertex2f(-30.0f, -10.0f);    // x, y
    glVertex2f(-30.0f, -4.0f);



    glVertex2f(-30.50f, -10.0f);    // x, y
    glVertex2f(-30.50f, -4.0f);



    glVertex2f(-27.0f, -10.0f);    // x, y
    glVertex2f(-27.0f, -4.0f);


    glVertex2f(-27.50f, -10.0f);    // x, y
    glVertex2f(-27.50f, -4.0f);



    glVertex2f(-24.0f, -10.0f);    // x, y
    glVertex2f(-24.0f, -2.0f);


    glVertex2f(-24.50f, -10.0f);    // x, y
    glVertex2f(-24.50f, -2.0f);



    glVertex2f(-21.0f, -10.0f);    // x, y
    glVertex2f(-21.0f, -0.0f);



    glVertex2f(-21.50f, -10.0f);    // x, y
    glVertex2f(-21.50f, -0.0f);



    glVertex2f(-18.0f, -10.0f);    // x, y
    glVertex2f(-18.0f, -0.0f);



    glVertex2f(-18.50f, -10.0f);    // x, y
    glVertex2f(-18.50f, -0.0f);



    glVertex2f(-15.0f, -10.0f);    // x, y
    glVertex2f(-15.0f, -0.0f);



    glVertex2f(-15.50f, -10.0f);    // x, y
    glVertex2f(-15.50f, -0.0f);



    glVertex2f(-12.0f, -10.0f);    // x, y
    glVertex2f(-12.0f, -0.0f);



    glVertex2f(-12.50f, -10.0f);    // x, y
    glVertex2f(-12.50f, -0.0f);



    glVertex2f(-9.0f, -10.0f);    // x, y
    glVertex2f(-9.0f, -0.0f);



    glVertex2f(-9.50f, -10.0f);    // x, y
    glVertex2f(-9.50f, -0.0f);


    glVertex2f(-6.0f, -10.0f);    // x, y
    glVertex2f(-6.0f, -0.0f);


    glVertex2f(-6.50f, -10.0f);    // x, y
    glVertex2f(-6.50f, -0.0f);



    glVertex2f(-3.0f, -10.0f);    // x, y
    glVertex2f(-3.0f, -2.0f);


    glVertex2f(-3.50f, -10.0f);    // x, y
    glVertex2f(-3.50f, -2.0f);



    glVertex2f(-0.0f, -10.0f);    // x, y
    glVertex2f(-0.0f, -4.0f);



    glVertex2f(-0.50f, -10.0f);    // x, y
    glVertex2f(-0.50f, -4.0f);



    glVertex2f(13.0f, -10.0f);    // x, y
    glVertex2f(13.0f, -4.0f);



    glVertex2f(13.50f, -10.0f);    // x, y
    glVertex2f(13.50f, -4.0f);



    glVertex2f(16.0f, -10.0f);    // x, y
    glVertex2f(16.0f, -4.0f);



    glVertex2f(16.50f, -10.0f);    // x, y
    glVertex2f(16.50f, -4.0f);



    glVertex2f(19.0f, -10.0f);    // x, y
    glVertex2f(19.0f, -4.0f);


    glVertex2f(19.50f, -10.0f);    // x, y
    glVertex2f(19.50f, -4.0f);


    glVertex2f(22.0f, -10.0f);    // x, y
    glVertex2f(22.0f, -4.0f);



    glVertex2f(22.50f, -10.0f);    // x, y
    glVertex2f(22.50f, -4.0f);


    glEnd();



}


void bridgeUpperPart()
{
    glLineWidth(15.5);
    glBegin(GL_LINE_STRIP);// bridge upper part left front
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(-50+x,-30+y );
    }



    glEnd();



    glLineWidth(15.5);
    glBegin(GL_LINE_STRIP);// bridge upper part mid front
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=22.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(-15+x,-30+y );
    }



    glEnd();



    glLineWidth(15.5);
    glBegin(GL_LINE_STRIP);// bridge upper part right front
    for(int i=0; i<200; i++)
    {
        glColor3ub(178,34,34);

        float pi=3.1416;
        float A=(i*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(19+x,-30+y );
    }



    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);              //railing front up
    glColor3ub(192,192,192);

    glVertex2f(-60.0f, -18.0f);    // x, y
    glVertex2f(29.0f, -18.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);              //railing front bottom
    glColor3ub(192,192,192);

    glVertex2f(-62.0f, -19.0f);    // x, y
    glVertex2f(30.0f, -19.0f);

    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);              //railing || front
    glColor3ub(178,34,34);


    glVertex2f(-46.0f, -20.0f);    // x, y
    glVertex2f(-46.0f, -14.0f);



    glVertex2f(-46.50f, -20.0f);    // x, y
    glVertex2f(-46.50f, -14.0f);


    glVertex2f(-50.0f, -20.0f);    // x, y
    glVertex2f(-50.0f, -14.0f);



    glVertex2f(-50.50f, -20.0f);    // x, y
    glVertex2f(-50.50f, -14.0f);



    glVertex2f(-54.0f, -20.0f);    // x, y
    glVertex2f(-54.0f, -14.0f);



    glVertex2f(-54.50f, -20.0f);    // x, y
    glVertex2f(-54.50f, -14.0f);



    //
    glVertex2f(-30.0f, -20.0f);    // x, y
    glVertex2f(-30.0f, -14.0f);



    glVertex2f(-30.50f, -20.0f);    // x, y
    glVertex2f(-30.50f, -14.0f);



    glVertex2f(-27.0f, -20.0f);    // x, y
    glVertex2f(-27.0f, -14.0f);



    glVertex2f(-27.50f, -20.0f);    // x, y
    glVertex2f(-27.50f, -14.0f);



    glVertex2f(-24.0f, -20.0f);    // x, y
    glVertex2f(-24.0f, -12.0f);



    glVertex2f(-24.50f, -20.0f);    // x, y
    glVertex2f(-24.50f, -12.0f);


    glVertex2f(-21.0f, -20.0f);    // x, y
    glVertex2f(-21.0f, -10.0f);



    glVertex2f(-21.50f, -20.0f);    // x, y
    glVertex2f(-21.50f, -10.0f);




    glVertex2f(-18.0f, -20.0f);    // x, y
    glVertex2f(-18.0f, -10.0f);



    glVertex2f(-18.50f, -20.0f);    // x, y
    glVertex2f(-18.50f, -10.0f);



    glVertex2f(-15.0f, -20.0f);    // x, y
    glVertex2f(-15.0f, -10.0f);



    glVertex2f(-15.50f, -20.0f);    // x, y
    glVertex2f(-15.50f, -10.0f);



    glVertex2f(-12.0f, -20.0f);    // x, y
    glVertex2f(-12.0f, -10.0f);


    glVertex2f(-12.50f, -20.0f);    // x, y
    glVertex2f(-12.50f, -10.0f);


    glVertex2f(-9.0f, -20.0f);    // x, y
    glVertex2f(-9.0f, -10.0f);



    glVertex2f(-9.50f, -20.0f);    // x, y
    glVertex2f(-9.50f, -10.0f);



    glVertex2f(-6.0f, -20.0f);    // x, y
    glVertex2f(-6.0f, -10.0f);



    glVertex2f(-6.50f, -20.0f);    // x, y
    glVertex2f(-6.50f, -10.0f);




    glVertex2f(-3.0f, -20.0f);    // x, y
    glVertex2f(-3.0f, -12.0f);


    glVertex2f(-3.50f, -20.0f);    // x, y
    glVertex2f(-3.50f, -12.0f);



    glVertex2f(-0.0f, -20.0f);    // x, y
    glVertex2f(-0.0f, -14.0f);



    glVertex2f(-0.50f, -20.0f);    // x, y
    glVertex2f(-0.50f, -14.0f);



    glVertex2f(13.0f, -20.0f);    // x, y
    glVertex2f(13.0f, -14.0f);



    glVertex2f(13.50f, -20.0f);    // x, y
    glVertex2f(13.50f, -14.0f);



    glVertex2f(16.0f, -20.0f);    // x, y
    glVertex2f(16.0f, -14.0f);



    glVertex2f(16.50f, -20.0f);    // x, y
    glVertex2f(16.50f, -14.0f);


    glVertex2f(19.0f, -20.0f);    // x, y
    glVertex2f(19.0f, -14.0f);



    glVertex2f(19.50f, -20.0f);    // x, y
    glVertex2f(19.50f, -14.0f);



    glVertex2f(22.0f, -20.0f);    // x, y
    glVertex2f(22.0f, -14.0f);



    glVertex2f(22.50f, -20.0f);    // x, y
    glVertex2f(22.50f, -14.0f);




    glEnd();

}


float _move1 = 0.0f;
float _move2 = 0.0f;

 void water()
{
    glBegin(GL_POLYGON);              //water
    glColor3ub(24, 116, 205);



    glVertex2f(-70.0f, -100.0f);
    glVertex2f(40.0f, -100.0f);
    glColor3ub(191, 239, 255);
    glVertex2f(31.0f, 15.0f);
    glColor3ub(180, 240, 255);
    glVertex2f(-65.0f, 15.0f);

    glEnd();


    glBegin(GL_QUADS);              //lake bank left
    glColor3ub(238, 207, 161);



    glVertex2f(-71.0f, -100.0f);
    glVertex2f(-70.0f, -100.0f);
    glColor3ub(139, 121, 94);
    glVertex2f(-65.0f, 15.0f);
    glVertex2f(-70.0f, 15.0f);

    glEnd();


    glBegin(GL_QUADS);              //lake bank right



    glVertex2f(40.0f, -100.0f);
    glVertex2f(42.0f, -100.0f);
     glColor3ub(139, 121, 94);
    glVertex2f(35.0f, 15.0f);
    glVertex2f(31.0f, 15.0f);

    glEnd();



    glPushMatrix();
    glTranslatef(_move1,0.0,0.0);
    glLineWidth(1.0);
    glBegin(GL_LINES);              //moving water ---> right
    glColor3ub(255,255,255);


    glVertex2f(-65.0f, -80.0f);    // x, y
    glVertex2f(-61.0f, -80.0f);

    glVertex2f(-50.0f, -80.0f);    // x, y
    glVertex2f(-56.0f, -80.0f);

    glVertex2f(-48.0f, -81.0f);    // x, y
    glVertex2f(-58.0f, -81.0f);

    glVertex2f(-30.0f, -81.0f);    // x, y
    glVertex2f(-38.0f, -81.0f);

    glVertex2f(-32.0f, -75.0f);    // x, y
    glVertex2f(-39.0f, -75.0f);

    glVertex2f(-29.0f, -71.0f);    // x, y
    glVertex2f(-39.0f, -71.0f);

    glVertex2f(-10.0f, -60.0f);    // x, y
    glVertex2f(-4.0f, -60.0f);

    glVertex2f(-55.0f, -50.0f);    // x, y
    glVertex2f(-44.0f, -50.0f);

    glVertex2f(-8.0f, -65.0f);    // x, y
    glVertex2f(-16.0f, -65.0f);

    glVertex2f(-50.0f, -65.0f);    // x, y
    glVertex2f(-39.0f, -65.0f);





    glVertex2f(-15.0f, 10.0f);    // x, y
    glVertex2f(-26.0f, 10.0f);

    glVertex2f(-14.0f, 9.0f);    // x, y
    glVertex2f(-28.0f, 9.0f);

    glVertex2f(-10.0f, -19.0f);    // x, y
    glVertex2f(-18.0f, -19.0f);

    glVertex2f(-20.0f, -19.0f);    // x, y
    glVertex2f(-18.0f, -19.0f);

    glVertex2f(-50.0f, 14.0f);    // x, y
    glVertex2f(-58.0f, 14.0f);

    glVertex2f(-60.0f, 11.0f);    // x, y
    glVertex2f(-66.0f, 11.0f);

    glVertex2f(-40.0f, 6.0f);    // x, y
    glVertex2f(-49.0f, 6.0f);

    glVertex2f(-60.0f, -31.0f);    // x, y
    glVertex2f(-66.0f, -31.0f);

    glVertex2f(-40.0f, -32.0f);    // x, y
    glVertex2f(-46.0f, -32.0f);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(_move2,0.0,0.0);
    glLineWidth(1.0);
    glBegin(GL_LINES);              //moving water <----
    glColor3ub(255,255,255);






    glVertex2f(29.0f, -71.0f);    // x, y
    glVertex2f(39.0f, -71.0f);

    glVertex2f(15.0f, 9.0f);    // x, y
    glVertex2f(22.0f, 9.0f);

    glVertex2f(10.0f, -19.0f);    // x, y
    glVertex2f(18.0f, -19.0f);

    glVertex2f(20.0f, -21.0f);    // x, y
    glVertex2f(18.0f, -21.0f);

    glVertex2f(20.0f, -29.0f);    // x, y
    glVertex2f(28.0f, -29.0f);

    glVertex2f(0.0f, -35.0f);    // x, y
    glVertex2f(-9.0f, -35.0f);

    glEnd();
    glPopMatrix();


}


void update1(int value)//for water
{
    _move1 += 2.2;
    if(_move1 > 40)

    {
        _move1 = -2;
    }

    glutPostRedisplay();
    glutTimerFunc(300, update1, 0);
}

void update2(int value)//for water
{
    _move2 -= 2.2;
    if(_move2 < -60)

    {
        _move2 = 3;
    }

    glutPostRedisplay();
    glutTimerFunc(300, update2, 0);
}


float moveship=0.0f;

void ship()
{
    glPushMatrix();
    glTranslatef(moveship,0.0,0.0);
    glTranslatef(-40.0,-60.0,0.0);
    glBegin(GL_POLYGON);              // body
	glColor3ub(25,25,112);

    glVertex2f(11.0f, 1.0f);
    glVertex2f(6.0f, -1.0f);
    glColor3ub(178 ,34, 34);
	glVertex2f(4.0f, -2.0f);
	glVertex2f(-14.0f, -2.0f);
	glVertex2f(-15.0f, -1.0f);

	glVertex2f( -18.0f, -1.0f);
	glVertex2f( -18.0f, -3.0f);
	glVertex2f( -16.0f , -3.5f);
	glColor3ub(25,25,112);
	glVertex2f( -16.0f, -5.0f);
	glVertex2f( 5.0f, -5.0f);



    glEnd();

        glLineWidth(1.5);
        glBegin(GL_LINES);              // ship railing
        glColor3ub(128,128,128);


        glVertex2f(10.75f, 1.00f);    // x, y
        glVertex2f(11.50f, 2.00f);

        glVertex2f(9.75f, 0.90f);    // x, y
        glVertex2f(10.50f, 1.90f);

        glVertex2f(8.75f, 0.80f);    // x, y
        glVertex2f(9.50f, 1.80f);

        glVertex2f(7.75f, 0.70f);    // x, y
        glVertex2f(8.50f, 1.70f);

        glVertex2f(6.75f, 0.60f);    // x, y
        glVertex2f(7.50f, 1.60f);


        glVertex2f(11.50f, 2.00f);
        glVertex2f(6.5f, 1.5f);

        glVertex2f(5.75f, 0.5f);    // x, y
        glVertex2f(6.50f, 1.50f);



        glEnd();


    glBegin(GL_POLYGON);              // ship upper body
	glColor3ub(176, 196, 222);


    glVertex2f(-14.0f, -0.70f);

	glVertex2f(2.50f, 0.40f);
	glVertex2f(2.0f, 1.0f);
	glVertex2f( -2.0f, 1.0f);
	glVertex2f( -2.50f, 2.0f);
	glVertex2f( -4.0f , 2.0f);
	glVertex2f( -4.50f, 3.0f);
	glVertex2f( -6.0f, 3.0f);

	glVertex2f( -6.50f, 4.0f);
	glVertex2f( -5.50f, 4.50f);
	glVertex2f( -15.0f, 3.20f);
	glVertex2f( -14.0f, 3.0f);

    glEnd();

glBegin(GL_POLYGON);              // 1st floor glass


    glColor3ub(255, 255, 255);

	glVertex2f(2.50f, 0.40f);
	glVertex2f(2.10f, 0.90f);
	glColor3ub(105, 105, 105);

	glVertex2f( 1.0f, 0.90f);
	glVertex2f( 1.0f, 0.40f);

    glEnd();


    glBegin(GL_POLYGON);              // 1st floor glass


    glColor3ub(255, 255, 255);

	glVertex2f(0.70f, 0.40f);
	glVertex2f(0.70f, 0.90f);
	glColor3ub(105, 105, 105);

	glVertex2f( -1.0f, 0.90f);
	glVertex2f( -1.0f, 0.30f);

    glEnd();


    glBegin(GL_POLYGON);              // 3rd floor glass


    glColor3ub(255, 255, 255);

	glVertex2f(-4.0f, 2.10f);
	glVertex2f(-4.50f, 2.90f);
	glColor3ub(105, 105, 105);

	glVertex2f( -5.50f, 2.80f);
	glVertex2f( -5.50f, 2.10f);

    glEnd();

    glBegin(GL_POLYGON);              // 3rd floor glass
    glColor3ub(255, 255, 255);

	glVertex2f(-5.95f, 2.10f);
	glVertex2f(-5.95f, 2.70f);
	glColor3ub(105, 105, 105);

	glVertex2f( -7.0f, 2.80f);
	glVertex2f( -7.0f, 2.0f);

    glEnd();

    glBegin(GL_POLYGON);              // 2nd floor glass
    glColor3ub(255, 255, 255);

    glVertex2f(-2.10f, 1.20f);
	glVertex2f(-2.5f, 1.80f);
	glColor3ub(105, 105, 105);

	glVertex2f( -4.0f, 1.80f);
	glVertex2f( -4.0f, 1.2f);

    glEnd();

    glBegin(GL_POLYGON);              // 4th floor glass
    glColor3ub(255, 255, 255);

    glVertex2f(-6.10f, 3.20f);
	glVertex2f(-6.5f, 4.0f);
	glColor3ub(105, 105, 105);

	glVertex2f( -7.50f, 3.80f);
	//glColor3ub(255, 255, 255);
	glVertex2f( -7.50f, 3.2f);

    glEnd();

    glLineWidth(1.5);
        glBegin(GL_LINES);              // floor
        glColor3ub(128,128,128);


        glVertex2f( -2.0f, 1.0f);
        glVertex2f( -14.40f, 0.25f);

        glVertex2f( -4.0f , 2.0f);
        glVertex2f( -14.50f, 1.25f);

        glVertex2f( -6.0f, 3.0f);
        glVertex2f( -14.60f, 2.25f);

    glEnd();


        glLineWidth(2.0);
        glBegin(GL_LINES);              // flag pole
        glColor3ub(128,128,128);


        glVertex2f( -14.80f, 5.0f);
        glVertex2f( -14.80f, 3.20f);



    glEnd();


    glBegin(GL_POLYGON);              // flag
    glColor3ub(0,128,0);

    glVertex2f(-14.80f, 7.0f);
	glVertex2f(-17.50f, 7.0f);


	glVertex2f( -17.50f, 4.60f);

	glVertex2f( -14.80f, 4.60f);

    glEnd();

    glBegin(GL_POLYGON);                // red circle
        for(int i=0;i<200;i++)
        {
            glColor3ub(255,0,0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-16.15+x,5.80+y );
        }
        glEnd();

    glPopMatrix();


}

void updateShip(int value)  //for ship
{
    moveship += 0.1;
    if(moveship > 64)

    {
        moveship = -10;
    }

    glutPostRedisplay();
    glutTimerFunc(200, updateShip, 0);
}


void sky()                       // sky
{
 glBegin(GL_POLYGON);
	glColor3ub(135, 206, 255);


    glVertex2f(-100.0f, 45.0f);

	glVertex2f(100.0f, 45.0f);
    glVertex2f( 100.0f, 100.0f);
    glColor3ub(224 ,255, 255);
    glVertex2f( -100.0f, 100.0f);



    glEnd();
}

float moveBlueCar=30.0f;



void blueCar()
{
    //blue car body

    glPushMatrix();
    glTranslatef(moveBlueCar,0.0,0.0);
    glScalef(0.75,1,0);
    glTranslatef(95.0,22.0,0.0);
    glBegin(GL_POLYGON);              // car
	glColor3ub(25,25,112);


    glVertex2f(1.0f, 1.5f);
	glVertex2f(0.5f, 1.0f);
	glVertex2f(20.5f, 1.0f);
	glVertex2f(21.0f, 1.5f);
	glVertex2f(21.0f, 4.25f);
	glVertex2f(20.0f, 4.0f);
	glVertex2f(17.0f, 4.0f);
	glVertex2f(15.0f, 5.75f);
	glVertex2f(15.5f, 6.0f);
	glVertex2f(9.0f, 6.0f);
	glVertex2f(6.0f, 4.0f);
	glVertex2f(1.0f, 3.0f);


    glEnd();




    glBegin(GL_POLYGON);              // head light
	glColor3ub(255,255,255);


    glVertex2f(1.0f, 2.5f);
	glVertex2f(1.65f, 2.5f);
	glVertex2f(2.5f, 2.8f);
	glVertex2f(1.0f, 2.8f);



	    // x, y

    glEnd();

    glBegin(GL_POLYGON);              // back light
	glColor3ub(255,0,0);


    glVertex2f(20.50f, 3.0f);
	glVertex2f(20.50f, 2.0f);
	glVertex2f(21.0f, 2.0f);
	glVertex2f(21.0f, 3.5f);



	    // x, y

    glEnd();

    glBegin(GL_POLYGON);              // 1st door glasss of car
	glColor3ub(255,255,255);


    glVertex2f(6.15f, 4.0f);
	glVertex2f(11.55f, 4.0f);
	glVertex2f(11.55f, 5.70f);
	glVertex2f(9.0f, 5.70f);

    glEnd();


    glBegin(GL_POLYGON);              // 2nd door glasss of car
	glColor3ub(245, 245, 245);
    glVertex2f(12.15f, 4.0f);
	glVertex2f(16.65f, 4.0f);
	glVertex2f(14.65f, 5.70f);
	glVertex2f(12.15f, 5.70f);

    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(12.0f, 1.25f);    // x, y
	glVertex2f(12.0f, 5.75f);    // x, y

	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(6.0f, 2.25f);    // x, y
	glVertex2f(6.0f, 3.75f);    // x, y

	glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(17.0f, 2.25f);    // x, y
	glVertex2f(17.0f, 3.75f);

	glVertex2f(1.0f, 2.0f);
	glVertex2f(2.0f, 2.0f);

	glVertex2f(1.0f, 1.75f);
	glVertex2f(1.80f, 1.75f);

	glVertex2f(1.0f, 1.55f);
	glVertex2f(1.65f, 1.55f);






	    // x, y

	glEnd();

	glBegin(GL_POLYGON);// front tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// front tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6+x,1.5+y );
        }

        glEnd();

    glBegin(GL_POLYGON);// back tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// back tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17+x,1.5+y );
        }



	glEnd();

	glBegin(GL_LINES);// back tire LINE
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);

            float pi=3.1416;
            float A=(i*pi)/200;
            float r=1.65;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17.05+x,1.5+y );
        }



	glEnd();

	glBegin(GL_LINES);// FRONT tire LINE
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);

            float pi=3.1416;
            float A=(i*pi)/200;
            float r=1.65;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6.05+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);              // looking glass
	glColor3ub(25,25,112);


    glVertex2f(6.0f, 4.0f);
	glVertex2f(7.0f, 4.0f);
	glVertex2f(7.5f, 4.4f);
	glVertex2f(7.0f, 4.4f);

    glEnd();




        glPopMatrix();

        glPopMatrix();

}



void updateBlueCar(int value)//for ship
{
    moveBlueCar -= 0.5;
    if(moveBlueCar <- 180)

    {
        moveBlueCar = 20;
    }

    glutPostRedisplay();
    glutTimerFunc(50, updateBlueCar, 0);
}


float moveGoldenCar=20.0f;
float angleGoldenCar1 = 0.0f;
float angleGoldenCar2= 0.0f;
float speedGOldenCar= 0.2f;

//Yellow car
void YellowCar()
{
    //goldencar body

    glPushMatrix();
    glTranslatef(moveGoldenCar,0.0,0.0);
    glScalef(0.75,1,0);
    glTranslatef(95.0,26.0,0.0);
    glBegin(GL_POLYGON);              // car
	glColor3ub(255,215,0);


    glVertex2f(1.0f, 1.5f);
	glVertex2f(0.5f, 1.0f);
	glVertex2f(20.5f, 1.0f);
	glVertex2f(21.0f, 1.5f);
	glVertex2f(21.0f, 4.25f);
	glVertex2f(20.0f, 4.0f);
	glVertex2f(17.0f, 4.0f);
	glVertex2f(15.0f, 5.75f);
	glVertex2f(15.5f, 6.0f);
	glVertex2f(9.0f, 6.0f);
	glVertex2f(6.0f, 4.0f);
	glVertex2f(1.0f, 3.0f);


    glEnd();




    glBegin(GL_POLYGON);              // head light
	glColor3ub(255,255,255);


    glVertex2f(1.0f, 2.5f);
	glVertex2f(1.65f, 2.5f);
	glVertex2f(2.5f, 2.8f);
	glVertex2f(1.0f, 2.8f);



	    // x, y

    glEnd();

    glBegin(GL_POLYGON);              // back light
	glColor3ub(255,0,0);


    glVertex2f(20.50f, 3.0f);
	glVertex2f(20.50f, 2.0f);
	glVertex2f(21.0f, 2.0f);
	glVertex2f(21.0f, 3.5f);



	    // x, y

    glEnd();

    glBegin(GL_POLYGON);              // 1st door glasss of car
	glColor3ub(255,255,255);


    glVertex2f(6.15f, 4.0f);
	glVertex2f(11.55f, 4.0f);
	glVertex2f(11.55f, 5.70f);
	glVertex2f(9.0f, 5.70f);




    glEnd();

    glBegin(GL_POLYGON);              // 2nd door glasss of car
	glColor3ub(245, 245, 245);


    glVertex2f(12.15f, 4.0f);
	glVertex2f(16.65f, 4.0f);
	glVertex2f(14.65f, 5.70f);
	glVertex2f(12.15f, 5.70f);




    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(12.0f, 1.25f);    // x, y
	glVertex2f(12.0f, 5.75f);    // x, y

	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(6.0f, 2.25f);    // x, y
	glVertex2f(6.0f, 3.75f);    // x, y

	glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(17.0f, 2.25f);    // x, y
	glVertex2f(17.0f, 3.75f);

	glVertex2f(1.0f, 2.0f);
	glVertex2f(2.0f, 2.0f);

	glVertex2f(1.0f, 1.75f);
	glVertex2f(1.80f, 1.75f);

	glVertex2f(1.0f, 1.55f);
	glVertex2f(1.65f, 1.55f);





	    // x, y

	glEnd();

	glBegin(GL_POLYGON);// front tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// front tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6+x,1.5+y );
        }

        glEnd();

    glBegin(GL_POLYGON);// back tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// back tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17+x,1.5+y );
        }



	glEnd();

	glBegin(GL_LINES);// back tire LINE
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);

            float pi=3.1416;
            float A=(i*pi)/200;
            float r=1.65;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17.05+x,1.5+y );
        }



	glEnd();

	glBegin(GL_LINES);// FRONT tire LINE
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);

            float pi=3.1416;
            float A=(i*pi)/200;
            float r=1.65;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6.05+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);              // looking glass
	glColor3ub(25,25,112);


    glVertex2f(6.0f, 4.0f);
	glVertex2f(7.0f, 4.0f);
	glVertex2f(7.5f, 4.4f);
	glVertex2f(7.0f, 4.4f);

    glEnd();



                    //ROTATING TIRE
        glPushMatrix();
        glTranslatef(6.0,1.5,0.0);
        glRotatef(angleGoldenCar1, 0.0f, 0.0f,1.0f);

	    glLineWidth(0.5);
        glBegin(GL_LINES);              // Each set of 4 vertices form a quad
        glColor3ub(128,128,128);

         // Red
        glVertex2f(0.0f, 1.0f);    // x, y
        glVertex2f(0.0f, -1.0f);

        glVertex2f(1.0f, 0.0f);    // x, y
        glVertex2f(-1.0f, 0.0f);


        glEnd();
        glPopMatrix();



        glPushMatrix();
        glTranslatef(17.0,1.5,0.0);
        glRotatef(angleGoldenCar1, 0.0f, 0.0f,1.0f);

	    glLineWidth(0.5);
        glBegin(GL_LINES);              // Each set of 4 vertices form a quad
        glColor3ub(128,128,128);

         // Red
        glVertex2f(0.0f, 1.00f);    // x, y
        glVertex2f(0.0f, -1.00f);

        glVertex2f(1.0f, 0.0f);    // x, y
        glVertex2f(-1.0f, 0.0f);


        glEnd();

        glPopMatrix();

        glPopMatrix();

}


void updateGoldenCar1(int value)
{

    angleGoldenCar1+=3.0f;
    if(angleGoldenCar1 > 360.0)
    {
        angleGoldenCar1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(1, updateGoldenCar1, 0); //Notify GLUT to call update again in 25 milliseconds
}



void updateGoldenCar2(int value)//for ship
{
    moveGoldenCar -= 0.4;
    if(moveGoldenCar < -180)

    {
        moveGoldenCar = 20;
    }

    glutPostRedisplay();
    glutTimerFunc(50, updateGoldenCar2, 0);
}


float movecloud12=0.0f;
float movecloud3=0.0f;
void Cloud()
{
    glPushMatrix();
    glTranslatef(movecloud12,0.0,0.0);
    glBegin(GL_POLYGON);// 1st cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(+x,80+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2+x,78+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2+x,76+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(4+x,78+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// 2nd cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-80+x,70+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-78+x,68+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-76+x,72+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-74+x,74+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-72+x,70+y );
        }



	glEnd();

	glPopMatrix();



    glPushMatrix();
    glTranslatef(movecloud3,0.0,0.0);
	glBegin(GL_POLYGON);// 3rd cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(80+x,90+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(78+x,88+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(81+x,86+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// cloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,245,245);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(83+x,89+y );
        }



	glEnd();
	glPopMatrix();

}

void updatecloud12(int value)
{
    movecloud12 += 0.5;
    if(movecloud12 > 182)

    {
        movecloud12 = -182;
    }

    glutPostRedisplay();
    glutTimerFunc(182, updatecloud12, 0);
}

void updatecloud3(int value)
{
    movecloud3 -= 0.5;
    if(movecloud3 < -182)

    {
        movecloud3 = 182;
    }

    glutPostRedisplay();
    glutTimerFunc(182, updatecloud3, 0);
}


void sun()
{


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {

            glColor3ub(255,165,0);


            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(85+x,90+y );
        }



	glEnd();

}

void down_upperroad()
{
    glBegin(GL_POLYGON);              // down-upper road
	glColor3ub(56, 56, 56);


    glVertex2f(-100.0f, 20.0f);
	glVertex2f(100.0f, 20.0f);
	glVertex2f(100.0f, 30.0f);
	glVertex2f(-100.0f, 30.0f);

    glEnd();

    glBegin(GL_POLYGON);              // down-upper road side slope
	glColor3ub(238,232,170);


    glVertex2f(-98.0f, 15.0f);
	glVertex2f(100.0f, 15.0f);
	glVertex2f(100.0f, 20.0f);
	glVertex2f(-100.0f, 20.0f);

    glEnd();

    glLineWidth(6.5);
    glBegin(GL_LINES);
    glColor3ub(22, 82, 22);             // down-upper road divider

    // Green
    glVertex2f(100.0f, 31.0f);    // x, y
    glVertex2f(-100.0f, 31.00f);

    glEnd();


    // Down Road side Line
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(100.0f, 20.0f);    // x, y
    glVertex2f(-100.0f, 20.00f);

    glEnd();


    // Down Road side Line
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(100.0f, 30.0f);    // x, y
    glVertex2f(-100.0f, 30.00f);

    glEnd();

    //Road Lines Down

    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 25.0f);    // x, y
	glVertex2f(-96.0f, 25.0f);

    glEnd();
    glPopMatrix();

}

void up_upperroad()
{

    glBegin(GL_POLYGON);              // up-upper road
	glColor3ub(56, 56, 56);


    glVertex2f(-100.0f, 42.0f);
	glVertex2f(100.0f, 42.0f);
	glVertex2f(100.0f, 32.0f);
	glVertex2f(-100.0f, 32.0f);

    glEnd();

    // Up Road side Line
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(100.0f, 32.0f);    // x, y
    glVertex2f(-100.0f, 32.00f);

    glEnd();


     glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(100.0f, 42.0f);    // x, y
    glVertex2f(-100.0f, 42.00f);

    glEnd();


     //Road Lines Up

    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines R
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();



    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();

    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();


    glTranslatef(4.0, 0.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-98.0f, 37.0f);    // x, y
	glVertex2f(-96.0f, 37.0f);

    glEnd();
    glPopMatrix();






 // Right Side Road

    glBegin(GL_POLYGON);
	glColor3ub(56, 56, 56);


    glVertex2f(43.0f, -100.0f);
	glVertex2f(50.0f,-100.0f);
	glVertex2f(50.0f, -9.0f);
	glVertex2f(43.0f, -9.0f);

    glEnd();


     glLineWidth(3.5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);             // down-upper road side

    // White
    glVertex2f(43.0f, -20.0f);    // x, y
    glVertex2f(43.0f, -100.00f);

    glEnd();


    glLineWidth(3.5);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);             // down-upper road side

    // White
    glVertex2f(50.0f, -8.8f);    // x, y
    glVertex2f(50.0f, -100.00f);

    glEnd();


    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines R
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();

     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();



    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();

     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(46.50f, -98.0f);    // x, y
	glVertex2f(46.50f, -94.0f);

    glEnd();
    glPopMatrix();

}


void Road()
{

    //ROAD Left 2
	glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);


	glVertex2f(-80.0f, -20.0f);
	glVertex2f(-80.0f, -100.0f);
	glVertex2f(-72.0f, -100.0f);
    glVertex2f(-72.0f, -20.0f);

	glEnd();

	//Road left
    glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);


	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-90.0f, -100.0f);
	glVertex2f(-82.0f, -100.0f);
    glVertex2f(-82.0f, -20.0f);

	glEnd();


    //Left Road angle
	glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);

    glVertex2f(-100.0f, 4.0f);
	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-100.0f, 20.0f);


	glEnd();


	//Road Divider Line

	glBegin(GL_QUADS);
	glColor3ub(22, 82, 22);


	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-82.0f, -100.0f);
	glVertex2f(-80.0f, -100.0f);
    glVertex2f(-80.0f, -20.0f);

	glEnd();


	//Road Side Line Right

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-71.50f, -20.0f);
	glVertex2f(-71.50f, -100.0f);
	glVertex2f(-72.0f, -100.0f);
    glVertex2f(-72.0f, -20.0f);

	glEnd();

	//Road Side Line

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-80.50f, -20.0f);
	glVertex2f(-80.50f, -100.0f);
	glVertex2f(-80.0f, -100.0f);
    glVertex2f(-80.0f, -20.0f);

	glEnd();


	//Road Side Line Left Road L

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-90.50f, -20.0f);
	glVertex2f(-90.50f, -100.0f);
	glVertex2f(-90.0f, -100.0f);
    glVertex2f(-90.0f, -20.0f);

	glEnd();


//Road Side Line Left Road R

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-81.50f, -20.0f);
	glVertex2f(-81.50f, -100.0f);
	glVertex2f(-82.0f, -100.0f);
    glVertex2f(-82.0f, -20.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,224);

    glVertex2f(-100.0f, 4.0f);
	glVertex2f(-90.5f, -20.0f);
	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-100.0f, 5.0f);


	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,224);

    glVertex2f(-100.0f, 19.0f);
	glVertex2f(-82.5f, -20.0f);
	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-100.0f, 20.0f);


	glEnd();



	glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines R
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);




    glPushMatrix();
    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();
    glPopMatrix();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glPopMatrix();




    //Road Middle Lines R


    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines L
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();
    glPopMatrix();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();
    glPopMatrix();



    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines L
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -20.0f);    // x, y
	glVertex2f(-100.0f, 12.0f);

    glEnd();


}


void Building()
{

    //Building Body
    glBegin(GL_POLYGON);
	glColor3ub(238, 233, 233);


	glVertex2f(50.0f, -30.0f);
	glVertex2f(75.0f, -30.0f);
	glVertex2f(75.0f, 14.0f);
	glVertex2f(74.0f, 14.0f);
	glVertex2f(74.0f, 15.0f);
	glVertex2f(51.0f, 15.0f);
	glVertex2f(51.0f, 14.0f);
	glVertex2f(50.0f, 14.0f);


   glEnd();


//Building Rooftop design


    glBegin(GL_QUADS);
	glColor3ub(238, 233, 233);

    glVertex2f(56.0f, 15.0f);
    glVertex2f(69.0f, 15.0f);
	glVertex2f(69.0f, 18.0f);
	glVertex2f(56.0f, 18.0f);

	glEnd();




    glBegin(GL_QUADS);
	glColor3ub(238, 233, 233);

    glVertex2f(59.0f, 18.0f);
    glVertex2f(66.0f, 18.0f);
    glVertex2f(66.0f, 20.0f);
    glVertex2f(59.0f, 20.0f);

	glEnd();


	//Building big glass left (twin)
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(55.0f, -29.0f);
    glVertex2f(62.0f, -29.0f);
    glVertex2f(62.0f, 13.0f);
    glVertex2f(55.0f, 13.0f);

	glEnd();



//Building big glass right (twin)
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(63.0f, -29.0f);
    glVertex2f(70.0f, -29.0f);
    glVertex2f(70.0f, 13.0f);
    glVertex2f(63.0f, 13.0f);

	glEnd();


	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(50.0f, 14.0f);    // x, y
	glVertex2f(75.0f, 14.0f);

    glEnd();



	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(51.0f, 15.0f);    // x, y
	glVertex2f(74.0f, 15.0f);

    glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(56.0f, 18.0f);    // x, y
	glVertex2f(69.0f, 18.0f);

    glEnd();


    glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(65, 65, 65);

	glVertex2f(50.0f, -30.50f);    // x, y
	glVertex2f(75.0f, -30.50f);

    glEnd();



    //Building Window L

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

	glVertex2f(50.5f, -21.0f);
    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -18.0f);
    glVertex2f(50.5f, -13.0f);
    glVertex2f(52.5f, -13.0f);
    glVertex2f(52.5f, -18.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -5.0f);
    glVertex2f(50.5f, -10.0f);
    glVertex2f(52.5f, -10.0f);
    glVertex2f(52.5f, -5.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, 3.0f);
    glVertex2f(50.5f, -2.0f);
    glVertex2f(52.5f, -2.0f);
    glVertex2f(52.5f, 3.0f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, 11.0f);
    glVertex2f(50.5f, 6.0f);
    glVertex2f(52.5f, 6.0f);
    glVertex2f(52.5f, 11.0f);

    glEnd();


    //Window Divider

     glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -18.0f);    // x, y
	glVertex2f(51.5f, -13.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -5.0f);    // x, y
	glVertex2f(51.5f, -10.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, 3.0f);    // x, y
	glVertex2f(51.5f, -2.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, 11.0f);    // x, y
	glVertex2f(51.5f, 6.0f);

    glEnd();


    //Building Small Window L

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -15.0f);
    glVertex2f(54.5f, -15.0f);
    glVertex2f(54.5f, -12.0f);
    glVertex2f(53.0f, -12.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -7.0f);
    glVertex2f(54.5f, -7.0f);
    glVertex2f(54.5f, -4.0f);
    glVertex2f(53.0f, -4.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, 1.0f);
    glVertex2f(54.5f, 1.0f);
    glVertex2f(54.5f, 4.0f);
    glVertex2f(53.0f, 4.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, 9.0f);
    glVertex2f(54.5f, 9.0f);
    glVertex2f(54.5f, 12.0f);
    glVertex2f(53.0f, 12.0f);

    glEnd();



    //Building Window Right

 glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -18.0f);
    glVertex2f(74.5f, -18.0f);
    glVertex2f(74.5f, -13.0f);
    glVertex2f(72.5f, -13.0f);

    glEnd();


     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -5.0f);
    glVertex2f(72.5f, -10.0f);
    glVertex2f(74.5f, -10.0f);
    glVertex2f(74.5f, -5.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, 3.0f);
    glVertex2f(72.5f, -2.0f);
    glVertex2f(74.5f, -2.0f);
    glVertex2f(74.5f, 3.0f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, 11.0f);
    glVertex2f(72.5f, 6.0f);
    glVertex2f(74.5f, 6.0f);
    glVertex2f(74.5f, 11.0f);

    glEnd();




     //Window Divider R

     glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -18.0f);    // x, y
	glVertex2f(73.5f, -13.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -5.0f);    // x, y
	glVertex2f(73.5f, -10.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, 3.0f);    // x, y
	glVertex2f(73.5f, -2.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, 11.0f);    // x, y
	glVertex2f(73.5f, 6.0f);

    glEnd();





    //Building small windows Right


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -15.0f);
    glVertex2f(72.0f, -15.0f);
    glVertex2f(72.0f, -12.0f);
    glVertex2f(70.5f, -12.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -7.0f);
    glVertex2f(72.0f, -7.0f);
    glVertex2f(72.0f, -4.0f);
    glVertex2f(70.5f, -4.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, 1.0f);
    glVertex2f(72.0f, 1.0f);
    glVertex2f(72.0f, 4.0f);
    glVertex2f(70.5f, 4.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, 9.0f);
    glVertex2f(72.0f, 9.0f);
    glVertex2f(72.0f, 12.0f);
    glVertex2f(70.5f, 12.0f);

    glEnd();



     //Building Door Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -29.0f);
    glVertex2f(61.3f, -29.0f);
    glVertex2f(61.3f, -22.0f);
    glVertex2f(55.7f, -22.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(57.55f, -29.0f);
    glVertex2f(57.55f, -22.2f);

    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.4f, -29.0f);
    glVertex2f(59.4f, -22.2f);

     glEnd();

     //Building Door Right

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -29.0f);
    glVertex2f(69.3f, -29.0f);
    glVertex2f(69.3f, -22.0f);
    glVertex2f(63.7f, -22.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.55f, -29.0f);
    glVertex2f(65.55f, -22.2f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.4f, -29.0f);
    glVertex2f(67.4f, -22.2f);

     glEnd();




   //Building Middle small Window Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);

     glEnd();


     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -12.0f);
    glVertex2f(57.7f, -12.0f);
    glVertex2f(57.7f, -6.0f);
    glVertex2f(55.7f, -6.0f);

     glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -4.0f);
    glVertex2f(57.7f, -4.0f);
    glVertex2f(57.7f, 2.0f);
    glVertex2f(55.7f, 2.0f);

     glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, 4.0f);
    glVertex2f(57.7f, 4.0f);
    glVertex2f(57.7f, 10.0f);
    glVertex2f(55.7f, 10.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -20.0f);
    glVertex2f(56.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -12.0f);
    glVertex2f(56.7f, -6.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -4.0f);
    glVertex2f(56.7f, 2.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, 4.0f);
    glVertex2f(56.7f, 10.0f);

     glEnd();



     //Building Middle Big Window

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

      glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -12.0f);
    glVertex2f(61.3f, -12.0f);
    glVertex2f(61.3f, -6.0f);
    glVertex2f(58.3f, -6.0f);

      glEnd();


       glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -4.0f);
    glVertex2f(61.3f, -4.0f);
    glVertex2f(61.3f, 2.0f);
    glVertex2f(58.3f, 2.0f);

      glEnd();


       glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, 4.0f);
    glVertex2f(61.3f, 4.0f);
    glVertex2f(61.3f, 10.0f);
    glVertex2f(58.3f, 10.0f);

      glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -20.0f);
    glVertex2f(59.3f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -20.0f);
    glVertex2f(60.3f, -14.0f);

     glEnd();



     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -12.0f);
    glVertex2f(59.3f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -12.0f);
    glVertex2f(60.3f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -4.0f);
    glVertex2f(59.3f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -4.0f);
    glVertex2f(60.3f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, 4.0f);
    glVertex2f(59.3f, 10.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, 4.0f);
    glVertex2f(60.3f, 10.0f);

     glEnd();




    //Building Middle Big Window R

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -12.0f);
    glVertex2f(66.7f, -12.0f);
    glVertex2f(66.7f, -6.0f);
    glVertex2f(63.7f, -6.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -4.0f);
    glVertex2f(66.7f, -4.0f);
    glVertex2f(66.7f, 2.0f);
    glVertex2f(63.7f, 2.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, 4.0f);
    glVertex2f(66.7f, 4.0f);
    glVertex2f(66.7f, 10.0f);
    glVertex2f(63.7f, 10.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -20.0f);
    glVertex2f(64.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -20.0f);
    glVertex2f(65.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -12.0f);
    glVertex2f(64.7f, -6.0f);

     glEnd();


      glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -12.0f);
    glVertex2f(65.7f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -4.0f);
    glVertex2f(64.7f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -4.0f);
    glVertex2f(65.7f, 2.0f);

     glEnd();



     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, 4.0f);
    glVertex2f(64.7f, 10.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, 4.0f);
    glVertex2f(65.7f, 10.0f);

     glEnd();



    //Building Middle small Window R

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, -12.0f);
    glVertex2f(68.9f, -12.0f);
    glVertex2f(68.9f, -6.0f);
    glVertex2f(66.9f, -6.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, -4.0f);
    glVertex2f(68.9f, -4.0f);
    glVertex2f(68.9f, 2.0f);
    glVertex2f(66.9f, 2.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, 4.0f);
    glVertex2f(68.9f, 4.0f);
    glVertex2f(68.9f,10.0f);
    glVertex2f(66.9f, 10.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -20.0f);
    glVertex2f(67.9f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -12.0f);
    glVertex2f(67.9f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -4.0f);
    glVertex2f(67.9f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, 4.0f);
    glVertex2f(67.9f, 10.0f);

     glEnd();
    glPopMatrix();


}


void Park()
{

   // Park Body


   glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);

    glVertex2f(50.20f, -35.0f);
    glVertex2f(50.20f, -100.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, -35.0f);

    glEnd();


   //Park Upper Road

	glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(51.0f, -46.0f);
    glVertex2f(100.0f, -46.0f);
    glVertex2f(100.0f, -40.0f);
    glVertex2f(51.0f, -40.0f);

    glEnd();

    //Park Down Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(51.0f, -100.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, -94.0f);
    glVertex2f(51.0f, -94.0f);

    glEnd();


    //Park Middle 1st Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(58.0f, -46.0f);
    glVertex2f(58.0f, -94.0f);
    glVertex2f(62.0f, -94.0f);
    glVertex2f(62.0f, -46.0f);

    glEnd();

    //Park Middle 2nd Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(74.0f, -46.0f);
    glVertex2f(74.0f, -94.0f);
    glVertex2f(78.0f, -94.0f);
    glVertex2f(78.0f, -46.0f);

    glEnd();

    //Park Middle 3rd Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(96.0f, -46.0f);
    glVertex2f(96.0f, -94.0f);
    glVertex2f(100.0f, -94.0f);
    glVertex2f(100.0f, -46.0f);

    glEnd();


      //Park Chair

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(65.0f, -41.0f);
    glVertex2f(65.0f, -43.0f);
    glVertex2f(70.0f, -43.0f);
    glVertex2f(70.0f, -41.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(65.0f, -44.0f);
    glVertex2f(65.0f, -46.0f);
    glVertex2f(70.0f, -46.0f);
    glVertex2f(70.0f, -44.0f);

    glEnd();


    glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(65.0f, -41.0f);
    glVertex2f(65.0f, -46.50f);

    glEnd();



    glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.0f, -41.0f);
    glVertex2f(70.0f, -46.50f);

    glEnd();

    glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(67.50f, -41.0f);
    glVertex2f(67.50f, -46.50f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.75f, -46.50f);
	glVertex2f(64.50f, -48.0f);
	glVertex2f(70.50f, -48.0f);
	glVertex2f(70.25f, -46.50f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.50f, -48.0f);
	glVertex2f(64.0f, -49.50f);
	glVertex2f(71.0f, -49.50f);
	glVertex2f(70.50f, -48.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.0f, -49.50f);
	glVertex2f(64.0f, -50.50f);
	glVertex2f(71.0f, -50.50f);
	glVertex2f(71.0f, -49.50f);

    glEnd();

// Chair leg

    glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(64.50f, -50.50f);
    glVertex2f(64.50f, -54.0f);

    glEnd();


    glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.50f, -50.50f);
    glVertex2f(70.50f, -54.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(65.25f, -50.50f);
    glVertex2f(65.25f, -53.00f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(69.75f, -50.50f);
    glVertex2f(69.75f, -53.00f);

     glEnd();

    //Chair Handle left

    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139,26,26);

    glVertex2f(65.0f, -43.0f);
    glVertex2f(64.0f, -48.50f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(64.0f, -48.5f);
    glVertex2f(64.0f, -50.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.0f, -43.0f);
    glVertex2f(71.0f, -48.50f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(71.0f, -48.5f);
    glVertex2f(71.0f, -50.0f);

    glEnd();




     //Swing


    glLineWidth(6.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(84.0f, -42.0f);
    glVertex2f(90.0f, -42.0f);

    glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(82.0f, -56.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(81.0f, -56.0f);
    glVertex2f(83.0f, -56.0f);

    glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(3,3,3);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(92.0f, -56.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(91.0f, -56.0f);
    glVertex2f(93.0f, -56.0f);

    glEnd();


     //Swing rope


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(86.0f, -52.0f);

     glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(88.0f, -52.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(85.5f, -53.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(88.5f, -53.0f);

    glEnd();

    //swing seat
    glBegin(GL_QUADS);
	glColor3ub(232, 232, 232);

    glVertex2f(85.5f, -51.5f);
	glVertex2f(85.0f, -53.0f);
	glVertex2f(89.0f, -53.0f);
	glVertex2f(88.5f, -51.5f);

    glEnd();

}


void Building3()
{

    //Building3 body

    glBegin(GL_POLYGON);
	glColor3ub(255, 140, 0);

    glVertex2f(50.0f, 42.50f);
    glVertex2f(55.0f, 42.50f);
    glVertex2f(55.0f, 75.0f);
    glVertex2f(50.0f, 77.50f);

     glEnd();



    glPushMatrix();
    glTranslatef(-7.3,0,0);


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(58.0f, 43.50f);
    glVertex2f(62.0f, 43.50f);

     glEnd();

     glPushMatrix();
     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();



     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();
     glPopMatrix();

    glPopMatrix();
}


void Building4()
{

    //Building4 Body

    glBegin(GL_POLYGON);
	glColor3ub(218, 112, 214);

    glVertex2f(57.50f, 42.50f);
    glVertex2f(62.50f, 42.50f);
    glVertex2f(62.50f, 77.50f);
    glVertex2f(57.50f, 75.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(58.0f, 43.50f);
    glVertex2f(62.0f, 43.50f);

     glEnd();

     glPushMatrix();
     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();



     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();
     glPopMatrix();

}

void Building5()
{

    //Building5 body
    glBegin(GL_POLYGON);
	glColor3ub(255, 193, 37);

    glVertex2f(63.50f, 42.50f);
    glVertex2f(71.50f, 42.50f);
    glVertex2f(71.50f, 73.0f);
    glVertex2f(63.50f, 73.0f);

    glEnd();


    glLineWidth(2.70);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.0f, 43.0f);
    glVertex2f(71.0f, 43.0f);

    glEnd();

     glPushMatrix();
     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();
     glPopMatrix();

}


void Building6()
{

    //Building6 body

	 glBegin(GL_QUADS);
     glColor3ub(77,176,64);
     glVertex2f(72.0f, 42.50f);
     glVertex2f(76.0f, 42.50f);
     glColor3ub(160,160,160);
     glVertex2f(76.0f, 62.0f);
     glVertex2f(72.0f, 62.0f);

     glColor3ub(77,176,64);
     glVertex2f(72.10f, 62.0f);
     glVertex2f(75.90f, 62.0f);
     glColor3ub(160,160,160);
     glVertex2f(75.90f, 74.0f);
     glVertex2f(72.10f, 74.0f);

     glEnd();

     glBegin(GL_QUADS);
	 glColor3ub(25, 25, 112);

     glVertex2f(72.50f, 74.0f);
     glVertex2f(75.50f, 74.0f);
     glVertex2f(75.50f, 75.0f);
     glVertex2f(72.50f, 75.0f);

     glVertex2f(73.0f, 75.0f);
     glVertex2f(75.0f, 75.0f);
     glVertex2f(75.0f, 76.0f);
     glVertex2f(73.0f, 76.0f);

     glVertex2f(73.50f, 76.0f);
     glVertex2f(74.50f, 76.0f);
     glVertex2f(74.50f, 77.0f);
     glVertex2f(73.50f, 77.0f);

     glEnd();



    glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(25, 25, 112);

     glVertex2f(74.00f, 81.0f);
     glVertex2f(74.00f, 77.0f);

     glEnd();

     glLineWidth(7.5);
	 glBegin(GL_LINES);
	 glColor3ub(25, 25, 112);

     glVertex2f(72.0f, 61.0f);
     glVertex2f(76.10f, 61.0f);

     glEnd();


    glLineWidth(1.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(72.30f, 60.30f);
    glVertex2f(72.30f, 43.0f);

    glEnd();


    glLineWidth(1.40);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(72.50f, 62.10f);
    glVertex2f(72.50f, 74.0f);

     glEnd();

     glPushMatrix();
     glTranslatef(0.80f,0.0f,0.0f);
     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.30f, 60.30f);
     glVertex2f(72.30f, 43.0f);

     glEnd();

     glLineWidth(1.40);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

    glVertex2f(72.50f, 62.10f);
    glVertex2f(72.50f, 74.0f);

     glEnd();


     glTranslatef(0.80f,0.0f,0.0f);
     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.30f, 60.30f);
     glVertex2f(72.30f, 43.0f);

     glEnd();

     glLineWidth(1.40);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.50f, 62.10f);
     glVertex2f(72.50f, 74.0f);

     glEnd();


     glTranslatef(0.80f,0.0f,0.0f);
     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.30f, 60.30f);
     glVertex2f(72.30f, 43.0f);

     glEnd();

     glLineWidth(1.40);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.50f, 62.10f);
     glVertex2f(72.50f, 74.0f);

     glEnd();


     glTranslatef(0.80f,0.0f,0.0f);
     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.30f, 60.30f);
     glVertex2f(72.30f, 43.0f);

     glEnd();

     glLineWidth(1.40);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.50f, 62.10f);
     glVertex2f(72.50f, 74.0f);

     glEnd();
     glPopMatrix();
}


void Building7()
{

    //Building7 Body

	glBegin(GL_QUADS);
	glColor3ub(255, 127, 36);

    glVertex2f(78.50f, 42.50f);
    glVertex2f(78.50f, 60.0f);
    glVertex2f(84.50f, 60.0f);
    glVertex2f(84.50f, 42.50f);

     glEnd();


     glBegin(GL_QUADS);
	glColor3ub(20, 20, 20);

    glVertex2f(77.70f, 59.0f);
    glVertex2f(85.20f, 59.0f);
    glVertex2f(84.0f, 62.0f);
    glVertex2f(79.0f, 62.0f);

     glEnd();


     glLineWidth(7.70);
	 glBegin(GL_LINES);
	 glColor3ub(139, 35, 35);

     glVertex2f(79.50f, 43.0f);
     glVertex2f(79.50f, 46.0f);

     glVertex2f(80.70f, 43.0f);
     glVertex2f(80.70f, 46.0f);

     glVertex2f(82.0f, 43.0f);
     glVertex2f(82.0f, 46.0f);

     glVertex2f(83.30f, 43.0f);
     glVertex2f(83.30f, 46.0f);

     glEnd();




     glPushMatrix();
     glTranslatef(0.0f,4.0f,0.0f);

	 glBegin(GL_LINES);

     glVertex2f(79.50f, 43.0f);
     glVertex2f(79.50f, 46.0f);

     glVertex2f(80.70f, 43.0f);
     glVertex2f(80.70f, 46.0f);

     glVertex2f(82.0f, 43.0f);
     glVertex2f(82.0f, 46.0f);

     glVertex2f(83.30f, 43.0f);
     glVertex2f(83.30f, 46.0f);

     glEnd();



     glTranslatef(0.0f,4.0f,0.0f);

	 glBegin(GL_LINES);

     glVertex2f(79.50f, 43.0f);
     glVertex2f(79.50f, 46.0f);

     glVertex2f(80.70f, 43.0f);
     glVertex2f(80.70f, 46.0f);

     glVertex2f(82.0f, 43.0f);
     glVertex2f(82.0f, 46.0f);

     glVertex2f(83.30f, 43.0f);
     glVertex2f(83.30f, 46.0f);

     glEnd();


     glTranslatef(0.0f,4.0f,0.0f);

	 glBegin(GL_LINES);

     glVertex2f(79.50f, 43.0f);
     glVertex2f(79.50f, 46.0f);

     glVertex2f(80.70f, 43.0f);
     glVertex2f(80.70f, 46.0f);

     glVertex2f(82.0f, 43.0f);
     glVertex2f(82.0f, 46.0f);

     glVertex2f(83.30f, 43.0f);
     glVertex2f(83.30f, 46.0f);

     glEnd();
     glPopMatrix();


}



void Building8()
{

    //Building8 body
    glBegin(GL_POLYGON);
	glColor3ub(238, 238, 0);

    glVertex2f(86.0f, 42.50f);
    glVertex2f(95.50f, 42.50f);
    glVertex2f(95.50f, 83.0f);
    glVertex2f(86.0f, 83.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(255, 248, 220);

    glVertex2f(88.50f, 43.0f);
    glVertex2f(88.50f, 83.0f);

     glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(255, 248, 220);

    glVertex2f(89.0f, 43.0f);
    glVertex2f(89.0f, 83.0f);

     glEnd();


    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

    glPushMatrix();
    glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();
     glPopMatrix();

}



void NewBuilding1()
{
    glPushMatrix();
    glScalef(0.75,.9,0);
    glTranslatef(55.0f,10.0f,0.0f);
    Building();

    glPopMatrix();


}

void NewBuilding2()
{
    glPushMatrix();
    glScalef(0.75,.9,0);
    glTranslatef(25.0f,10.0f,0.0f);
    Building();

    glPopMatrix();


}


void tree1()
{

    //tree1 body

    glPushMatrix();

    glScalef(0.90,0.50,0);
    glTranslatef(43.50,103.0,0.0);


        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();

}


void tree2()
{

    //tree2 body

    glPushMatrix();
    glScalef(1.50,1.0,0);
    glTranslatef(52.0,-5.0,0.0);


    glLineWidth(10.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

       glLineWidth(4.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();

}


void tree3()
{

    //tree3 body

    glPushMatrix();

    glScalef(-1.80,1.0,0);
    glTranslatef(46.0,6.0,0.0);


    glLineWidth(10.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(4.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree4()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(107.0,-79.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

    glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void tree5()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(103.0,-160.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

    glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void tree6()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(185.0,-160.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void tree7()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(-100.0,-160.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}



void BusStand1()
{

    //BusStand wall big

    glPushMatrix();

    glScalef(1.0,1.0,0);
    glTranslatef(65.0,-22.0,0.0);


        glBegin(GL_POLYGON);
    glColor3ub(178, 34, 34);

	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f( 10.0f, 12.0f);
	glVertex2f( -10.0f, 12.0f);

    glEnd();

    glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);



        glVertex2f(-5.80f, 7.0f);
        glVertex2f(-5.80f,-1.0f);

        glVertex2f(13.50f, 7.0f);
        glVertex2f(13.50f,-1.0f);



        glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);

	glVertex2f(-6.0f, 7.0f);
	glVertex2f(14.0f, 7.0f);
	glVertex2f( 10.0f, 10.0f);
	glVertex2f( -10.0f, 10.0f);

    glEnd();


    glPopMatrix();
}

void tree8()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-60.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void tree9()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-80.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void tree10()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-90.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree11()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-100.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree12()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-110.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree13()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-130.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree14()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-150.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree15()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-170.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void tree16()
{

    //tree16 body

    glPushMatrix();

    glScalef(0.90,0.50,0);
    glTranslatef(52.50,25.0,0.0);


        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void boat1()
{


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(25.0f,0.0f, 0.0f);
    glScalef(0.05,0.05,1);
    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(0.0f,0.0f);
    glVertex2f(150.0f,0.0f);
    glVertex2f(200.0f,50.0f);
    glVertex2f(-50.0f,50.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,25,51);
    glVertex2f(0.0f,50.0f);
    glVertex2f(150.0f,50.0f);
    glVertex2f(150.0f,75.0f);
    glVertex2f(0.0f,75.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(50.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(100.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();
    glPopMatrix();


    glPopMatrix();


}

float moveBoat2=0.0f;                                               //boat2
float speedBoat2= 0.2f;                                               //speed of boat2
void boat2()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(moveBoat2,0.0, 0.0f);
    glTranslatef(25.0f,-50.0f, 0.0f);
    glScalef(0.07,0.05,1);
    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(0.0f,0.0f);
    glVertex2f(150.0f,0.0f);
    glVertex2f(200.0f,50.0f);
    glVertex2f(-50.0f,50.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(0.0f,50.0f);
    glVertex2f(150.0f,50.0f);
    glVertex2f(150.0f,75.0f);
    glVertex2f(0.0f,75.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(50.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(100.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(10.0f,75.0f);
    glVertex2f(40.0f,75.0f);
    glVertex2f(40.0f,100.0f);
    glVertex2f(10.0f,100.0f);
    glEnd();
    glPopMatrix();


    glPopMatrix();


}


void updateBoat2(int value)
{

 if(moveBoat2 <-92)
    {
        speedBoat2=0.0;
    }
    moveBoat2 -= speedBoat2;

    glutPostRedisplay();
    glutTimerFunc(100, updateBoat2, 0);
}
void trafficLight()
{
    glPushMatrix();

    glScalef(.65,1.0,0);
    glTranslatef(0.0,20.0,0.0);


    glBegin(GL_POLYGON);              // light stand
	glColor3ub(47 ,79, 79);

	    // x, y



	glVertex2f(-0.50f, 20.0f);
	glVertex2f(-0.50f, 10.0f);
	glVertex2f(0.50f, 10.0f);
	glVertex2f(0.50f, 20.0f);
	glVertex2f(1.50f, 20.0f);
	glVertex2f(1.50f, 27.0f);
	glVertex2f(-1.50f, 27.0f);
	glVertex2f(-1.50f, 20.0f);

	    // x, y

    glEnd();

    glBegin(GL_POLYGON);// red
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 0, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,26+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// yellow
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,24+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// green
	for(int i=0;i<200;i++)
        {
            glColor3ub(0, 255, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,22+y );
        }



	glEnd();
	glPopMatrix();
}


void BusStand2()
{
    glPushMatrix();
    glScalef(0.45, 0.65, 0.0);
    glTranslatef(62.0f, 66.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(244, 164, 96);

	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f( 10.0f, 12.0f);
	glVertex2f( -10.0f, 12.0f);

    glEnd();

    glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);



        glVertex2f(-5.80f, 7.0f);
        glVertex2f(-5.80f,-1.0f);

        glVertex2f(13.50f, 7.0f);
        glVertex2f(13.50f,-1.0f);



        glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);

	glVertex2f(-6.0f, 7.0f);
	glVertex2f(14.0f, 7.0f);
	glVertex2f( 10.0f, 10.0f);
	glVertex2f( -10.0f, 10.0f);

    glEnd();
    glPopMatrix();


}


float moveRedredBus=0.0f;
float _angleRedredBus1 = 0.0f;
float _angleRedredBus2 = 0.0f;
float speedRedredBus= 0.2f;

void redBus()
{
    //redBus Body

    glPushMatrix();
    glTranslatef(moveRedredBus,-22.0,0.0);
    glScalef(-1.5,1,0);
    glTranslatef(90.0,23.0,0.0);

	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);

	glVertex2f(15.0f, 40.0f);
	glVertex2f(14.30f, 37.0f);
	glVertex2f(14.30f, 33.0f);
	glVertex2f(24.0f, 33.0f);
	glVertex2f(24.0f, 40.0f);

    glEnd();


    //Front glass

    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);

	glVertex2f(15.10f, 39.70f);
	glVertex2f(14.40f, 37.0f);
	glVertex2f(14.40f, 36.0f);
	glVertex2f(16.0f, 36.0f);
	glVertex2f(16.0f, 39.70f);

    glEnd();

    //Door
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(16.70f, 39.50f);
	glVertex2f(16.70f, 33.50f);
	glVertex2f(18.0f, 33.50f);
	glVertex2f(18.0f, 39.50f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();


    glPushMatrix();
    glTranslatef(1.80,0.0,0.0);
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();


    glTranslatef(1.80,0.0,0.0);
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();
    glPopMatrix();


    glBegin(GL_POLYGON);// front tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(15.2+x,33.20+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// front tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(15.2+x,33.20+y );
        }

        glEnd();

    glBegin(GL_POLYGON);// back tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(20.5+x,33.20+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// back tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(20.5+x,33.20+y );
        }
        glEnd();


        glBegin(GL_POLYGON);// back tire2
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(22.5+x,33.20+y );
        }


	glEnd();



	glBegin(GL_POLYGON);// back tire wheel2
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(22.5+x,33.20+y );
        }
        glEnd();


                    //ROTATING TIRE
        glPushMatrix();
        glTranslatef(15.20,33.20,0.0);
        glRotatef(_angleRedredBus1, 0.0f, 0.0f,1.0f);

	    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(128,128,128);


        glVertex2f(0.0f, 0.40f);
        glVertex2f(0.0f, -0.40f);

        glVertex2f(0.40f, 0.0f);
        glVertex2f(-0.40f, 0.0f);


        glEnd();
        glPopMatrix();



        glPushMatrix();
        glTranslatef(20.50,33.20,0.0);
        glRotatef(_angleRedredBus2, 0.0f, 0.0f,1.0f);

	    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(128,128,128);


        glVertex2f(0.0f, 0.40f);
        glVertex2f(0.0f, -0.40f);

        glVertex2f(0.40f, 0.0f);
        glVertex2f(-0.40f, 0.0f);


        glEnd();

        glPopMatrix();


        glPushMatrix();
        glTranslatef(22.50,33.20,0.0);
        glRotatef(_angleRedredBus2, 0.0f, 0.0f,1.0f);

	    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(128,128,128);

        glVertex2f(0.0f, 0.40f);
        glVertex2f(0.0f, -0.40f);

        glVertex2f(0.40f, 0.0f);
        glVertex2f(-0.40f, 0.0f);


        glEnd();

        glPopMatrix();


        glPopMatrix();

}


void updateredBus1(int value)
{

    _angleRedredBus1+=1.5f;
    if(_angleRedredBus1 > 360.0)
    {
        _angleRedredBus1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(1, updateredBus1, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updateredBus2(int value)
{

    _angleRedredBus2+=1.5f;
    if(_angleRedredBus2 > 360.0)
    {
        _angleRedredBus2-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(1, updateredBus2, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updateredBus3(int value)//for ship
{
    moveRedredBus += 0.4;
    if(moveRedredBus > 300)

    {
        moveRedredBus = 10;
    }

    glutPostRedisplay();
    glutTimerFunc(60, updateredBus3, 0);
}



void greenBus()
{
    //greenBus Body

    glPushMatrix();

    glScalef(1.50,1,0);
    glTranslatef(30,-60,35);

	glBegin(GL_POLYGON);
	glColor3ub(107,142,35);

	glVertex2f(15.0f, 40.0f);
	glVertex2f(14.30f, 37.0f);
	glVertex2f(14.30f, 33.0f);

	glVertex2f(24.0f, 33.0f);
	glColor3ub(255,250,250);
	glVertex2f(24.0f, 40.0f);

    glEnd();


    //Front glass

    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);

	glVertex2f(15.10f, 39.70f);
	glVertex2f(14.40f, 37.0f);
	glVertex2f(14.40f, 36.0f);
	glVertex2f(16.0f, 36.0f);
	glVertex2f(16.0f, 39.70f);

    glEnd();

    //Door
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(16.70f, 39.50f);
	glVertex2f(16.70f, 33.50f);
	glVertex2f(18.0f, 33.50f);
	glVertex2f(18.0f, 39.50f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();


    glPushMatrix();
    glTranslatef(1.80,0.0,0.0);
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();


    glTranslatef(1.80,0.0,0.0);
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();
    glPopMatrix();


    glBegin(GL_POLYGON);// front tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(15.2+x,33.20+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// front tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(15.2+x,33.20+y );
        }

        glEnd();

    glBegin(GL_POLYGON);// back tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(20.5+x,33.20+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// back tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(20.5+x,33.20+y );
        }
        glEnd();


        glBegin(GL_POLYGON);// back tire2
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(22.5+x,33.20+y );
        }


	glEnd();



	glBegin(GL_POLYGON);// back tire wheel2
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(22.5+x,33.20+y );
        }
        glEnd();


                    //ROTATING TIRE






        glPopMatrix();

}


void yellowBus()
{
    //yellowBus Body

    glPushMatrix();

    glScalef(-1.0,1,0);
    glTranslatef(-40.0,7.50,0.0);

	glBegin(GL_POLYGON);
	glColor3ub(218,165,32);


	glVertex2f(15.0f, 40.0f);
	glVertex2f(14.30f, 37.0f);
	glVertex2f(14.30f, 33.0f);
	glColor3ub(192,192,192);
	glVertex2f(24.0f, 33.0f);

	glVertex2f(24.0f, 40.0f);

    glEnd();


    //Front glass

    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);

	glVertex2f(15.10f, 39.70f);
	glVertex2f(14.40f, 37.0f);
	glVertex2f(14.40f, 36.0f);
	glVertex2f(16.0f, 36.0f);
	glVertex2f(16.0f, 39.70f);

    glEnd();

    //Door
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(16.70f, 39.50f);
	glVertex2f(16.70f, 33.50f);
	glVertex2f(18.0f, 33.50f);
	glVertex2f(18.0f, 39.50f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();


    glPushMatrix();
    glTranslatef(1.80,0.0,0.0);
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();


    glTranslatef(1.80,0.0,0.0);
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);

	glVertex2f(18.50f, 39.50f);
	glVertex2f(18.50f, 36.50f);
	glVertex2f(20.0f, 36.50f);
	glVertex2f(20.0f, 39.50f);

    glEnd();
    glPopMatrix();


    glBegin(GL_POLYGON);// front tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(15.2+x,33.20+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// front tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(15.2+x,33.20+y );
        }

        glEnd();

    glBegin(GL_POLYGON);// back tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(20.5+x,33.20+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// back tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(20.5+x,33.20+y );
        }
        glEnd();


        glBegin(GL_POLYGON);// back tire2
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.90;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(22.5+x,33.20+y );
        }


	glEnd();



	glBegin(GL_POLYGON);// back tire wheel2
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.60;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(22.5+x,33.20+y );
        }
        glEnd();


                    //ROTATING TIRE






        glPopMatrix();

}


void ParkRoad()
{


	glBegin(GL_QUADS);
	glColor3ub(55, 55, 55);

	glVertex2f(49.80f, -25.0f);
	glVertex2f(49.80f,-32.0f);
	glVertex2f(100.0f,-32.0f);
	glVertex2f(100.0f,-25.0f);


    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

	glVertex2f(49.80f, -25.0f);
	glVertex2f(100.0f,-25.0f);

    glEnd();


    glLineWidth(2.5);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

	glVertex2f(49.80f, -32.0f);
	glVertex2f(100.0f,-32.0f);

    glEnd();



}



void Lamppost()
{

    //road 1
    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(15.0f, 80.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();

    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

    glEnd();

    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();

    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();

    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();

    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();


    //road 2
    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-15.0f, 80.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();

    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();

    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

    glEnd();

    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();

    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();

    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();

    //Road3
    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-45.0f, 80.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

    glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();



    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();

    //Road4

    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-80.0f, 80.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();

    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

    glEnd();

    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();

    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();

    //Road 5

    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-110.0f, 80.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();

    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();

    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

    glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();



    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();

    //Road 6

    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-140.0f, 80.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

    glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();

    //left1

    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-153.90f, 20.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

    glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();



    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();

    //left 2

    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-153.90f, -15.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

     glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();

    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();


    //park left

    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-19.90f, -16.50f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

     glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();

    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();

//park up 1

    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(-10.90f, 10.0f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

     glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();

    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();

    //park up 2

    glPushMatrix();
    glScalef(1, 1, 0.0);
    glTranslatef(15.90f, 10.0f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

    glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

     glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();



    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();

    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

    glEnd();
    glPopMatrix();


}



void Policebox()
{
    //Policebox body
glPushMatrix();
glTranslatef(2.8,-4.5,0);
    glBegin(GL_QUADS);
	glColor3ub(0,139,139);

    glVertex2f(40.0f,10.0f);
    glVertex2f(40.0f, -5.0f);
    glVertex2f(47.0f, -5.0f);
    glVertex2f(47.0f, 10.0f);


     glEnd();


     glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(40.30f,9.50f);
    glVertex2f(40.30f, 3.0f);
    glVertex2f(46.70f, 3.0f);
    glVertex2f(46.70f, 9.50f);


     glEnd();
    glPopMatrix();



    glPushMatrix();

    glTranslatef(43.5,1,0);

    Sprint(.7,0,text);
    glPopMatrix();

}

void moon()
{
    glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {


            glColor3ub(220,220,220);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.5;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-90+x,90+y );
        }



	glEnd();
}

float moveNightWater1 = 0.0f;
float moveNightWater2 = 0.0f;

void nightWater()
{
    glBegin(GL_POLYGON);              //nightWater
    glColor3ub(25, 25, 112);



    glVertex2f(-70.0f, -100.0f);
    glVertex2f(40.0f, -100.0f);
    glColor3ub(191, 239, 255);
    glVertex2f(31.0f, 15.0f);
    glColor3ub(25, 25, 112);
    glVertex2f(-65.0f, 15.0f);

    glEnd();


    glBegin(GL_QUADS);              //nightWater
    glColor3ub(238, 207, 161);



    glVertex2f(-71.0f, -100.0f);
    glVertex2f(-70.0f, -100.0f);
    glColor3ub(139, 121, 94);
    glVertex2f(-65.0f, 15.0f);
    glVertex2f(-70.0f, 15.0f);

    glEnd();


    glBegin(GL_QUADS);              //nightWater
    glColor3ub(238, 207, 161);



    glVertex2f(40.0f, -100.0f);
    glVertex2f(42.0f, -100.0f);
     glColor3ub(139, 121, 94);
    glVertex2f(35.0f, 15.0f);
    glVertex2f(31.0f, 15.0f);

    glEnd();



    glPushMatrix();
    glTranslatef(moveNightWater1,0.0,0.0);
    glLineWidth(1.0);
    glBegin(GL_LINES);              //moving nightWater
    glColor3ub(255,255,255);


    glVertex2f(-65.0f, -80.0f);    // x, y
    glVertex2f(-61.0f, -80.0f);

    glVertex2f(-50.0f, -80.0f);    // x, y
    glVertex2f(-56.0f, -80.0f);

    glVertex2f(-48.0f, -81.0f);    // x, y
    glVertex2f(-58.0f, -81.0f);

    glVertex2f(-30.0f, -81.0f);    // x, y
    glVertex2f(-38.0f, -81.0f);

    glVertex2f(-32.0f, -75.0f);    // x, y
    glVertex2f(-39.0f, -75.0f);

    glVertex2f(-29.0f, -71.0f);    // x, y
    glVertex2f(-39.0f, -71.0f);

    glVertex2f(-10.0f, -60.0f);    // x, y
    glVertex2f(-4.0f, -60.0f);

    glVertex2f(-55.0f, -50.0f);    // x, y
    glVertex2f(-44.0f, -50.0f);

    glVertex2f(-8.0f, -65.0f);    // x, y
    glVertex2f(-16.0f, -65.0f);

    glVertex2f(-50.0f, -65.0f);    // x, y
    glVertex2f(-39.0f, -65.0f);





    glVertex2f(-15.0f, 10.0f);    // x, y
    glVertex2f(-26.0f, 10.0f);

    glVertex2f(-14.0f, 9.0f);    // x, y
    glVertex2f(-28.0f, 9.0f);

    glVertex2f(-10.0f, -19.0f);    // x, y
    glVertex2f(-18.0f, -19.0f);

    glVertex2f(-20.0f, -19.0f);    // x, y
    glVertex2f(-18.0f, -19.0f);

    glVertex2f(-50.0f, 14.0f);    // x, y
    glVertex2f(-58.0f, 14.0f);

    glVertex2f(-60.0f, 11.0f);    // x, y
    glVertex2f(-66.0f, 11.0f);

    glVertex2f(-40.0f, 6.0f);    // x, y
    glVertex2f(-49.0f, 6.0f);

    glVertex2f(-60.0f, -31.0f);    // x, y
    glVertex2f(-66.0f, -31.0f);

    glVertex2f(-40.0f, -32.0f);    // x, y
    glVertex2f(-46.0f, -32.0f);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(moveNightWater2,0.0,0.0);
    glLineWidth(1.0);
    glBegin(GL_LINES);              //moving nightWater
    glColor3ub(255,255,255);






    glVertex2f(29.0f, -71.0f);    // x, y
    glVertex2f(39.0f, -71.0f);

    glVertex2f(15.0f, 9.0f);    // x, y
    glVertex2f(22.0f, 9.0f);

    glVertex2f(10.0f, -19.0f);    // x, y
    glVertex2f(18.0f, -19.0f);

    glVertex2f(20.0f, -21.0f);    // x, y
    glVertex2f(18.0f, -21.0f);

    glVertex2f(20.0f, -29.0f);    // x, y
    glVertex2f(28.0f, -29.0f);

    glVertex2f(0.0f, -35.0f);    // x, y
    glVertex2f(-9.0f, -35.0f);

    glEnd();
    glPopMatrix();


}


void updateNightWater1(int value)//for nightWater
{
    moveNightWater1 += 2.2;
    if(moveNightWater1 > 40)

    {
        moveNightWater1 = -2;
    }

    glutPostRedisplay();
    glutTimerFunc(200, updateNightWater1, 0);
}

void updateNightWater2(int value)//for nightWater
{
    moveNightWater2 -= 2.2;
    if(moveNightWater2 < -60)

    {
        moveNightWater2 = 3;
    }

    glutPostRedisplay();
    glutTimerFunc(200, updateNightWater2, 0);
}


void nightSky()                       // nightSky body
{
    glBegin(GL_POLYGON);
	glColor3ub(16, 78, 139);


    glVertex2f(-100.0f, 45.0f);

	glVertex2f(100.0f, 45.0f);
    glVertex2f( 100.0f, 100.0f);
    glColor3ub(75,0,130);
    glVertex2f( -100.0f, 100.0f);



    glEnd();
}

void stars()
{
    glPointSize( 3.5 );
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(80.0f,80.0f);
    glVertex2f(75.0f,81.0f);
    glVertex2f(65.0f,87.0f);
    glVertex2f(60.0f,85.0f);
    glVertex2f(75.0f,81.0f);
    glVertex2f(54.0f,78.0f);
    glVertex2f(45.0f,90.0f);
    glVertex2f(39.0f,60.0f);
    glVertex2f(20.0f,90.0f);
    glVertex2f(10.0f,84.0f);
    glVertex2f(0.0f,82.0f);
    glVertex2f(-80.0f,80.0f);
    glVertex2f(-75.0f,81.0f);
    glVertex2f(-65.0f,87.0f);
    glVertex2f(-60.0f,85.0f);
    glVertex2f(-5.0f,81.0f);
    glVertex2f(-54.0f,78.0f);
    glVertex2f(-45.0f,90.0f);
    glVertex2f(-39.0f,60.0f);
    glVertex2f(-20.0f,90.0f);
    glVertex2f(-10.0f,84.0f);
    glVertex2f(0.0f,89.0f);
    glVertex2f(-87.0f,81.0f);
    glVertex2f(-75.0f,86.0f);
    glVertex2f(75.0f,81.0f);









    glEnd();

}


float movenightCloud12=0.0f;
float movenightCloud3=0.0f;

void nightCloud()
{
    glPushMatrix();
    glTranslatef(movenightCloud12,0.0,0.0);
    glBegin(GL_POLYGON);// 1st nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(+x,80+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2+x,78+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2+x,76+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(4+x,78+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// 2nd nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-80+x,70+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-78+x,68+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-76+x,72+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-74+x,74+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-72+x,70+y );
        }



	glEnd();

	glPopMatrix();



    glPushMatrix();
    glTranslatef(movenightCloud3,0.0,0.0);
	glBegin(GL_POLYGON);// 3rd nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(80+x,90+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(78+x,88+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(81+x,86+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// nightCloud
	for(int i=0;i<200;i++)
        {
            glColor3ub(169,169,169);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(83+x,89+y );
        }



	glEnd();
	glPopMatrix();

}

void updatenightCloud12(int value)
{
    movenightCloud12 += 0.9;
    if(movenightCloud12 > 180)

    {
        movenightCloud12 = -180;
    }

    glutPostRedisplay();
    glutTimerFunc(180, updatenightCloud12, 0);
}

void updatenightCloud3(int value)
{
    movenightCloud3 -= 0.9;
    if(movenightCloud3 < -180)

    {
        movenightCloud3 = 180;
    }

    glutPostRedisplay();
    glutTimerFunc(180, updatenightCloud3, 0);
}


void NightBuilding()
{

    //Buildings infront of park
    glBegin(GL_POLYGON);
	glColor3ub(139, 137, 137);


	glVertex2f(50.0f, -30.0f);
	glVertex2f(75.0f, -30.0f);
	glVertex2f(75.0f, 14.0f);
	glVertex2f(74.0f, 14.0f);
	glVertex2f(74.0f, 15.0f);
	glVertex2f(51.0f, 15.0f);
	glVertex2f(51.0f, 14.0f);
	glVertex2f(50.0f, 14.0f);


   glEnd();


//Building Rooftop design


    glBegin(GL_QUADS);
	glColor3ub(139, 137, 137);

    glVertex2f(56.0f, 15.0f);
    glVertex2f(69.0f, 15.0f);
	glVertex2f(69.0f, 18.0f);
	glVertex2f(56.0f, 18.0f);

	glEnd();




    glBegin(GL_QUADS);
	glColor3ub(139, 137, 137);

    glVertex2f(59.0f, 18.0f);
    glVertex2f(66.0f, 18.0f);
    glVertex2f(66.0f, 20.0f);
    glVertex2f(59.0f, 20.0f);

	glEnd();


	//Block Gates Design Left
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(55.0f, -29.0f);
    glVertex2f(62.0f, -29.0f);
    glVertex2f(62.0f, 13.0f);
    glVertex2f(55.0f, 13.0f);

	glEnd();



//Block Gates Design Right
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(63.0f, -29.0f);
    glVertex2f(70.0f, -29.0f);
    glVertex2f(70.0f, 13.0f);
    glVertex2f(63.0f, 13.0f);

	glEnd();


	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 0);

	glVertex2f(50.0f, 14.0f);    // x, y
	glVertex2f(75.0f, 14.0f);

    glEnd();



	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 0);

	glVertex2f(51.0f, 15.0f);    // x, y
	glVertex2f(74.0f, 15.0f);

    glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 0);

	glVertex2f(56.0f, 18.0f);    // x, y
	glVertex2f(69.0f, 18.0f);

    glEnd();


    glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(65, 65, 65);

	glVertex2f(50.0f, -30.50f);    // x, y
	glVertex2f(75.0f, -30.50f);

    glEnd();



    //Building Window L

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(50.5f, -21.0f);
    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(50.5f, -18.0f);
    glVertex2f(50.5f, -13.0f);
    glVertex2f(52.5f, -13.0f);
    glVertex2f(52.5f, -18.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(50.5f, -5.0f);
    glVertex2f(50.5f, -10.0f);
    glVertex2f(52.5f, -10.0f);
    glVertex2f(52.5f, -5.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(50.5f, 3.0f);
    glVertex2f(50.5f, -2.0f);
    glVertex2f(52.5f, -2.0f);
    glVertex2f(52.5f, 3.0f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(50.5f, 11.0f);
    glVertex2f(50.5f, 6.0f);
    glVertex2f(52.5f, 6.0f);
    glVertex2f(52.5f, 11.0f);

    glEnd();


    //Window Divider

     glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -18.0f);    // x, y
	glVertex2f(51.5f, -13.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -5.0f);    // x, y
	glVertex2f(51.5f, -10.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, 3.0f);    // x, y
	glVertex2f(51.5f, -2.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, 11.0f);    // x, y
	glVertex2f(51.5f, 6.0f);

    glEnd();


    //Building Small Window L

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(53.0f, -15.0f);
    glVertex2f(54.5f, -15.0f);
    glVertex2f(54.5f, -12.0f);
    glVertex2f(53.0f, -12.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(53.0f, -7.0f);
    glVertex2f(54.5f, -7.0f);
    glVertex2f(54.5f, -4.0f);
    glVertex2f(53.0f, -4.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(53.0f, 1.0f);
    glVertex2f(54.5f, 1.0f);
    glVertex2f(54.5f, 4.0f);
    glVertex2f(53.0f, 4.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(53.0f, 9.0f);
    glVertex2f(54.5f, 9.0f);
    glVertex2f(54.5f, 12.0f);
    glVertex2f(53.0f, 12.0f);

    glEnd();



    //Building Window Right

 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(72.5f, -18.0f);
    glVertex2f(74.5f, -18.0f);
    glVertex2f(74.5f, -13.0f);
    glVertex2f(72.5f, -13.0f);

    glEnd();


     glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(72.5f, -5.0f);
    glVertex2f(72.5f, -10.0f);
    glVertex2f(74.5f, -10.0f);
    glVertex2f(74.5f, -5.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(72.5f, 3.0f);
    glVertex2f(72.5f, -2.0f);
    glVertex2f(74.5f, -2.0f);
    glVertex2f(74.5f, 3.0f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(72.5f, 11.0f);
    glVertex2f(72.5f, 6.0f);
    glVertex2f(74.5f, 6.0f);
    glVertex2f(74.5f, 11.0f);

    glEnd();




     //Window Divider R

     glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -18.0f);    // x, y
	glVertex2f(73.5f, -13.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -5.0f);    // x, y
	glVertex2f(73.5f, -10.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, 3.0f);    // x, y
	glVertex2f(73.5f, -2.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, 11.0f);    // x, y
	glVertex2f(73.5f, 6.0f);

    glEnd();





    //Building small windows Right


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(70.5f, -15.0f);
    glVertex2f(72.0f, -15.0f);
    glVertex2f(72.0f, -12.0f);
    glVertex2f(70.5f, -12.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(70.5f, -7.0f);
    glVertex2f(72.0f, -7.0f);
    glVertex2f(72.0f, -4.0f);
    glVertex2f(70.5f, -4.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(70.5f, 1.0f);
    glVertex2f(72.0f, 1.0f);
    glVertex2f(72.0f, 4.0f);
    glVertex2f(70.5f, 4.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(70.5f, 9.0f);
    glVertex2f(72.0f, 9.0f);
    glVertex2f(72.0f, 12.0f);
    glVertex2f(70.5f, 12.0f);

    glEnd();



     //Building Door Left

	glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(55.7f, -29.0f);
    glVertex2f(61.3f, -29.0f);
    glVertex2f(61.3f, -22.0f);
    glVertex2f(55.7f, -22.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(57.55f, -29.0f);
    glVertex2f(57.55f, -22.2f);

     glEnd();

     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(59.4f, -29.0f);
    glVertex2f(59.4f, -22.2f);

     glEnd();

     //Building Door Right

	glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(63.7f, -29.0f);
    glVertex2f(69.3f, -29.0f);
    glVertex2f(69.3f, -22.0f);
    glVertex2f(63.7f, -22.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(65.55f, -29.0f);
    glVertex2f(65.55f, -22.2f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(67.4f, -29.0f);
    glVertex2f(67.4f, -22.2f);

     glEnd();




   //Building Middle small Window Left

	glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);

     glEnd();


     glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(55.7f, -12.0f);
    glVertex2f(57.7f, -12.0f);
    glVertex2f(57.7f, -6.0f);
    glVertex2f(55.7f, -6.0f);

     glEnd();


      glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(55.7f, -4.0f);
    glVertex2f(57.7f, -4.0f);
    glVertex2f(57.7f, 2.0f);
    glVertex2f(55.7f, 2.0f);

     glEnd();


      glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(55.7f, 4.0f);
    glVertex2f(57.7f, 4.0f);
    glVertex2f(57.7f, 10.0f);
    glVertex2f(55.7f, 10.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(56.7f, -20.0f);
    glVertex2f(56.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(56.7f, -12.0f);
    glVertex2f(56.7f, -6.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(56.7f, -4.0f);
    glVertex2f(56.7f, 2.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(56.7f, 4.0f);
    glVertex2f(56.7f, 10.0f);

     glEnd();



     //Building Middle Big Window

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

      glEnd();


      glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(58.3f, -12.0f);
    glVertex2f(61.3f, -12.0f);
    glVertex2f(61.3f, -6.0f);
    glVertex2f(58.3f, -6.0f);

      glEnd();


       glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(58.3f, -4.0f);
    glVertex2f(61.3f, -4.0f);
    glVertex2f(61.3f, 2.0f);
    glVertex2f(58.3f, 2.0f);

      glEnd();


       glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(58.3f, 4.0f);
    glVertex2f(61.3f, 4.0f);
    glVertex2f(61.3f, 10.0f);
    glVertex2f(58.3f, 10.0f);

      glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(59.3f, -20.0f);
    glVertex2f(59.3f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(60.3f, -20.0f);
    glVertex2f(60.3f, -14.0f);

     glEnd();



     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(59.3f, -12.0f);
    glVertex2f(59.3f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(60.3f, -12.0f);
    glVertex2f(60.3f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(59.3f, -4.0f);
    glVertex2f(59.3f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(60.3f, -4.0f);
    glVertex2f(60.3f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(59.3f, 4.0f);
    glVertex2f(59.3f, 10.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(60.3f, 4.0f);
    glVertex2f(60.3f, 10.0f);

     glEnd();




    //Building Middle Big Window R

	glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(63.7f, -12.0f);
    glVertex2f(66.7f, -12.0f);
    glVertex2f(66.7f, -6.0f);
    glVertex2f(63.7f, -6.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(63.7f, -4.0f);
    glVertex2f(66.7f, -4.0f);
    glVertex2f(66.7f, 2.0f);
    glVertex2f(63.7f, 2.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(63.7f, 4.0f);
    glVertex2f(66.7f, 4.0f);
    glVertex2f(66.7f, 10.0f);
    glVertex2f(63.7f, 10.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(64.7f, -20.0f);
    glVertex2f(64.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(65.7f, -20.0f);
    glVertex2f(65.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(64.7f, -12.0f);
    glVertex2f(64.7f, -6.0f);

     glEnd();


      glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(65.7f, -12.0f);
    glVertex2f(65.7f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(64.7f, -4.0f);
    glVertex2f(64.7f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(65.7f, -4.0f);
    glVertex2f(65.7f, 2.0f);

     glEnd();



     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(64.7f, 4.0f);
    glVertex2f(64.7f, 10.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(65.7f, 4.0f);
    glVertex2f(65.7f, 10.0f);

     glEnd();



    //Building Middle small Window R

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(66.9f, -12.0f);
    glVertex2f(68.9f, -12.0f);
    glVertex2f(68.9f, -6.0f);
    glVertex2f(66.9f, -6.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(66.9f, -4.0f);
    glVertex2f(68.9f, -4.0f);
    glVertex2f(68.9f, 2.0f);
    glVertex2f(66.9f, 2.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

    glVertex2f(66.9f, 4.0f);
    glVertex2f(68.9f, 4.0f);
    glVertex2f(68.9f,10.0f);
    glVertex2f(66.9f, 10.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(67.9f, -20.0f);
    glVertex2f(67.9f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(67.9f, -12.0f);
    glVertex2f(67.9f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(67.9f, -4.0f);
    glVertex2f(67.9f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(1,1,1);

    glVertex2f(67.9f, 4.0f);
    glVertex2f(67.9f, 10.0f);

     glEnd();
    glPopMatrix();


}

void NightNewBuilding1()
{
    glPushMatrix();
    glScalef(0.75,.9,0);
    glTranslatef(55.0f,10.0f,0.0f);
    NightBuilding();

    glPopMatrix();


}

void NightNewBuilding2()
{
    glPushMatrix();
    glScalef(0.75,.9,0);
    glTranslatef(25.0f,10.0f,0.0f);
    NightBuilding();

    glPopMatrix();


}

void NightBuilding3()
{

    //Building3 body

    glBegin(GL_POLYGON);
	glColor3ub(71, 71, 71);

    glVertex2f(50.0f, 42.50f);
    glVertex2f(55.0f, 42.50f);
    glVertex2f(55.0f, 75.0f);
    glVertex2f(50.0f, 77.50f);

     glEnd();

    glPushMatrix();
    glTranslatef(-7.3,0,0);


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(58.0f, 43.50f);
    glVertex2f(62.0f, 43.50f);

     glEnd();

     glPushMatrix();
     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();



     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();
     glPopMatrix();

    glPopMatrix();


}

void NightBuilding4()
{

    //Building4 Body

    glBegin(GL_POLYGON);
	glColor3ub(71, 71, 71);

    glVertex2f(57.50f, 42.50f);
    glVertex2f(62.50f, 42.50f);
    glVertex2f(62.50f, 77.50f);
    glVertex2f(57.50f, 75.0f);

     glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(58.0f, 43.50f);
    glVertex2f(62.0f, 43.50f);

     glEnd();

     glPushMatrix();
     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();



     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();


     glTranslatef(0.0f,1.50f,0.0f);
     glLineWidth(3.0);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(58.0f, 43.50f);
     glVertex2f(62.0f, 43.50f);

     glEnd();
     glPopMatrix();

}


void NightBuilding5()
{

    //Building5 body
    glBegin(GL_POLYGON);
	glColor3ub(71, 71, 71);

    glVertex2f(63.50f, 42.50f);
    glVertex2f(71.50f, 42.50f);
    glVertex2f(71.50f, 73.0f);
    glVertex2f(63.50f, 73.0f);

     glEnd();


     glLineWidth(2.70);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.0f, 43.0f);
    glVertex2f(71.0f, 43.0f);

     glEnd();

     glPushMatrix();
     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
     glLineWidth(2.70);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(64.0f, 43.0f);
     glVertex2f(71.0f, 43.0f);

     glEnd();
     glPopMatrix();

}


void NightBuilding6()
{

    //Building6 body

	 glBegin(GL_QUADS);
	 glColor3ub(71, 71, 71);

     glVertex2f(72.0f, 42.50f);
     glVertex2f(76.0f, 42.50f);
     glVertex2f(76.0f, 62.0f);
     glVertex2f(72.0f, 62.0f);

     glEnd();


     glBegin(GL_QUADS);
	 glColor3ub(71, 71, 71);

     glVertex2f(72.10f, 62.0f);
     glVertex2f(75.90f, 62.0f);
     glVertex2f(75.90f, 74.0f);
     glVertex2f(72.10f, 74.0f);

     glEnd();

     glBegin(GL_QUADS);
	 glColor3ub(25, 25, 112);

     glVertex2f(72.50f, 74.0f);
     glVertex2f(75.50f, 74.0f);
     glVertex2f(75.50f, 75.0f);
     glVertex2f(72.50f, 75.0f);

     glEnd();


     glBegin(GL_QUADS);
	 glColor3ub(25, 25, 112);

     glVertex2f(73.0f, 75.0f);
     glVertex2f(75.0f, 75.0f);
     glVertex2f(75.0f, 76.0f);
     glVertex2f(73.0f, 76.0f);

     glEnd();

     glBegin(GL_QUADS);
	 glColor3ub(25, 25, 112);

     glVertex2f(73.50f, 76.0f);
     glVertex2f(74.50f, 76.0f);
     glVertex2f(74.50f, 77.0f);
     glVertex2f(73.50f, 77.0f);

     glEnd();


     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(25, 25, 112);

     glVertex2f(74.00f, 81.0f);
     glVertex2f(74.00f, 77.0f);

     glEnd();

     glLineWidth(7.5);
	 glBegin(GL_LINES);
	 glColor3ub(25, 25, 112);

     glVertex2f(72.0f, 61.0f);
     glVertex2f(76.10f, 61.0f);

     glEnd();


    glLineWidth(1.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(72.30f, 60.30f);
    glVertex2f(72.30f, 43.0f);

     glEnd();


     glLineWidth(1.40);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(72.50f, 62.10f);
    glVertex2f(72.50f, 74.0f);

     glEnd();

     glPushMatrix();
     glTranslatef(0.80f,0.0f,0.0f);
     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.30f, 60.30f);
     glVertex2f(72.30f, 43.0f);

     glEnd();

     glLineWidth(1.40);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(72.50f, 62.10f);
    glVertex2f(72.50f, 74.0f);

     glEnd();


     glTranslatef(0.80f,0.0f,0.0f);
     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.30f, 60.30f);
     glVertex2f(72.30f, 43.0f);

     glEnd();

     glLineWidth(1.40);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(72.50f, 62.10f);
    glVertex2f(72.50f, 74.0f);

     glEnd();


     glTranslatef(0.80f,0.0f,0.0f);
     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.30f, 60.30f);
     glVertex2f(72.30f, 43.0f);

     glEnd();

     glLineWidth(1.40);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(72.50f, 62.10f);
    glVertex2f(72.50f, 74.0f);

     glEnd();


     glTranslatef(0.80f,0.0f,0.0f);
     glLineWidth(1.5);
	 glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);

     glVertex2f(72.30f, 60.30f);
     glVertex2f(72.30f, 43.0f);

     glEnd();

     glLineWidth(1.40);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(72.50f, 62.10f);
    glVertex2f(72.50f, 74.0f);

     glEnd();
     glPopMatrix();
}

void NightBuilding7()
{

    //Building7 Body

	glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);

    glVertex2f(78.50f, 42.50f);
    glVertex2f(78.50f, 60.0f);
    glVertex2f(84.50f, 60.0f);
    glVertex2f(84.50f, 42.50f);

     glEnd();


    glBegin(GL_QUADS);
	glColor3ub(20, 20, 20);

    glVertex2f(77.70f, 59.0f);
    glVertex2f(85.20f, 59.0f);
    glVertex2f(84.0f, 62.0f);
    glVertex2f(79.0f, 62.0f);

    glEnd();

     glLineWidth(7.70);
	 glBegin(GL_LINES);
	 glColor3ub(139, 35, 35);

     glVertex2f(79.50f, 43.0f);
     glVertex2f(79.50f, 46.0f);

     glVertex2f(80.70f, 43.0f);
     glVertex2f(80.70f, 46.0f);

     glVertex2f(82.0f, 43.0f);
     glVertex2f(82.0f, 46.0f);

     glVertex2f(83.30f, 43.0f);
     glVertex2f(83.30f, 46.0f);

     glEnd();


     glPushMatrix();
     glTranslatef(0.0f,4.0f,0.0f);

	 glBegin(GL_LINES);

     glVertex2f(79.50f, 43.0f);
     glVertex2f(79.50f, 46.0f);

     glVertex2f(80.70f, 43.0f);
     glVertex2f(80.70f, 46.0f);

     glVertex2f(82.0f, 43.0f);
     glVertex2f(82.0f, 46.0f);

     glVertex2f(83.30f, 43.0f);
     glVertex2f(83.30f, 46.0f);

     glEnd();


     glTranslatef(0.0f,4.0f,0.0f);

	 glBegin(GL_LINES);

     glVertex2f(79.50f, 43.0f);
     glVertex2f(79.50f, 46.0f);

     glVertex2f(80.70f, 43.0f);
     glVertex2f(80.70f, 46.0f);

     glVertex2f(82.0f, 43.0f);
     glVertex2f(82.0f, 46.0f);

     glVertex2f(83.30f, 43.0f);
     glVertex2f(83.30f, 46.0f);

     glEnd();


     glTranslatef(0.0f,4.0f,0.0f);

	 glBegin(GL_LINES);

     glVertex2f(79.50f, 43.0f);
     glVertex2f(79.50f, 46.0f);

     glVertex2f(80.70f, 43.0f);
     glVertex2f(80.70f, 46.0f);

     glVertex2f(82.0f, 43.0f);
     glVertex2f(82.0f, 46.0f);

     glVertex2f(83.30f, 43.0f);
     glVertex2f(83.30f, 46.0f);

     glEnd();
     glPopMatrix();


}

void NightBuilding8()
{

    //Building8 body
    glBegin(GL_POLYGON);
	glColor3ub(71, 71, 71);

    glVertex2f(86.0f, 42.50f);
    glVertex2f(95.50f, 42.50f);
    glVertex2f(95.50f, 83.0f);
    glVertex2f(86.0f, 83.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(255, 248, 220);

    glVertex2f(88.50f, 43.0f);
    glVertex2f(88.50f, 83.0f);

     glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(255, 248, 220);

    glVertex2f(89.0f, 43.0f);
    glVertex2f(89.0f, 83.0f);

     glEnd();


    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

    glPushMatrix();
    glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();



     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();

     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();


     glTranslatef(0.0f,1.20f,0.0f);
    glLineWidth(2.30);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(86.50f, 43.0f);
    glVertex2f(95.0f, 43.0f);

     glEnd();
     glPopMatrix();

}


void Nighttree1()
{

    //tree1 body

    glPushMatrix();

    glScalef(0.90,0.50,0);
    glTranslatef(43.50,103.0,0.0);


        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();
}


void Nighttree2()
{

    //tree2 body

    glPushMatrix();
    glScalef(1.50,1.0,0);
    glTranslatef(52.0,-5.0,0.0);


    glLineWidth(10.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

       glLineWidth(4.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();
}

void Nighttree3()
{

    //tree3 body

    glPushMatrix();

    glScalef(-1.80,1.0,0);
    glTranslatef(46.0,6.0,0.0);


    glLineWidth(10.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(4.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void Nighttree4()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(107.0,-79.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

    glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void Nighttree5()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(103.0,-160.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

    glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void Nighttree6()
{


    glPushMatrix();

    glScalef(0.50,0.50,0);
    glTranslatef(185.0,-160.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void Nighttree7()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(-100.0,-160.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void Nighttree8()
{
    glPushMatrix();
    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-60.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void Nighttree9()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-80.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}

void Nighttree10()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-90.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void Nighttree11()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-100.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void Nighttree12()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-110.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void Nighttree13()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-130.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void Nighttree14()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-150.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void Nighttree15()
{


    glPushMatrix();

    glScalef(-0.70,0.50,0);
    glTranslatef(135.0,-170.0,0.0);


    glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
          // x, y
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);              // railing
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();



}


void Nighttree16()
{

    //tree16 body

    glPushMatrix();

    glScalef(0.90,0.50,0);
    glTranslatef(52.50,25.0,0.0);


        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(105, 139, 105);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();

}

void NightPark()
{

   // Park Body


   glBegin(GL_QUADS);
	glColor3ub(105, 180, 105);

    glVertex2f(50.20f, -35.0f);
    glVertex2f(50.20f, -100.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, -35.0f);

    glEnd();


   //Park Upper Road

	glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(51.0f, -46.0f);
    glVertex2f(100.0f, -46.0f);
    glVertex2f(100.0f, -40.0f);
    glVertex2f(51.0f, -40.0f);

    glEnd();

    //Park Down Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(51.0f, -100.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, -94.0f);
    glVertex2f(51.0f, -94.0f);

    glEnd();


    //Park Middle 1st Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(58.0f, -46.0f);
    glVertex2f(58.0f, -94.0f);
    glVertex2f(62.0f, -94.0f);
    glVertex2f(62.0f, -46.0f);

    glEnd();

    //Park Middle 2nd Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(74.0f, -46.0f);
    glVertex2f(74.0f, -94.0f);
    glVertex2f(78.0f, -94.0f);
    glVertex2f(78.0f, -46.0f);

    glEnd();

    //Park Middle 3rd Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(96.0f, -46.0f);
    glVertex2f(96.0f, -94.0f);
    glVertex2f(100.0f, -94.0f);
    glVertex2f(100.0f, -46.0f);

    glEnd();





      //Park Chair

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(65.0f, -41.0f);
    glVertex2f(65.0f, -43.0f);
    glVertex2f(70.0f, -43.0f);
    glVertex2f(70.0f, -41.0f);

    glEnd();


     glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(65.0f, -44.0f);
    glVertex2f(65.0f, -46.0f);
    glVertex2f(70.0f, -46.0f);
    glVertex2f(70.0f, -44.0f);

    glEnd();


    glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(65.0f, -41.0f);
    glVertex2f(65.0f, -46.50f);

     glEnd();



     glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.0f, -41.0f);
    glVertex2f(70.0f, -46.50f);

     glEnd();


     glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(67.50f, -41.0f);
    glVertex2f(67.50f, -46.50f);

     glEnd();


    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.75f, -46.50f);
	glVertex2f(64.50f, -48.0f);
	glVertex2f(70.50f, -48.0f);
	glVertex2f(70.25f, -46.50f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.50f, -48.0f);
	glVertex2f(64.0f, -49.50f);
	glVertex2f(71.0f, -49.50f);
	glVertex2f(70.50f, -48.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(64.0f, -49.50f);
	glVertex2f(64.0f, -50.50f);
	glVertex2f(71.0f, -50.50f);
	glVertex2f(71.0f, -49.50f);

    glEnd();


    glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(64.50f, -50.50f);
    glVertex2f(64.50f, -54.0f);

     glEnd();


// Chair Stand

    glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.50f, -50.50f);
    glVertex2f(70.50f, -54.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(65.25f, -50.50f);
    glVertex2f(65.25f, -53.00f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(69.75f, -50.50f);
    glVertex2f(69.75f, -53.00f);

     glEnd();

    //Chair Handle

     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(65.0f, -43.0f);
    glVertex2f(64.0f, -48.50f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(64.0f, -48.5f);
    glVertex2f(64.0f, -50.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(70.0f, -43.0f);
    glVertex2f(71.0f, -48.50f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(71.0f, -48.5f);
    glVertex2f(71.0f, -50.0f);

     glEnd();




     //Swing


    glLineWidth(6.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(84.0f, -42.0f);
    glVertex2f(90.0f, -42.0f);

     glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(82.0f, -56.0f);

     glEnd();


     glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(81.0f, -56.0f);
    glVertex2f(83.0f, -56.0f);

     glEnd();


    glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(92.0f, -56.0f);

     glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(3, 3, 3);

    glVertex2f(91.0f, -56.0f);
    glVertex2f(93.0f, -56.0f);

     glEnd();


     //Swing Shape


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(86.0f, -52.0f);

     glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(88.0f, -52.0f);

    glEnd();


    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(85.0f, -42.0f);
    glVertex2f(85.5f, -53.0f);

     glEnd();


      glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(139, 58, 58);

    glVertex2f(89.0f, -42.0f);
    glVertex2f(88.5f, -53.0f);

     glEnd();


     glBegin(GL_QUADS);
	glColor3ub(232, 232, 232);

    glVertex2f(85.5f, -51.5f);
	glVertex2f(85.0f, -53.0f);
	glVertex2f(89.0f, -53.0f);
	glVertex2f(88.5f, -51.5f);

    glEnd();

}

void University()
{
    glPushMatrix();
    glTranslatef(0.0, -15.0,0.0);
    //annex 1
    glBegin(GL_QUADS);
	glColor3ub(255, 250, 250);


	glVertex2f(-100.0f, 60.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-85.0f, 80.0f);
    glVertex2f(-100.0f, 70.0f);

	glEnd();


    //annex 2

    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-85.0f, 90.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);



	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();


	//annex 3 and EWU
	glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-75.0f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-60.0f, 90.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

    //annex 4 final

    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-50.0f, 60.0f);
	glVertex2f(-50.0f, 88.0f);
    glVertex2f(-60.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(205, 193, 197);


	glVertex2f(-72.5f, 60.0f);
	glVertex2f(-62.5f, 60.0f);
	glVertex2f(-62.5f, 70.0f);
    glVertex2f(-72.5f, 70.0f);

	glEnd();


	 glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);


	glVertex2f(-71.5f, 72.0f);
	glVertex2f(-63.5f, 72.0f);
	glVertex2f(-60.0f, 75.0f);
    glVertex2f(-75.0f, 75.0f);

	glEnd();

	//for annex 1
	glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);

	glVertex2f(-99.0f,70.0f);
	glVertex2f(-99.0f, 66.0f);
	glVertex2f(-93.0f, 66.0f);
    glVertex2f(-93.0f, 74.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);

	glVertex2f(-91.0f, 75.0f);
	glVertex2f(-91.0f, 66.0f);
	glVertex2f(-86.0f, 66.0f);
    glVertex2f(-86.0f, 79.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);

	glVertex2f(-91.0f, 65.0f);
	glVertex2f(-91.0f, 61.0f);
	glVertex2f(-86.0f, 61.0f);
    glVertex2f(-86.0f, 65.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-99.0f, 65.0f);
	glVertex2f(-99.0f, 61.0f);
	glVertex2f(-93.0f, 61.0f);
    glVertex2f(-93.0f, 65.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();

	glBegin(GL_QUADS);  //window 1
	glColor3ub(139,137, 137);


	glVertex2f(-84.0f, 88.0f);
	glVertex2f(-84.0f, 85.0f);
	glVertex2f(-81.0f, 85.0f);
    glVertex2f(-81.0f, 88.0f);

	glEnd();

    glBegin(GL_QUADS);  // window 2
	glColor3ub(139,137, 137);


	glVertex2f(-78.0f, 88.0f);
	glVertex2f(-78.0f, 85.0f);
	glVertex2f(-76.0f, 85.0f);
    glVertex2f(-76.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);  // window 3
	glColor3ub(139,137, 137);

	glVertex2f(-84.0f, 84.0f);
	glVertex2f(-84.0f, 81.0f);
	glVertex2f(-81.0f, 81.0f);
    glVertex2f(-81.0f, 84.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(139,137, 137);

	glVertex2f(-78.0f, 84.0f);
	glVertex2f(-78.0f, 81.0f);
	glVertex2f(-76.0f, 81.0f);
    glVertex2f(-76.0f, 84.0f);
	glEnd();

     glBegin(GL_QUADS);  // window 5
	glColor3ub(139,137, 137);


	glVertex2f(-84.0f, 79.0f);
	glVertex2f(-84.0f, 76.0f);
	glVertex2f(-81.0f, 76.0f);
    glVertex2f(-81.0f, 79.0f);

	glEnd();

      glBegin(GL_QUADS);  // window 6
	glColor3ub(139,137, 137);

	glVertex2f(-78.0f, 79.0f);
	glVertex2f(-78.0f, 76.0f);
	glVertex2f(-76.0f, 76.0f);
    glVertex2f(-76.0f, 79.0f);

	glEnd();


	//annex 4
	glBegin(GL_QUADS);
	glColor3ub(139,137, 137);// window 1


	glVertex2f(-59.0f, 86.0f);
	glVertex2f(-59.0f, 83.0f);
	glVertex2f(-56.0f, 83.0f);
    glVertex2f(-56.0f, 86.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,137, 137); //window 2


	glVertex2f(-54.0f, 86.0f);
	glVertex2f(-54.0f, 83.0f);
	glVertex2f(-51.0f, 83.0f);
    glVertex2f(-51.0f, 86.0f);

	glEnd();


	glBegin(GL_QUADS);  //window 3
	glColor3ub(139,137, 137);


	glVertex2f(-59.0f, 81.0f);
	glVertex2f(-59.0f, 78.0f);
	glVertex2f(-56.0f, 78.0f);
    glVertex2f(-56.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(139,137, 137);


	glVertex2f(-54.0f, 81.0f);
	glVertex2f(-54.0f, 78.0f);
	glVertex2f(-51.0f, 78.0f);
    glVertex2f(-51.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 5
	glColor3ub(139,137, 137);


	glVertex2f(-59.0f, 76.0f);
	glVertex2f(-59.0f, 73.0f);
	glVertex2f(-56.0f, 73.0f);
    glVertex2f(-56.0f, 76.0f);

	glEnd();

	glBegin(GL_QUADS); //window 6
	glColor3ub(139,137, 137);


	glVertex2f(-54.0f, 76.0f);
	glVertex2f(-54.0f, 73.0f);
	glVertex2f(-51.0f, 73.0f);
    glVertex2f(-51.0f, 76.0f);

	glEnd();

	// annex 3 EWU design

	// E

	glBegin(GL_QUADS);

	glColor3ub(205, 205, 193);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 86.0f);
	glVertex2f(-71.0f, 86.0f);
    glVertex2f(-71.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);


	glVertex2f(-74.0f, 84.0f);
	glVertex2f(-74.0f, 82.0f);
	glVertex2f(-71.0f, 82.0f);
    glVertex2f(-71.0f, 84.0f);

	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);


	glVertex2f(-74.0f, 80.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-71.0f, 78.0f);
    glVertex2f(-71.0f, 80.0f);

	glEnd();

	//different one

	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-73.0f, 78.0f);
    glVertex2f(-73.0f, 88.0f);
	glEnd();

	//W

	glBegin(GL_QUADS); // same 2
	glColor3ub(205, 205, 193);


	glVertex2f(-69.0f, 88.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-68.0f, 78.0f);
    glVertex2f(-68.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);


	glVertex2f(-66.0f, 88.0f);
	glVertex2f(-66.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //middle one
	glColor3ub(205, 205, 193);


	glVertex2f(-67.5f, 83.0f);
	glVertex2f(-67.5f, 78.0f);
	glVertex2f(-66.5f, 78.0f);
    glVertex2f(-66.5f, 83.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(205, 205, 193);


	glVertex2f(-69.0f, 80.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 80.0f);

	glEnd();

	 //U


	 glBegin(GL_QUADS);   //same 2
	glColor3ub(205, 205, 193);
	glVertex2f(-64.0f, 88.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-63.0f, 78.0f);
    glVertex2f(-63.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);

	glVertex2f(-62.0f, 88.0f);
	glVertex2f(-62.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(205, 205, 193);

	glVertex2f(-64.0f, 80.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 80.0f);

	glEnd();

    glBegin(GL_QUADS); //annex 2-3
	glColor3ub(255, 250, 250);

	glVertex2f(-74.5f, 90.0f);
	glVertex2f(-74.5f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS); //annex 3-4
	glColor3ub(255, 250, 250);

	glVertex2f(-60.5f, 90.0f);
	glVertex2f(-60.5f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
    glVertex2f(-60.0f, 90.0f);

	glEnd();

	glPopMatrix();



	glPushMatrix();
    glTranslatef(-100.0, -15.0,0.0);
    glScalef(-1.0, 1.0,0.0);
    //annex 1
    glBegin(GL_QUADS);
	glColor3ub(255, 250, 250);


	glVertex2f(-100.0f, 60.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-85.0f, 80.0f);
    glVertex2f(-100.0f, 70.0f);

	glEnd();


    //annex 2

    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-85.0f, 90.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);



	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();


	//annex 3 and EWU
	glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-75.0f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-60.0f, 90.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

    //annex 4 final

    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-50.0f, 60.0f);
	glVertex2f(-50.0f, 88.0f);
    glVertex2f(-60.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(205, 193, 197);


	glVertex2f(-72.5f, 60.0f);
	glVertex2f(-62.5f, 60.0f);
	glVertex2f(-62.5f, 70.0f);
    glVertex2f(-72.5f, 70.0f);

	glEnd();


	 glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);


	glVertex2f(-71.5f, 72.0f);
	glVertex2f(-63.5f, 72.0f);
	glVertex2f(-60.0f, 75.0f);
    glVertex2f(-75.0f, 75.0f);

	glEnd();

	//for annex 1
	glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);

	glVertex2f(-99.0f,70.0f);
	glVertex2f(-99.0f, 66.0f);
	glVertex2f(-93.0f, 66.0f);
    glVertex2f(-93.0f, 74.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);

	glVertex2f(-91.0f, 75.0f);
	glVertex2f(-91.0f, 66.0f);
	glVertex2f(-86.0f, 66.0f);
    glVertex2f(-86.0f, 79.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);

	glVertex2f(-91.0f, 65.0f);
	glVertex2f(-91.0f, 61.0f);
	glVertex2f(-86.0f, 61.0f);
    glVertex2f(-86.0f, 65.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-99.0f, 65.0f);
	glVertex2f(-99.0f, 61.0f);
	glVertex2f(-93.0f, 61.0f);
    glVertex2f(-93.0f, 65.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(205, 92, 92);


	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();

	glBegin(GL_QUADS);  //window 1
	glColor3ub(139,137, 137);


	glVertex2f(-84.0f, 88.0f);
	glVertex2f(-84.0f, 85.0f);
	glVertex2f(-81.0f, 85.0f);
    glVertex2f(-81.0f, 88.0f);

	glEnd();

    glBegin(GL_QUADS);  // window 2
	glColor3ub(139,137, 137);


	glVertex2f(-78.0f, 88.0f);
	glVertex2f(-78.0f, 85.0f);
	glVertex2f(-76.0f, 85.0f);
    glVertex2f(-76.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);  // window 3
	glColor3ub(139,137, 137);

	glVertex2f(-84.0f, 84.0f);
	glVertex2f(-84.0f, 81.0f);
	glVertex2f(-81.0f, 81.0f);
    glVertex2f(-81.0f, 84.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(139,137, 137);

	glVertex2f(-78.0f, 84.0f);
	glVertex2f(-78.0f, 81.0f);
	glVertex2f(-76.0f, 81.0f);
    glVertex2f(-76.0f, 84.0f);
	glEnd();

     glBegin(GL_QUADS);  // window 5
	glColor3ub(139,137, 137);


	glVertex2f(-84.0f, 79.0f);
	glVertex2f(-84.0f, 76.0f);
	glVertex2f(-81.0f, 76.0f);
    glVertex2f(-81.0f, 79.0f);

	glEnd();

      glBegin(GL_QUADS);  // window 6
	glColor3ub(139,137, 137);

	glVertex2f(-78.0f, 79.0f);
	glVertex2f(-78.0f, 76.0f);
	glVertex2f(-76.0f, 76.0f);
    glVertex2f(-76.0f, 79.0f);

	glEnd();


	//annex 4
	glBegin(GL_QUADS);
	glColor3ub(139,137, 137);// window 1


	glVertex2f(-59.0f, 86.0f);
	glVertex2f(-59.0f, 83.0f);
	glVertex2f(-56.0f, 83.0f);
    glVertex2f(-56.0f, 86.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,137, 137); //window 2


	glVertex2f(-54.0f, 86.0f);
	glVertex2f(-54.0f, 83.0f);
	glVertex2f(-51.0f, 83.0f);
    glVertex2f(-51.0f, 86.0f);

	glEnd();


	glBegin(GL_QUADS);  //window 3
	glColor3ub(139,137, 137);


	glVertex2f(-59.0f, 81.0f);
	glVertex2f(-59.0f, 78.0f);
	glVertex2f(-56.0f, 78.0f);
    glVertex2f(-56.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(139,137, 137);


	glVertex2f(-54.0f, 81.0f);
	glVertex2f(-54.0f, 78.0f);
	glVertex2f(-51.0f, 78.0f);
    glVertex2f(-51.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 5
	glColor3ub(139,137, 137);


	glVertex2f(-59.0f, 76.0f);
	glVertex2f(-59.0f, 73.0f);
	glVertex2f(-56.0f, 73.0f);
    glVertex2f(-56.0f, 76.0f);

	glEnd();

	glBegin(GL_QUADS); //window 6
	glColor3ub(139,137, 137);


	glVertex2f(-54.0f, 76.0f);
	glVertex2f(-54.0f, 73.0f);
	glVertex2f(-51.0f, 73.0f);
    glVertex2f(-51.0f, 76.0f);

	glEnd();

	// annex 3 EWU design

	// E

	glBegin(GL_QUADS);

	glColor3ub(205, 205, 193);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 86.0f);
	glVertex2f(-71.0f, 86.0f);
    glVertex2f(-71.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);


	glVertex2f(-74.0f, 84.0f);
	glVertex2f(-74.0f, 82.0f);
	glVertex2f(-71.0f, 82.0f);
    glVertex2f(-71.0f, 84.0f);

	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);


	glVertex2f(-74.0f, 80.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-71.0f, 78.0f);
    glVertex2f(-71.0f, 80.0f);

	glEnd();

	//different one

	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-73.0f, 78.0f);
    glVertex2f(-73.0f, 88.0f);
	glEnd();

	//W

	glBegin(GL_QUADS); // same 2
	glColor3ub(205, 205, 193);


	glVertex2f(-69.0f, 88.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-68.0f, 78.0f);
    glVertex2f(-68.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);


	glVertex2f(-66.0f, 88.0f);
	glVertex2f(-66.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //middle one
	glColor3ub(205, 205, 193);


	glVertex2f(-67.5f, 83.0f);
	glVertex2f(-67.5f, 78.0f);
	glVertex2f(-66.5f, 78.0f);
    glVertex2f(-66.5f, 83.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(205, 205, 193);


	glVertex2f(-69.0f, 80.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 80.0f);

	glEnd();

	 //U


	 glBegin(GL_QUADS);   //same 2
	glColor3ub(205, 205, 193);
	glVertex2f(-64.0f, 88.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-63.0f, 78.0f);
    glVertex2f(-63.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(205, 205, 193);

	glVertex2f(-62.0f, 88.0f);
	glVertex2f(-62.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(205, 205, 193);

	glVertex2f(-64.0f, 80.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 80.0f);

	glEnd();

    glBegin(GL_QUADS); //annex 2-3
	glColor3ub(255, 250, 250);

	glVertex2f(-74.5f, 90.0f);
	glVertex2f(-74.5f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS); //annex 3-4
	glColor3ub(255, 250, 250);

	glVertex2f(-60.5f, 90.0f);
	glVertex2f(-60.5f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
    glVertex2f(-60.0f, 90.0f);

	glEnd();

	glPopMatrix();

}

 void NightUniversity()
{
     glPushMatrix();
    glTranslatef(0.0, -15.0,0.0);
    //annex 1
    //annex 1
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);


	glVertex2f(-100.0f, 60.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-85.0f, 80.0f);
    glVertex2f(-100.0f, 70.0f);

	glEnd();


    //annex 2

    glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-85.0f, 90.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);



	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();


	//annex 3 and EWU
	glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-75.0f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-60.0f, 90.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

    //annex 4 final

    glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-50.0f, 60.0f);
	glVertex2f(-50.0f, 88.0f);
    glVertex2f(-60.0f, 88.0f);

	glEnd();

     glBegin(GL_QUADS);
	glColor3ub(139, 131, 120);


	glVertex2f(-72.5f, 60.0f);
	glVertex2f(-62.5f, 60.0f);
	glVertex2f(-62.5f, 70.0f);
    glVertex2f(-72.5f, 70.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);


	glVertex2f(-71.5f, 72.0f);
	glVertex2f(-63.5f, 72.0f);
	glVertex2f(-60.0f, 75.0f);
    glVertex2f(-75.0f, 75.0f);

	glEnd();

	//for annex 1
	glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);


	glVertex2f(-99.0f,70.0f);
	glVertex2f(-99.0f, 66.0f);
	glVertex2f(-93.0f, 66.0f);
    glVertex2f(-93.0f, 74.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(-91.0f, 75.0f);
	glVertex2f(-91.0f, 66.0f);
	glVertex2f(-86.0f, 66.0f);
    glVertex2f(-86.0f, 79.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(-91.0f, 65.0f);
	glVertex2f(-91.0f, 61.0f);
	glVertex2f(-86.0f, 61.0f);
    glVertex2f(-86.0f, 65.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);


	glVertex2f(-99.0f, 65.0f);
	glVertex2f(-99.0f, 61.0f);
	glVertex2f(-93.0f, 61.0f);
    glVertex2f(-93.0f, 65.0f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();


	glBegin(GL_QUADS);  //window 1
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 88.0f);
	glVertex2f(-84.0f, 85.0f);
	glVertex2f(-81.0f, 85.0f);
    glVertex2f(-81.0f, 88.0f);

	glEnd();

    glBegin(GL_QUADS);  // window 2
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 88.0f);
	glVertex2f(-78.0f, 85.0f);
	glVertex2f(-76.0f, 85.0f);
    glVertex2f(-76.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);  // window 3
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 84.0f);
	glVertex2f(-84.0f, 81.0f);
	glVertex2f(-81.0f, 81.0f);
    glVertex2f(-81.0f, 84.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 84.0f);
	glVertex2f(-78.0f, 81.0f);
	glVertex2f(-76.0f, 81.0f);
    glVertex2f(-76.0f, 84.0f);
	glEnd();

     glBegin(GL_QUADS);  // window 5
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 79.0f);
	glVertex2f(-84.0f, 76.0f);
	glVertex2f(-81.0f, 76.0f);
    glVertex2f(-81.0f, 79.0f);

	glEnd();

      glBegin(GL_QUADS);  // window 6
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 79.0f);
	glVertex2f(-78.0f, 76.0f);
	glVertex2f(-76.0f, 76.0f);
    glVertex2f(-76.0f, 79.0f);

	glEnd();


	//annex 4
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);// window 1


	glVertex2f(-59.0f, 86.0f);
	glVertex2f(-59.0f, 83.0f);
	glVertex2f(-56.0f, 83.0f);
    glVertex2f(-56.0f, 86.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,255); //window 2


	glVertex2f(-54.0f, 86.0f);
	glVertex2f(-54.0f, 83.0f);
	glVertex2f(-51.0f, 83.0f);
    glVertex2f(-51.0f, 86.0f);

	glEnd();


	glBegin(GL_QUADS);  //window 3
	glColor3ub(255,255,255);


	glVertex2f(-59.0f, 81.0f);
	glVertex2f(-59.0f, 78.0f);
	glVertex2f(-56.0f, 78.0f);
    glVertex2f(-56.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(255,255,255);


	glVertex2f(-54.0f, 81.0f);
	glVertex2f(-54.0f, 78.0f);
	glVertex2f(-51.0f, 78.0f);
    glVertex2f(-51.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 5
	glColor3ub(255,255,255);


	glVertex2f(-59.0f, 76.0f);
	glVertex2f(-59.0f, 73.0f);
	glVertex2f(-56.0f, 73.0f);
    glVertex2f(-56.0f, 76.0f);

	glEnd();

	glBegin(GL_QUADS); //window 6
	glColor3ub(255,255,255);


	glVertex2f(-54.0f, 76.0f);
	glVertex2f(-54.0f, 73.0f);
	glVertex2f(-51.0f, 73.0f);
    glVertex2f(-51.0f, 76.0f);

	glEnd();

	// annex 3 EWU design

	// E

	glBegin(GL_QUADS);

	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 86.0f);
	glVertex2f(-71.0f, 86.0f);
    glVertex2f(-71.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 84.0f);
	glVertex2f(-74.0f, 82.0f);
	glVertex2f(-71.0f, 82.0f);
    glVertex2f(-71.0f, 84.0f);

	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 80.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-71.0f, 78.0f);
    glVertex2f(-71.0f, 80.0f);

	glEnd();

	//different one

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-73.0f, 78.0f);
    glVertex2f(-73.0f, 88.0f);
	glEnd();

	//W

	glBegin(GL_QUADS); // same 2
	glColor3ub(67, 110, 238);


	glVertex2f(-69.0f, 88.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-68.0f, 78.0f);
    glVertex2f(-68.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-66.0f, 88.0f);
	glVertex2f(-66.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //middle one
	glColor3ub(67, 110, 238);


	glVertex2f(-67.5f, 83.0f);
	glVertex2f(-67.5f, 78.0f);
	glVertex2f(-66.5f, 78.0f);
    glVertex2f(-66.5f, 83.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(67, 110, 238);


	glVertex2f(-69.0f, 80.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 80.0f);

	glEnd();

	 //U


	 glBegin(GL_QUADS);   //same 2
	glColor3ub(67, 110, 238);

	glVertex2f(-64.0f, 88.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-63.0f, 78.0f);
    glVertex2f(-63.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);

	glVertex2f(-62.0f, 88.0f);
	glVertex2f(-62.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(67, 110, 238);

	glVertex2f(-64.0f, 80.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 80.0f);

	glEnd();


	 glBegin(GL_QUADS); //annex 2-3
	glColor3ub(105, 105, 105);

	glVertex2f(-74.5f, 90.0f);
	glVertex2f(-74.5f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS); //annex 3-4
	glColor3ub(105, 105, 105);

	glVertex2f(-60.5f, 90.0f);
	glVertex2f(-60.5f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
    glVertex2f(-60.0f, 90.0f);

	glEnd();

	glPopMatrix();





	 glPushMatrix();
   glTranslatef(-100.0, -15.0,0.0);
    glScalef(-1.0, 1.0,0.0);
    //annex 1
    //annex 1
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);


	glVertex2f(-100.0f, 60.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-85.0f, 80.0f);
    glVertex2f(-100.0f, 70.0f);

	glEnd();


    //annex 2

    glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-85.0f, 90.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);



	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();


	//annex 3 and EWU
	glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-75.0f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-60.0f, 90.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

    //annex 4 final

    glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-50.0f, 60.0f);
	glVertex2f(-50.0f, 88.0f);
    glVertex2f(-60.0f, 88.0f);

	glEnd();

     glBegin(GL_QUADS);
	glColor3ub(139, 131, 120);


	glVertex2f(-72.5f, 60.0f);
	glVertex2f(-62.5f, 60.0f);
	glVertex2f(-62.5f, 70.0f);
    glVertex2f(-72.5f, 70.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);


	glVertex2f(-71.5f, 72.0f);
	glVertex2f(-63.5f, 72.0f);
	glVertex2f(-60.0f, 75.0f);
    glVertex2f(-75.0f, 75.0f);

	glEnd();

	//for annex 1
	glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);


	glVertex2f(-99.0f,70.0f);
	glVertex2f(-99.0f, 66.0f);
	glVertex2f(-93.0f, 66.0f);
    glVertex2f(-93.0f, 74.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(-91.0f, 75.0f);
	glVertex2f(-91.0f, 66.0f);
	glVertex2f(-86.0f, 66.0f);
    glVertex2f(-86.0f, 79.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(-91.0f, 65.0f);
	glVertex2f(-91.0f, 61.0f);
	glVertex2f(-86.0f, 61.0f);
    glVertex2f(-86.0f, 65.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);


	glVertex2f(-99.0f, 65.0f);
	glVertex2f(-99.0f, 61.0f);
	glVertex2f(-93.0f, 61.0f);
    glVertex2f(-93.0f, 65.0f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();


	glBegin(GL_QUADS);  //window 1
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 88.0f);
	glVertex2f(-84.0f, 85.0f);
	glVertex2f(-81.0f, 85.0f);
    glVertex2f(-81.0f, 88.0f);

	glEnd();

    glBegin(GL_QUADS);  // window 2
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 88.0f);
	glVertex2f(-78.0f, 85.0f);
	glVertex2f(-76.0f, 85.0f);
    glVertex2f(-76.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);  // window 3
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 84.0f);
	glVertex2f(-84.0f, 81.0f);
	glVertex2f(-81.0f, 81.0f);
    glVertex2f(-81.0f, 84.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 84.0f);
	glVertex2f(-78.0f, 81.0f);
	glVertex2f(-76.0f, 81.0f);
    glVertex2f(-76.0f, 84.0f);
	glEnd();

     glBegin(GL_QUADS);  // window 5
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 79.0f);
	glVertex2f(-84.0f, 76.0f);
	glVertex2f(-81.0f, 76.0f);
    glVertex2f(-81.0f, 79.0f);

	glEnd();

      glBegin(GL_QUADS);  // window 6
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 79.0f);
	glVertex2f(-78.0f, 76.0f);
	glVertex2f(-76.0f, 76.0f);
    glVertex2f(-76.0f, 79.0f);

	glEnd();


	//annex 4
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);// window 1


	glVertex2f(-59.0f, 86.0f);
	glVertex2f(-59.0f, 83.0f);
	glVertex2f(-56.0f, 83.0f);
    glVertex2f(-56.0f, 86.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,255); //window 2


	glVertex2f(-54.0f, 86.0f);
	glVertex2f(-54.0f, 83.0f);
	glVertex2f(-51.0f, 83.0f);
    glVertex2f(-51.0f, 86.0f);

	glEnd();


	glBegin(GL_QUADS);  //window 3
	glColor3ub(255,255,255);


	glVertex2f(-59.0f, 81.0f);
	glVertex2f(-59.0f, 78.0f);
	glVertex2f(-56.0f, 78.0f);
    glVertex2f(-56.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(255,255,255);


	glVertex2f(-54.0f, 81.0f);
	glVertex2f(-54.0f, 78.0f);
	glVertex2f(-51.0f, 78.0f);
    glVertex2f(-51.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 5
	glColor3ub(255,255,255);


	glVertex2f(-59.0f, 76.0f);
	glVertex2f(-59.0f, 73.0f);
	glVertex2f(-56.0f, 73.0f);
    glVertex2f(-56.0f, 76.0f);

	glEnd();

	glBegin(GL_QUADS); //window 6
	glColor3ub(255,255,255);


	glVertex2f(-54.0f, 76.0f);
	glVertex2f(-54.0f, 73.0f);
	glVertex2f(-51.0f, 73.0f);
    glVertex2f(-51.0f, 76.0f);

	glEnd();

	// annex 3 EWU design

	// E

	glBegin(GL_QUADS);

	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 86.0f);
	glVertex2f(-71.0f, 86.0f);
    glVertex2f(-71.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 84.0f);
	glVertex2f(-74.0f, 82.0f);
	glVertex2f(-71.0f, 82.0f);
    glVertex2f(-71.0f, 84.0f);

	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 80.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-71.0f, 78.0f);
    glVertex2f(-71.0f, 80.0f);

	glEnd();

	//different one

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-73.0f, 78.0f);
    glVertex2f(-73.0f, 88.0f);
	glEnd();

	//W

	glBegin(GL_QUADS); // same 2
	glColor3ub(67, 110, 238);


	glVertex2f(-69.0f, 88.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-68.0f, 78.0f);
    glVertex2f(-68.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-66.0f, 88.0f);
	glVertex2f(-66.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //middle one
	glColor3ub(67, 110, 238);


	glVertex2f(-67.5f, 83.0f);
	glVertex2f(-67.5f, 78.0f);
	glVertex2f(-66.5f, 78.0f);
    glVertex2f(-66.5f, 83.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(67, 110, 238);


	glVertex2f(-69.0f, 80.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 80.0f);

	glEnd();

	 //U


	 glBegin(GL_QUADS);   //same 2
	glColor3ub(67, 110, 238);

	glVertex2f(-64.0f, 88.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-63.0f, 78.0f);
    glVertex2f(-63.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);

	glVertex2f(-62.0f, 88.0f);
	glVertex2f(-62.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(67, 110, 238);

	glVertex2f(-64.0f, 80.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 80.0f);

	glEnd();


	 glBegin(GL_QUADS); //annex 2-3
	glColor3ub(105, 105, 105);

	glVertex2f(-74.5f, 90.0f);
	glVertex2f(-74.5f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS); //annex 3-4
	glColor3ub(105, 105, 105);

	glVertex2f(-60.5f, 90.0f);
	glVertex2f(-60.5f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
    glVertex2f(-60.0f, 90.0f);

	glEnd();

	glPopMatrix();





}

void dayView()
{

    glClearColor(0.7, 0.6, 0.4, 0.5);
    glClear(GL_COLOR_BUFFER_BIT);


    water();//M
    bridgeRoad();//M
    ship();//M
    sky();//M
    sun();//S
    Cloud();//R
    down_upperroad();//M
    up_upperroad();//M
    BusStand2();//R
    yellowBus();//M
    redBus();//M
    University();//M
    trafficLight();//R
    Building3();//R
    Building4();//R
    Building5();//R
    Building6();//R
    Building7();//R
    Building8();//R
    Road();//M
    Park();//R
    ParkRoad();//M
    Lamppost(); //R
    YellowCar();//M
    blueCar();//M
    bridgeUpperPart();//M
    NewBuilding1();//R
    NewBuilding2(); //R
    tree1();
    tree2();
    tree3();
    tree4();
    tree5();
    tree6();
    tree7();
    tree8();
    tree9();
    tree10();
    tree11();
    tree12();
    tree13();
    tree14();
    tree15();
    tree16();
    BusStand1();//R
    boat1();//R
    boat2();//R
    greenBus();//M
    Policebox();//R


    glutSwapBuffers();
    glFlush();
}


void nightView()
{

    glClearColor(0.7, 0.6, 0.4, 0.5);
    glClear(GL_COLOR_BUFFER_BIT);

    nightWater();
    bridgeRoad();
    ship();
    nightSky();
    moon();
    stars();
    nightCloud();
    down_upperroad();
    up_upperroad();
    BusStand2();
    yellowBus();
    redBus();
    NightUniversity();
    trafficLight();
    NightBuilding3();
    NightBuilding4();
    NightBuilding5();
    NightBuilding6();
    NightBuilding7();
    NightBuilding8();
    Road();
    NightPark();
    ParkRoad();
    Lamppost();
    YellowCar();
    blueCar();
    bridgeUpperPart();
    NightNewBuilding1();
    NightNewBuilding2();
    Nighttree1();
    Nighttree2();
    Nighttree3();
    Nighttree4();
    Nighttree5();
    Nighttree6();
    Nighttree7();
    Nighttree8();
    Nighttree9();
    Nighttree10();
    Nighttree11();
    Nighttree12();
    Nighttree13();
    Nighttree14();
    Nighttree15();
    Nighttree16();
    BusStand1();
    boat1();
    boat2();
    greenBus();
    Policebox();


    glutSwapBuffers();
    glFlush();


}

void day_rainView()
{

    glClearColor(0.7, 0.6, 0.4, 0.5);
    glClear(GL_COLOR_BUFFER_BIT);

    dayView();
    rain();//R


    glutSwapBuffers();
    glFlush();


}

void night_rainView()
{
    glClearColor(0.7, 0.6, 0.4, 0.5);
    glClear(GL_COLOR_BUFFER_BIT);
    nightView();
    rain(); //R

    glutSwapBuffers();
    glFlush();


}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (tolower(key))
    {
    case '1':
        glutDisplayFunc(dayView);
        glutPostRedisplay();
        break;

    case '2':
        glutDisplayFunc(nightView);
        glutPostRedisplay();
        break;

    case '3':
        glutDisplayFunc(day_rainView);
        glutPostRedisplay();
        break;

    case '4':
        glutDisplayFunc(night_rainView);
        glutPostRedisplay();
        break;

    }
}


int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitWindowSize(1500, 720);
    glutCreateWindow("HatirJheel");
    gluOrtho2D(-100.0,100.0,-100.0,100.0);
    glutDisplayFunc(dayView);
    glutKeyboardFunc(handleKeypress);
    //glutFullScreen();

    glutIdleFunc(Idle);




    // Register display callback handler for window re-paint
    glutTimerFunc(200, update1, 0);
    glutTimerFunc(200, update2, 0);
    glutTimerFunc(200, updateShip, 0);
    glutTimerFunc(100, updatecloud12, 0);
    glutTimerFunc(100, updatecloud3, 0);
    glutTimerFunc(200, updateBlueCar, 0);
    glutTimerFunc(1, updateGoldenCar1, 0);
    glutTimerFunc(50, updateGoldenCar2, 0);
    glutTimerFunc(1, updateredBus1, 0);
    glutTimerFunc(1, updateredBus2, 0);
    glutTimerFunc(50, updateredBus3, 0);
    glutTimerFunc(200, updateBoat2, 0);
    glutTimerFunc(200, updateNightWater2, 0);
    glutTimerFunc(100, updatenightCloud12, 0);
    glutTimerFunc(100, updatenightCloud3, 0);
    sndPlaySound("Ghum _Bhanga _ Minar _Rahman.wav",SND_ASYNC|SND_LOOP);



    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
