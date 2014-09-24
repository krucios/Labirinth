#ifndef LABIRINT_H
#define LABIRINT_H
/*
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};
*/

#define DEFAULT_SIZE 20

class Labirint
{
    int **m_map;
    int m_n, m_m;

    void buildWay(int start_crd, int val); //build way through walls and mark new cells with given value
    void bfs(int start_crd, int val); //marks all cells conected with a given cell of given value
    void generate();
    void clearMap();
    void makeBorders();

public:
    Labirint();
    Labirint(const int n, const int m);
    ~Labirint();

    void draw();
};

#endif // LABIRINT_H
