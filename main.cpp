#include <GL/glut.h>
#include <GL/GL.h>
#include <GL/GLU.h>

int main(int argc, char **argv)
{
	// initial setup
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("Window Test");

	// begin GLUT event processing
	glutMainLoop();

	return 0;
}