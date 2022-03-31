#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


# In[2]:


def get_change(fort,n):
    roud=pd.DataFrame ({'pre_fort':fort [n],'lost':1})      #DataFrame:每人上次的财富值及默认支出1元
    gain= pd.Series(np.random.choice (fort.index,100))      #获得1元钱的人（可重复，共计100元）
    obtain= pd.DataFrame ({'income': gain.value_counts ()}) #:对获得1元钱的人进行次数统计
    obtain.index.name='id'                                  # 将索引命名为 id, 以便和 roud 连接
    roud=pd.merge( roud,obtain,on ='id',how ="left")        # 以 roud 为主进行连接
    roud.fillna (0,inplace=True)                            # 将缺失值 NaN 更改为0
    roud ['income']= roud ['income'].astype(int)            # 将income数据类型更改为整数
    fort[n+1]= roud ['pre_fort']-roud ['lost']+ roud ['income']   #生成新的一次财富结果
    return fort



def get_f (n):
    person_n =['person'+ str(i) for i in range(1,101)]       # 生成 100 人编号
    #以人编号为索引，生成每人 100 初始财富值
    fort= pd.DataFrame ({n:[100 for i in range(100)]},index= person_n) 
    fort.index.name='id'                                     # 指定索引的名称
    return fort


# In[7]:


def main():
    
    n=0
    fortune = get_f(n)
    for i in range(18,66):
        print(" 模拟第%d岁：\n"%i)       #提示程序运行的进度
        for j in range(365):
            fortune = get_change(fortune,n) 
            n+=1
   

    print("65岁时每人的财富值:\n",fortune[365 * 47])     #65岁时每人的财富值
    
    sum0 = len(fortune.loc[fortune[365 * 47]>100])     #65岁时创业成功的人数
    
    print("65岁时创业成功的人:\n",fortune.loc[fortune[365 * 47]>100,[365 * 47]])     #65岁时创业成功的人
    
    print("65岁时创业成功的人数:%d"%sum0)     #打印65岁时创业成功的人数
    
    print("65岁创业成功概率:%.3f"%(sum0/100))  #65岁时创业成功的概率
    
    print("40岁负债的人:\n",fortune.loc[fortune[365 * 22]<0,[365 * 22]])    #40岁负债的人
    
    print("40岁后创业成功的人:\n",fortune.loc[(fortune[365 * 22]<0)&(fortune[365 * 47]>100),[365 * 22,365 * 47]])  #40岁后创业成功的人
    
    sum1 = len(fortune.loc[(fortune[365 * 22]<0)&(fortune[365 * 47 ]>100)])    #40岁后创业成功的人数
    
    sum2 = len(fortune.loc[fortune[365 * 22]<0])                #40岁时负债的人数
    
    sum3 = len(fortune.loc[(fortune[365 * 22]<0)&(fortune[365 * 47]>0)])    #40岁负债到65岁不负债的人数


    print("40岁后创业成功的人数:%d"%sum1)                         #打印40岁后创业成功的人数
    
    print("40岁时负债的人数:%d"%sum2)                            #打印40岁时负债的人数
    
    print("40岁负债到65岁不负债的人数:%d"%sum3)
    
    print("40岁后创业成功的概率:%.3f\n"%(sum1/sum2))  #40岁后创业成功的概率
main()       #程序入口


# In[ ]:





# In[ ]:





# In[ ]:




