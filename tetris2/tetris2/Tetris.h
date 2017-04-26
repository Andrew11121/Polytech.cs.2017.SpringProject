
#ifndef TETRIS_H
#define TETRIS_H

void GameMenu(void);
void StartGame(void);
void clearscreen(void);
void createmap(void);
void DeleteLine(void);
void Waiting(int sec);
int Random(int max);
void RotateFigure(void);
int FallFigure(int x, int y);
void gotoxy(int X_Position, int Y_Position);
int GetKey(void);
void NextFigure(void);
void print(void);
const char* GAME_TITLE;

#endif