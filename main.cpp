int subSetSum(uint32_t* array, uint32_t n, uint32_t k, uint32_t v){

    uint32_t guess1 =0;
    uint32_t guess2 =0;

    if(v==0 && k==0){
        return 1;
    }
    if(n==0 || k==0){
        return 0;
    }

    while(n>0){
        if (array[n - 1] <= v) {
            printf("guess 1\n");
            guess1 = subSetSum(array, n - 1, k - 1, v - array[n - 1]);
        } else {
            printf("guess 2\n");
            guess2 = subSetSum(array, n - 1, k, v);
        }
        if((guess1==1) || (guess2==1)){
            return 1;
        }
        n--;
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

    printf("%d\n",subSetSum(array, 5, 3, 14));


    return 0;
}
