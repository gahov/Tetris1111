#include "tetris.h"
#include <QtWidgets/QApplication>
#include "MVC/tetrisview.h"
#include <vector>

int main(int argc, char *argv[])
{
	std::vector<int> vec({ 1,2,3,4,5,6,7 });
	QApplication a(argc, argv);
	Tetris w;
	//w.show();
	//TetrisView w;
	w.show();
	return a.exec();
}
