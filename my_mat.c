#include <stdio.h>
#include "my_mat.h"
#define n 10

int main(){
return 0;   
}

int findMin(int a, int b){
   if (a < b)
   {
       return a;
   }
    return b;
}

void getMat(int matrix[n][n])
{
    for(int i=0;i< n;i++)
    {
        for(int j=0;j < n;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
    
   

  void route(int m[n][n]){
        int i,j;
        scanf("Enter row index %d" , &i);
        scanf("Enter column index %d" , &j);
        if (m[i][j] >= 0)
        {
            printf("True");
            
        }
        printf("False");
}

void buildFastestRoutes(int m[n][n]){
for (int k = 0; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                m[i][j] = findMin(m[i][j], m[i][k] + m[k][j]);
            }
        }
    }
}

  void fastestRoute(int m[n][n]){
        buildFastestRoutes(m);
        int i,j;
        scanf("Enter row index %d" , &i);
        scanf("Enter column index %d" , &j);
        if (m[i][j] >= 0)
        {
            printf("%d", m[i][j]);
            
        }
        printf("-1");
}



