#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle {
private:
    double x1, y1; // ���������� ������ ������� ����
    double x2, y2; // ���������� ������� �������� ����

public:
    // ������������
    Rectangle();
    Rectangle(double x1, double y1, double x2, double y2);

    // ������ ��� ��������� ���������� ��������������
    double getX1() const noexcept;
    double getY1() const noexcept;
    double getX2() const noexcept;
    double getY2() const noexcept;

    // ������ ��� ���������� ������� � ���������
    double calculateArea() const noexcept;
    double calculatePerimeter() const noexcept;

    // ������ ��� �����������, ��������� �������� � ���������
    void move(double dx, double dy);
    void resize(double dw, double dh);
    bool operator==(const Rectangle& other) const noexcept;
    bool operator<(const Rectangle& other) const noexcept;

    // ����� ��� ��������� �������������� �����������
    Rectangle getIntersection(const Rectangle& other) const;

    // ����� ��� ����������� ���� ���������������
    Rectangle getUnion(const Rectangle& other) const;

    // ���������� �������� �����/������
    friend istream& operator>>(istream& in, Rectangle& rectangle);
    friend ostream& operator<<(ostream& out, const Rectangle& rectangle);

    // ����� �������������� � ������
    string toString() const;

};

#endif // RECTANGLE_H