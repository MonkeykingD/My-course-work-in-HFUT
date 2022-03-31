#include  <stdio.h>
int main ()
{
    int A,B,C,D,E,F;
    for(A = 0 ; A <= 1 ; A +=1)
	{
	    for(B = 0 ; B <= 1 ; B +=1)
	    {
			for(C = 0 ; C <= 1 ; C+=1)
			{
	            for(D = 0 ; D <= 1 ; D+=1)
	            {
			        for(E = 0 ; E <= 1 ; E+=1)
					{
	                    for(F = 0 ; F <= 1 ; F+=1)
	                    {
	                        if(A||B)
	                        {
	                        	if((A && E) || (A && F) || (E && F))
	                        	{
	                        		if(!(A&&D))
	                        		{
	                                    if((B && C) || (!B && !C))
	                                    {
	                                    	if( (C && !D) || (D && !C) )
	                                    	{
											    if( D||(!E))
											    {
													printf("A B C D E F\n%d %d %d %d %d %d\n(1表示参与作案，0表示没有参与）",A ,B ,C ,D ,E ,F );
													return 0;   
												} 
											}    
										}
									}
								}
							}
						}
	                }
	            }
			}
	    }
    }
		
}
