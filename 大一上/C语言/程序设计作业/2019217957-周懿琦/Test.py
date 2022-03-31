#!/usr/bin/env python
# coding: utf-8

# In[63]:


import requests
import csv
import pandas as pd
from bs4 import BeautifulSoup as bs


# In[64]:


head={"User-Agent":"Mozilla/5.0"} 


# In[65]:


def get_html(url,head):#判断网址能否正常打开
    try:
        r=requests.get(url,headers=head,timeout=10)#获取新闻网的某一个网页
        r.raise_for_status()
        r.encoding=r.apparent_encoding#获取编码
        print("网页成功打开！")
        return r.text#返回页面内容
    except:
        print("网页无法正常打开")#异常报错
        return ""


# In[66]:


url="http://news.hfut.edu.cn/"#打开新闻网


# In[67]:


t1=get_html(url,head)
soup=BeautifulSoup(t1,"lxml")
g1=soup.select('div.hd')[0]
g1


# In[72]:


urlst=g1.select('a')
len(urlst)


# In[69]:


data=[]
ulst=[]
urlst=g1.select('a')
for n in range(len(urlst)):#爬取多个子网址
    ulst.append(url + urlst[n].attrs['href'])#查找href标签对应的内容
ulst


# In[70]:


for ur in ulst:
    text=get_html(ur,head)
    soup1=BeautifulSoup(text,"html.parser")
    s1=soup1.select('form[name="_newscontent_fromname"]')[0]
    lst1=s1.get_text().split()
    words="\n".join(lst1)
    idx=words.find('责任编辑')
    words=words[:idx]
    data.append(words)#保存爬出的数据


# In[61]:


print(data)#打印爬出的数据


# In[62]:


test=pd.DataFrame(data)
test.to_csv(r'C:\test\信息保存文件.csv',encoding="gbk",index=False)#保存到csv文件


# In[ ]:




