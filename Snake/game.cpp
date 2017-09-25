#include <iostream>

using namespace std;

bool gameOver;
const int WIDTH = 20;
const int HEIGHT = 20;
int x, y, f, itemX, itemY, score;

enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void setup(){
    gameOver = false;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    itemX = rand() % WIDTH;
    itemY = rand() % HEIGHT;
    score = 0;
}

void draw(){
    for(int i=0; i < WIDTH + 1; i++)
        cout << "#";
    cout << endl;

    for(int i=0; i < HEIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            if (j == 0 || j == WIDTH - 1)
                cout << "#";
            cout << " ";
        }
        cout << endl;
    }
    for(int i=0; i < WIDTH + 1; i++)
        cout << "#";
    cout << endl;
}

void input(){

}
void logic(){

}


int main() {
    setup();
    while (!gameOver){
        draw();
        input();
        logic();
    }
    return 0;

}