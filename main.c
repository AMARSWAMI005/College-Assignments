//Union of Sets
#include <stdio.h>

int main()
{
    int n,m,k=0,j;
    printf("enter size of array: ");
    scanf("%d %d",&n,&m);
    int a[n],b[m],c[100];      
    printf("array1\n");
    for(int i=0;i<n;i++){
    
        scanf("%d",&a[i]);
        
    }
    printf("array2\n");
     for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
        
    }
    for(int i=0;i<n;i++){
        c[i]=a[i];
        k++;
    }
    printf("{");
    for(int i=0;i<n;i++){
        printf("%d", c[i]);
    }
    printf("}");
    
    printf("\n\n");
    for(int i=0;i<m;i++){
        for(j=0;j<n;j++)
       {
        if(b[i]==c[j])
        {
        break;
        }
       }
        if(b[i]!=c[j])
        {
        c[k]=b[i];
        k++;
        }
         }
    printf("{");
    for(int i=0;i<k;i++)
    {
    printf("%d",c[i]);
        printf(",");
    }
    printf("}");
     
    return 0;
}

