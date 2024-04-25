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

float angle=0;///旋轉角度
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody();///呼叫紅色身體

    glPushMatrix();
        glTranslatef(0.3, 0.3, 0);///掛到肩上
        glRotatef(angle++, 0, 0, 1);///旋轉
        glTranslatef(0.15, 0, 0);
        ///旋轉中心不變(目前在(0.3,0.3,0))，物件往右移動0.15
        myArm();///呼叫綠色手臂
        glPushMatrix();
            glTranslatef(0.15, 0, 0);///掛到肩上後再往右0.15
            glRotatef(angle++, 0, 0, 1);///旋轉
            glTranslatef(0.15, 0, 0);
            ///旋轉中心不變(目前在(0.45,0.3,0))，物件往右移動0.15
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
	glutIdleFunc(display);///自動旋轉
	glutMainLoop();
}
