/*
#include "Labirint.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{

}
*/

#include "Labirint.h"

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <queue>

/*        PRIVATE METHODS        */
void Labirint::generate()
{
    // borders
    srand(time(NULL));
    makeBorders();

    // random generate (1 Step)
    for (int i = 1; i < m_n - 1; ++i)
        for (int j = 1; j < m_m - 1; ++j)
        {
            m_map[i][j] = rand() % 2;
        }
    m_map[1][1] = 1;
    m_map[m_n - 2][m_m - 2] = 1;

    // bfs (2 Step)
    queue<int> bfs_queue;
}

void Labirint::clearMap()
{
    for (int i = 0; i < this->m_n; ++i)
    {
        for (int j = 0; j < this->m_m; ++j)
        {
            m_map[i][j] = 1;
        }
    }
}

void Labirint::makeBorders()
{
    for (int i = 0; i < m_n; ++i)
    {
        m_map[i][0] = m_map[i][m_m - 1] = 0;
    }
    for (int i = 0; i < m_m; ++i)
    {
        m_map[0][i] = m_map[m_n - 1][i] = 0;
    }
}

/*       /PRIVATE METHODS        */
/*        CONSTUCTORS            */

Labirint::Labirint()
    : m_map(nullptr),
      m_n(DEFAULT_SIZE),
      m_m(DEFAULT_SIZE)
{
    m_map = new char*[DEFAULT_SIZE];
    for (int i = 0; i < DEFAULT_SIZE; ++i)
        m_map[i] = new char[DEFAULT_SIZE];
    if (m_map)
    {
        clearMap();
        generate();
    }
};

Labirint::Labirint(const int n, const int m)
    : m_map(nullptr),
      m_n(n),
      m_m(m)
{
    m_map = new char*[n];
    for (int i = 0; i < n; ++i)
        m_map[i] = new char[m];
    if (m_map)
    {
        clearMap();
        generate();
    }
};

/*       /CONSTUCTORS            */
/*        DESTRUCTOR             */

Labirint::~Labirint()
{
    for (int i = 0; i < m_n; ++i)
    {
        delete[] m_map[i];
    }
    delete[] m_map;
}

/*       /DESTRUCTOR             */
/*        PUBLIC METHODS         */

void Labirint::draw()
{
    std::cout << std::endl;
    for (int i = 0; i < m_n; ++i)
    {
        for (int j = 0; j < m_m; ++j)
        {
            std::cout << m_map[i][j];
        }
        std::cout << std::endl;
    }
}

/*       /PUBLIC METHODS         */
