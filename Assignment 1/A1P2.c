#include<stdio.h>
int main(){
    int m,n,count=0;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the elements into the array:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if (arr[i][j]==0){
                count++;
            }
        }
    }
    if (count>((m*n)/2)){
        printf("The matrix is a sparse matrix\n");
        int s=0;
        int sparse[(m*n)-count][3];
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (arr[i][j] != 0){
                    sparse[s][0] = i;
                    sparse[s][1] = j;
                    sparse[s][2] = arr[i][j];
                    s++;
                }
            }
        }

        printf("3-tuple representation of this sparse matrix: \n");
        for (int i=0; i<s; i++){
            for (int j=0; j<3; j++){
                printf("%3d ", sparse[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("It's not a Sparse Matrix\n");
    }
    
    return 0;
}
