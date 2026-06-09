//Linked list algorithm here 
//Video solution here 
/*Working of the algorithm 
slow=slow+1;
while fast=fast+2;
phase -1
fast will enter first in the loop before slow enters 
there will be k distance between both the slow and fast 
k will increase by 1 after every iteration 
phase 2
after phase -1
slow and fast will meet at some point 
the we set slow to begining and move slow and fast with same speed
To show the link m+x is multiple of c 
m is number of nodes from starting to the begining of loop in list+
and x is the number of nodes to fisrt node of the cycle to the meeting point 
before meeting:
distance travelled by fast is twice the distance travelled byt he slow
m+x=c X i=2X(m+x+cXj)
m+x=cX(i-2j)
m+x is a multiple of c 
slow will reach first node through m iterations and fast also reach in m iterartions

*/
#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>&v)
{
    int slow=v[0]+1;
    int fast =v[0]+1;
    do{
        slow=v[slow]+1;
        fast=v[v[fast]+1]+1;

    }
    while(slow!=fast);
    slow=v[0]+1;
    while(slow!=fast)
    {
        fast=v[fast]+1;
        slow=v[slow]+1;

    }
    return slow-1;
//why did we not use zero as it will lead to a infinte loop




}
int main()
{
    vector<int>v={0,2,1,3,5,4,6,2};
    cout<<find(v);
}


