    #include <GL/glut.h>
    void display()
    {
        glBegin(GL_POLYGON);///開始畫
            glVertex2f((28-200)/200.0,-(37-200)/200.0);
            glVertex2f((43-200)/200.0,-(101-200)/200.0);
            glVertex2f((81-200)/200.0,-(22-200)/200.0);
        glEnd();///結束畫
        glBegin(GL_POLYGON);///開始畫
            glVertex2f((326-200)/200.0,-(12-200)/200.0);
            glVertex2f((365-200)/200.0,-(112-200)/200.0);
            glVertex2f((389-200)/200.0,-(41-200)/200.0);
        glEnd();///結束畫

        glutSwapBuffers();
    };


    int main(int argc, char *argv[])
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
        glutCreateWindow("week02_color_teapot");
        glutDisplayFunc(display);

        glutMainLoop();
    }
