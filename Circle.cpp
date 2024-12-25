
#include<GL/freeglut.h>
#include<math.h>

void display()
{
    glClearColor(1.0f, 1.0f, 0.0f, 1.0f);  //clear the buffer with yellow color
    glClear(GL_COLOR_BUFFER_BIT);

    gluOrtho2D(-300, 300, -200, 200);  //x_axis : from -300 to 300  , y_axis : from -200 to 200
    glMatrixMode(GL_PROJECTION);       // maping from the real world coordinate to my screen coordinate
    glLoadIdentity();  //return transformation matrix to unit matrix

    float x, y ,i;

    glPointSize(3.0f);   //size of each point
    glBegin(GL_POINTS);
        //drawing circle
        for(i = 0; i < 2*M_PI; i+= 0.0001)   // i changes from 0 to 2*pi
        {
            x = 150 * cos(i);
            y = 150 * sin(i);

            glVertex2i(x, y);  // transform the float points to intgers and draw it
        }
    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);   //intialize my window
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   //single buffer | RGB color
    glutInitWindowPosition(200, 200);    //position of my window on the screen
    glutInitWindowSize(600, 400);        // size of my window
    glutCreateWindow("Circle");

    glutDisplayFunc(display);       //call my drawing function

    glutMainLoop();             //reu infinitly until I force terminate it

    return 0;
}
