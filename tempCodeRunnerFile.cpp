void reverse(int arr[],int size)
{
    int s=0;
    int e= size-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;

    }
}