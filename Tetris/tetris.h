#ifndef TETRIS_H
#define TETRIS_H

#include <QtWidgets/QMainWindow>
#include "ui_tetris.h"

class Tetris : public QMainWindow
{
	Q_OBJECT

public:
	Tetris(QWidget *parent = 0);
	~Tetris();

private:
	Ui::TetrisClass ui;
};

#endif // TETRIS_H
