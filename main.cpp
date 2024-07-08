#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <GL/glut.h>
#include <cmath>

float fish1PosX = -1.0f;
float fish1Speed = 0.01f;

// Fish 2 variables
float fish2PosX = 1.0f;
float fish2Speed = 0.015f;
void fish1() {
    glPushMatrix();
    glTranslatef(fish1PosX, -0.3f, 0.0f);
    glColor3f(1.0f, 0.0f, 0.0f);
   
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.1f, 0.0f);  
    glVertex2f(0.0f, 0.1f);  
    glVertex2f(0.2f, 0.0f);  
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.1f, 0.0f);  
    glVertex2f(0.0f, -0.1f);  
    glVertex2f(0.2f, 0.0f);  
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.29f, 0.09f);  
    glVertex2f(0.27f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.29f, -0.09f);
    glVertex2f(0.27f, 0.0f);  
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.013f, 0.09f);  
    glVertex2f(0.09f, 0.19f);  
    glVertex2f(0.06f, 0.069f);  
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.013f, -0.09f);
    glVertex2f(0.09f, -0.19f);  
    glVertex2f(0.06f, -0.069f);  
    glEnd();

    // Draw eye
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2f(-0.02f, 0.01f);
    glEnd();
    glPopMatrix();
}

void fish2() {
    glPushMatrix();
    glTranslatef(fish2PosX, 0.3f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.6f);
   
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.2f, 0.0f);  
    glVertex2f(0.0f, 0.1f);  
    glVertex2f(0.1f, 0.0f);  
    glEnd();
    //bottom
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.0f, -0.1f);  
    glVertex2f(0.1f, 0.0f);  
    glEnd();

    // Draw tail
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.2f, 0.0f);  
    glVertex2f(-0.29f, 0.09f);  
    glVertex2f(-0.27f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(-0.29f, -0.09f);
    glVertex2f(-0.27f, 0.0f);
    glEnd();

    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.013f, 0.09f);  
    glVertex2f(-0.09f, 0.19f);  
    glVertex2f(-0.06f, 0.069f);  
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.013f, -0.09f);  
    glVertex2f(-0.09f, -0.19f);  
    glVertex2f(-0.06f, -0.069f);  
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2f(0.02f, 0.01f);
    glEnd();
    glPopMatrix();
}
void grassland() {
    glColor3f(0.0f, 0.5f, 0.0f);

    glBegin(GL_TRIANGLES);
    glVertex2f(-1.0f, -1.0f);  
    glVertex2f(-0.98f, -0.5f);  
    glVertex2f(-0.96f, -1.0f);  

    glVertex2f(-0.96f, -1.0f);    
    glVertex2f(-0.94f, -0.45f);    
    glVertex2f(-0.92f, -1.0f);    
     
    glVertex2f(-0.7f, -1.0f);  
    glVertex2f(-0.68f, -0.5f);  
    glVertex2f(-0.66f, -1.0f);    

    glVertex2f(-0.5f, -1.0f);    
    glVertex2f(-0.48f, -0.45f);  
    glVertex2f(-0.46f, -1.0f);    
   
     glVertex2f(-0.3f, -1.0f);  
    glVertex2f(-0.28f, -0.5f);  
    glVertex2f(-0.26f, -1.0f);  

    glVertex2f(-0.26f, -1.0f);    
    glVertex2f(-0.24f, -0.45f);    
    glVertex2f(-0.22f, -1.0f);  
     
     glVertex2f(1.0f, -1.0f);  
    glVertex2f(0.98f, -0.5f);  
    glVertex2f(0.96f, -1.0f);  

    glVertex2f(0.96f, -1.0f);    
    glVertex2f(0.94f, -0.45f);    
    glVertex2f(0.92f, -1.0f);    
     
    glVertex2f(0.7f, -1.0f);  
    glVertex2f(0.68f, -0.5f);  
    glVertex2f(0.66f, -1.0f);    

    glVertex2f(0.5f, -1.0f);    
    glVertex2f(0.48f, -0.45f);  
    glVertex2f(0.46f, -1.0f);    
   
     glVertex2f(0.3f, -1.0f);  
    glVertex2f(0.28f, -0.5f);  
    glVertex2f(0.26f, -1.0f);  

    glVertex2f(0.26f, -1.0f);    
    glVertex2f(0.24f, -0.45f);    
    glVertex2f(0.22f, -1.0f);  
   
    glEnd();


    glColor3f(0.5f, 0.5f, 0.5f);

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i += 20) {
        float angle = i * 3.14159f / 180.0f;
        float x = -0.5f + 0.08f * cos(angle);
        float y = -1.0f + 0.07f * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();

    // Pebble 2
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i += 20) {
        float angle = i * 3.14159f / 180.0f;
        float x = -0.7f + 0.09f * cos(angle);
        float y = -1.0f + 0.08f * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
   
     // Pebble 3
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i += 20) {
        float angle = i * 3.14159f / 180.0f;
        float x = 0.5f + 0.08f * cos(angle);
        float y = -0.95f + 0.07f * sin(angle);
         glVertex2f(x, y);
     }
    glEnd();

      // Pebble 4
     glBegin(GL_POLYGON);
     for (int i = 0; i < 360; i += 20) {
       float angle = i * 3.14159f / 180.0f;
       float x = 0.7f + 0.09f * cos(angle);
        float y = -0.95f + 0.08f * sin(angle);
       glVertex2f(x, y);
     }
    glEnd();
}

