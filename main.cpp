#include <cstdlib>
#include <iostream>
#include <conio2.h>
#include <GL/glut.h>

#define i 24

using namespace std;

void Init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 0.0);    
}

void bangunRuang()
{
     glColor3f (1.0, 0.2, 0.5);
     glBegin(GL_POLYGON); 
     glVertex2f (0.50, 0.25); 
     glVertex2f (0.70, 0.25); 
     glVertex2f (0.70, 0.45); 
     glVertex2f (0.50, 0.45);
     glEnd();


     glColor3f(0.5,0.5,0.5);
     glBegin(GL_POLYGON);
     glVertex2f(0.1, 0.5);  
     glVertex2f(0.2, 0.5);  
     glVertex2f(0.2, 0.7);  
     glEnd(); 


     glColor3f (0.5, 1.0, 0.0);
     glBegin(GL_QUADS); 
     glVertex2f (0.45, 0.05); 
     glVertex2f (0.55, 0.05); 
     glVertex2f (0.50, 0.20); 
     glVertex2f (0.40, 0.20);
     glEnd();


     glColor3f (0.0, 1.0, 0.9);
     glBegin(GL_QUADS);          
     glVertex2f (0.05, 0.30); 
     glVertex2f (0.10, 0.15); 
     glVertex2f (0.15, 0.30); 
     glVertex2f (0.10, 0.40);
     glEnd();
     

     glColor3f (0.7, 0.0, 1.0);
     glBegin(GL_POLYGON);
     glVertex2f(0.70, 0.75);
     glVertex2f(0.90, 0.75);
     glVertex2f(0.87, 0.95);
     glVertex2f(0.73, 0.95);
     glEnd();


     glColor3f(0.0, 0.0, 0.5);
     glBegin(GL_POLYGON); 
     glVertex2f (0.25, 0.25); 
     glVertex2f (0.45, 0.25); 
     glVertex2f (0.35, 0.50); 
     glEnd();


     glColor3f (0.0, 0.0, 0.0);
     glBegin(GL_POLYGON); 
     glVertex2f(0.30, 0.55);
     glVertex2f(0.40, 0.55);
     glVertex2f(0.43, 0.72);
     glVertex2f(0.35, 0.82);
     glVertex2f(0.27, 0.72);
     glEnd();
     

     glColor3f (1.0, 0.1, 0.0);
     glBegin(GL_POLYGON); 
     glVertex2f(0.80, 0.35);
     glVertex2f(0.87, 0.25);
     glVertex2f(0.94, 0.35);
     glVertex2f(0.87, 0.46);
     glEnd();


     glColor3f (0.1, 0.5, 0.5); //segi3
     glBegin(GL_TRIANGLES);
     glVertex2f (0.85, 0.55); 
     glVertex2f (0.55, 0.55); 
     glVertex2f (0.55, 0.85); 
     glVertex2f (0.85, 0.85);
     glEnd();
     
 
     glFlush();
     
}

void Display()
{
     glClear(GL_COLOR_BUFFER_BIT);
     bangunRuang();   
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutInitWindowSize (1000, 550);
    glutInitWindowPosition (100, 50);
    textbackground(WHITE);
    system("cls");
    
    int pil;
    
    do
    {
       
        
        textcolor(BLUE);
        gotoxy(i,8);cout<<"            M E N U             "<<endl;
        textcolor(BLACK);
        gotoxy(i,9);cout<<" ================================ "<<endl;
        textcolor(BLUE);
        gotoxy(i,10);cout<<" 1. Sembilan Bentuk Bangun Ruang         "<<endl;
        gotoxy(i,11);cout<<" 2. Nama Kelompok               "<<endl;
        gotoxy(i,12);cout<<" 3. Keluar                      "<<endl;
        textcolor(BLACK);
        gotoxy(i,13);cout<<" ================================ "<<endl;
        textcolor(RED);
        gotoxy(i,14);cout<<" Masukkan pilihan [1..3] :      "<<endl;
        textcolor(BLACK);
        
        textcolor(RED);
        gotoxy(52,14);cin>>pil;
        
        textcolor(RED);
        system("cls");
       
        if(pil==1)
        {                 
                  glutCreateWindow("Bangun ruang");
                  Init(); 
                  glutDisplayFunc(Display);
                  glutMainLoop();  
        }
        else
        if(pil==2)
        {
        
                 
                  textcolor(BLACK);
                  gotoxy(13,9);cout<<" ============================================================ "<<endl;
                  textcolor(RED);
                  gotoxy(13,10);cout<<"                N A M A     K E L O M P O K   4              "<<endl;
                  textcolor(BLACK); 
                  gotoxy(13,11);cout<<" ============================================================ "<<endl;
                  textcolor(RED);
                  gotoxy(13,12);cout<<" 1. Erlangga Ganjar Prayoga     |          10108459         "<<endl;
                  gotoxy(13,13);cout<<" 2. Tri Gunawan                 |          10108444         "<<endl;
                  gotoxy(13,14);cout<<" 3. Afdhal Zikri                |          10108425         "<<endl;
                  gotoxy(13,15);cout<<" 4. Ivaldy Graha                |          10107445         "<<endl;
                  
                  
                  
                  cout<<endl<<endl<<endl;
        }
        else
        if(pil==3)
        {
                  gotoxy(20,12);cout<<" Terima kasih "<<endl<<endl<<endl<<endl;
        }
        else
        {
                  gotoxy(33,12);cout<<" Anda salah pilih. coba lagi! "<<endl<<endl<<endl<<endl; 
        }
    system("PAUSE");
    system("cls");
    }while(pil!=3);
  
    return EXIT_SUCCESS;
}




