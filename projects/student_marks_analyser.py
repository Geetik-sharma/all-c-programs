import numpy as np
import pandas as pd
import matplotlib.pyplot as plot
df=pd.read_csv(r"C:\Users\GeetikSharma\c++programs\projects\stu.csv")
subjects=df.columns
total=df.sum(axis=1)
average=df[subjects].mean(axis=1)

for sub in subjects:
    topper=df[sub].idxmax()
    print(f"{sub}:{topper}")

