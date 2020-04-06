#include <iostream>
#include "subsetsum.cpp"


uint32_t* removeElem(uint32_t array[], uint32_t len, int n){

    uint32_t newArray[len-1];

    for(int i=0; i<(len-1); i++){
        array[i] = array[i+1];

    }

    for(int i=n; i<(len-1); i++){
        array[i] = array[i+1];

    }

    return 0;
}

int subSetSum(uint32_t* array, uint32_t n, uint32_t k, uint32_t v){

    uint32_t guess1 =0;
    uint32_t guess2 =0;



    if(v==0){
        return 1;
    }

    for(int i = 0; i < k; i++){
        if(array[i] <= v){

            uint32_t newArray[n-1];

            for(int j=0; j<; j++){
                newArray[j] = array[j+1];
            }
            for(int j=n; j<(n-1); j++){
                newArray[j] = array[j+1];
            }

            guess1 = subSetSum(newArray, n-1,k-1,v-array[i]);


        }else{

            uint32_t newArray[n-1];

            for(int i=0; i<(n-1); i++){
                newArray[i] = array[i+1];
            }
            for(int i=n; i<(n-1); i++){
                newArray[i] = array[i+1];
            }

            guess2 = subSetSum(array, n-1,k,v);
        }

    }

    if((guess1==1) || (guess2==1)){
        return 1;
    }
    return 0;
}

void printArr(uint32_t array[], int len){
    printf("[");
    for(int i=0; i<len; i++){

        printf("%d,", array[i]);

    }
    printf("]");

}

int main() {
    uint32_t array[] = {5,3,2,7,8};
    printArr(array,5);


    return 0;
}
