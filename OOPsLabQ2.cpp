#include <iostream>
using namespace std;
class swapusingfriend
{
private:
    int x, y, temp;
public:
    void input()
    {
        cout << "Enter two numbers:" << endl;
        cin >> x >> y;
    }
    friend void swap(swapusingfriend &t);
    void display()
    {
        cout << "After swapping:" << x << " " << y;      //after swapping
    }
};
void swap(swapusingfriend &t)
{
    t.temp = t.x;
    t.x = t.y;
    t.y = t.temp;
}

int main()
{
    swapusingfriend f;                      //main function
    f.input();
    swap(f);
    f.display();
    return 0;
}
