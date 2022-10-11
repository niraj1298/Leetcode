#include<iostream>
using namespace std;
/*
BinarySearch.com
Given an integer n, return the sum of the first n positive odd integers.
n ≤ 1,000
The first 5 odd integers are [1, 3, 5, 7, 9] and its sum is 25.
*/
int solution(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (2*i - 1);
    }
return sum;
}


int main(){
    cout<< solution(5) <<endl;
    return 0;
}
