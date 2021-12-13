#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vector1;
    vector<int>vector2;
    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"the elements in vector1 are "<<vector1.at(0)<<" and "<<vector1.at(1)<<endl;
    cout<<"the size of vector1 is : "<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"the elements in vector2 are "<<vector2.at(0)<<" and "<<vector2.at(1)<<endl;
    cout<<"the size of vector1 is : "<<vector2.size()<<endl;

    vector<vector<int>>vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"the values of vector_2d are: "<<vector_2d.at(0).at(0)<<" and "<<vector_2d.at(0).at(1)<<endl;
    cout<<"the values of vector_2d are: "<<vector_2d.at(1).at(0)<<" and "<<vector_2d.at(1).at(1)<<endl;
    cout<<"the size of vector_2d is: "<<vector_2d.size()<<endl;

    vector1.at(0)=1000;
    vector_2d.push_back(vector1);
    
    cout<<"the values of vector_2d are: "<<vector_2d.at(0).at(0)<<" and "<<vector_2d.at(0).at(1)<<endl;
    cout<<"the values of vector_2d are: "<<vector_2d.at(1).at(0)<<" and "<<vector_2d.at(1).at(1)<<endl;
    cout<<"the size of vector_2d is: "<<vector_2d.size()<<endl;

    cout<<"the elements in vector1 are "<<vector1.at(0)<<" and "<<vector1.at(1)<<endl;
    cout<<"the size of vector1 is : "<<vector1.size()<<endl;

    return 0;
}  