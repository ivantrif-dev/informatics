#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main()
{
    // Создаём окно 500×500
    sf::RenderWindow window(sf::VideoMode(500, 500), "Grid 10x10");

    const int cellSize = 50;
    const int gridSize = 10;

    // Массив для хранения ячеек
    sf::RectangleShape cells[gridSize][gridSize];

    // Инициализируем ячейки вложенными циклами
    for (int i = 0; i < gridSize; ++i)
    {
        for (int j = 0; j < gridSize; ++j)
        {
            cells[i][j].setSize(sf::Vector2f(cellSize - 2, cellSize - 2)); // размер ячейки
            cells[i][j].setPosition(i * cellSize + 1, j * cellSize + 1);   // позиция с учетом рамки
            cells[i][j].setFillColor(sf::Color::White);                    // цвет заливки
            cells[i][j].setOutlineColor(sf::Color::Black);                 // цвет границы
            cells[i][j].setOutlineThickness(1);
            int n = 10;   // размерность матрицы

            int len = gridSize;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    if ((i == len/2 || i == len/2 - 1) && (j == len / 2 || j == len / 2 - 1))
                        cells[i][j].setFillColor(sf::Color::Green);
        }
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        for (int i = 0; i < gridSize; ++i)
        {
            for (int j = 0; j < gridSize; ++j)
            {
                window.draw(cells[i][j]);
            }
        }
        window.display();
    }
    

    return 0;
}