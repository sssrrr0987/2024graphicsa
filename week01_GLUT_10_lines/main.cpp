#include <GL/glut.h>///��18��d�U��,�ϥ�GLUT�~��

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

int main(int argc, char *argv[])///��138��,main()�禡
{
    glutInit(&argc, argv);///��140��,�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///��143��,�]�w��ܼҦ�
    glutCreateWindow("2024�q���Ͼǲ�01�g");///��145��,�}�@��GLUT����
    glutDisplayFunc(display);///��148��,�n��display()�禡�ӵe��

    glutMainLoop();///��174��,�D�n���j��,�b�o�̤@���B�@,������
}
