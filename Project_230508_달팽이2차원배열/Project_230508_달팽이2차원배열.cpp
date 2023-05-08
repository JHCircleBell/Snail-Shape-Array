#include <iostream>
using namespace std;

int main()
{
    int arr[15][15] = { 0, };
    int num = 1;
    int x = 0;
    int y = 0;
    int size;
    int sign = 1;

    cout << "크기를 입력하세요 : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        arr[y][x] = num++;
        x += 1;
    }
    x -= 1;
    for (int i = size - 1; i > 0; --i) // i = 4
    {
        for (int j = 0; j < i; ++j)
        {
            y = sign + y;
            arr[y][x] = num++;
        }
        sign = sign * -1;
        for (int k = 0; k < i; k++)
        {
            x += sign;
            arr[y][x] = num++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout.width(3);
            cout.fill(' ');
            cout << arr[i][j];
        }
        cout << endl << endl;
    }
    
    return 0;
}
