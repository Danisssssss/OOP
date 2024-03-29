#include "Rectangle.h"
#include <iostream>
#include <cassert>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    try {
        // �������� �������� ������ Rectangle
        Rectangle rect1(0, 0, 5, 5);
        Rectangle rect2(2, 2, 8, 8);

        // �������� � �������������� assert
        assert(rect1.calculateArea() == 25.0);
        assert(rect1.calculatePerimeter() == 20.0);
        assert(rect2.calculateArea() == 36.0);
        assert(rect2.calculatePerimeter() == 24.0);

        // ����� ���������� ���������������
        cout << "������������� 1: " << rect1 << endl;
        cout << "������������� 2: " << rect2 << endl;

        // ���������� � ����� ������� � ���������
        cout << "������� �������������� 1: " << rect1.calculateArea() << endl;
        cout << "�������� �������������� 1: " << rect1.calculatePerimeter() << endl;
        cout << "������� �������������� 2: " << rect2.calculateArea() << endl;
        cout << "�������� �������������� 2: " << rect2.calculatePerimeter() << endl;

        // ����������� � ��������� �������� ��������������
        rect1.move(2, 3);
        rect2.resize(3, 2);

        // �������� � �������������� assert ����� ���������
        assert(rect1.getX1() == 2.0);
        assert(rect2.getY2() == 10.0);

        // ����� ���������� ����������
        cout << "������������ ������������� 1: " << rect1 << endl;
        cout << "���������� ������ �������������� 2: " << rect2 << endl;

        // ��������� ���������������
        if (rect1 == rect2) {
            cout << "�������������� ����� �� �������." << endl;
        }
        else if (rect1 < rect2) {
            cout << "� �������������� 1 ������� ��������, ��� � �������������� 2." << endl;
        }
        else {
            cout << "� �������������� 1 ������� ��������, ��� � �������������� 2." << endl;
        }

        // ��������� �������������� �����������
        Rectangle intersection = rect1.getIntersection(rect2);
        cout << "������������� �����������: " << intersection << endl;

        // ��������� ����������� ���� ���������������
        Rectangle unionRect = rect1.getUnion(rect2);
        cout << "������������� �����������: " << unionRect << endl;

    }
    catch (const exception& e) {
        cerr << "����������: " << e.what() << endl;
    }

    return 0;
}