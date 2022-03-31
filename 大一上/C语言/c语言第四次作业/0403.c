//*********************************************************
//File name	 : 0403.c
//Author  	 : 戴宇豪 
//Date   	 : 11.02
//Student ID : 2019216072
//***************************************************

#include <stdio.h>
int main()
{
    float a[10],fsum,faver; 
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%f",&a[i]);
        fsum+=a[i];
    }
    
    faver= fsum/10.f;
    printf("平均值为：%f\n",faver);
    for (i=0;i<10;i++)
        {
            if(a[i] > faver)
            {
            	printf("%d合格\n",i);
			}
			
        }

    return 0;
}
