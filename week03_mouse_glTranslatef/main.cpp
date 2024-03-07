#include <GL/glut.h>///貼上mouse的程式
#include <stdio.h>
float teapotX=0,teapotY=0;///自己寫
void mouse(int button, int state, int x, int y)
{
    teapotX = (x-150)/150.0;///自己寫
    teapotY = -(y-150)/150.0;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///46
    glPushMatrix();///範例49行借的
        glTranslatef(teapotX, teapotY,0);///自己寫
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
    glutMouseFunc(mouse);///註冊mouse函式

    glutMainLoop();
}

