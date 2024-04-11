#include <GL/glut.h>
///���JWeek06Ū�ҫ����{���X
#include "glm.h"///�s�W1

GLMmodel* pmodel = NULL;///�s�W2

void drawmodel(void)///�s�W3
{
    if (!pmodel) {
	pmodel = glmReadOBJ("data/gundam.obj");///�o�̧�Q�n�e�{�Ϥ����ɦW
	if (!pmodel) exit(0);
	glmUnitize(pmodel);
	glmFacetNormals(pmodel);
	glmVertexNormals(pmodel, 90.0);
    }

    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    drawmodel();//glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}

int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week08-1 glm_gundam");
    glutDisplayFunc(display);

    glutMainLoop();
}
