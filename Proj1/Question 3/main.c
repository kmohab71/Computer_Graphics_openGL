#include <stdlib.h>
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <GLFW/glfw3.h>
#include <unistdio.h>
//
//GLfloat light_diffuse[] = {1.0, 0.0, 0.0, 1.0};  /* Red diffuse light. */
//GLfloat light_position[] = {1.0, 1.0, 1.0, 0.0};  /* Infinite light location. */
//GLfloat n[6][3] = {  /* Normals for the 6 faces of a cube. */
//  {-1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {1.0, 0.0, 0.0},
//  {0.0, -1.0, 0.0}, {0.0, 0.0, 1.0}, {0.0, 0.0, -1.0} };
//GLint faces[6][4] = {  /* Vertex indices for the 6 faces of a cube. */
//  {0, 1, 2, 3}, {3, 2, 6, 7}, {7, 6, 5, 4},
//  {4, 5, 1, 0}, {5, 6, 2, 1}, {7, 4, 0, 3} };
//GLfloat v[8][3];  /* Will be filled in with X,Y,Z vertexes. */
//
//void
//drawBox(void)
//{
//  int i;
//
//  for (i = 0; i < 6; i++) {
//    glBegin(GL_QUADS);
//    glNormal3fv(&n[i][0]);
//    glVertex3fv(&v[faces[i][0]][0]);
//    glVertex3fv(&v[faces[i][1]][0]);
//    glVertex3fv(&v[faces[i][2]][0]);
//    glVertex3fv(&v[faces[i][3]][0]);
//    glEnd();
//  }
//}
//
//void
//display(void)
//{
//  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//  drawBox();
//  glutSwapBuffers();
//}
//
//void
//init(void)
//{
//  /* Setup cube vertex data. */
//  v[0][0] = v[1][0] = v[2][0] = v[3][0] = -1;
//  v[4][0] = v[5][0] = v[6][0] = v[7][0] = 1;
//  v[0][1] = v[1][1] = v[4][1] = v[5][1] = -1;
//  v[2][1] = v[3][1] = v[6][1] = v[7][1] = 1;
//  v[0][2] = v[3][2] = v[4][2] = v[7][2] = 1;
//  v[1][2] = v[2][2] = v[5][2] = v[6][2] = -1;
//
//  /* Enable a single OpenGL light. */
//  glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
//  glLightfv(GL_LIGHT0, GL_POSITION, light_position);
//  glEnable(GL_LIGHT0);
//  glEnable(GL_LIGHTING);
//
//  /* Use depth buffering for hidden surface elimination. */
//  glEnable(GL_DEPTH_TEST);
//
//  /* Setup the view of the cube. */
//  glMatrixMode(GL_PROJECTION);
//  gluPerspective( /* field of view in degree */ 40.0,
//    /* aspect ratio */ 1.0,
//    /* Z near */ 1.0, /* Z far */ 10.0);
//  glMatrixMode(GL_MODELVIEW);
//  gluLookAt(0.0, 0.0, 5.0,  /* eye is at (0,0,5) */
//    0.0, 0.0, 0.0,      /* center is at (0,0,0) */
//    0.0, 1.0, 0.);      /* up is in positive Y direction */
//
//  /* Adjust cube position to be asthetic angle. */
//  glTranslatef(0.0, 0.0, -1.0);
//  glRotatef(60, 1.0, 0.0, 0.0);
//  glRotatef(-20, 0.0, 0.0, 1.0);
//}
//
//int
//main(int argc, char **argv)
//{
//  glutInit(&argc, argv);
//  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//  glutCreateWindow("red 3D lighted cube");
//  glutDisplayFunc(display);
//  init();
//  glutMainLoop();
//  return 0;             /* ANSI C requires main to return int. */
//}

