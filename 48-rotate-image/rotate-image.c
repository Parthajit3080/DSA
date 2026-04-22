void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    return;
}

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n=matrixSize;
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(&matrix[i][j],&matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(&matrix[i][j], &matrix[i][n-1-j]);
        }
    }
}