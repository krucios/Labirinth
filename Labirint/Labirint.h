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
    char **m_map;
    int m_n, m_m;

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
