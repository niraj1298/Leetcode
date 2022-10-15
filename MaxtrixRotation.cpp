#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> solution(vector<vector<int>>a){
    //rotate 90 degrees
    vector<vector<int>> b;
    for(int i = 0; i < a.size(); i++){
        vector<int> temp;
        for(int j = a.size()-1; j >= 0; j--){
            temp.push_back(a[j][i]);

        }
        b.push_back(temp);
    }

    return b;
}






int main(){
    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> b = solution(a);
    for(int i = 0; i < b.size(); i++){
        for(int j = 0; j < b.size(); j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