//#include <string.h>
//#include <GL/glut.h>
//
//void *font = GLUT_BITMAP_TIMES_ROMAN_24;
//void *fonts[] =
//{
//  GLUT_BITMAP_9_BY_15,
//  GLUT_BITMAP_TIMES_ROMAN_10,
//  GLUT_BITMAP_TIMES_ROMAN_24
//};
//char defaultMessage[] = "GLUT means OpenGL.";
//char *message = defaultMessage;
//
//void
//selectFont(int newfont)
//{
//  font = fonts[newfont];
//  glutPostRedisplay();
//}
//
//void
//selectMessage(int msg)
//{
//  switch (msg) {
//  case 1:
//    message = "abcdefghijklmnop";
//    break;
//  case 2:
//    message = "ABCDEFGHIJKLMNOP";
//    break;
//  }
//}
//
//void
//selectColor(int color)
//{
//  switch (color) {
//  case 1:
//    glColor3f(0.0, 1.0, 0.0);
//    break;
//  case 2:
//    glColor3f(1.0, 0.0, 0.0);
//    break;
//  case 3:
//    glColor3f(1.0, 1.0, 1.0);
//    break;
//  }
//  glutPostRedisplay();
//}
//
//void
//tick(void)
//{
//  glutPostRedisplay();
//}
//
//void
//output(int x, int y, char *string)
//{
//  int len, i;
//
//  glRasterPos2f(x, y);
//  len = (int) strlen(string);
//  for (i = 0; i < len; i++) {
//    glutBitmapCharacter(font, string[i]);
//  }
//}
//
//void
//display(void)
//{
//  glClear(GL_COLOR_BUFFER_BIT);
//  output(0, 24, "This is written in a GLUT bitmap font.");
//  output(100, 100, message);
//  output(50, 145, "(positioned in pixels with upper-left origin)");
//  glutSwapBuffers();
//}
//
//void
//reshape(int w, int h)
//{
//  glViewport(0, 0, w, h);
//  glMatrixMode(GL_PROJECTION);
//  glLoadIdentity();
//  gluOrtho2D(0, w, h, 0);
//  glMatrixMode(GL_MODELVIEW);
//}
//
//int
//main(int argc, char **argv)
//{
//  int i, msg_submenu, color_submenu;
//
//  glutInit(&argc, argv);
//  for (i = 1; i < argc; i++) {
//    if (!strcmp(argv[i], "-mono")) {
//      font = GLUT_BITMAP_9_BY_15;
//    }
//  }
//  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//  glutInitWindowSize(500, 150);
//  glutCreateWindow("GLUT bitmap font example");
//  glClearColor(0.0, 0.0, 0.0, 1.0);
//  glutDisplayFunc(display);
//  glutReshapeFunc(reshape);
//  glutIdleFunc(tick);
//  msg_submenu = glutCreateMenu(selectMessage);
//  glutAddMenuEntry("abc", 1);
//  glutAddMenuEntry("ABC", 2);
//  color_submenu = glutCreateMenu(selectColor);
//  glutAddMenuEntry("Green", 1);
//  glutAddMenuEntry("Red", 2);
//  glutAddMenuEntry("White", 3);
//  glutCreateMenu(selectFont);
//  glutAddMenuEntry("9 by 15", 0);
//  glutAddMenuEntry("Times Roman 10", 1);
//  glutAddMenuEntry("Times Roman 24", 2);
//  glutAddSubMenu("Messages", msg_submenu);
//  glutAddSubMenu("Color", color_submenu);
//  glutAttachMenu(GLUT_RIGHT_BUTTON);
//  glutMainLoop();
//  return 0;             /* ANSI C requires main to return int. */
//}
//#include <stdbool.h>
//#define BOOL bool
//
//GLfloat g_xeye;
//GLfloat g_yeye;
//
//bool rollOn;
//
//GLfloat g_light_position[] = {0.0, 10.0, 10.0, 0.0};
//
//void timer( int extra )
//{
//    if (rollOn){
//        g_xeye = g_xeye + 00000.1;
//        g_yeye = g_yeye + 00000.1;
//    }
//    glutTimerFunc( 16, timer, 0 );
//    glutPostRedisplay();
//}
//
//void drawBitmapText(char *string, float x, float y, float z)
//{
//    char *c;
//    glRasterPos3f(x, y, z);
//
//    for (c=string; *c != '\0'; c++)
//    {
//        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *c);
//    }
//}
//
//void display(void)
//{
//    glClearColor (0.0, 0.0, 0.0, 0.0);
//    glClear (GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
//
//    // draw cube in 3D
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    double w = glutGet( GLUT_WINDOW_WIDTH );
//    double h = glutGet( GLUT_WINDOW_HEIGHT );
//    gluPerspective(60, w / h, 1.0, 100.0);
//
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    gluLookAt(0, 0, 6, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//
//    glPushMatrix();
//    glRotatef(g_xeye, 1, 0, 0);
//    glRotatef(g_yeye, 0, 1, 0);
//    GLfloat redDiffuseMaterial[] = {0.50, 0.0, 0.50, 0.0};
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, redDiffuseMaterial);
//    glutSolidCube(2.0);
//    glPopMatrix();
//
//    // switch to 2D for text overlay
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho( 0, w, 0, h, -1, 1 );
//
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//
//    glDisable( GL_LIGHTING );
//    glColor3ub(255,255,255);
//    drawBitmapText("Hello world",200,200,0);
//    glEnable( GL_LIGHTING );
//
//    glutSwapBuffers ();
//}
//
//void keyboard(unsigned char key, int x, int y)
//{
//    if (key==27)
//        exit(0);
//    if (key == ',')
//    {
//        g_light_position[0] = g_light_position[0] - 1;
//    }
//    if (key == '.')
//    {
//        g_light_position[0] = g_light_position[0] + 1;
//        glLightfv(GL_LIGHT0, GL_POSITION, g_light_position);
//    }
//    if (key==32)
//    {
//        rollOn = !rollOn;
//    }
//}
//
//void special(int key, int x, int y)
//{
//    if (key==27)
//        exit(0);
//    if (key == GLUT_KEY_UP)
//    {
//        g_xeye = g_xeye + 2;
//    }
//    if (key == GLUT_KEY_DOWN)
//    {
//        g_xeye = g_xeye - 2;
//    }
//    if (key == GLUT_KEY_RIGHT)
//    {
//        g_yeye = g_yeye + 2;
//    }
//    if (key == GLUT_KEY_LEFT)
//    {
//        g_yeye = g_yeye - 2;
//    }
//}
//
//void init(void)
//{
//    glEnable(GL_DEPTH_TEST);
//
//    glEnable(GL_LIGHTING);
//    glEnable(GL_LIGHT0);
//
//    glLightfv(GL_LIGHT0, GL_POSITION, g_light_position);
//
//    rollOn = false;
//
//    g_xeye = 0;
//    g_yeye = 0;
//}
//
//int main(int argc, char** argv)
//{
//    glutInit( &argc, argv );
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//    glutInitWindowSize(500,500);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow ("Project");
//    init();
//
//    glutKeyboardFunc(keyboard);
//    glutSpecialFunc(special);
//    glutDisplayFunc(display);
//    glutTimerFunc( 0, timer, 0 );
//    glutMainLoop();
//    return 0;
//}



