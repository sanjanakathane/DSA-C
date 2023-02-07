#include<iostream> 
using namespace std;

int main()
{
    //Declaration of array
    int A[5];

    //Initilization Array
    A[0]=12;
    A[1]=30;
    A[2]=20;
    
    //Size of Array
    cout<<"Size of Array is:"<<sizeof(A)<<endl;
    cout<<"Size of frist index is:"<<sizeof(A[1])<<endl;
    cout<<"Value of frist index is:"<<A[0]<<endl;
    cout<<"Value of second index is:"<<A[1]<<endl;
    cout<<"Value of third index is:"<<A[2]<<endl;

    //Both Declaration and initilization
    cout<<"After Declaration and initilization"<<endl;
     int B[8]={2,4,5,6,7,8};

    cout<<"Array at index  0:"<<B[0]<<endl;
    cout<<"Array at index 8:"<<B[8]<<endl;

    
    
}
