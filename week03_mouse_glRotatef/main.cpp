#include <GL/glut.h>///貼上mouse_glTranslatef的程式
#include <stdio.h>
float teapotX=0,teapotY=0;
float angle =0;///新增角度變化量
void mouse(int button, int state, int x, int y)
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///46
    glPushMatrix();
        ///glTranslatef(teapotX, teapotY,0);
        glRotatef(angle, 0, 0, 1);///對Z軸轉
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x,int y)
{
    angle = x;
    display();///滑鼠動呼叫display
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse_rotate");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);///註冊motion函式
    glutMainLoop();
}