struct Bubble {
    float x;
    float y;
    float radius;
    bool movingUp;
};

std::vector<Bubble> bubbles;

const int numSegments = 30;

void initializeBubbles() {
    bubbles.push_back({ -0.5f, 0.7f, 0.03f, true });
    bubbles.push_back({ -0.4f, 0.8f, 0.03f, true });
    bubbles.push_back({ -0.3f, 0.5f, 0.03f, true });
    bubbles.push_back({ -0.2f, 0.9f, 0.03f, true });
    bubbles.push_back({ 0.3f, -0.5f, 0.03f, true });
    bubbles.push_back({ 0.2f, -0.9f, 0.03f, true });
}

void animateBubbles() {
    for (auto& bubble : bubbles) {
        if (bubble.movingUp) {
            bubble.y += 0.005f;

            if (bubble.y >= 1.0f) {
                bubble.movingUp = false;
            }
        } else {
            bubble.y -= 0.005f;
            if (bubble.y <= (bubble.x < 0 ? -1.0f : -0.6f)) {
                bubble.movingUp = true;
            }
        }
    }
}

void drawBubbles() {
    glColor4f(0.0f, 0.7f, 1.0f, 0.6f);

    for (const auto& bubble : bubbles) {
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(bubble.x, bubble.y);
        for (int i = 0; i <= numSegments; ++i) {
            float angle = i * 2.0f * M_PI / numSegments;
            float x = bubble.x + bubble.radius * cos(angle);
            float y = bubble.y + bubble.radius * sin(angle);
            glVertex2f(x, y); // Add vertex to the fan
        }
        glEnd();
    }
}

/*void starfish(){
    glColor4f(1.0f, 1.0f, 0.0f, 1.0f); // Yellow color

    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.23f);  
    glVertex2f(0.1f, 0.1f);  
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.1f, 0.0f);  
    glVertex2f(0.2f, -0.15f);    
    glVertex2f(0.0f, -0.05f);    
    glVertex2f(-0.2f, -0.15f);  
    glVertex2f(-0.1f, 0.0f);    
    glVertex2f(-0.2f, 0.1f);    
    glVertex2f(-0.1f, 0.1f);
glEnd();
}*/

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    fish1();
    fish2();
    grassland();
    animateBubbles();
    drawBubbles();  
    //starfish();
    glutSwapBuffers();
}


void update(int value) {
    fish1PosX -= fish1Speed;
    if (fish1PosX < -1.0f) {
        fish1PosX = 1.0f;
    }
    fish2PosX += fish2Speed;

    if (fish2PosX > 1.0f) {
    fish2PosX = -1.0f;
   }
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void init() {
    glClearColor(0.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Animated Fish");
    init();
     initializeBubbles();
    glutDisplayFunc(display);
    glutTimerFunc(16, update, 0);
    glutMainLoop();
    return 0;
}
