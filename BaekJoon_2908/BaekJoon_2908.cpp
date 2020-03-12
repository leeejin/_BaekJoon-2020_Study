#include <iostream>
using namespace std;

int Reverse(int num);
int main(){
    int a,b;
    cin >> a >> b;
    
    if(Reverse(a) > Reverse(b)){
        cout << Reverse(a);
    }else{
        cout << Reverse(b);
    }
}

int Reverse(int num){
    int a,b,c,result;
    a = num%10;
    b = (num/10)%10;
    c = (num/100)%10;
    
    result = a*100 + b*10 + c;
    return result;    
}
[출처] c++ 백준(baekjoon) 2908번 상수|작성자 허허