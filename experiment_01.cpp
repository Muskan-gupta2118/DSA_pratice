#include <iostream>
using namespace std;
int main(){

    //taking size of array
    int n;
    cout<<"the size should be :";
    cin>>n;
    int a[n];

    //element of array
    cout<<"Write the elements:";
    for (int i =0;i<n;i++){
        cin>>a[i];
    }

    //printing the element of array
    for(int i=0; i<n; i++){
        cout<<"the elements in array is : "<< a[i]<<endl;
    }


    //printing largest and smallest values
    int large = a[0];
    int small = a[0];
    for (int i=0;i<n;i++){
        if(large < a[i]){
            large = a[i];
        }
    }
    cout<<"the largest value is :"<<large<<endl;
    for (int i=0;i<n;i++){
        if(small > a[i]){
            small = a[i];
        }
    }
    cout<<"the largest value is :"<<small<<endl;



    //finding element
    int num;
    cout<<"which elememnt you want to find out :";
    cin>>num;
    int count =0;
    for(int i =0;i<n;i++){
        if(num==a[i]){
            cout<<"yes! we have the number at index"<<i+1<<endl;
            count++;
        }
    }
    if (count==0){
        cout<<"element not found"<<endl;
    }


    
    //find sum and average of elements
    int sum =0;
    for (int i=0; i<n;i++){
        sum =sum +a[i];
    }
    cout<<"the sum of the element is :"<<sum<<endl;
    cout<<"the average of number is :"<<sum/n;
    return 0;
}