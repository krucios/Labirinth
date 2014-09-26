#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QWidget>

#define DEFAULT_SIZE 20

class MapWidget : public QWidget
{
    Q_OBJECT

    int **m_map;
    int m_n, m_m;

    void buildWay(int start_crd, int val); //build way through walls and mark new cells with given value
    void bfs(int start_crd, int val); //marks all cells conected with a given cell of given value
    void generate();
    void clearMap();
    void makeBorders();

public:
    explicit MapWidget(QWidget *parent = 0);
    MapWidget(const int n, const int m);
    ~MapWidget();

    void draw();

signals:

public slots:

};

#endif // MAPWIDGET_H
