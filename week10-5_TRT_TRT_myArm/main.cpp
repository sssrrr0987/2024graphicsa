#include <GL/glut.h>

void myBody(){
    glPushMatrix();
        glColor3f(1,0,0);///����
        glutWireCube(0.6);///myBody()
	glPopMatrix();
}

void myArm(){
    glPushMatrix();
        glColor3f(0,1,0);///���
        glScalef(1,0.4,0.4);///myArm()
        glutWireCube(0.3);
	glPopMatrix();
}

float angle=0;///���ਤ��
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody();///�I�s���⨭��

    glPushMatrix();
        glTranslatef(0.3, 0.3, 0);///����ӤW
        glRotatef(angle++, 0, 0, 1);///����
        glTranslatef(0.15, 0, 0);
        ///���त�ߤ���(�ثe�b(0.3,0.3,0))�A���󩹥k����0.15
        myArm();///�I�s�����u
        glPushMatrix();
            glTranslatef(0.15, 0, 0);///����ӤW��A���k0.15
            glRotatef(angle++, 0, 0, 1);///����
            glTranslatef(0.15, 0, 0);
            ///���त�ߤ���(�ثe�b(0.45,0.3,0))�A���󩹥k����0.15
            myArm();
        glPopMatrix();
    glPopMatrix();

	glutSwapBuffers();
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10-5_TRT_TRT_myArm");
	glutDisplayFunc(display);
	glutIdleFunc(display);///�۰ʱ���
	glutMainLoop();
}
