#include <GL/glut.h>///�K�Wmouse_glRotatef���{��
#include <stdio.h>
float teapotX=0,teapotY=0;
float angle =0;
int method = 1;///1��� 2����
int oldX = 0, oldY = 0;///�ª��y��
void mouse(int button, int state, int x, int y)
{
    oldX = x;///teapotX = (x-150)/150.0;
    oldY = y;///teapotY = -(y-150)/150.0;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///46
    glPushMatrix();
        glTranslatef(teapotX, teapotY,0);///����
        glRotatef(angle, 0, 0, 1);///��Z�b��
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x,int y)
{
    if(method==1){///��� angle
        angle += x - oldX;
    }else if(method==2){
        teapotX += (x-oldX)/150.0;
        teapotY -= (y-oldY)/150.0;
    }
    oldX = x;
    oldY = y;
    ///angle = x;
    display();///�ƹ��ʩI�sdisplay
}
void keyboard(unsigned char key, int x, int y)
{
    if(key=='e') method = 1;///��ʼҦ�
    if(key=='w') method = 2;///���ʼҦ�
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse_rotate");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);///���Umotion�禡
    glutKeyboardFunc(keyboard);///����
    glutMainLoop();
}

