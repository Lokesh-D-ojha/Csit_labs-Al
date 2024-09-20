// Return by pointer:
/*
- It returns address of the object to the function call. 
- It also can’t return local objects.
- It is faster even while working with large objects.
*/

// For example:
#include <iostream>
#include <conio.h>
using namespace std;
class point
{
private:
    float x, y;

public:
    void setPoint(float a, float b)
    {
        x = a;
        y = b;
    }
    point *midPoint(point *p1, point *p2)
    {
        x = (p1->x + p2->x) / 2;
        y = (p1->y + p2->y) / 2;
        p1->x = x;
        p1->y = y;
        return p1;
    }
    void showMidpoint()
    {
        cout << "Co-ordinate of midpoint:" << endl;
        cout << "x= " << x << endl
             << "y= " << y << endl;
    }
};
int main()
{
    point c, d, e;
    c.setPoint(1, 3);
    d.setPoint(2, 4);
    e.midPoint(&c, &d);
    e.showMidpoint();
    getch();
    return 0;
}
