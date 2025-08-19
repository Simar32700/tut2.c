#include<stdio.h>
#include<stdlib.h>

void bubblesort(int *ptr,int n){

    for(int i=0;i<n;i++){

        for(int j = 0; j <n-i-1 ; j++){

             if (*(ptr + j) > *(ptr + j + 1)) { // if current > next, swap
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
}}}}


void binarysearch(int *ptr,int n){

    int min=0;
    int max=n-1;
    int mid=(min+max)/2;
    int search;
    printf("tell the element u wan to find");

    scanf("%d",&search);

   
    while(search!=*(ptr+mid)){
       if (*(ptr + mid) == search) {
        printf("%d found at index %d\n", search, mid);
        return;
    }
    else if (*(ptr + mid) < search) {
        min = mid + 1;
        mid=(min+max)/2;
    }
    else {
        max = mid - 1;
        mid=(min+max)/2;
    }
    }  

  
}

int main(){

    int n;
    printf("enter the size of the array u want");
    scanf("%d",&n);

    int *arr= (int *)malloc(sizeof(int)*n);

    if(arr==NULL){
        printf("no memory");
        return 0;
    }

    printf("kindly enter the elements of the array");

    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }

    for(int i=0;i<n;i++){
        printf("%d\t",*(arr+i));
    }
    printf("\n");
    //now the array need to be sorted first brfore the applicatone if the bubble sort
    //we are gonna use bubble sort

    bubblesort(arr,n);

    printf("sorted arrar is \n");

    for(int i=0;i<n;i++){

        printf("%d/n",*(arr+i));

    }

    binarysearch(arr,n);

    return 0;
}