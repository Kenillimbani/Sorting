#include<stdio.h>

void qsort(int arr[], int fst, int last)
{
 
 if(fst<last)
 {
   int pivot , i = fst , j = last, tmp;
   pivot = fst;
   	//selecting 1st element as pivot point
   while(i<j)
   {
     //moving the left pointer fwd trying to find something bigger
	 while(arr[i]<=arr[pivot] && i<last)
        i++;
     //moving the right pointer bwd trying to find something smaller
     while(arr[j]>arr[pivot] && j>fst)
        j--;
     
	 //if there are elements greater than the pivot they are swapped away to the otherside with something smaller on the other side 
     if(i<j)
     {
        tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp; 
     }
   }
   
   //j is the correct position of the pivot, this procedure will hold regardless the swapping is required
   tmp = arr[pivot];
   arr[pivot] = arr[j];
   arr[j] = tmp;
   qsort(arr,fst,j-1);
   qsort(arr,j+1,last);
 }
}
int main()
{
 int arr[]={3,2,13,5,4,9,8,1,7,55};
 qsort(arr,0,10-1);
 printf("Quick sorted elements are as  : \n");
 for(int i=0; i<10; i++)
    printf("%d\t",arr[i]);
 return 0;
}

