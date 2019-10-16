#include <iostream>

int funk(int n, int m){
    if (n == 0) {
        return m+1;
    } else if (m == 0 && n >= 1) {
        return funk(n-1,1);
    } else {
        return funk(n-1,funk(n,m-1));
    }
}

int main() {

    std::cout<<funk(1,2);

    return 0;
}