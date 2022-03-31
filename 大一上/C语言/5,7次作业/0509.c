//*********************************************************
//File name	 : 0509.c
//Author  	 : 戴宇豪 
//Date   	 : 11.09
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    int iTop, iBot, iMid, iSel, a[10];
    int i, iFlag; 
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }
    
    iFlag=0;
    iTop=0;
    iBot=9;
    scanf("%d", &iSel);
    do
	{
        iMid=(iTop+iBot)/2;
        if(iSel==a[iMid])
        {
            iFlag=1;
		    printf("iSel has be found : a[%d]", iSel);
        }
        else if(iSel<a[iMid])
        {
		    if(a[0]<a[9])//判断数组是升序还是降序 
			{
			    iBot=iMid-1;
			}
			else
			{
			   	iTop=iMid+1;
			}
			
		}
        else
	    {
	   	    if(a[0]<a[9])//判断数组是升序还是降序 
			{
			    iTop=iMid+1;
			}
			else
			{
			   	iBot=iMid-1;
			}
			
	    }

    }while(iTop<=iBot&&iFlag==0);
    if(iFlag==0)
    {
	    printf("Not found!\n");
	} 
    return 0;
}

