#include <GL/glut.h>///�K�Wmouse���{��
#include <stdio.h>
float teapotX=0,teapotY=0;///�ۤv�g
void mouse(int button, int state, int x, int y)
{
    teapotX = (x-150)/150.0;///�ۤv�g
    teapotY = -(y-150)/150.0;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///46
    glPushMatrix();///�d��49��ɪ�
        glTranslatef(teapotX, teapotY,0);///�ۤv�g
        glutSolidTeapot( 0.3 );
    glPopMatrix();///54
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);///���Umouse�禡

    glutMainLoop();
}

