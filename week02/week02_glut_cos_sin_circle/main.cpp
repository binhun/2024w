#include<GL/glut.h>
#include<math.h>///�ƾǨ禡�w
void mycircle(float x,float y,float r){
    glBegin(GL_POLYGON);///�}�l�e
      for(float a=0;a<=3.1415926*2;a+=0.1){
        glVertex2f(r*cos(a)+x,r*sin(a)+y);
      }
    glEnd();///�����e
}
void display()
{
    mycircle(0.5,0.5,0.3);
    mycircle(-0.5,0.5,0.3);
    mycircle(0,-0.1,0.6);
    glutSwapBuffers();
}
int main(int argc,char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week02_color_teapot");
    glutDisplayFunc(display);
    glutMainLoop();
}
