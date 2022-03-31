#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np
import pandas as pd
import matplotlib.pyplot as plt#导入库


# In[2]:


path = "C:\\Users\\周懿琦.DESKTOP-5JAOLE4\\Desktop\\测试文件夹\\"
df1 = pd.read_excel(path + 'classcj1.xlsx')
df1.rename(columns = {"id":"学号","f":"班级","a":"高等数学","b":"线性代数","c":"python语言及系统设计"},inplace = True)
df1.head()


# In[3]:


df2 = pd.read_excel(path + 'classcj2.xlsx')
df2.rename(columns = {"id":"学号","f":"班级","d":"体育","e":"心理健康",},inplace = True)
df2.head()#分别读入这两个文件，并每一列的列标签改成学号，班级名称，及相应的课程名称


# In[4]:


df = pd.merge(df1,df2, on = '学号', how = 'inner')
df.drop(axis = 1, columns=['班级_y'], inplace = True)
df.rename(columns = {"班级_x":"班级"}, inplace = True)
df.head()#将两个文件连接成一个文件，删除多余的列


# In[7]:


df['总分']=df['高等数学'] + df['线性代数'] + df['python语言及系统设计'] + df['体育'] + df['心理健康']
df.head()#增加一个总分列，统计每个同学的各门课程的总分


# In[10]:


df_gp = df.groupby('班级')
df_gp.count()['学号']#求人数


# In[9]:


df_gp.max()
#求最大值

# In[11]:


df_gp.min()
#求最小值

# In[12]:


df_gp.mean()
#求平均值

# In[ ]:




