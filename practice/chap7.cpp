#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"at vector1, the elements are "<<vector1.at(0)<<vector1.at(1)<<",and its size is "<<vector1.size()<<endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"at vector2, the elements are "<<vector2.at(0)<<vector2.at(1)<<",and its size is "<<vector2.size();

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"vector 2d first element is "<<vector_2d.at(0).at(0)<<endl;

    vector1.at(0)=1000;

    cout<<"after modifying, vector 2d first element is "<<vector_2d.at(0).at(0)<<endl;
}