import pandas as pd
import numpy as np
import matplotlib as plt
#get_ipython().run_line_magic('matplotlib', 'inline')

f=open("world-happiness-report-2019.csv")
a=f.read()
b=set(a)
c=dict()
for i in b:
    c[i]=a.count(i)
df=pd.DataFrame.from_dict(c,orient='index')
df.to_csv("freq_data.csv")
