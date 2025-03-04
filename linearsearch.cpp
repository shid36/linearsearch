#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for (int i=0;i<size;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return 1;
}
int main (){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<< "enter the element thats you want to search=";
    cin >> target;
int result;
result = linearsearch(arr,size,target);
if (result!=1){
    cout <<"find the element at the index"<< endl;

}
else{
    cout<<"not found the element at the index"<< endl;

}
    return 0;


}