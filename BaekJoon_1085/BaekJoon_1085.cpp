#include <iostream>
#include <algorithm>
using namespace std;
int x, y;
int w, h;
int minStepToBoundary(void)
{
        int steps = 0;
       steps = min(w - x, x);
        steps = min(steps, min(h - y, y));
        return step;
}
int main(void)
{
        cin >> x >> y;
        cin >> w >> h;
        cout << minStepToBoundary() << endl;
        return 0;
}