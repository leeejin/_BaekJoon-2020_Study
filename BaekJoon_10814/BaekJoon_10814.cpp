#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct account {
    int age;
    string name;
};
bool cmp(const account &a, const account &b)
{
    return a.age < b.age;
}
int main() {
    int n;
    cin >> n;
    vector <account> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].age;
        cin >> a[i].name;
    }
    stable_sort(a.begin(),a.end(),cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].age << " " << a[i].name << "\n";
    }
}