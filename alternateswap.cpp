    #include<iostream>
    using namespace std;
    void alternate(int arr[],int size)
    {
        int i=0;
        while(i+1<size)
        {
            swap(arr[i],arr[i+1]);
            i=i+2;

        }
        
    // for(int i=0;i<size;i=i+2)
    // {
    // if(i+1<size)
    // {
    //     swap(arr[i],arr[i+1]);
    
    // }

    // }
}
    void printArray(int arr[],int size)
    {
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    int main()
    {
        int arr[5]={2,3,4,2,5};
        alternate(arr,5);
        printArray(arr,5);
    }