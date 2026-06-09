#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Point{
    int x,y;

};
bool cmp(Point p1,Point p2)
{
    return (p1.x>p2.x);
}
int main()
{
    vector<Point>v={{3,10},{2,8},{5,4}};
    sort(v.begin(),v.end(),cmp);
    for(auto i:v)
    {
        cout<<i.x<<" "<<i.y<<endl;

    }
}
