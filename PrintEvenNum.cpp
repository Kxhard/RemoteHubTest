
#include <iostream>
using namespace std;

/*
 打印输出100以内的偶数
 11111111111
 */
int main(){
    for(int i = 1; i <= 100;i++){
        if(i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}

