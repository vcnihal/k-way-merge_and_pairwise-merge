#include <stdio.h>

int comparisons = 0;

void merge(int a[], int n1,
           int b[], int n2,
           int result[]) {

    int i=0,j=0,k=0;

    while(i<n1 && j<n2) {
        comparisons++;

        if(a[i] < b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while(i<n1)
        result[k++] = a[i++];

    while(j<n2)
        result[k++] = b[j++];
}

int main() {

    int L1[] = {10,30,50,70};
    int L2[] = {20,40,60,80};
    int L3[] = {15,35,55,75};

    int temp[8];
    int final[12];

    merge(L1,4,L2,4,temp);

    merge(temp,8,L3,4,final);

    printf("Merged Output:\n");

    for(int i=0;i<12;i++)
        printf("%d ", final[i]);

    printf("\n\nComparisons = %d\n", comparisons);

    return 0;
}
