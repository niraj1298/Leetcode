#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        int index = abs(a[i]) - 1;
        if (a[index] < 0) {
            return index + 1;
        }
        a[index] = -a[index];
    }
    return -1;
}

int main(){
vector<int> a = {2, 1, 3, 5, 3, 2};
cout << solution(a) << endl;
return 0;
}
