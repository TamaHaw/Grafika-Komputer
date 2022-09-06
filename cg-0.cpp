#include <stdlib.h>
#include <glut.h>

void renderScene(void) { // UNTUK ISI DARI WINDOW - Bagian ini bisa dimodifikasi isinya
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	//glVertex3f(x, y, z) koordinat x, y, z
	glVertex3f(-10.0, 10.0, 0.0);//a //glVertex3f(x, y, z) koordinat x, y, z
	glVertex3f(-10.0, 0.0, 0.0);//b
	glVertex3f(0.0, 0.0, 0.0);//c
	
	glEnd();
	glFlush();

}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);// UNTUK MENGATUR POSISI X Y DALAM PIXEL
	glutInitWindowSize(1366, 768); // UNTUK MENGATUR UKURAN WINDOW DALAM PIXEL
	glutCreateWindow("Pemrograman Grafis GLUT");
	gluOrtho2D(-50.0, 50.0, - 50.0, 50.0); //gluOrtho2D(left, right, top, bottom) untuk margin kliping
	glutDisplayFunc(renderScene); //JIKA TIDAK ADA, MAKA GUI AKAN CRASH
	glutMainLoop();
}
