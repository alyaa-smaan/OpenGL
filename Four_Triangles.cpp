
//call GL and GLU
//GL : define points that you will draw it and  define some primitives and color commands
//GLU : responsible for projection and camera
#include <GL/freeglut.h>

void display()  //drawing fun.
{
    //drawing commands
    glClearColor(1, 1, 1, 1);   //clear all buffer with black
    glClear(GL_COLOR_BUFFER_BIT);    // execute the clear command (name of the buffer)

    //drawing a primitive
    glBegin(GL_TRIANGLES);
        //first traingle
        glColor3f(1.0 ,0 ,0);
        glVertex3f(-0.7, 0.1, 0);
        glVertex3f(-0.1, 0.1, 0);
        glColor3f(1.0, 1.0, 1.0);   //white color at head
        glVertex3f(-0.4, 0.5, 0);
        //second traingle
        glColor3f(0 ,1.0 ,0);
        glVertex3f(-0.7, -0.1, 0);
        glVertex3f(-0.1, -0.1, 0);
        glColor3f(1.0, 1.0, 1.0);   //white color at head
        glVertex3f(-0.4, -0.5, 0);
        //third traingle
        glColor3f(0 ,0 ,1.0);
        glVertex3f(0.7, 0.1, 0);
        glVertex3f(0.1, 0.1, 0);
        glColor3f(1.0, 1.0, 1.0);  //white color at head
        glVertex3f(0.4, 0.5, 0);
        //fourth traingle
        glColor3f(1.0 ,1.0 ,0);
        glVertex3f(0.7, -0.1, 0);
        glVertex3f(0.1, -0.1, 0);
        glColor3f(1.0, 1.0, 1.0);  //white color at head
        glVertex3f(0.4, -0.5, 0);

    glEnd();

    glFlush();
}


int main(int argc, char* argv[])
{
    //make the window
    glutInit(&argc, argv); // intilization window that you draw in
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  //(single buffer, RGB colors)

    glutInitWindowPosition(100,100);  //  determine position of the window on my screen
    glutInitWindowSize(600, 400);     // determine the size of the window
    glutCreateWindow("First Traingle");  //create the window and give it a title

    glutDisplayFunc(display);    //event handler call the drawing function

    glutMainLoop();  // infinite receiving events and processing it ( so the window does not terminated till you force terminate it )
                     //program run infinitly

    return 0;
}
