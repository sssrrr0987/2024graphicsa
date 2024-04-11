#include <GL/glut.h>
///插入Week06讀模型的程式碼
#include "glm.h"///新增1

GLMmodel* pmodel = NULL;///新增2

void drawmodel(void)///新增3
{
    if (!pmodel) {
	pmodel = glmReadOBJ("data/gundam.obj");///這裡改想要呈現圖片的檔名
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
