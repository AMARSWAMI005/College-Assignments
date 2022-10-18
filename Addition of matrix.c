//ADDITION OF MATRIX 


#include <stdio.h>
int main()
{
int n,m;
printf("size of array : ");
scanf("%d %d",&n,&m);
int a[n][m],b[n][m],i,j;
int *p,*q;
p=&a[0][0];
q=&b[0][0];
printf("Enter element of 1st matrix : ");  
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",(p+((i*3)+j)));
    }
    printf("\n");
}
printf("Enter element of 2nd matrix : ");    
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",(q+((i*3)+j)));
    }
} 
printf("\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     printf(" %d ",*(p+((i*3)+j)));
    }

}
printf("\n ");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     printf(" %d ",*(q+((i*3)+j)));
    }
    printf("\n");
}
 printf("\n");
int c[n][m];
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        c[i][j]=*(p+((i*3)+j))+ *(q+((i*3)+j));
            printf(" %d ",c[i][j]);
    }
       printf("\n");
}

    return 0;
}

