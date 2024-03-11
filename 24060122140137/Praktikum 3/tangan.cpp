/*
Nama   = Farisah Ghassani H
NIM    = 24060122140137
*/

#include <GL/glut.h>

static int 
bahu1 = 0, bahu2 = 0, 
siku = 0, forearm = 0, telapak = 0, 
jempol1 = 0, jempol2 = 0, 
telunjuk1 = 0, telunjuk2 = 0, 
tengah1 = 0, tengah2 = 0, 
manis1 = 0, manis2 = 0, 
kelingking1 = 0, kelingking2 = 0;

void init(void) 
{
	glClearColor(0.8f, 0.775f, 0.825f, 0.0f);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    
    //Bahu
    glTranslatef(-2.0, 0.0, 0.0);
    glRotatef ((GLfloat) bahu1, 10.0, 5.0, 0.0);
    glRotatef ((GLfloat) bahu2, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.5, 0.5, 1.0);
    glutWireCube(0.8);
    glPopMatrix();
    
    //Siku
    glTranslatef(0.2, 0.0, 0.0); 
    glRotatef((GLfloat)siku, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef ((GLfloat)forearm, 1.0, 0.0, 0.0); //Forearm
    glPushMatrix();
    glScalef(1.5, 0.5, 1.0);
    glutWireCube(0.8);
    glPopMatrix();
    
    //Telapak
    glTranslatef(0.58, 0.0, 0.0); 
    glRotatef((GLfloat)telapak, 0.0, 0.0, 1.0); 
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.2, 0.5, 1.5);
    glutWireCube(0.8);
    glPopMatrix();
    
    //Jempol
    	glPushMatrix();
	    	//Ruas pertama
			glTranslatef (0.1, 0.0, -0.71); 
			glRotatef ((GLfloat) jempol1, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.03, 0.0, 0.0); 
			glRotatef ((GLfloat) jempol2, 0.0, 0.0, 1.0);  
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
    	glPopMatrix();

    //Telunjuk
    	glPushMatrix();
			//Ruas pertama
			glTranslatef (0.36, 0.0, -0.43); 
			glRotatef ((GLfloat) telunjuk1, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.33, 0.5, 0.23); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.015, 0.0, 0.0); 
			glRotatef ((GLfloat) telunjuk2, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0);
			glPushMatrix(); 
			glScalef (0.33, 0.5, 0.23); 
			glutWireCube (0.8);  
			glPopMatrix(); 
			//Ruas ketiga
			glTranslatef (0.015, 0.0, 0.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix();
			glScalef (0.33, 0.5, 0.23); 
			glutWireCube (0.8); 
			glPopMatrix();
		glPopMatrix();
	
	//Jari tengah
		glPushMatrix();
			//Ruas pertama
			glTranslatef (0.39, 0.0, -0.1); 
			glRotatef ((GLfloat) tengah1, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.4, 0.5, 0.3); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.07, 0.0, 0.0); 
			glRotatef ((GLfloat) tengah2, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.4, 0.5, 0.3); 
			glutWireCube (0.8);  
			glPopMatrix(); 
			//Ruas ketiga
			glTranslatef (0.07, 0.0, 0.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix();
			glScalef (0.4, 0.5, 0.3); 
			glutWireCube (0.8); 
			glPopMatrix(); 
		glPopMatrix();
	
	//Jari manis
		glPushMatrix();
			//Ruas pertama
			glTranslatef (0.37, 0.0, 0.23); 
			glRotatef ((GLfloat) manis1, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.03, 0.0, 0.0);
			glRotatef ((GLfloat) manis2, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0);
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas ketiga
			glTranslatef (0.03, 0.0, 0.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
		glPopMatrix();
	
	//Kelingking
		glPushMatrix();
		
			//Ruas pertama
			glTranslatef (0.38, 0.0, 0.52);
			glRotatef ((GLfloat) kelingking1, 0.0, 0.0, 1.0); 
			glTranslatef (0.2, 0.0, 0.0); 
			glPushMatrix();
			glScalef (0.25, 0.5, 0.2); 
			glutWireCube (0.8);  
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.0, 0.0, 0.0); 
			glRotatef ((GLfloat) kelingking2, 0.0, 0.0, 1.0); 
			glTranslatef (0.2, 0.0, 0.0);
			glPushMatrix(); 
			glScalef (0.25, 0.5, 0.2); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas ketiga
			glTranslatef (0.0, 0.0, 0.0); 
			glTranslatef (0.2, 0.0, 0.0);
			glPushMatrix();
			glScalef (0.25, 0.5, 0.2); 
			glutWireCube (0.8);
			glPopMatrix();
		glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(75.0, (GLfloat)w / (GLfloat)h, 1.0, 35.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    	case 's':
            bahu1 = (bahu1 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            bahu1 = (bahu1 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'a':
            bahu2 = (bahu2 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'A':
            bahu2 = (bahu2 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'e': //tangan kiri
            siku = (siku + 5) % 130;
            glutPostRedisplay();
            break;
        case 'E': //tangan kanan
            siku = (siku - 5) % 130;
            glutPostRedisplay();
            break;
        case 'z':
            forearm = (forearm + 5) % 100;
            glutPostRedisplay();
            break;
        case 'Z':
            forearm = (forearm - 5) % 100;
            glutPostRedisplay();
            break;
        case 'g':
            telapak = (telapak + 5) % 90;
            glutPostRedisplay();
            break;
        case 'G':
            telapak = (telapak - 5) % 90;
            glutPostRedisplay();
            break;
        case 'o':
            jempol1 = (jempol2 + 5) % 90;
            glutPostRedisplay();
            break;
        case 'O':
            jempol1 = (jempol1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'p':
            jempol2 = (jempol2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 'u':
            telunjuk1 = (telunjuk1 + 5) % 90;
            glutPostRedisplay();
            break;
        case 'U':
            telunjuk1 = (telunjuk1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 't':
            telunjuk2 = (telunjuk2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 'j':
            tengah1 = (tengah1 + 5) % 90;
            glutPostRedisplay();
            break;
         case 'J':
            tengah1 = (tengah1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'h':
            tengah2 = (tengah2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 'm':
            manis1 = (manis1 + 5) % 90;
            glutPostRedisplay();
            break;
         case 'M':
            manis1 = (manis1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'n':
            manis2 = (manis2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 'k':
            kelingking1 = (kelingking1 + 5) % 90;
            glutPostRedisplay();
            break;
        case 'K':
            kelingking1 = (kelingking1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'l':
            kelingking2 = (kelingking2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 27:
            exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(200, 0);
    glutCreateWindow ("Tangan Bergerak");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
