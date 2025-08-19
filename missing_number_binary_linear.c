#include<stdio.h>

// int main(){
//     int found;
//     int arr[]={1,2,3,4,6,7,8,9};

//     for(int i=1 ; i<=9 ; i++){
//         found=0;
//         for(int j =0; j<8;j++){

//             if(i==arr[j]){
//                found=1;
//                 break;
//             }

//         }
//          if(found==0){
//            printf("%d",i);
//            return 0;
//     } }
    
//     return 0;        //this is using lineaar
// }
// ----------------------------------------------------------------------------

int findMissing(int arr[], int n){
    if (arr[0] !=1) return 1;

    int left = 0, right = n-1;

    while(left<=right){
        int mid = (left + right)/2;

        if(arr[mid]- mid!= arr[0]){

            right = mid-1;
        } else{
            left = mid + 1;
        }

    } return left + arr[0];
}

int main(){

     int arr[]={2,3,4,5,6};
     int n = sizeof(arr)/sizeof(arr[0]);

     int missing = findMissing(arr,n);

     printf("missing number is %d",missing);
     
    return 0;
}