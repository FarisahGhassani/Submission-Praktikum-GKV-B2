#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Menggambar garis strip terbalik
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.0, 0.0); // Warna merah
	glVertex2f(-0.7, 0.7); 
	glVertex2f(-0.2, 0.4);
	glVertex2f(-0.7, 0.4);
	glEnd();

    
    // Menggambar loop garis 
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.5, 0.5); // Warna tosca
	glVertex2f(0.1, 0.7);
	glVertex2f(0.4, 0.4);
	glVertex2f(0.8, 0.7);
	glEnd();

    
    // Menggambar triangle fan 
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.6, 0.8, 1.0); // Warna baby blue
	glVertex2f(-0.8, -0.7);
	glVertex2f(-0.8, -0.4);
	glVertex2f(-0.5, -0.7);
	glVertex2f(-0.2, -0.4);
	glVertex2f(-0.2, -0.7);
	glVertex2f(-0.5, -0.8);
	glEnd();
	
	    
	 // Menggambar triangle strip 
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0, 1.0, 0.8); // Warna kuning
	glVertex2f(0.3, -0.8);
	glVertex2f(0.7, -0.4);
	glVertex2f(0.3, -0.4);
	glVertex2f(0.7, -0.8);
	glEnd();
	
	    
	// Menggambar quad strip dengan 
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.78, 0.6, 0.78); // Warna ungu 
	glVertex2f(0.3, 0.2); 
	glVertex2f(0.3, -0.2); 
	glVertex2f(-0.3, 0.2); 
	glVertex2f(-0.3, -0.2); 
 
	glEnd();
	
	    
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
