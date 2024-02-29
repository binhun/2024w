#include<GL/glut.h>
void display()
{
    glColor3f(211/255.0,111/255.0,120/255.0);
    glutSolidTeapot(0.3);
    glColor3f(50/255.0,66/255.0,200/255.0);
    glutSolidTeapot(0.2);
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
