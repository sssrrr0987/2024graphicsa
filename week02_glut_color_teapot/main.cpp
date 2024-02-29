    #include <GL/glut.h>///貼上周10行的程式
    void display()
    {
        glColor3f(247/255.0,180/255.0,171/255.0);///今天新加的
        glutSolidTeapot(0.3);

        glColor3f(233/255.0,219/255.0,205/255.0);///今天新加的
        glutSolidTeapot(0.2);

        glutSwapBuffers();
    }

    int main(int argc, char *argv[])
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
        glutCreateWindow("week02_color_teapot");
        glutDisplayFunc(display);

        glutMainLoop();
    }