//GLubyte space[] =
//{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
//
//GLubyte letters[][13] = {
//{0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0x66, 0x3c, 0x18},
//{0x00, 0x00, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe},
//{0x00, 0x00, 0x7e, 0xe7, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e},
//{0x00, 0x00, 0xfc, 0xce, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xce, 0xfc},
//{0x00, 0x00, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0xc0, 0xff},
//{0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0xff},
//{0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xcf, 0xc0, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e},
//{0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3},
//{0x00, 0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7e},
//{0x00, 0x00, 0x7c, 0xee, 0xc6, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06},
//{0x00, 0x00, 0xc3, 0xc6, 0xcc, 0xd8, 0xf0, 0xe0, 0xf0, 0xd8, 0xcc, 0xc6, 0xc3},
//{0x00, 0x00, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0},
//{0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xdb, 0xff, 0xff, 0xe7, 0xc3},
//{0x00, 0x00, 0xc7, 0xc7, 0xcf, 0xcf, 0xdf, 0xdb, 0xfb, 0xf3, 0xf3, 0xe3, 0xe3},
//{0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e},
//{0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe},
//{0x00, 0x00, 0x3f, 0x6e, 0xdf, 0xdb, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c},
//{0x00, 0x00, 0xc3, 0xc6, 0xcc, 0xd8, 0xf0, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe},
//{0x00, 0x00, 0x7e, 0xe7, 0x03, 0x03, 0x07, 0x7e, 0xe0, 0xc0, 0xc0, 0xe7, 0x7e},
//{0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff},
//{0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3},
//{0x00, 0x00, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3},
//{0x00, 0x00, 0xc3, 0xe7, 0xff, 0xff, 0xdb, 0xdb, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3},
//{0x00, 0x00, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3},
//{0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3},
//{0x00, 0x00, 0xff, 0xc0, 0xc0, 0x60, 0x30, 0x7e, 0x0c, 0x06, 0x03, 0x03, 0xff}
//};
//
//GLuint fontOffset;
//
//void makeRasterFont(void)
//{
//   GLuint i, j;
//   glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
//
//   fontOffset = glGenLists (128);
//   for (i = 0,j = 'A'; i < 26; i++,j++) {
//      glNewList(fontOffset + j, GL_COMPILE);
//      glBitmap(8, 13, 0.0, 2.0, 10.0, 0.0, letters[i]);
//      glEndList();
//   }
//   glNewList(fontOffset + ' ', GL_COMPILE);
//   glBitmap(8, 13, 0.0, 2.0, 10.0, 0.0, space);
//   glEndList();
//}
//
//void init(void)
//{
//   glShadeModel (GL_FLAT);
//   makeRasterFont();
//}
//
//void printString(char *s)
//{
//   glPushAttrib (GL_LIST_BIT);
//   glListBase(fontOffset);
//   glCallLists((GLsizei) strlen(s), GL_UNSIGNED_BYTE, (GLubyte *) s);
//   glPopAttrib ();
//}
//
///* Everything above this line could be in a library
// * that defines a font.  To make it work, you've got
// * to call makeRasterFont() before you start making
// * calls to printString().
// */
//void display(void)
//{
//   GLfloat white[3] = { 5.0, 5.0, 5.0 };
//
//   glClear(GL_COLOR_BUFFER_BIT);
//   glColor3fv(white);
//
//   glRasterPos2i(20, 60);
//   printString("THE QUICK BROWN FOX JUMPS");
//   glRasterPos2i(20, 40);
//   printString("OVER A LAZY DOG");
//   glFlush ();
//}
//
//void reshape(int w, int h)
//{
//   glViewport(0, 0, (GLsizei) w, (GLsizei) h);
//   glMatrixMode(GL_PROJECTION);
//   glLoadIdentity();
//   glOrtho (0.0, w, 0.0, h, -1.0, 1.0);
//   glMatrixMode(GL_MODELVIEW);
//}
//
///* ARGSUSED1 */
//void keyboard(unsigned char key, int x, int y)
//{
//   switch (key) {
//      case 27:
//         exit(0);
//   }
//}
//
///*  Main Loop
// *  Open window with initial window size, title bar,
// *  RGBA display mode, and handle input events.
// */
//int main(int argc, char** argv)
//{
//   glutInit(&argc, argv);
//   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//   glutInitWindowSize(500, 300);
//   glutInitWindowPosition (200, 100);
//   glutCreateWindow(argv[0]);
//   init();
//   glutReshapeFunc(reshape);
//   glutKeyboardFunc(keyboard);
//   glutDisplayFunc(display);
//   glutMainLoop();
//   return 0;
//}

