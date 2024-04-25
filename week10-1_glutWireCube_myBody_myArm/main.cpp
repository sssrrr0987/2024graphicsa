#include <GL/glut.h>
void myBody(){
    glPushMatrix();
        glColor3f(1,0,0);///紅色
        glutWireCube(0.6);///myBody()
	glPopMatrix();
}

void myArm(){
    glPushMatrix();
        glColor3f(0,1,0);///綠色
        glScalef(1,0.4,0.4);///myArm()
        glutWireCube(0.3);
	glPopMatrix();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody();///呼叫紅色身體
    myArm();///呼叫綠色手臂

	glutSwapBuffers();
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10-1_glutWireCube_myBody_myArm");
	glutDisplayFunc(display);
	glutMainLoop();
}