GLfloat rotationvar =0;
void displaytri() {
    glClear(GL_COLOR_BUFFER_BIT);
    glTranslatef(0.3,0.3,0.3);
    glRotatef(180, 0, 0, 1);
    glBegin(GL_POLYGON);
    {
        glVertex3f(0, 1, 0);
        glVertex3f(1, 1, 0);
        glVertex3f(0, 0, 0);
    }
    glEnd();
    glFlush();
}


void displayV() {
    glClear(GL_COLOR_BUFFER_BIT);
    float rotated;
    rotated = 180+rotationvar;
    rotated = (float)((int)rotated % 360);
    float x=0;
    float y=0;
    glPushMatrix();
    glTranslatef(-x, -y, 0.0);
    glRotatef(rotated, 0.0, 0.0, 1.0);
    glTranslatef(x, y, 0.0);
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_LINE_STRIP);
    {
       glVertex2f(1, - 0.5);
       glVertex2f(0, 0);
       glVertex2f(1, 0.5);
    }
    glEnd();
    glPopMatrix();
  glFlush();
}

void mouse(int button, int state, int x, int y)
{
    switch (button)
    {
        case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            rotationvar+=5;
            glutPostRedisplay();
        }
    }
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(80, 80);
  glutInitWindowSize(1000, 500);
  glutCreateWindow("A Simple Triangle");
//  glutDisplayFunc(displayV);
  glutDisplayFunc(displaytri);
  glutMouseFunc(mouse);
  glutMainLoop();
}
